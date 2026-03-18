/*
 * XREFs of SepLogAdminlessAccessFailure @ 0x14029FCE0
 * Callers:
 *     SeAccessCheckByType @ 0x14005CD40 (SeAccessCheckByType.c)
 *     SeAccessCheckWithHint @ 0x1400D47B0 (SeAccessCheckWithHint.c)
 *     SeAccessCheck @ 0x140100B90 (SeAccessCheck.c)
 *     SepCommonAccessCheckEx @ 0x140148DCC (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404D7DC4 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     EtwpTraceAdminlessAccessFailure @ 0x14029F68C (EtwpTraceAdminlessAccessFailure.c)
 *     SepGetStackTraceHash @ 0x14029FBDC (SepGetStackTraceHash.c)
 *     DbgkQueueUserExceptionReport @ 0x14071043C (DbgkQueueUserExceptionReport.c)
 */

__int64 SepLogAdminlessAccessFailure()
{
  unsigned __int8 v0; // bl
  _QWORD v2[19]; // [rsp+20h] [rbp-A8h] BYREF
  int v3; // [rsp+D0h] [rbp+8h] BYREF

  if ( KeGetCurrentIrql() >= 2u || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    return 3221225659LL;
  SepGetStackTraceHash((ULONG *)&v3);
  v0 = v3 ^ BYTE2(v3) ^ ((unsigned __int16)(v3 ^ HIWORD(v3)) >> 8);
  EtwpTraceAdminlessAccessFailure(v3);
  if ( !SeAdminlessEnableWatsonReporting )
    return 3221226326LL;
  if ( _interlockedbittestandset(&dword_1403EC8A8[(unsigned __int64)v0 >> 5], v0 & 0x1F) )
    return 0LL;
  memset(v2, 0, sizeof(v2));
  v2[2] = 0LL;
  v2[5] = (unsigned int)v3;
  v2[0] = 3221226505LL;
  LODWORD(v2[3]) = 2;
  v2[4] = 55LL;
  return DbgkQueueUserExceptionReport(KeGetCurrentThread());
}
