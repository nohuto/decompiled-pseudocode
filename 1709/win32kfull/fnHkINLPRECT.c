/*
 * XREFs of fnHkINLPRECT @ 0x1C0200EF0
 * Callers:
 *     xxxHkCallHook @ 0x1C00A9FC0 (xxxHkCallHook.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall fnHkINLPRECT(int a1, __int64 a2, _OWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // rcx
  __int64 v16; // rdx
  __int128 *v17; // rcx
  char v19; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v20[3]; // [rsp+31h] [rbp-87h] BYREF
  int v21; // [rsp+34h] [rbp-84h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-80h] BYREF
  __int128 v23; // [rsp+40h] [rbp-78h]
  _OWORD v24[3]; // [rsp+60h] [rbp-58h] BYREF

  memset(v24, 0, sizeof(v24));
  LODWORD(v24[0]) = a1;
  *((_QWORD *)&v24[0] + 1) = a2;
  v24[1] = *a3;
  *(_QWORD *)&v24[2] = a4;
  *((_QWORD *)&v24[2] + 1) = a5;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v20,
    gdwInAtomicOperation,
    v9,
    v10);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v19);
  EtwTraceBeginCallback(48LL);
  v11 = KeUserModeCallback(48LL, v24, 48LL, &v22, &v21);
  EtwTraceEndCallback(48LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v19);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v20,
    v12,
    v13,
    v14);
  if ( v11 < 0 || v21 != 24 )
    return 0LL;
  v15 = (__int64 *)v22;
  if ( v22 + 8 < v22 || v22 + 8 > MmUserProbeAddress )
    v15 = (__int64 *)MmUserProbeAddress;
  v16 = *v15;
  *(_QWORD *)&v23 = *v15;
  v17 = *(__int128 **)(v22 + 16);
  if ( v17 + 1 < v17 || (unsigned __int64)(v17 + 1) > MmUserProbeAddress )
    v17 = (__int128 *)MmUserProbeAddress;
  v23 = *v17;
  *a3 = v23;
  return (unsigned int)v16;
}
