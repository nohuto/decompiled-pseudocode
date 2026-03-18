/*
 * XREFs of SfnINDEVICECHANGE @ 0x1C00FFBF0
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

__int64 __fastcall SfnINDEVICECHANGE(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        char *a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // r13
  __int64 v13; // r14
  unsigned int v14; // r15d
  __int64 v15; // rdx
  unsigned __int8 *v16; // rbx
  __int64 v17; // r8
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
  PVOID *v38; // rdx
  char v39; // [rsp+30h] [rbp-348h] BYREF
  _BYTE v40[3]; // [rsp+31h] [rbp-347h] BYREF
  int v41; // [rsp+34h] [rbp-344h]
  _DWORD v42[6]; // [rsp+38h] [rbp-340h] BYREF
  unsigned __int8 *v43; // [rsp+50h] [rbp-328h]
  unsigned __int64 v44; // [rsp+60h] [rbp-318h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-310h] BYREF
  __int128 v46; // [rsp+70h] [rbp-308h]
  __int64 v47; // [rsp+80h] [rbp-2F8h]
  __int64 v48; // [rsp+88h] [rbp-2F0h]
  _QWORD v49[3]; // [rsp+A8h] [rbp-2D0h] BYREF
  _QWORD v50[4]; // [rsp+C0h] [rbp-2B8h] BYREF
  unsigned __int8 v51[96]; // [rsp+E0h] [rbp-298h] BYREF
  unsigned __int8 v52[512]; // [rsp+140h] [rbp-238h] BYREF
  int v53; // [rsp+3B0h] [rbp+38h]

  v41 = a2;
  v53 = a7 & 1;
  v10 = (unsigned __int16)a3 & 0x8000;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, (__int64)a4);
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = (__int64)a1 - *(_QWORD *)(ThreadWin32Thread + 448);
  else
    v13 = 0LL;
  v14 = 0;
  if ( v10 && a4 && a4 >= MmSystemRangeStart )
    v14 = *(_DWORD *)a4;
  v16 = AllocCallbackMessage(96, 1u, v14, v52, 1, 0x200uLL);
  v43 = v16;
  if ( !v16 )
    return 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v17, v18);
  if ( v16 != v51 && v16 != v52 )
    PushW32ThreadLock((__int64)v16, v50, (__int64)Win32FreePool, v21);
  *((_QWORD *)v16 + 5) = v13;
  *((_DWORD *)v16 + 12) = v41;
  *((_QWORD *)v16 + 7) = a3;
  if ( v14 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v16, a4, *(_DWORD *)a4, (void **)v16 + 10) < 0 )
      goto LABEL_34;
  }
  else
  {
    *((_QWORD *)v16 + 10) = a4;
  }
  *((_DWORD *)v16 + 22) = v53;
  *((_QWORD *)v16 + 8) = a5;
  *((_QWORD *)v16 + 9) = a6;
  v22 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19, v20, v21);
  v49[0] = *(_QWORD *)(v22 + 392);
  *(_QWORD *)(v22 + 392) = v49;
  v49[1] = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v25 = *(_QWORD *)(v12 + 456);
  v46 = *(_OWORD *)(v25 + 64);
  v47 = *(_QWORD *)(v25 + 80);
  *(_QWORD *)(v25 + 72) = v13;
  if ( a1 )
    v26 = *(_QWORD *)a1;
  else
    v26 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 456) + 64LL) = v26;
  if ( a1 )
    v27 = *((_QWORD *)a1 + 35);
  else
    v27 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 456) + 80LL) = v27;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v40,
    gdwInAtomicOperation,
    v23,
    v24);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v39);
  EtwTraceBeginCallback(28LL);
  *((_QWORD *)v16 + 2) = 0LL;
  v28 = KeUserModeCallback(28LL, v16, *(unsigned int *)v16, &v44, v42);
  EtwTraceEndCallback(28LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v39);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v40,
    v29,
    v30,
    v31);
  ThreadUnlock1(v33, v32);
  v34 = *(_QWORD *)(v12 + 456);
  *(_OWORD *)(v34 + 64) = v46;
  *(_QWORD *)(v34 + 80) = v47;
  if ( v28 >= 0 && v42[0] == 24 )
  {
    v35 = (__int64 *)v44;
    if ( v44 + 8 < v44 || v44 + 8 > MmUserProbeAddress )
      v35 = (__int64 *)MmUserProbeAddress;
    v36 = *v35;
    v48 = *v35;
    goto LABEL_25;
  }
LABEL_34:
  v36 = 0LL;
LABEL_25:
  if ( v16 != v51 && v16 != v52 )
  {
    v38 = (PVOID *)(v16 + 32);
    if ( *((_QWORD *)v16 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v38, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v50, (__int64)v38, v20, v21);
  }
  return v36;
}
