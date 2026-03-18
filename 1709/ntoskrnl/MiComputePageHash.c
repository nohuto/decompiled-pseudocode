/*
 * XREFs of MiComputePageHash @ 0x140231ED8
 * Callers:
 *     MiValidatePagefilePageHash @ 0x140232750 (MiValidatePagefilePageHash.c)
 *     MiWritePageFileHash @ 0x140232A1C (MiWritePageFileHash.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400ED258 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400ED9A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiGetPagingFileOffset @ 0x14010C6B8 (MiGetPagingFileOffset.c)
 */

__int64 __fastcall MiComputePageHash(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r9
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 v5; // rcx
  _QWORD *v6; // rsi
  unsigned int PagingFileOffset; // eax
  __int64 v8; // rdx
  unsigned __int64 v9; // r10
  _QWORD *v10; // r9
  __int64 v11; // r8
  _QWORD *v12; // rcx
  __int64 v13; // r11
  __int64 v14; // rbx
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 result; // rax

  v2 = a2;
  if ( a2 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v5 = (__int64)((unsigned __int128)((a1 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
    v2 = MiMapPageInHyperSpaceWorker((v5 >> 63) + v5, 0LL, 0);
  }
  v6 = (_QWORD *)(v2 + 4064);
  PagingFileOffset = MiGetPagingFileOffset((__int64 *)(a1 + 16));
  v11 = v10[1];
  v12 = v10 + 2;
  v13 = v10[2];
  v14 = *v10 + PagingFileOffset;
  v15 = v10[3];
  do
  {
    v12 += 4;
    v11 += *(v12 - 1);
    v14 += *(v12 - 2);
    v13 += *v12;
    v15 += v12[1];
  }
  while ( v12 - 2 != v6 );
  v16 = v11 + v15 + v13 + v14;
  if ( v9 )
  {
    LOBYTE(v8) = 17;
    MiUnmapPageInHyperSpaceWorker(v9, v8, 0LL);
    __writecr8(CurrentIrql);
  }
  result = (unsigned int)(v16 + HIDWORD(v16));
  if ( (unsigned int)result < 3 )
    return 3LL;
  return result;
}
