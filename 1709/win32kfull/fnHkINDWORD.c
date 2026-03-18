/*
 * XREFs of fnHkINDWORD @ 0x1C005C594
 * Callers:
 *     xxxCallCtfHook @ 0x1C005BCB8 (xxxCallCtfHook.c)
 *     xxxHkCallHook @ 0x1C00A9FC0 (xxxHkCallHook.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall fnHkINDWORD(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  _DWORD *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // ebx
  __int64 *v14; // rcx
  __int64 v15; // r8
  _DWORD *v16; // rcx
  ULONG IsResourceAcquiredSharedLite; // eax
  _QWORD v19[9]; // [rsp+40h] [rbp-48h] BYREF
  char v20; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v21; // [rsp+98h] [rbp+10h] BYREF

  memset(v19, 0, 0x30uLL);
  LODWORD(v19[0]) = a1;
  v19[1] = a2;
  v19[5] = a3;
  v19[2] = a4;
  v19[3] = a5;
  v10 = a6;
  LODWORD(v19[4]) = *a6;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&a5);
  if ( ExIsResourceAcquiredExclusiveLite(gpresUser)
    || (IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(gpresUser), v20 = 1, !IsResourceAcquiredSharedLite) )
  {
    v20 = 0;
  }
  UserSessionSwitchLeaveCrit(v12, v11);
  EtwTraceBeginCallback(40LL);
  v13 = KeUserModeCallback(40LL, v19, 48LL, &v21, &a6);
  EtwTraceEndCallback(40LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v20);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&a5);
  if ( v13 < 0 || (_DWORD)a6 != 24 )
    return 0LL;
  v14 = (__int64 *)v21;
  if ( v21 + 8 < v21 || v21 + 8 > MmUserProbeAddress )
    v14 = (__int64 *)MmUserProbeAddress;
  v15 = *v14;
  a5 = *v14;
  v16 = *(_DWORD **)(v21 + 16);
  if ( v16 + 1 < v16 || (unsigned __int64)(v16 + 1) > MmUserProbeAddress )
    v16 = (_DWORD *)MmUserProbeAddress;
  *v10 ^= ((unsigned __int8)*v16 ^ (unsigned __int8)*v10) & 0x10;
  return (unsigned int)v15;
}
