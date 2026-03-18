/*
 * XREFs of EtwSetProcessTelemetryCoverage @ 0x140579114
 * Callers:
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 * Callees:
 *     EtwpCoverageRecordAtHighIrql @ 0x14027AD0C (EtwpCoverageRecordAtHighIrql.c)
 *     EtwpCoverageEnsureUserModeView @ 0x1405791A0 (EtwpCoverageEnsureUserModeView.c)
 *     EtwpCoverageRecord @ 0x140579384 (EtwpCoverageRecord.c)
 *     EtwpCoverageEnsureContext @ 0x1405E714C (EtwpCoverageEnsureContext.c)
 *     EtwpCoverageUserIsAdmin @ 0x1406F7B1C (EtwpCoverageUserIsAdmin.c)
 *     EtwpCoverageCheckCP @ 0x140744ED4 (EtwpCoverageCheckCP.c)
 *     EtwpCoverageReset @ 0x140745074 (EtwpCoverageReset.c)
 *     EtwpCoverageResetCP @ 0x140745254 (EtwpCoverageResetCP.c)
 */

__int64 __fastcall EtwSetProcessTelemetryCoverage(_KPROCESS *a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned int v4; // eax
  __int64 result; // rax
  int v6; // eax

  if ( a1 != KeGetCurrentThread()->ApcState.Process )
    return 3221225659LL;
  if ( EtwpCoverageContext || (result = EtwpCoverageEnsureContext(), (int)result >= 0) )
  {
    v3 = EtwpCoverageContext;
    if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
    {
      *(_DWORD *)(a2 + 12) = -1;
    }
    else
    {
      v4 = *(_DWORD *)(a2 + 12);
      if ( v4 < 0xFFFFFF00 )
      {
        EtwpCoverageRecord(EtwpCoverageContext, a2);
        result = EtwpCoverageEnsureUserModeView(v3);
        if ( (int)result < 0 )
          return result;
        return 0LL;
      }
      switch ( v4 )
      {
        case 0xFFFFFFFE:
          v6 = EtwpCoverageCheckCP(EtwpCoverageContext, a2);
          goto LABEL_16;
        case 0xFFFFFFFD:
          v6 = EtwpCoverageResetCP(EtwpCoverageContext, a2);
LABEL_16:
          if ( !v6 )
            return 3221226021LL;
          return 0LL;
        case 0xFFFFFFFC:
          if ( !(unsigned __int8)EtwpCoverageUserIsAdmin() )
            return 3221225506LL;
          EtwpCoverageReset(v3, 1LL);
          *(_DWORD *)(a2 + 12) = *(_DWORD *)(*(_QWORD *)(v3 + 16) + 24LL);
          return 0LL;
        case 0xFFFFFFFB:
          EtwpCoverageRecordAtHighIrql(a2);
          return 0LL;
      }
    }
    return 3221225485LL;
  }
  return result;
}
