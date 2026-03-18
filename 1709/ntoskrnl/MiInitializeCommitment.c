/*
 * XREFs of MiInitializeCommitment @ 0x14014FC00
 * Callers:
 *     MiInitializePartition @ 0x1405B30A8 (MiInitializePartition.c)
 *     MmInitNucleus @ 0x14082CC5C (MmInitNucleus.c)
 * Callees:
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MiIncreaseCommitLimits @ 0x14014FD74 (MiIncreaseCommitLimits.c)
 */

__int64 __fastcall MiInitializeCommitment(__int64 a1)
{
  char v2; // al
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 *v6; // r8
  __int64 v7; // r10
  __int64 v8; // rax
  int v9; // r8d
  __int64 result; // rax
  __int64 v11; // r9
  __int64 v12; // rdx

  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    *(_QWORD *)(a1 + 5104) = (-(__int64)(*(_QWORD *)(a1 + 5776) < 0x4000uLL) & 0xFFFFFFFFFFFFFC00uLL) + 1280;
  else
    *(_QWORD *)(a1 + 5104) = 0LL;
  *(_QWORD *)(a1 + 5096) = 0LL;
  v2 = *(_BYTE *)(a1 + 503);
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_DWORD *)(a1 + 496) = 0;
  *(_BYTE *)(a1 + 503) = v2 & 0xF9 | 4;
  *(_QWORD *)(a1 + 456) = 1LL;
  *(_QWORD *)(a1 + 448) = a1;
  *(_BYTE *)(a1 + 500) = -1;
  *(_WORD *)(a1 + 472) = 0;
  *(_DWORD *)(a1 + 476) = 0;
  *(_BYTE *)(a1 + 474) = 6;
  *(_QWORD *)(a1 + 488) = a1 + 480;
  *(_QWORD *)(a1 + 480) = a1 + 480;
  v3 = *(_QWORD *)(a1 + 5952);
  if ( dword_140388544 )
  {
    v4 = 0LL;
    v5 = (unsigned int)dword_140388544;
    do
    {
      v6 = (__int64 *)(a1 + 4072);
      v7 = 2LL;
      do
      {
        v8 = *v6++;
        v3 += *(unsigned __int16 *)(v8 + v4);
        --v7;
      }
      while ( v7 );
      v4 += 16LL;
      --v5;
    }
    while ( v5 );
  }
  v9 = *(_QWORD *)(a1 + 5776);
  *(_QWORD *)(a1 + 6016) = v3;
  result = MiIncreaseCommitLimits(a1, v9, v9, 0, 0LL);
  v12 = *(_QWORD *)(a1 + 5776);
  if ( v12 != v3 )
    result = MiChargeCommit(a1, v12 - v3, 2LL, v11);
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    qword_1403893D8 = *(_QWORD *)(a1 + 6320);
    qword_1403893D8 -= qword_1403893E0;
    result = qword_140389408;
    qword_1403893D8 -= qword_140389408;
  }
  return result;
}
