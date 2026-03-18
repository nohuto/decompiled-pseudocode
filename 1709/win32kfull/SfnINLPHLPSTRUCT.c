/*
 * XREFs of SfnINLPHLPSTRUCT @ 0x1C01FC7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C005AB94 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C005D0C4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

unsigned __int8 *__fastcall SfnINLPHLPSTRUCT(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        char *a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v8; // r13d
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // r14
  __int64 v12; // rsi
  unsigned __int8 *result; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int8 *v17; // rbx
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // edi
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 *v35; // rcx
  __int64 v36; // rdi
  PVOID *v37; // rdx
  char v38; // [rsp+30h] [rbp-338h] BYREF
  _BYTE v39[3]; // [rsp+31h] [rbp-337h] BYREF
  _DWORD v40[5]; // [rsp+34h] [rbp-334h] BYREF
  unsigned __int8 *v41; // [rsp+48h] [rbp-320h]
  unsigned __int64 v42; // [rsp+58h] [rbp-310h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-308h] BYREF
  __int128 v44; // [rsp+68h] [rbp-300h]
  __int64 v45; // [rsp+78h] [rbp-2F0h]
  __int64 v46; // [rsp+80h] [rbp-2E8h]
  _QWORD v47[3]; // [rsp+A0h] [rbp-2C8h] BYREF
  _QWORD v48[3]; // [rsp+B8h] [rbp-2B0h] BYREF
  unsigned __int8 v49[96]; // [rsp+D0h] [rbp-298h] BYREF
  unsigned __int8 v50[512]; // [rsp+130h] [rbp-238h] BYREF

  v8 = a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, (__int64)a4);
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(ThreadWin32Thread + 448);
  else
    v12 = 0LL;
  result = AllocCallbackMessage(88, 1u, *(unsigned __int16 *)a4, v50, 1, 0x200uLL);
  v17 = result;
  v41 = result;
  if ( result )
  {
    W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15, v16);
    if ( v17 != v49 && v17 != v50 )
      PushW32ThreadLock((__int64)v17, v48, (__int64)Win32FreePool, v18);
    *((_QWORD *)v17 + 5) = v12;
    *((_DWORD *)v17 + 12) = v8;
    *((_QWORD *)v17 + 7) = a3;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v17, a4, *(unsigned __int16 *)a4, (void **)v17 + 8) < 0 )
      goto LABEL_26;
    *((_QWORD *)v17 + 9) = a5;
    *((_QWORD *)v17 + 10) = a6;
    v22 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19, v20, v21);
    v47[0] = *(_QWORD *)(v22 + 392);
    *(_QWORD *)(v22 + 392) = v47;
    v47[1] = a1;
    if ( a1 )
      _InterlockedIncrement(a1 + 2);
    v25 = *(_QWORD *)(v11 + 456);
    v44 = *(_OWORD *)(v25 + 64);
    v45 = *(_QWORD *)(v25 + 80);
    *(_QWORD *)(v25 + 72) = v12;
    if ( a1 )
      v26 = *(_QWORD *)a1;
    else
      v26 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v11 + 456) + 64LL) = v26;
    if ( a1 )
      v27 = *((_QWORD *)a1 + 35);
    else
      v27 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v11 + 456) + 80LL) = v27;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v39,
      gdwInAtomicOperation,
      v23,
      v24);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v38);
    EtwTraceBeginCallback(14LL);
    *((_QWORD *)v17 + 2) = 0LL;
    v28 = KeUserModeCallback(14LL, v17, *(unsigned int *)v17, &v42, v40);
    EtwTraceEndCallback(14LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v38);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v39,
      v29,
      v30,
      v31);
    ThreadUnlock1(v33, v32);
    v34 = *(_QWORD *)(v11 + 456);
    *(_OWORD *)(v34 + 64) = v44;
    *(_QWORD *)(v34 + 80) = v45;
    if ( v28 < 0 )
      goto LABEL_26;
    if ( v40[0] == 24 )
    {
      v35 = (__int64 *)v42;
      if ( v42 + 8 < v42 || v42 + 8 > MmUserProbeAddress )
        v35 = (__int64 *)MmUserProbeAddress;
      v36 = *v35;
      v46 = *v35;
    }
    else
    {
LABEL_26:
      v36 = 0LL;
    }
    if ( v17 != v49 && v17 != v50 )
    {
      v37 = (PVOID *)(v17 + 32);
      if ( *((_QWORD *)v17 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v37, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)v48, (__int64)v37, v20, v21);
    }
    return (unsigned __int8 *)v36;
  }
  return result;
}
