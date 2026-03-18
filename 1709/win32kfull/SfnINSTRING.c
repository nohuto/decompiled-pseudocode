/*
 * XREFs of SfnINSTRING @ 0x1C0059620
 * Callers:
 *     ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1C0059548 (-_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z.c)
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
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00FCFF0 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0110214 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

unsigned __int8 *__fastcall SfnINSTRING(
        volatile signed __int32 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int8 *v9; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // r13
  __int64 v12; // r12
  unsigned int v13; // edx
  unsigned int v14; // r15d
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // edi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 *v24; // rcx
  __int64 v25; // rdi
  unsigned __int8 *result; // rax
  unsigned int v27; // ecx
  unsigned int v28; // eax
  unsigned __int64 v29; // rax
  void **v30; // r9
  unsigned int v31; // r8d
  CHAR *v32; // rdx
  int v33; // eax
  unsigned int v34; // r8d
  char v35; // [rsp+30h] [rbp-348h] BYREF
  _BYTE v36[3]; // [rsp+31h] [rbp-347h] BYREF
  unsigned int v37; // [rsp+34h] [rbp-344h]
  unsigned __int8 *v38; // [rsp+38h] [rbp-340h]
  unsigned int v39; // [rsp+40h] [rbp-338h]
  int v40[7]; // [rsp+44h] [rbp-334h] BYREF
  __int64 v41; // [rsp+60h] [rbp-318h]
  unsigned __int64 v42; // [rsp+68h] [rbp-310h] BYREF
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-308h] BYREF
  __int128 v44; // [rsp+78h] [rbp-300h]
  __int64 v45; // [rsp+88h] [rbp-2F0h]
  __int64 v46; // [rsp+90h] [rbp-2E8h]
  _QWORD v47[3]; // [rsp+B0h] [rbp-2C8h] BYREF
  _BYTE v48[24]; // [rsp+C8h] [rbp-2B0h] BYREF
  _DWORD v49[24]; // [rsp+E0h] [rbp-298h] BYREF
  unsigned __int8 v50[512]; // [rsp+140h] [rbp-238h] BYREF

  v41 = a3;
  v39 = a2;
  v9 = (unsigned __int8 *)v49;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(ThreadWin32Thread + 448);
  else
    v12 = 0LL;
  if ( a4 && (*(_QWORD *)(a4 + 8) >= (unsigned __int64)MmSystemRangeStart || *(_DWORD *)(a4 + 4) >> 31 != (a7 & 1)) )
  {
    v14 = 1;
    v27 = *(_DWORD *)a4;
    v28 = *(_DWORD *)a4 + 2;
    v13 = -1;
    if ( v28 >= *(_DWORD *)a4 )
      v13 = *(_DWORD *)a4 + 2;
    v37 = v13;
    if ( v28 < v27 )
      goto LABEL_31;
    if ( *(int *)(a4 + 4) < 0 && (a7 & 1) == 0 )
    {
      v29 = 2LL * v13;
      v13 = -1;
      if ( v29 <= 0xFFFFFFFF )
        v13 = v29;
      v37 = v13;
      if ( v29 > 0xFFFFFFFF )
        goto LABEL_31;
    }
  }
  else
  {
    v13 = 0;
    v37 = 0;
    v14 = 0;
  }
  if ( v14 )
  {
    result = (unsigned __int8 *)AllocCallbackMessage(0x58u, v14, v13, v50, 1, 0x200uLL);
    v9 = result;
    v38 = result;
    if ( !result )
      return result;
  }
  else
  {
    v9 = (unsigned __int8 *)v49;
    v38 = (unsigned __int8 *)v49;
    memset(v49, 0, 0x58uLL);
    v49[0] = 88;
  }
  W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( v9 != (unsigned __int8 *)v49 && v9 != v50 )
    PushW32ThreadLock(v9, v48, Win32FreePool);
  *((_QWORD *)v9 + 5) = v12;
  *((_DWORD *)v9 + 12) = v39;
  *((_QWORD *)v9 + 7) = v41;
  if ( v14 )
  {
    v30 = (void **)(v9 + 80);
    v31 = *(_DWORD *)a4;
    v32 = *(CHAR **)(a4 + 8);
    if ( *(int *)(a4 + 4) < 0 )
    {
      if ( (a7 & 1) == 0 )
      {
        v33 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v9, v32, 2 * v31 + 2, v30);
LABEL_54:
        if ( v33 < 0 )
          goto LABEL_31;
        goto LABEL_14;
      }
      v34 = v31 + 1;
    }
    else
    {
      if ( (a7 & 1) != 0 )
      {
        v33 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v9, (PCWCH)v32, (v31 >> 1) + 1, v30);
        goto LABEL_54;
      }
      v34 = v31 + 2;
    }
    v33 = CaptureCallbackData((struct _CAPTUREBUF *)v9, v32, v34, v30);
    goto LABEL_54;
  }
  if ( a4 )
    v15 = *(_QWORD *)(a4 + 8);
  else
    v15 = 0LL;
  *((_QWORD *)v9 + 10) = v15;
LABEL_14:
  *((_QWORD *)v9 + 8) = a5;
  *((_QWORD *)v9 + 9) = a6;
  v16 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v47[0] = *(_QWORD *)(v16 + 392);
  *(_QWORD *)(v16 + 392) = v47;
  v47[1] = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v17 = *(_QWORD *)(v11 + 456);
  v44 = *(_OWORD *)(v17 + 64);
  v45 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v12;
  if ( a1 )
    v18 = *(_QWORD *)a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 456) + 64LL) = v18;
  if ( a1 )
    v19 = *((_QWORD *)a1 + 35);
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 456) + 80LL) = v19;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v36);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v35);
  EtwTraceBeginCallback(26LL);
  *((_QWORD *)v9 + 2) = 0LL;
  v20 = KeUserModeCallback(26LL, v9, *(unsigned int *)v9, &v42, v40);
  EtwTraceEndCallback(26LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v35);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v36);
  ThreadUnlock1(v22, v21);
  v23 = *(_QWORD *)(v11 + 456);
  *(_OWORD *)(v23 + 64) = v44;
  *(_QWORD *)(v23 + 80) = v45;
  if ( v20 >= 0 && v40[0] == 24 )
  {
    v24 = (__int64 *)v42;
    if ( v42 + 8 < v42 || v42 + 8 > MmUserProbeAddress )
      v24 = (__int64 *)MmUserProbeAddress;
    v25 = *v24;
    v46 = *v24;
    goto LABEL_29;
  }
LABEL_31:
  v25 = 0LL;
LABEL_29:
  if ( v9 != (unsigned __int8 *)v49 && v9 != v50 )
  {
    if ( *((_QWORD *)v9 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v9 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(v48);
  }
  return (unsigned __int8 *)v25;
}
