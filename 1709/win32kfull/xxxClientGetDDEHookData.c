/*
 * XREFs of xxxClientGetDDEHookData @ 0x1C0202358
 * Callers:
 *     xxxDDETrackPostHook @ 0x1C01F1BFC (xxxDDETrackPostHook.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall xxxClientGetDDEHookData(int a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // rcx
  __int64 v13; // rdx
  ULONG64 v14; // rcx
  __int128 v15; // xmm3
  __int128 v16; // xmm0
  __int64 v17; // xmm1_8
  char v19; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v20[3]; // [rsp+31h] [rbp-97h] BYREF
  int v21; // [rsp+34h] [rbp-94h] BYREF
  _QWORD v22[5]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v23[10]; // [rsp+60h] [rbp-68h] BYREF

  memset(v23, 0, 0x48uLL);
  v23[1] = a2;
  LODWORD(v23[0]) = a1;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v20,
    gdwInAtomicOperation,
    v6,
    v7);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v19);
  EtwTraceBeginCallback(71LL);
  v8 = KeUserModeCallback(71LL, v23, 72LL, v22, &v21);
  EtwTraceEndCallback(71LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v19);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v20,
    v9,
    v10,
    v11);
  if ( v8 < 0 || v21 != 24 )
    return 0LL;
  v12 = (__int64 *)v22[0];
  if ( (unsigned __int64)(v22[0] + 8LL) < v22[0] || v22[0] + 8LL > MmUserProbeAddress )
    v12 = (__int64 *)MmUserProbeAddress;
  v13 = *v12;
  v22[1] = *v12;
  v14 = *(_QWORD *)(v22[0] + 16LL);
  if ( v14 + 56 < v14 || v14 + 56 > MmUserProbeAddress )
    v14 = MmUserProbeAddress;
  v15 = *(_OWORD *)(v14 + 16);
  v16 = *(_OWORD *)(v14 + 32);
  v17 = *(_QWORD *)(v14 + 48);
  *(_OWORD *)a3 = *(_OWORD *)v14;
  *(_OWORD *)(a3 + 16) = v15;
  *(_OWORD *)(a3 + 32) = v16;
  *(_QWORD *)(a3 + 48) = v17;
  return (unsigned int)v13;
}
