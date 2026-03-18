/*
 * XREFs of SepLogLpacAccessFailure @ 0x140246C14
 * Callers:
 *     SeAccessCheckWithHint @ 0x14008D7C0 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x140092020 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x1401326AC (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046B2C0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     EtwpTraceLpacAccessFailure @ 0x140246678 (EtwpTraceLpacAccessFailure.c)
 *     SepGetStackTraceHash @ 0x140246B0C (SepGetStackTraceHash.c)
 *     DbgkQueueUserExceptionReport @ 0x140680B08 (DbgkQueueUserExceptionReport.c)
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
    if ( _interlockedbittestandset(&dword_14038C418[(unsigned __int64)v2 >> 5], v2 & 0x1F) )
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
