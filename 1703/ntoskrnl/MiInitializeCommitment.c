/*
 * XREFs of MiInitializeCommitment @ 0x140159A60
 * Callers:
 *     MiInitializePartition @ 0x1405A1920 (MiInitializePartition.c)
 *     MmInitNucleus @ 0x140813B1C (MmInitNucleus.c)
 * Callees:
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     MiIncreaseCommitLimits @ 0x140159BD4 (MiIncreaseCommitLimits.c)
 */

__int64 __fastcall MiInitializeCommitment(unsigned __int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r9
  __int64 *v5; // r8
  __int64 v6; // r10
  __int64 v7; // rax
  int v8; // r8d
  __int64 result; // rax
  __int64 v10; // rdx

  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    *(_QWORD *)(a1 + 4976) = (-(__int64)(*(_QWORD *)(a1 + 5584) < 0x4000uLL) & 0xFFFFFFFFFFFFFC00uLL) + 1280;
  else
    *(_QWORD *)(a1 + 4976) = 0LL;
  *(_QWORD *)(a1 + 4968) = 0LL;
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_DWORD *)(a1 + 528) = 0;
  *(_BYTE *)(a1 + 535) &= ~2u;
  *(_BYTE *)(a1 + 544) = 1;
  *(_QWORD *)(a1 + 488) = 1LL;
  *(_QWORD *)(a1 + 480) = a1;
  *(_BYTE *)(a1 + 532) = -1;
  *(_WORD *)(a1 + 504) = 0;
  *(_DWORD *)(a1 + 508) = 0;
  *(_BYTE *)(a1 + 506) = 6;
  *(_QWORD *)(a1 + 520) = a1 + 512;
  *(_QWORD *)(a1 + 512) = a1 + 512;
  v2 = *(_QWORD *)(a1 + 5760);
  if ( dword_14036C1FC )
  {
    v3 = 0LL;
    v4 = (unsigned int)dword_14036C1FC;
    do
    {
      v5 = (__int64 *)(a1 + 3944);
      v6 = 2LL;
      do
      {
        v7 = *v5++;
        v2 += *(unsigned __int16 *)(v7 + v3);
        --v6;
      }
      while ( v6 );
      v3 += 16LL;
      --v4;
    }
    while ( v4 );
  }
  v8 = *(_QWORD *)(a1 + 5584);
  *(_QWORD *)(a1 + 5824) = v2;
  result = MiIncreaseCommitLimits(a1, v8, v8, 0, 0LL);
  v10 = *(_QWORD *)(a1 + 5584);
  if ( v10 != v2 )
    result = MiChargeCommit(a1, v10 - v2, 2uLL);
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    qword_14036D118 = *(_QWORD *)(a1 + 6128);
    qword_14036D118 -= qword_14036D120;
    result = qword_14036D148;
    qword_14036D118 -= qword_14036D148;
  }
  return result;
}
