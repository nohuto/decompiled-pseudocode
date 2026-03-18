/*
 * XREFs of SfnINOUTLPPOINT5 @ 0x1C005ACC0
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

__int64 __fastcall SfnINOUTLPPOINT5(
        volatile signed __int32 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 *v23; // rcx
  __int64 v24; // r8
  ULONG64 v25; // rcx
  __int128 v26; // xmm1
  __int64 v27; // xmm0_8
  char v29; // [rsp+30h] [rbp-108h] BYREF
  _BYTE v30[3]; // [rsp+31h] [rbp-107h] BYREF
  _DWORD v31[5]; // [rsp+34h] [rbp-104h] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-F0h] BYREF
  __int128 v33; // [rsp+58h] [rbp-E0h]
  __int64 v34; // [rsp+68h] [rbp-D0h]
  __int64 v35; // [rsp+70h] [rbp-C8h]
  _QWORD v36[3]; // [rsp+98h] [rbp-A0h] BYREF
  _QWORD v37[10]; // [rsp+B0h] [rbp-88h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = (__int64)a1 - *(_QWORD *)(ThreadWin32Thread + 448);
  else
    v14 = 0LL;
  memset(v37, 0, sizeof(v37));
  v37[0] = v14;
  LODWORD(v37[1]) = a2;
  v37[2] = a3;
  *(_OWORD *)&v37[3] = *(_OWORD *)a4;
  *(_OWORD *)&v37[5] = *(_OWORD *)(a4 + 16);
  v37[7] = *(_QWORD *)(a4 + 32);
  v37[8] = a5;
  v37[9] = a6;
  v15 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v36[0] = *(_QWORD *)(v15 + 392);
  *(_QWORD *)(v15 + 392) = v36;
  v36[1] = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v16 = *(_QWORD *)(v13 + 456);
  v33 = *(_OWORD *)(v16 + 64);
  v34 = *(_QWORD *)(v16 + 80);
  *(_QWORD *)(v16 + 72) = v14;
  if ( a1 )
    v17 = *(_QWORD *)a1;
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 456) + 64LL) = v17;
  if ( a1 )
    v18 = *((_QWORD *)a1 + 35);
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 456) + 80LL) = v18;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v30);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v29);
  EtwTraceBeginCallback(18LL);
  v19 = KeUserModeCallback(18LL, v37, 80LL, &v32, v31);
  EtwTraceEndCallback(18LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v29);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v30);
  ThreadUnlock1(v21, v20);
  v22 = *(_QWORD *)(v13 + 456);
  *(_OWORD *)(v22 + 64) = v33;
  *(_QWORD *)(v22 + 80) = v34;
  if ( v19 < 0 || v31[0] != 24 )
    return 0LL;
  v23 = (__int64 *)v32;
  if ( v32 + 8 < v32 || v32 + 8 > MmUserProbeAddress )
    v23 = (__int64 *)MmUserProbeAddress;
  v24 = *v23;
  v35 = *v23;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v25 = *(_QWORD *)(v32 + 16);
    if ( v25 + 40 < v25 || v25 + 40 > MmUserProbeAddress )
      v25 = MmUserProbeAddress;
    v26 = *(_OWORD *)(v25 + 16);
    v27 = *(_QWORD *)(v25 + 32);
    *(_OWORD *)a4 = *(_OWORD *)v25;
    *(_OWORD *)(a4 + 16) = v26;
    *(_QWORD *)(a4 + 32) = v27;
  }
  return v24;
}
