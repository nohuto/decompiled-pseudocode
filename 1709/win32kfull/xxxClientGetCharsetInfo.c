/*
 * XREFs of xxxClientGetCharsetInfo @ 0x1C011E33C
 * Callers:
 *     EditionInitSystemCharsetInfoForLayout @ 0x1C011E2B0 (EditionInitSystemCharsetInfoForLayout.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall xxxClientGetCharsetInfo(int a1, _OWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r9
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // rcx
  __int64 v11; // rdx
  _OWORD *v12; // rcx
  __int128 v13; // xmm1
  char v15; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v16[3]; // [rsp+31h] [rbp-67h] BYREF
  int v17; // [rsp+34h] [rbp-64h] BYREF
  _QWORD v18[4]; // [rsp+38h] [rbp-60h] BYREF
  _DWORD v19[10]; // [rsp+58h] [rbp-40h] BYREF

  memset(v19, 0, 0x24uLL);
  v19[0] = a1;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v16,
    v4,
    gdwInAtomicOperation,
    v5);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v15);
  EtwTraceBeginCallback(69LL);
  v6 = KeUserModeCallback(69LL, v19, 36LL, v18, &v17);
  EtwTraceEndCallback(69LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v15);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v16,
    v7,
    v8,
    v9);
  if ( v6 < 0 || v17 != 24 )
    return 0LL;
  v10 = (__int64 *)v18[0];
  if ( (unsigned __int64)(v18[0] + 8LL) < v18[0] || v18[0] + 8LL > MmUserProbeAddress )
    v10 = (__int64 *)MmUserProbeAddress;
  v11 = *v10;
  v18[1] = *v10;
  v12 = *(_OWORD **)(v18[0] + 16LL);
  if ( v12 + 2 < v12 || (unsigned __int64)(v12 + 2) > MmUserProbeAddress )
    v12 = (_OWORD *)MmUserProbeAddress;
  v13 = v12[1];
  *a2 = *v12;
  a2[1] = v13;
  return (unsigned int)v11;
}
