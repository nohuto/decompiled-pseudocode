/*
 * XREFs of MiPfExecuteReadList @ 0x1404BC628
 * Callers:
 *     MmPrefetchPagesEx @ 0x1404BBAC8 (MmPrefetchPagesEx.c)
 *     MmPrefetchForCacheManager @ 0x1404BBCB8 (MmPrefetchForCacheManager.c)
 *     MiPrefetchControlArea @ 0x14053E190 (MiPrefetchControlArea.c)
 * Callees:
 *     MiPageRead @ 0x1400485DC (MiPageRead.c)
 *     MiReferenceInPageFile @ 0x14005A494 (MiReferenceInPageFile.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     SmPageRead @ 0x1401542D8 (SmPageRead.c)
 */

int __fastcall MiPfExecuteReadList(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // r12
  __int64 v6; // rbx
  int result; // eax
  char v8; // r13
  int v9; // edi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // [rsp+88h] [rbp+10h]

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
      v10 = *(_QWORD *)(v6 + 248);
      *(_WORD *)(v10 + 10) |= 0x42u;
      *(_DWORD *)(v6 + 180) = *(_DWORD *)(v10 + 40);
      v11 = MiReferenceInPageFile(v6);
      LODWORD(v12) = v11;
      if ( v11 )
        *(_QWORD *)(v6 + 192) = v11;
      else
        v12 = *(_QWORD *)(v6 + 192);
      *(_QWORD *)(v6 + 168) = 0LL;
      *(_QWORD *)(v6 + 224) = *(_QWORD *)(v6 + 232);
      if ( v9 )
      {
        v8 = BYTE4(CurrentThread[1].Queue);
        BYTE4(CurrentThread[1].Queue) = 1;
      }
      if ( *(char *)(v6 + 189) < 0 )
        result = SmPageRead(
                   (union _MM_STORE_KEY *)(v6 + 96),
                   (v6 + 264) | ((-(__int64)(v13 != 0) & 0xFFFFFFFFFFFFFFFEuLL) + 3));
      else
        result = MiPageRead(v12, v10, (int)v6 + 96, (int)v6 + 32, v6 + 80, 6, a4);
      if ( v9 )
        BYTE4(CurrentThread[1].Queue) = v8;
      if ( result < 0 )
      {
        *(_QWORD *)(v6 + 88) = 0LL;
        *(_DWORD *)(v6 + 80) = result;
        result = KeSetEvent((PRKEVENT)(v6 + 32), 0, 0);
      }
      v6 = *(_QWORD *)v6;
    }
    while ( v6 != v5 );
  }
  return result;
}
