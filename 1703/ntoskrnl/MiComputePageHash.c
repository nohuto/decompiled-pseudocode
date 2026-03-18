/*
 * XREFs of MiComputePageHash @ 0x14013B500
 * Callers:
 *     MiValidatePagefilePageHash @ 0x14013B100 (MiValidatePagefilePageHash.c)
 *     MiWritePageFileHash @ 0x14013B348 (MiWritePageFileHash.c)
 * Callees:
 *     MiGetPagingFileOffset @ 0x14007720C (MiGetPagingFileOffset.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140103140 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1401038C0 (MiMapPageInHyperSpaceWorker.c)
 */

__int64 __fastcall MiComputePageHash(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  unsigned __int8 CurrentIrql; // di
  _QWORD *v5; // rsi
  unsigned int PagingFileOffset; // eax
  __int64 v7; // r10
  _QWORD *v8; // r9
  __int64 v9; // r8
  _QWORD *v10; // rcx
  __int64 v11; // r11
  __int64 v12; // rbx
  __int64 v13; // r9
  __int64 v14; // rbx
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
    v2 = MiMapPageInHyperSpaceWorker((a1 + 0x58000000000LL) / 48, 0LL, 0);
  }
  v5 = (_QWORD *)(v2 + 4064);
  PagingFileOffset = MiGetPagingFileOffset(a1 + 16);
  v9 = v8[1];
  v10 = v8 + 2;
  v11 = v8[2];
  v12 = *v8 + PagingFileOffset;
  v13 = v8[3];
  do
  {
    v10 += 4;
    v9 += *(v10 - 1);
    v12 += *(v10 - 2);
    v11 += *v10;
    v13 += v10[1];
  }
  while ( v10 - 2 != v5 );
  v14 = v9 + v13 + v11 + v12;
  if ( v7 )
  {
    MiUnmapPageInHyperSpaceWorker(v7, 0x11u);
    __writecr8(CurrentIrql);
  }
  result = (unsigned int)(v14 + HIDWORD(v14));
  if ( (unsigned int)result < 3 )
    return 3LL;
  return result;
}
