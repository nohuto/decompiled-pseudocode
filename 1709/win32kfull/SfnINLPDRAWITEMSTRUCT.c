/*
 * XREFs of SfnINLPDRAWITEMSTRUCT @ 0x1C0107010
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     _WindowFromDC @ 0x1C00F8870 (_WindowFromDC.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall SfnINLPDRAWITEMSTRUCT(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // r12
  unsigned int CurrentProcessId; // ebx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 *v32; // rcx
  __int64 v33; // rbx
  HDC v35; // rcx
  struct tagWND *v36; // rax
  char v37; // [rsp+30h] [rbp-128h] BYREF
  _BYTE v38[3]; // [rsp+31h] [rbp-127h] BYREF
  int v39; // [rsp+34h] [rbp-124h]
  _DWORD v40[8]; // [rsp+38h] [rbp-120h] BYREF
  unsigned __int64 v41; // [rsp+58h] [rbp-100h] BYREF
  __int128 v42; // [rsp+60h] [rbp-F8h]
  __int64 v43; // [rsp+70h] [rbp-E8h]
  __int64 v44; // [rsp+78h] [rbp-E0h]
  _QWORD v45[3]; // [rsp+98h] [rbp-C0h] BYREF
  _QWORD v46[14]; // [rsp+B0h] [rbp-A8h] BYREF

  v39 = a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = (__int64)a1 - *(_QWORD *)(ThreadWin32Thread + 448);
  else
    v13 = 0LL;
  memset(v46, 0, 0x68uLL);
  v14 = 0LL;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  if ( (unsigned int)GreGetObjectOwner(*(_QWORD *)(a4 + 32), 1LL) != (CurrentProcessId & 0xFFFFFFFC) )
  {
    v35 = *(HDC *)(a4 + 32);
    if ( v35 )
    {
      v36 = WindowFromDC(v35);
      if ( v36 )
      {
        v14 = *(_QWORD *)(a4 + 32);
        *(_QWORD *)(a4 + 32) = _GetDC(v36);
      }
    }
  }
  v46[0] = v13;
  LODWORD(v46[1]) = v39;
  v46[2] = a3;
  *(_DWORD *)(a4 + 20) = 0;
  *(_OWORD *)&v46[3] = *(_OWORD *)a4;
  *(_OWORD *)&v46[5] = *(_OWORD *)(a4 + 16);
  *(_OWORD *)&v46[7] = *(_OWORD *)(a4 + 32);
  *(_OWORD *)&v46[9] = *(_OWORD *)(a4 + 48);
  v46[11] = a5;
  v46[12] = a6;
  v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v17, v18);
  v45[0] = *(_QWORD *)(v19 + 392);
  *(_QWORD *)(v19 + 392) = v45;
  v45[1] = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v22 = *(_QWORD *)(v12 + 456);
  v42 = *(_OWORD *)(v22 + 64);
  v43 = *(_QWORD *)(v22 + 80);
  *(_QWORD *)(v22 + 72) = v13;
  if ( a1 )
    v23 = *(_QWORD *)a1;
  else
    v23 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 456) + 64LL) = v23;
  if ( a1 )
    v24 = *((_QWORD *)a1 + 35);
  else
    v24 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 456) + 80LL) = v24;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v38,
    gdwInAtomicOperation,
    v20,
    v21);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v37);
  EtwTraceBeginCallback(12LL);
  v25 = KeUserModeCallback(12LL, v46, 104LL, &v41, v40);
  EtwTraceEndCallback(12LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v37);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v38,
    v26,
    v27,
    v28);
  ThreadUnlock1(v30, v29);
  v31 = *(_QWORD *)(v12 + 456);
  *(_OWORD *)(v31 + 64) = v42;
  *(_QWORD *)(v31 + 80) = v43;
  if ( v25 < 0 || v40[0] != 24 )
    return 0LL;
  v32 = (__int64 *)v41;
  if ( v41 + 8 < v41 || v41 + 8 > MmUserProbeAddress )
    v32 = (__int64 *)MmUserProbeAddress;
  v33 = *v32;
  v44 = *v32;
  if ( v14 && (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    _ReleaseDC(*(_QWORD *)(a4 + 32));
    *(_QWORD *)(a4 + 32) = v14;
  }
  return v33;
}
