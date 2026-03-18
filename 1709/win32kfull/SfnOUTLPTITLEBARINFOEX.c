/*
 * XREFs of SfnOUTLPTITLEBARINFOEX @ 0x1C010CDB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall SfnOUTLPTITLEBARINFOEX(
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
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 *v30; // rcx
  __int64 v31; // r8
  ULONG64 v33; // rdx
  char v34; // [rsp+30h] [rbp-208h] BYREF
  _BYTE v35[3]; // [rsp+31h] [rbp-207h] BYREF
  _DWORD v36[5]; // [rsp+34h] [rbp-204h] BYREF
  unsigned __int64 v37; // [rsp+48h] [rbp-1F0h] BYREF
  __int128 v38; // [rsp+58h] [rbp-1E0h]
  __int64 v39; // [rsp+68h] [rbp-1D0h]
  __int64 v40; // [rsp+70h] [rbp-1C8h]
  _QWORD v41[3]; // [rsp+98h] [rbp-1A0h] BYREF
  __int128 v42; // [rsp+B0h] [rbp-188h]
  __int128 v43; // [rsp+C0h] [rbp-178h]
  __int128 v44; // [rsp+D0h] [rbp-168h]
  __int128 v45; // [rsp+E0h] [rbp-158h]
  __int128 v46; // [rsp+F0h] [rbp-148h]
  __int128 v47; // [rsp+100h] [rbp-138h]
  __int128 v48; // [rsp+110h] [rbp-128h]
  __int128 v49; // [rsp+120h] [rbp-118h]
  __int64 v50; // [rsp+130h] [rbp-108h]
  int v51; // [rsp+138h] [rbp-100h]
  _QWORD v52[24]; // [rsp+140h] [rbp-F8h] BYREF

  v10 = a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = (__int64)a1 - *(_QWORD *)(ThreadWin32Thread + 448);
  else
    v14 = 0LL;
  memset(v52, 0, 0xB8uLL);
  v52[0] = v14;
  LODWORD(v52[1]) = v10;
  v52[2] = a3;
  *(_OWORD *)&v52[3] = *(_OWORD *)a4;
  *(_OWORD *)&v52[5] = *(_OWORD *)(a4 + 16);
  *(_OWORD *)&v52[7] = *(_OWORD *)(a4 + 32);
  *(_OWORD *)&v52[9] = *(_OWORD *)(a4 + 48);
  *(_OWORD *)&v52[11] = *(_OWORD *)(a4 + 64);
  *(_OWORD *)&v52[13] = *(_OWORD *)(a4 + 80);
  *(_OWORD *)&v52[15] = *(_OWORD *)(a4 + 96);
  *(_OWORD *)&v52[17] = *(_OWORD *)(a4 + 112);
  v52[19] = *(_QWORD *)(a4 + 128);
  LODWORD(v52[20]) = *(_DWORD *)(a4 + 136);
  v52[21] = a5;
  v52[22] = a6;
  v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)&v52[3], v15, v16);
  v41[0] = *(_QWORD *)(v17 + 392);
  *(_QWORD *)(v17 + 392) = v41;
  v41[1] = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v20 = *(_QWORD *)(v13 + 456);
  v38 = *(_OWORD *)(v20 + 64);
  v39 = *(_QWORD *)(v20 + 80);
  *(_QWORD *)(v20 + 72) = v14;
  if ( a1 )
    v21 = *(_QWORD *)a1;
  else
    v21 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 456) + 64LL) = v21;
  if ( a1 )
    v22 = *((_QWORD *)a1 + 35);
  else
    v22 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 456) + 80LL) = v22;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v35,
    gdwInAtomicOperation,
    v18,
    v19);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v34);
  EtwTraceBeginCallback(111LL);
  v23 = KeUserModeCallback(111LL, v52, 184LL, &v37, v36);
  EtwTraceEndCallback(111LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v34);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v35,
    v24,
    v25,
    v26);
  ThreadUnlock1(v28, v27);
  v29 = *(_QWORD *)(v13 + 456);
  *(_OWORD *)(v29 + 64) = v38;
  *(_QWORD *)(v29 + 80) = v39;
  if ( v23 < 0 || v36[0] != 24 )
    return 0LL;
  v30 = (__int64 *)v37;
  if ( v37 + 8 < v37 || v37 + 8 > MmUserProbeAddress )
    v30 = (__int64 *)MmUserProbeAddress;
  v31 = *v30;
  v40 = *v30;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v33 = *(_QWORD *)(v37 + 16);
    if ( v33 + 140 < v33 || v33 + 140 > MmUserProbeAddress )
      v33 = MmUserProbeAddress;
    v42 = *(_OWORD *)v33;
    v43 = *(_OWORD *)(v33 + 16);
    v44 = *(_OWORD *)(v33 + 32);
    v45 = *(_OWORD *)(v33 + 48);
    v46 = *(_OWORD *)(v33 + 64);
    v47 = *(_OWORD *)(v33 + 80);
    v48 = *(_OWORD *)(v33 + 96);
    v49 = *(_OWORD *)(v33 + 112);
    v50 = *(_QWORD *)(v33 + 128);
    v51 = *(_DWORD *)(v33 + 136);
    *(_OWORD *)a4 = v42;
    *(_OWORD *)(a4 + 16) = v43;
    *(_OWORD *)(a4 + 32) = v44;
    *(_OWORD *)(a4 + 48) = v45;
    *(_OWORD *)(a4 + 64) = v46;
    *(_OWORD *)(a4 + 80) = v47;
    *(_OWORD *)(a4 + 96) = v48;
    *(_OWORD *)(a4 + 112) = v49;
    *(_QWORD *)(a4 + 128) = v50;
    *(_DWORD *)(a4 + 136) = v51;
  }
  return v31;
}
