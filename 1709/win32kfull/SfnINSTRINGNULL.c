/*
 * XREFs of SfnINSTRINGNULL @ 0x1C005C9F0
 * Callers:
 *     ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1C0059548 (-_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z.c)
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C005AB94 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C005D0C4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00FCFF0 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0110214 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

unsigned __int8 *__fastcall SfnINSTRINGNULL(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int8 *v9; // rbx
  struct _KTHREAD *CurrentThread; // r15
  __int64 v11; // r13
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // r12
  unsigned int v14; // r15d
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned __int64 v18; // rax
  unsigned __int8 *result; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  struct _KTHREAD *v24; // r13
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  void **v29; // r9
  unsigned int v30; // r8d
  CHAR *v31; // rdx
  int v32; // eax
  unsigned int v33; // r8d
  __int64 v34; // rax
  struct _KTHREAD *v35; // r14
  __int64 v36; // rdi
  __int64 *v37; // rax
  __int64 v38; // r14
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  int v44; // edi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 *v48; // rcx
  __int64 v49; // rdi
  char v50; // [rsp+30h] [rbp-358h] BYREF
  _BYTE v51[3]; // [rsp+31h] [rbp-357h] BYREF
  unsigned int v52; // [rsp+34h] [rbp-354h]
  unsigned __int8 *v53; // [rsp+38h] [rbp-350h]
  unsigned int v54; // [rsp+40h] [rbp-348h]
  int v55[5]; // [rsp+44h] [rbp-344h] BYREF
  __int64 v56; // [rsp+58h] [rbp-330h]
  __int64 v57; // [rsp+68h] [rbp-320h]
  unsigned __int64 v58; // [rsp+70h] [rbp-318h] BYREF
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-310h] BYREF
  __int128 v60; // [rsp+80h] [rbp-308h]
  __int64 v61; // [rsp+90h] [rbp-2F8h]
  __int64 v62; // [rsp+98h] [rbp-2F0h]
  _QWORD v63[3]; // [rsp+B8h] [rbp-2D0h] BYREF
  _BYTE v64[32]; // [rsp+D0h] [rbp-2B8h] BYREF
  _DWORD v65[24]; // [rsp+F0h] [rbp-298h] BYREF
  unsigned __int8 v66[512]; // [rsp+150h] [rbp-238h] BYREF

  v57 = a3;
  v54 = a2;
  v9 = (unsigned __int8 *)v65;
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  v56 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v11 = *ThreadWin32Thread;
      v56 = *ThreadWin32Thread;
    }
  }
  if ( a1 )
    v13 = (__int64)a1 - *(_QWORD *)(v11 + 448);
  else
    v13 = 0LL;
  v14 = 0;
  v15 = 0;
  v52 = 0;
  if ( a4 && (*(_QWORD *)(a4 + 8) >= (unsigned __int64)MmSystemRangeStart || *(_DWORD *)(a4 + 4) >> 31 != (a7 & 1)) )
  {
    v14 = 1;
    v16 = *(_DWORD *)a4;
    v17 = *(_DWORD *)a4 + 2;
    v15 = -1;
    if ( v17 >= *(_DWORD *)a4 )
      v15 = *(_DWORD *)a4 + 2;
    v52 = v15;
    if ( v17 < v16 )
      goto LABEL_65;
    if ( *(int *)(a4 + 4) < 0 && (a7 & 1) == 0 )
    {
      v18 = 2LL * v15;
      v15 = -1;
      if ( v18 <= 0xFFFFFFFF )
        v15 = v18;
      v52 = v15;
      if ( v18 > 0xFFFFFFFF )
        goto LABEL_65;
    }
  }
  if ( v14 )
  {
    result = (unsigned __int8 *)AllocCallbackMessage(0x58u, v14, v15, v66, 1, 0x200uLL);
    v9 = result;
    v53 = result;
    if ( !result )
      return result;
  }
  else
  {
    v9 = (unsigned __int8 *)v65;
    v53 = (unsigned __int8 *)v65;
    memset(v65, 0, 0x58uLL);
    v65[0] = 88;
  }
  v24 = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v21, v20, v22, v23) )
    PsGetThreadWin32Thread(v24);
  if ( v9 != (unsigned __int8 *)v65 && v9 != v66 )
    PushW32ThreadLock(v9, v64, Win32FreePool);
  *((_QWORD *)v9 + 5) = v13;
  *((_DWORD *)v9 + 12) = v54;
  *((_QWORD *)v9 + 7) = v57;
  if ( v14 )
  {
    v29 = (void **)(v9 + 80);
    v30 = *(_DWORD *)a4;
    v31 = *(CHAR **)(a4 + 8);
    if ( *(int *)(a4 + 4) < 0 )
    {
      if ( (a7 & 1) == 0 )
      {
        v32 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v9, v31, 2 * v30 + 2, v29);
LABEL_36:
        if ( v32 < 0 )
          goto LABEL_65;
        goto LABEL_42;
      }
      v33 = v30 + 1;
    }
    else
    {
      if ( (a7 & 1) != 0 )
      {
        v32 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v9, (PCWCH)v31, (v30 >> 1) + 1, v29);
        goto LABEL_36;
      }
      v33 = v30 + 2;
    }
    v32 = CaptureCallbackData((struct _CAPTUREBUF *)v9, v31, v33, v29);
    goto LABEL_36;
  }
  if ( a4 )
    v34 = *(_QWORD *)(a4 + 8);
  else
    v34 = 0LL;
  *((_QWORD *)v9 + 10) = v34;
LABEL_42:
  *((_QWORD *)v9 + 8) = a5;
  *((_QWORD *)v9 + 9) = a6;
  v35 = KeGetCurrentThread();
  v36 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v26, v25, v27, v28) )
  {
    v37 = (__int64 *)PsGetThreadWin32Thread(v35);
    if ( v37 )
      v36 = *v37;
  }
  v63[0] = *(_QWORD *)(v36 + 392);
  *(_QWORD *)(v36 + 392) = v63;
  v63[1] = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v38 = v56;
  v39 = *(_QWORD *)(v56 + 456);
  v60 = *(_OWORD *)(v39 + 64);
  v61 = *(_QWORD *)(v39 + 80);
  *(_QWORD *)(v39 + 72) = v13;
  if ( a1 )
    v40 = *(_QWORD *)a1;
  else
    v40 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v38 + 456) + 64LL) = v40;
  if ( a1 )
    v41 = *((_QWORD *)a1 + 35);
  else
    v41 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v38 + 456) + 80LL) = v41;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v51);
  if ( ExIsResourceAcquiredExclusiveLite(gpresUser) || (v50 = 1, !ExIsResourceAcquiredSharedLite(gpresUser)) )
    v50 = 0;
  UserSessionSwitchLeaveCrit(v43, v42);
  EtwTraceBeginCallback(27LL);
  *((_QWORD *)v9 + 2) = 0LL;
  v44 = KeUserModeCallback(27LL, v9, *(unsigned int *)v9, &v58, v55);
  EtwTraceEndCallback(27LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v50);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v51);
  ThreadUnlock1(v46, v45);
  v47 = *(_QWORD *)(v38 + 456);
  *(_OWORD *)(v47 + 64) = v60;
  *(_QWORD *)(v47 + 80) = v61;
  if ( v44 >= 0 && v55[0] == 24 )
  {
    v48 = (__int64 *)v58;
    if ( v58 + 8 < v58 || v58 + 8 > MmUserProbeAddress )
      v48 = (__int64 *)MmUserProbeAddress;
    v49 = *v48;
    v62 = *v48;
    goto LABEL_66;
  }
LABEL_65:
  v49 = 0LL;
LABEL_66:
  if ( v9 != (unsigned __int8 *)v65 && v9 != v66 )
  {
    if ( *((_QWORD *)v9 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v9 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(v64);
  }
  return (unsigned __int8 *)v49;
}
