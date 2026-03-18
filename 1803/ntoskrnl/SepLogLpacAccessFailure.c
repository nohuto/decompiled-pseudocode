/*
 * XREFs of SepLogLpacAccessFailure @ 0x14029FDD4
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14005CED0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x140100CF0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140148E84 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1404D7FE0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     EtwpTraceLpacAccessFailure @ 0x14029F738 (EtwpTraceLpacAccessFailure.c)
 *     SepGetStackTraceHash @ 0x14029FBDC (SepGetStackTraceHash.c)
 *     DbgkQueueUserExceptionReport @ 0x14071043C (DbgkQueueUserExceptionReport.c)
 */

__int64 __fastcall SepLogLpacAccessFailure(int a1)
{
  unsigned int v1; // ebx
  unsigned __int8 v2; // di
  _QWORD v4[19]; // [rsp+20h] [rbp-A8h] BYREF
  int v5; // [rsp+D0h] [rbp+8h] BYREF

  v5 = a1;
  if ( KeGetCurrentIrql() >= 2u || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    return 3221225659LL;
  SepGetStackTraceHash((ULONG *)&v5);
  v1 = v5;
  v2 = v5 ^ BYTE2(v5) ^ ((unsigned __int16)(v5 ^ HIWORD(v5)) >> 8);
  EtwpTraceLpacAccessFailure(v5);
  if ( !SeLpacEnableWatsonReporting )
    return 3221226326LL;
  if ( SeLpacEnableWatsonThrottling )
  {
    if ( _interlockedbittestandset(&dword_1403EC888[(unsigned __int64)v2 >> 5], v2 & 0x1F) )
      return 0LL;
    v1 = v5;
  }
  memset(v4, 0, sizeof(v4));
  v4[2] = 0LL;
  v4[5] = v1;
  v4[0] = 3221226505LL;
  LODWORD(v4[3]) = 2;
  v4[4] = 43LL;
  return DbgkQueueUserExceptionReport(KeGetCurrentThread());
}
