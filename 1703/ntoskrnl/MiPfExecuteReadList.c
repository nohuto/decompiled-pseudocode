/*
 * XREFs of MiPfExecuteReadList @ 0x14053D754
 * Callers:
 *     MiPrefetchControlArea @ 0x140423A90 (MiPrefetchControlArea.c)
 *     MmPrefetchPagesEx @ 0x14053D370 (MmPrefetchPagesEx.c)
 *     MmPrefetchForCacheManager @ 0x14053D5DC (MmPrefetchForCacheManager.c)
 * Callees:
 *     SmPageRead @ 0x14003897C (SmPageRead.c)
 *     MiReferenceInPageFile @ 0x140097390 (MiReferenceInPageFile.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     MiPageRead @ 0x14010AFC4 (MiPageRead.c)
 */

int __fastcall MiPfExecuteReadList(__int64 a1, char a2, unsigned int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // r12
  __int64 v6; // rbx
  int result; // eax
  char v8; // r13
  int v9; // edi
  struct _MDL *v10; // rsi
  unsigned __int64 v11; // rax
  struct _FILE_OBJECT *v12; // rcx
  int v13; // [rsp+88h] [rbp+10h]
  unsigned int v14; // [rsp+90h] [rbp+18h]

  v14 = a3;
  CurrentThread = KeGetCurrentThread();
  v5 = a1 + 88;
  v6 = *(_QWORD *)(a1 + 88);
  result = a2 & 2;
  v8 = 0;
  v13 = result;
  if ( v6 != a1 + 88 )
  {
    v9 = a2 & 1;
    do
    {
      v10 = *(struct _MDL **)(v6 + 248);
      v10->MdlFlags |= 0x42u;
      *(_DWORD *)(v6 + 180) = v10->ByteCount;
      v11 = MiReferenceInPageFile(v6, a3);
      v12 = (struct _FILE_OBJECT *)v11;
      if ( v11 )
        *(_QWORD *)(v6 + 192) = v11;
      else
        v12 = *(struct _FILE_OBJECT **)(v6 + 192);
      *(_QWORD *)(v6 + 168) = 0LL;
      *(_QWORD *)(v6 + 224) = *(_QWORD *)(v6 + 232);
      if ( v9 )
      {
        v8 = BYTE4(CurrentThread[1].Queue);
        BYTE4(CurrentThread[1].Queue) = 1;
      }
      if ( *(_BYTE *)(v6 + 189) >= 0x80u )
        result = SmPageRead((union _MM_STORE_KEY *)(v6 + 96), (v6 + 256) | (v13 != 0 ? 1 : 3));
      else
        result = MiPageRead(
                   v12,
                   v10,
                   (_QWORD *)(v6 + 96),
                   (struct _KEVENT *)(v6 + 32),
                   (struct _IO_STATUS_BLOCK *)(v6 + 80),
                   6,
                   a4);
      if ( v9 )
        BYTE4(CurrentThread[1].Queue) = v8;
      if ( result < 0 )
      {
        *(_QWORD *)(v6 + 88) = 0LL;
        *(_DWORD *)(v6 + 80) = result;
        result = KeSetEvent((PRKEVENT)(v6 + 32), 0, 0);
      }
      v6 = *(_QWORD *)v6;
      a3 = v14;
    }
    while ( v6 != v5 );
  }
  return result;
}
