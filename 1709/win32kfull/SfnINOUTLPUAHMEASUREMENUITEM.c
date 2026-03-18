/*
 * XREFs of SfnINOUTLPUAHMEASUREMENUITEM @ 0x1C00FB730
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

__int64 __fastcall SfnINOUTLPUAHMEASUREMENUITEM(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v10; // r12d
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rdx
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
  __int64 v33; // rsi
  _OWORD *v34; // rcx
  __int128 v35; // xmm3
  __int128 v36; // xmm4
  __int128 v37; // xmm5
  __int128 v38; // xmm6
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  char v42; // [rsp+30h] [rbp-198h] BYREF
  _BYTE v43[3]; // [rsp+31h] [rbp-197h] BYREF
  _DWORD v44[5]; // [rsp+34h] [rbp-194h] BYREF
  unsigned __int64 v45; // [rsp+48h] [rbp-180h] BYREF
  __int64 v46; // [rsp+50h] [rbp-178h]
  __int128 v47; // [rsp+60h] [rbp-168h]
  __int64 v48; // [rsp+70h] [rbp-158h]
  __int64 v49; // [rsp+78h] [rbp-150h]
  _QWORD v50[4]; // [rsp+A0h] [rbp-128h] BYREF
  _QWORD v51[20]; // [rsp+C0h] [rbp-108h] BYREF

  v10 = a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = (__int64)a1 - *(_QWORD *)(ThreadWin32Thread + 448);
  else
    v14 = 0LL;
  memset(v51, 0, 0x98uLL);
  v46 = 0LL;
  v18 = ServerFixupMenuDC(*(HDC *)(a4 + 40));
  if ( v18 )
  {
    v46 = *(_QWORD *)(a4 + 40);
    *(_QWORD *)(a4 + 40) = v18;
  }
  v51[0] = v14;
  LODWORD(v51[1]) = v10 & 0x1FFFF;
  v51[2] = a3;
  *(_DWORD *)(a4 + 20) = 0;
  *(_DWORD *)(a4 + 52) = 0;
  *(_OWORD *)&v51[3] = *(_OWORD *)a4;
  *(_OWORD *)&v51[5] = *(_OWORD *)(a4 + 16);
  *(_OWORD *)&v51[7] = *(_OWORD *)(a4 + 32);
  *(_OWORD *)&v51[9] = *(_OWORD *)(a4 + 48);
  *(_OWORD *)&v51[11] = *(_OWORD *)(a4 + 64);
  *(_OWORD *)&v51[13] = *(_OWORD *)(a4 + 80);
  *(_OWORD *)&v51[15] = *(_OWORD *)(a4 + 96);
  v51[17] = a5;
  v51[18] = a6;
  v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v16, v17);
  v50[0] = *(_QWORD *)(v19 + 392);
  *(_QWORD *)(v19 + 392) = v50;
  v50[1] = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v22 = *(_QWORD *)(v13 + 456);
  v47 = *(_OWORD *)(v22 + 64);
  v48 = *(_QWORD *)(v22 + 80);
  *(_QWORD *)(v22 + 72) = v14;
  if ( a1 )
    v23 = *(_QWORD *)a1;
  else
    v23 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 456) + 64LL) = v23;
  if ( a1 )
    v24 = *((_QWORD *)a1 + 35);
  else
    v24 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 456) + 80LL) = v24;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v43,
    gdwInAtomicOperation,
    v20,
    v21);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v42);
  EtwTraceBeginCallback(109LL);
  v25 = KeUserModeCallback(109LL, v51, 152LL, &v45, v44);
  EtwTraceEndCallback(109LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v42);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v43,
    v26,
    v27,
    v28);
  ThreadUnlock1(v30, v29);
  v31 = *(_QWORD *)(v13 + 456);
  *(_OWORD *)(v31 + 64) = v47;
  *(_QWORD *)(v31 + 80) = v48;
  if ( v25 < 0 || v44[0] != 24 )
    return 0LL;
  v32 = (__int64 *)v45;
  if ( v45 + 8 < v45 || v45 + 8 > MmUserProbeAddress )
    v32 = (__int64 *)MmUserProbeAddress;
  v33 = *v32;
  v49 = *v32;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v34 = *(_OWORD **)(v45 + 16);
    if ( v34 + 7 < v34 || (unsigned __int64)(v34 + 7) > MmUserProbeAddress )
      v34 = (_OWORD *)MmUserProbeAddress;
    v35 = v34[1];
    v36 = v34[2];
    v37 = v34[3];
    v38 = v34[4];
    v39 = v34[5];
    v40 = v34[6];
    *(_OWORD *)a4 = *v34;
    *(_OWORD *)(a4 + 16) = v35;
    *(_OWORD *)(a4 + 32) = v36;
    *(_OWORD *)(a4 + 48) = v37;
    *(_OWORD *)(a4 + 64) = v38;
    *(_OWORD *)(a4 + 80) = v39;
    *(_OWORD *)(a4 + 96) = v40;
  }
  if ( v18 )
  {
    _ReleaseDC(v18);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
      *(_QWORD *)(a4 + 40) = v46;
  }
  return v33;
}
