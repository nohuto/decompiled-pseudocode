/*
 * XREFs of ?xxxClientCopyDDEIn2@@YAHPEAUtagINTDDEINFO@@@Z @ 0x1C01F9F98
 * Callers:
 *     xxxClientCopyDDEIn1 @ 0x1C02017A0 (xxxClientCopyDDEIn1.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientCopyDDEIn2(struct tagINTDDEINFO *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // rcx
  __int64 result; // rax
  char v10; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v11[3]; // [rsp+31h] [rbp-87h] BYREF
  int v12; // [rsp+34h] [rbp-84h] BYREF
  _QWORD v13[3]; // [rsp+38h] [rbp-80h] BYREF
  _OWORD v14[4]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v15; // [rsp+90h] [rbp-28h]

  v14[0] = *(_OWORD *)a1;
  v14[1] = *((_OWORD *)a1 + 1);
  v14[2] = *((_OWORD *)a1 + 2);
  v14[3] = *((_OWORD *)a1 + 3);
  v15 = *((_QWORD *)a1 + 8);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v11,
    gdwInAtomicOperation,
    a3,
    a4);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v10);
  EtwTraceBeginCallback(61LL);
  v4 = KeUserModeCallback(61LL, v14, 72LL, v13, &v12);
  EtwTraceEndCallback(61LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v10);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v11,
    v5,
    v6,
    v7);
  if ( v4 < 0 || v12 != 24 )
    return 0LL;
  v8 = (__int64 *)v13[0];
  if ( (unsigned __int64)(v13[0] + 8LL) < v13[0] || v13[0] + 8LL > MmUserProbeAddress )
    v8 = (__int64 *)MmUserProbeAddress;
  result = *v8;
  v13[1] = *v8;
  return result;
}
