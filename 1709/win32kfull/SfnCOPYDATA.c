/*
 * XREFs of SfnCOPYDATA @ 0x1C0109C50
 * Callers:
 *     xxxSendShutdownData @ 0x1C0141AF4 (xxxSendShutdownData.c)
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
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall SfnCOPYDATA(volatile signed __int32 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // r15
  __int64 v10; // rsi
  unsigned int v11; // r13d
  __int64 v12; // rdx
  unsigned __int8 *v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // edi
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 *v32; // rcx
  __int64 v33; // rdi
  PVOID *v34; // rdx
  char v36; // [rsp+30h] [rbp-358h] BYREF
  _BYTE v37[7]; // [rsp+31h] [rbp-357h] BYREF
  unsigned __int8 *v38; // [rsp+38h] [rbp-350h]
  int v39; // [rsp+40h] [rbp-348h]
  _DWORD v40[7]; // [rsp+44h] [rbp-344h] BYREF
  __int64 v41; // [rsp+60h] [rbp-328h]
  unsigned __int64 v42; // [rsp+68h] [rbp-320h] BYREF
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-318h] BYREF
  __int128 v44; // [rsp+78h] [rbp-310h]
  __int64 v45; // [rsp+88h] [rbp-300h]
  __int64 v46; // [rsp+90h] [rbp-2F8h]
  _QWORD v47[3]; // [rsp+B0h] [rbp-2D8h] BYREF
  _QWORD v48[3]; // [rsp+C8h] [rbp-2C0h] BYREF
  _DWORD v49[28]; // [rsp+E0h] [rbp-2A8h] BYREF
  unsigned __int8 v50[512]; // [rsp+150h] [rbp-238h] BYREF

  v41 = a3;
  v39 = a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v9 = ThreadWin32Thread;
  if ( a1 )
    v10 = (__int64)a1 - *(_QWORD *)(ThreadWin32Thread + 448);
  else
    v10 = 0LL;
  if ( a4 )
  {
    v11 = *(_DWORD *)(a4 + 8);
    v13 = AllocCallbackMessage(112, 1u, v11, v50, 1, 0x200uLL);
    v38 = v13;
    if ( !v13 )
      return 0LL;
  }
  else
  {
    v11 = 0;
    v13 = (unsigned __int8 *)v49;
    v38 = (unsigned __int8 *)v49;
    memset(v49, 0, sizeof(v49));
    v49[0] = 112;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v14, v15);
  if ( v13 != (unsigned __int8 *)v49 && v13 != v50 )
    PushW32ThreadLock((__int64)v13, v48, (__int64)Win32FreePool, v18);
  *((_QWORD *)v13 + 5) = v10;
  *((_DWORD *)v13 + 12) = v39;
  *((_QWORD *)v13 + 7) = v41;
  if ( a4 )
  {
    *((_DWORD *)v13 + 16) = 1;
    *(_DWORD *)(a4 + 12) = 0;
    *(_OWORD *)(v13 + 72) = *(_OWORD *)a4;
    *((_QWORD *)v13 + 11) = *(_QWORD *)(a4 + 16);
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v13, *(char **)(a4 + 16), v11, (void **)v13 + 11) < 0 )
      goto LABEL_32;
  }
  else
  {
    *((_DWORD *)v13 + 16) = 0;
  }
  *((_QWORD *)v13 + 12) = a5;
  *((_QWORD *)v13 + 13) = a6;
  v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v17, v18);
  v47[0] = *(_QWORD *)(v19 + 392);
  *(_QWORD *)(v19 + 392) = v47;
  v47[1] = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v22 = *(_QWORD *)(v9 + 456);
  v44 = *(_OWORD *)(v22 + 64);
  v45 = *(_QWORD *)(v22 + 80);
  *(_QWORD *)(v22 + 72) = v10;
  if ( a1 )
    v23 = *(_QWORD *)a1;
  else
    v23 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v9 + 456) + 64LL) = v23;
  if ( a1 )
    v24 = *((_QWORD *)a1 + 35);
  else
    v24 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v9 + 456) + 80LL) = v24;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v37,
    gdwInAtomicOperation,
    v20,
    v21);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v36);
  EtwTraceBeginCallback(0LL);
  *((_QWORD *)v13 + 2) = 0LL;
  v25 = KeUserModeCallback(0LL, v13, *(unsigned int *)v13, &v42, v40);
  EtwTraceEndCallback(0LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v36);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v37,
    v26,
    v27,
    v28);
  ThreadUnlock1(v30, v29);
  v31 = *(_QWORD *)(v9 + 456);
  *(_OWORD *)(v31 + 64) = v44;
  *(_QWORD *)(v31 + 80) = v45;
  if ( v25 >= 0 && v40[0] == 24 )
  {
    v32 = (__int64 *)v42;
    if ( v42 + 8 < v42 || v42 + 8 > MmUserProbeAddress )
      v32 = (__int64 *)MmUserProbeAddress;
    v33 = *v32;
    v46 = *v32;
    goto LABEL_25;
  }
LABEL_32:
  v33 = 0LL;
LABEL_25:
  if ( v13 != (unsigned __int8 *)v49 && v13 != v50 )
  {
    v34 = (PVOID *)(v13 + 32);
    if ( *((_QWORD *)v13 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v34, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v48, (__int64)v34, v17, v18);
  }
  return v33;
}
