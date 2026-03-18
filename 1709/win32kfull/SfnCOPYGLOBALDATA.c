/*
 * XREFs of SfnCOPYGLOBALDATA @ 0x1C01FA390
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
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

unsigned __int8 *__fastcall SfnCOPYGLOBALDATA(volatile signed __int32 *a1, __int64 a2, __int64 a3, char *a4)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // r14
  __int64 v9; // rsi
  unsigned __int8 *result; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int8 *v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // edi
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 *v31; // rcx
  __int64 v32; // rdi
  PVOID *v33; // rdx
  char v34; // [rsp+30h] [rbp-328h] BYREF
  _BYTE v35[3]; // [rsp+31h] [rbp-327h] BYREF
  _DWORD v36[5]; // [rsp+34h] [rbp-324h] BYREF
  unsigned __int8 *v37; // [rsp+48h] [rbp-310h]
  unsigned __int64 v38; // [rsp+58h] [rbp-300h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-2F8h] BYREF
  __int128 v40; // [rsp+68h] [rbp-2F0h]
  __int64 v41; // [rsp+78h] [rbp-2E0h]
  __int64 v42; // [rsp+80h] [rbp-2D8h]
  _QWORD v43[3]; // [rsp+A0h] [rbp-2B8h] BYREF
  _QWORD v44[3]; // [rsp+B8h] [rbp-2A0h] BYREF
  unsigned __int8 v45[64]; // [rsp+D0h] [rbp-288h] BYREF
  unsigned __int8 v46[512]; // [rsp+110h] [rbp-248h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, (__int64)a4);
  v8 = ThreadWin32Thread;
  if ( a1 )
    v9 = (__int64)a1 - *(_QWORD *)(ThreadWin32Thread + 448);
  else
    v9 = 0LL;
  result = AllocCallbackMessage(56, 1u, a3, v46, 1, 0x200uLL);
  v14 = result;
  v37 = result;
  if ( result )
  {
    W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13);
    if ( v14 != v45 && v14 != v46 )
      PushW32ThreadLock((__int64)v14, v44, (__int64)Win32FreePool, v16);
    if ( !a4 )
      goto LABEL_27;
    *((_DWORD *)v14 + 10) = a3;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v14, a4, a3, (void **)v14 + 6) < 0 )
      goto LABEL_27;
    v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v15, v16);
    v43[0] = *(_QWORD *)(v18 + 392);
    *(_QWORD *)(v18 + 392) = v43;
    v43[1] = a1;
    if ( a1 )
      _InterlockedAdd(a1 + 2, 1u);
    v21 = *(_QWORD *)(v8 + 456);
    v40 = *(_OWORD *)(v21 + 64);
    v41 = *(_QWORD *)(v21 + 80);
    *(_QWORD *)(v21 + 72) = v9;
    if ( a1 )
      v22 = *(_QWORD *)a1;
    else
      v22 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v8 + 456) + 64LL) = v22;
    if ( a1 )
      v23 = *((_QWORD *)a1 + 35);
    else
      v23 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v8 + 456) + 80LL) = v23;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v35,
      gdwInAtomicOperation,
      v19,
      v20);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v34);
    EtwTraceBeginCallback(1LL);
    *((_QWORD *)v14 + 2) = 0LL;
    v24 = KeUserModeCallback(1LL, v14, *(unsigned int *)v14, &v38, v36);
    EtwTraceEndCallback(1LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v34);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v35,
      v25,
      v26,
      v27);
    ThreadUnlock1(v29, v28);
    v30 = *(_QWORD *)(v8 + 456);
    *(_OWORD *)(v30 + 64) = v40;
    *(_QWORD *)(v30 + 80) = v41;
    if ( v24 < 0 )
      goto LABEL_27;
    if ( v36[0] == 24 )
    {
      v31 = (__int64 *)v38;
      if ( v38 + 8 < v38 || v38 + 8 > MmUserProbeAddress )
        v31 = (__int64 *)MmUserProbeAddress;
      v32 = *v31;
      v42 = *v31;
    }
    else
    {
LABEL_27:
      v32 = 0LL;
    }
    if ( v14 != v45 && v14 != v46 )
    {
      v33 = (PVOID *)(v14 + 32);
      if ( *((_QWORD *)v14 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v33, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)v44, (__int64)v33, v15, v16);
    }
    return (unsigned __int8 *)v32;
  }
  return result;
}
