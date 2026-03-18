/*
 * XREFs of fnHkINLPMOUSEHOOKSTRUCTEX @ 0x1C0108254
 * Callers:
 *     xxxCallCtfHook @ 0x1C005BCB8 (xxxCallCtfHook.c)
 *     xxxHkCallHook @ 0x1C00A9FC0 (xxxHkCallHook.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall fnHkINLPMOUSEHOOKSTRUCTEX(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  __int64 v10; // r8
  __int64 v11; // r9
  _DWORD *v12; // rdi
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // rcx
  __int64 v18; // r8
  _DWORD *v19; // rcx
  _QWORD v21[13]; // [rsp+40h] [rbp-68h] BYREF
  char v22; // [rsp+B0h] [rbp+8h] BYREF
  unsigned __int64 v23; // [rsp+B8h] [rbp+10h] BYREF

  memset(v21, 0, 0x50uLL);
  LODWORD(v21[0]) = a1;
  v21[1] = a2;
  *(_DWORD *)(a3 + 20) = 0;
  *(_DWORD *)(a3 + 36) = 0;
  *(_OWORD *)&v21[5] = *(_OWORD *)a3;
  *(_OWORD *)&v21[7] = *(_OWORD *)(a3 + 16);
  v21[9] = *(_QWORD *)(a3 + 32);
  v21[2] = a4;
  v21[3] = a5;
  v12 = a6;
  LODWORD(v21[4]) = *a6;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&a5,
    gdwInAtomicOperation,
    v10,
    v11);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v22);
  EtwTraceBeginCallback(44LL);
  v13 = KeUserModeCallback(44LL, v21, 80LL, &v23, &a6);
  EtwTraceEndCallback(44LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v22);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&a5,
    v14,
    v15,
    v16);
  if ( v13 < 0 || (_DWORD)a6 != 24 )
    return 0LL;
  v17 = (__int64 *)v23;
  if ( v23 + 8 < v23 || v23 + 8 > MmUserProbeAddress )
    v17 = (__int64 *)MmUserProbeAddress;
  v18 = *v17;
  a5 = *v17;
  v19 = *(_DWORD **)(v23 + 16);
  if ( v19 + 1 < v19 || (unsigned __int64)(v19 + 1) > MmUserProbeAddress )
    v19 = (_DWORD *)MmUserProbeAddress;
  *v12 ^= ((unsigned __int8)*v19 ^ (unsigned __int8)*v12) & 0x10;
  return (unsigned int)v18;
}
