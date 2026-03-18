/*
 * XREFs of xxxClientWOWGetProcModule @ 0x1C005AFA8
 * Callers:
 *     xxxSetWindowData @ 0x1C00A40EC (xxxSetWindowData.c)
 *     xxxSetClassData @ 0x1C011CDDC (xxxSetClassData.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 */

__int64 __fastcall xxxClientWOWGetProcModule(__int64 a1)
{
  int v1; // ebx
  __int64 *v2; // rcx
  __int64 result; // rax
  unsigned __int64 v4[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+60h] [rbp+8h] BYREF
  char v6; // [rsp+68h] [rbp+10h] BYREF
  int v7; // [rsp+70h] [rbp+18h] BYREF
  __int64 v8; // [rsp+78h] [rbp+20h] BYREF

  v8 = a1;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v6);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v5);
  EtwTraceBeginCallback(90LL);
  v1 = KeUserModeCallback(90LL, &v8, 8LL, v4, &v7);
  EtwTraceEndCallback(90LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v5);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v6);
  if ( v1 < 0 || v7 != 24 )
    return 0LL;
  v2 = (__int64 *)v4[0];
  if ( v4[0] + 8 < v4[0] || v4[0] + 8 > MmUserProbeAddress )
    v2 = (__int64 *)MmUserProbeAddress;
  result = *v2;
  v5 = *v2;
  return result;
}
