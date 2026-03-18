/*
 * XREFs of xxxClientMonitorEnumProc @ 0x1C0058F60
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall xxxClientMonitorEnumProc(__int64 a1, __int64 a2, _OWORD *a3, __int64 a4, __int64 a5)
{
  int v9; // ebx
  __int64 *v10; // rcx
  __int64 result; // rax
  char v12; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v13[3]; // [rsp+31h] [rbp-67h] BYREF
  int v14; // [rsp+34h] [rbp-64h] BYREF
  _QWORD v15[3]; // [rsp+38h] [rbp-60h] BYREF
  _OWORD v16[3]; // [rsp+50h] [rbp-48h] BYREF

  memset(v16, 0, sizeof(v16));
  *(_QWORD *)&v16[0] = a1;
  *((_QWORD *)&v16[0] + 1) = a2;
  v16[1] = *a3;
  *(_QWORD *)&v16[2] = a4;
  *((_QWORD *)&v16[2] + 1) = a5;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v13);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v12);
  EtwTraceBeginCallback(87LL);
  v9 = KeUserModeCallback(87LL, v16, 48LL, v15, &v14);
  EtwTraceEndCallback(87LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v12);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v13);
  if ( v9 < 0 || v14 != 24 )
    return 0LL;
  v10 = (__int64 *)v15[0];
  if ( (unsigned __int64)(v15[0] + 8LL) < v15[0] || v15[0] + 8LL > MmUserProbeAddress )
    v10 = (__int64 *)MmUserProbeAddress;
  result = *v10;
  v15[1] = *v10;
  return result;
}
