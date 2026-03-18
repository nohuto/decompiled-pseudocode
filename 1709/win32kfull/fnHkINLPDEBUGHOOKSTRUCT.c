/*
 * XREFs of fnHkINLPDEBUGHOOKSTRUCT @ 0x1C0200D30
 * Callers:
 *     xxxHkCallHook @ 0x1C00A9FC0 (xxxHkCallHook.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?CopyDebugHookLParam@@YAH_KPEAT_DEBUGLPARAM@@PEAUtagDEBUGHOOKINFO@@@Z @ 0x1C01441BC (-CopyDebugHookLParam@@YAH_KPEAT_DEBUGLPARAM@@PEAUtagDEBUGHOOKINFO@@@Z.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall fnHkINLPDEBUGHOOKSTRUCT(int a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rcx
  char v17; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v18[3]; // [rsp+31h] [rbp-B7h] BYREF
  int v19; // [rsp+34h] [rbp-B4h] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-B0h] BYREF
  _OWORD v21[8]; // [rsp+50h] [rbp-98h] BYREF

  memset(v21, 0, 0x78uLL);
  LODWORD(v21[0]) = a1;
  *((_QWORD *)&v21[0] + 1) = a2;
  *(_DWORD *)(a3 + 28) = 0;
  v21[1] = *(_OWORD *)a3;
  v21[2] = *(_OWORD *)(a3 + 16);
  *((_QWORD *)&v21[6] + 1) = a4;
  *(_QWORD *)&v21[7] = a5;
  if ( a2 - 13 <= 1 )
    return 0LL;
  LODWORD(v21[6]) = CopyDebugHookLParam(a2, (union _DEBUGLPARAM *)&v21[3], (struct tagDEBUGHOOKINFO *)a3);
  *((_QWORD *)&v21[1] + 1) = 0LL;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v18,
    gdwInAtomicOperation,
    v9,
    v10);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v17);
  EtwTraceBeginCallback(43LL);
  v11 = KeUserModeCallback(43LL, v21, 120LL, &v20, &v19);
  EtwTraceEndCallback(43LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v17);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v18,
    v12,
    v13,
    v14);
  if ( v11 < 0 || v19 != 24 )
    return 0LL;
  v15 = (_QWORD *)v20;
  if ( v20 + 8 < v20 || v20 + 8 > MmUserProbeAddress )
    v15 = (_QWORD *)MmUserProbeAddress;
  return (unsigned int)*v15;
}
