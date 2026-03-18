/*
 * XREFs of fnHkOPTINLPEVENTMSG @ 0x1C02010C0
 * Callers:
 *     xxxHkCallHook @ 0x1C00A9FC0 (xxxHkCallHook.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C0099110 (HMValidateHandle.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall fnHkOPTINLPEVENTMSG(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  bool v13; // zf
  int v14; // eax
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *v19; // rcx
  __int64 v20; // rdx
  ULONG64 v21; // rcx
  __int64 v22; // xmm1_8
  _QWORD v24[13]; // [rsp+40h] [rbp-68h] BYREF
  char v25; // [rsp+B0h] [rbp+8h] BYREF
  int v26; // [rsp+B8h] [rbp+10h] BYREF
  unsigned __int64 v27; // [rsp+C0h] [rbp+18h] BYREF

  memset(v24, 0, 0x48uLL);
  LODWORD(v24[0]) = a1;
  v24[1] = a2;
  LODWORD(v24[2]) = a3 != 0;
  if ( a3 )
  {
    *(_OWORD *)&v24[5] = *(_OWORD *)a3;
    v24[7] = *(_QWORD *)(a3 + 16);
  }
  v24[3] = a4;
  v24[4] = a5;
  LODWORD(v24[8]) = 0;
  if ( a2 )
  {
    LOBYTE(v9) = 5;
    v12 = HMValidateHandle(a2, v9, v10, v11);
    if ( v12 )
    {
      v13 = (*(_BYTE *)(v12 + 64) & 4) == 0;
      v14 = v24[8];
      if ( !v13 )
        v14 = 1;
      LODWORD(v24[8]) = v14;
    }
  }
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&a5,
    1LL,
    gdwInAtomicOperation,
    v11);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v25);
  EtwTraceBeginCallback(49LL);
  v15 = KeUserModeCallback(49LL, v24, 72LL, &v27, &v26);
  EtwTraceEndCallback(49LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v25);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&a5,
    v16,
    v17,
    v18);
  if ( v15 < 0 || v26 != 24 )
    return 0xFFFFFFFFLL;
  v19 = (__int64 *)v27;
  if ( v27 + 8 < v27 || v27 + 8 > MmUserProbeAddress )
    v19 = (__int64 *)MmUserProbeAddress;
  v20 = *v19;
  a5 = *v19;
  if ( a3 )
  {
    v21 = *(_QWORD *)(v27 + 16);
    if ( v21 + 24 < v21 || v21 + 24 > MmUserProbeAddress )
      v21 = MmUserProbeAddress;
    v22 = *(_QWORD *)(v21 + 16);
    *(_OWORD *)a3 = *(_OWORD *)v21;
    *(_QWORD *)(a3 + 16) = v22;
  }
  return (unsigned int)v20;
}
