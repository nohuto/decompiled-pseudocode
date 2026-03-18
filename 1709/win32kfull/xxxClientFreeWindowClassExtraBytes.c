/*
 * XREFs of xxxClientFreeWindowClassExtraBytes @ 0x1C005AC34
 * Callers:
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 *     xxxConsoleControl @ 0x1C0090464 (xxxConsoleControl.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 */

void __fastcall xxxClientFreeWindowClassExtraBytes(__int64 a1)
{
  _BYTE v1[24]; // [rsp+30h] [rbp-18h] BYREF
  char v2; // [rsp+50h] [rbp+8h] BYREF
  char v3; // [rsp+58h] [rbp+10h] BYREF
  char v4; // [rsp+60h] [rbp+18h] BYREF
  __int64 v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a1;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v3);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v2);
  EtwTraceBeginCallback(126LL);
  KeUserModeCallback(126LL, &v5, 8LL, v1, &v4);
  EtwTraceEndCallback(126LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v2);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v3);
}
