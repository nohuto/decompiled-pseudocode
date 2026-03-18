/*
 * XREFs of SfnINLPUAHINITMENU @ 0x1C00FBD40
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
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall SfnINLPUAHINITMENU(
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
  __int64 v33; // rbx
  unsigned __int64 v35; // [rsp+48h] [rbp-E0h] BYREF
  __int128 v36; // [rsp+50h] [rbp-D8h]
  __int64 v37; // [rsp+60h] [rbp-C8h]
  _QWORD v38[12]; // [rsp+70h] [rbp-B8h] BYREF
  _QWORD v39[11]; // [rsp+D0h] [rbp-58h] BYREF
  char v40; // [rsp+130h] [rbp+8h] BYREF
  char v41; // [rsp+138h] [rbp+10h] BYREF
  int v42; // [rsp+140h] [rbp+18h] BYREF
  __int64 v43; // [rsp+148h] [rbp+20h]

  v10 = a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = (__int64)a1 - *(_QWORD *)(ThreadWin32Thread + 448);
  else
    v14 = 0LL;
  memset(v38, 0, 0x40uLL);
  v43 = 0LL;
  v18 = ServerFixupMenuDC(*(HDC *)(a4 + 8));
  if ( v18 )
  {
    v43 = *(_QWORD *)(a4 + 8);
    *(_QWORD *)(a4 + 8) = v18;
  }
  v38[0] = v14;
  LODWORD(v38[1]) = v10 & 0x1FFFF;
  v38[2] = a3;
  *(_DWORD *)(a4 + 20) = 0;
  *(_OWORD *)&v38[3] = *(_OWORD *)a4;
  v38[5] = *(_QWORD *)(a4 + 16);
  v38[6] = a5;
  v38[7] = a6;
  v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v16, v17);
  v39[0] = *(_QWORD *)(v19 + 392);
  *(_QWORD *)(v19 + 392) = v39;
  v39[1] = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v22 = *(_QWORD *)(v13 + 456);
  v36 = *(_OWORD *)(v22 + 64);
  v37 = *(_QWORD *)(v22 + 80);
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
    (ReleaseAndReacquirePerObjectLocks *)&v40,
    gdwInAtomicOperation,
    v20,
    v21);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v41);
  EtwTraceBeginCallback(108LL);
  v25 = KeUserModeCallback(108LL, v38, 64LL, &v35, &v42);
  EtwTraceEndCallback(108LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v41);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v40,
    v26,
    v27,
    v28);
  ThreadUnlock1(v30, v29);
  v31 = *(_QWORD *)(v13 + 456);
  *(_OWORD *)(v31 + 64) = v36;
  *(_QWORD *)(v31 + 80) = v37;
  if ( v25 < 0 || v42 != 24 )
    return 0LL;
  v32 = (__int64 *)v35;
  if ( v35 + 8 < v35 || v35 + 8 > MmUserProbeAddress )
    v32 = (__int64 *)MmUserProbeAddress;
  v33 = *v32;
  v38[8] = *v32;
  if ( v18 )
  {
    _ReleaseDC(v18);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
      *(_QWORD *)(a4 + 8) = v43;
  }
  return v33;
}
