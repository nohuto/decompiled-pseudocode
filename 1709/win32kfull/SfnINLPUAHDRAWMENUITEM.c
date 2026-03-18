/*
 * XREFs of SfnINLPUAHDRAWMENUITEM @ 0x1C00FBFC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     _ServerFixupMenuDC @ 0x1C00FC2A0 (_ServerFixupMenuDC.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall SfnINLPUAHDRAWMENUITEM(
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
  __int64 v12; // r14
  __int64 v13; // rsi
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r15
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
  char v35; // [rsp+30h] [rbp-178h] BYREF
  _BYTE v36[3]; // [rsp+31h] [rbp-177h] BYREF
  int v37; // [rsp+34h] [rbp-174h]
  _DWORD v38[8]; // [rsp+38h] [rbp-170h] BYREF
  unsigned __int64 v39; // [rsp+58h] [rbp-150h] BYREF
  __int128 v40; // [rsp+60h] [rbp-148h]
  __int64 v41; // [rsp+70h] [rbp-138h]
  __int64 v42; // [rsp+78h] [rbp-130h]
  _QWORD v43[3]; // [rsp+98h] [rbp-110h] BYREF
  _QWORD v44[24]; // [rsp+B0h] [rbp-F8h] BYREF

  v37 = a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = (__int64)a1 - *(_QWORD *)(ThreadWin32Thread + 448);
  else
    v13 = 0LL;
  memset(v44, 0, 0xB8uLL);
  v14 = 0LL;
  v15 = ServerFixupMenuDC(*(HDC *)(a4 + 32));
  v18 = v15;
  if ( v15 )
  {
    v14 = *(_QWORD *)(a4 + 32);
    *(_QWORD *)(a4 + 32) = v15;
    *(_QWORD *)(a4 + 72) = v15;
  }
  v44[0] = v13;
  LODWORD(v44[1]) = v37;
  v44[2] = a3;
  *(_DWORD *)(a4 + 20) = 0;
  *(_DWORD *)(a4 + 84) = 0;
  *(_OWORD *)&v44[3] = *(_OWORD *)a4;
  *(_OWORD *)&v44[5] = *(_OWORD *)(a4 + 16);
  *(_OWORD *)&v44[7] = *(_OWORD *)(a4 + 32);
  *(_OWORD *)&v44[9] = *(_OWORD *)(a4 + 48);
  *(_OWORD *)&v44[11] = *(_OWORD *)(a4 + 64);
  *(_OWORD *)&v44[13] = *(_OWORD *)(a4 + 80);
  *(_OWORD *)&v44[15] = *(_OWORD *)(a4 + 96);
  *(_OWORD *)&v44[17] = *(_OWORD *)(a4 + 112);
  *(_OWORD *)&v44[19] = *(_OWORD *)(a4 + 128);
  v44[21] = a5;
  v44[22] = a6;
  v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), 128LL, v16, v17);
  v43[0] = *(_QWORD *)(v19 + 392);
  *(_QWORD *)(v19 + 392) = v43;
  v43[1] = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v22 = *(_QWORD *)(v12 + 456);
  v40 = *(_OWORD *)(v22 + 64);
  v41 = *(_QWORD *)(v22 + 80);
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
    (ReleaseAndReacquirePerObjectLocks *)v36,
    gdwInAtomicOperation,
    v20,
    v21);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v35);
  EtwTraceBeginCallback(107LL);
  v25 = KeUserModeCallback(107LL, v44, 184LL, &v39, v38);
  EtwTraceEndCallback(107LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v35);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v36,
    v26,
    v27,
    v28);
  ThreadUnlock1(v30, v29);
  v31 = *(_QWORD *)(v12 + 456);
  *(_OWORD *)(v31 + 64) = v40;
  *(_QWORD *)(v31 + 80) = v41;
  if ( v25 < 0 || v38[0] != 24 )
    return 0LL;
  v32 = (__int64 *)v39;
  if ( v39 + 8 < v39 || v39 + 8 > MmUserProbeAddress )
    v32 = (__int64 *)MmUserProbeAddress;
  v33 = *v32;
  v42 = *v32;
  if ( v18 )
  {
    _ReleaseDC(v18);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
    {
      *(_QWORD *)(a4 + 32) = v14;
      *(_QWORD *)(a4 + 72) = v14;
    }
  }
  return v33;
}
