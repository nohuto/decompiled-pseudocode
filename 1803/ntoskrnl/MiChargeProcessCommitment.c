/*
 * XREFs of MiChargeProcessCommitment @ 0x1401199F0
 * Callers:
 *     MiChargeFullProcessCommitment @ 0x1405B6870 (MiChargeFullProcessCommitment.c)
 *     NtAllocateUserPhysicalPages @ 0x14074FE5C (NtAllocateUserPhysicalPages.c)
 * Callees:
 *     PsReportProcessMemoryLimitViolation @ 0x14077B30C (PsReportProcessMemoryLimitViolation.c)
 */

__int64 __fastcall MiChargeProcessCommitment(_QWORD *a1, unsigned __int64 a2)
{
  signed __int64 v2; // r8
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rdx
  signed __int64 v7; // rax
  unsigned __int64 v8; // r8

  if ( a1[157] )
  {
    v2 = a1[158];
    while ( 1 )
    {
      v7 = v2;
      v8 = a2 + v2;
      if ( v8 > a1[157] )
        break;
      v2 = _InterlockedCompareExchange64(a1 + 158, v8, v7);
      if ( v7 == v2 )
        goto LABEL_3;
    }
    if ( a1[118] )
      PsReportProcessMemoryLimitViolation();
    return 0LL;
  }
  else
  {
    v2 = _InterlockedExchangeAdd64(a1 + 158, a2);
LABEL_3:
    v3 = a1[159];
    v4 = a2 + v2;
    do
    {
      v5 = v3;
      if ( v4 <= v3 )
        break;
      v3 = _InterlockedCompareExchange64(a1 + 159, v4, v3);
    }
    while ( v3 != v5 );
    return 1LL;
  }
}
