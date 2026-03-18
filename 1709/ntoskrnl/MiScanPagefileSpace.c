/*
 * XREFs of MiScanPagefileSpace @ 0x1406E4870
 * Callers:
 *     <none>
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x140032400 (MiCaptureDirtyBitToPfn.c)
 *     PsDereferencePartition @ 0x1400B8F3C (PsDereferencePartition.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiGetPagingFileOffset @ 0x14010C6B8 (MiGetPagingFileOffset.c)
 *     MiDereferencePageRuns @ 0x14011CA7C (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x14011CB5C (MiReferencePageRuns.c)
 *     MiLockPage @ 0x14022A294 (MiLockPage.c)
 *     MiUnlockPage @ 0x14022A2A8 (MiUnlockPage.c)
 */

void __fastcall MiScanPagefileSpace(__int64 a1)
{
  __int16 v1; // bx
  int v2; // ebp
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // r15
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rdi
  char v11; // cl
  char v12; // r10
  __int64 v13; // r11
  unsigned __int64 v14; // rbx
  unsigned __int8 v15; // r13
  char v16; // dl
  char v17; // r9
  __int64 v18; // rcx
  __int16 v19; // [rsp+60h] [rbp+8h]
  _DWORD *v20; // [rsp+68h] [rbp+10h]

  v1 = *(_WORD *)a1;
  v19 = *(_WORD *)a1;
  v2 = 0;
  v7 = (_DWORD *)MiReferencePageRuns(a1, 0);
  v20 = v7;
  do
  {
    v8 = 48LL * *(_QWORD *)&v7[4 * v2 + 4] - 0x58000000000LL;
    v9 = v8 + 48LL * *(_QWORD *)&v7[4 * v2 + 6];
    if ( v8 < v9 )
    {
      v10 = v8 + 16;
      do
      {
        v6 = *(_QWORD *)(v10 + 24);
        if ( ((HIDWORD(v6) >> 8) & 0x3FF) == v1 )
        {
          v11 = *(_BYTE *)(v10 + 18) & 7;
          if ( ((v11 - 2) & 0xFA) == 0 && v11 != 6 && (*(_DWORD *)v10 & 0x400LL) == 0 )
          {
            if ( (unsigned int)MiGetPagingFileOffset((__int64 *)v10) )
            {
              v6 &= v13;
              if ( v6 != 0xFFFFFFFFDLL
                && *(_WORD *)(v10 + 16)
                && (v12 & 0x28) == 0
                && (*(_BYTE *)(v10 + 19) & 0x10) == 0 )
              {
                v14 = 0LL;
                v15 = MiLockPage(v8);
                v16 = *(_BYTE *)(v10 + 18) & 7;
                if ( ((v16 - 2) & 0xFA) == 0
                  && v16 != 6
                  && (*(_DWORD *)v10 & 0x400LL) == 0
                  && (unsigned int)MiGetPagingFileOffset((__int64 *)v10)
                  && (*(_QWORD *)(v10 + 24) & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL
                  && *(_WORD *)(v10 + 16)
                  && ((unsigned __int8)~(*(_BYTE *)(v10 + 19) >> 4) & ((v17 & 0x28) == 0)) != 0 )
                {
                  v14 = MiCaptureDirtyBitToPfn(v8);
                }
                MiUnlockPage(v8, v15);
                if ( v14 )
                  MiReleasePageFileInfo((struct _KEVENT *)a1, v14, 0);
                v1 = v19;
              }
            }
          }
        }
        v8 += 48LL;
        v10 += 48LL;
      }
      while ( v8 < v9 );
      v7 = v20;
    }
    ++v2;
  }
  while ( v2 != *v7 );
  MiDereferencePageRuns((__int64)v7, v4, v5, v6);
  v18 = *(_QWORD *)(a1 + 168);
  *(_QWORD *)(a1 + 968) = 0LL;
  PsDereferencePartition(v18);
}
