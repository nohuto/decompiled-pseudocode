/*
 * XREFs of SfnPOUTLPINT @ 0x1C01FF9E0
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
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00DE0CC (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

unsigned __int8 *__fastcall SfnPOUTLPINT(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v9; // r12d
  unsigned __int8 *v11; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r14
  __int64 v16; // rsi
  unsigned __int64 v17; // rax
  unsigned int v18; // ecx
  SIZE_T v19; // r13
  unsigned __int8 *result; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r9
  unsigned int v25; // r8d
  void *v26; // r12
  __int64 v27; // rdx
  int v28; // r11d
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  int v35; // edi
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 *v42; // rcx
  __int64 v43; // rdi
  ULONG64 v44; // rcx
  PVOID *v45; // rdx
  char v46; // [rsp+30h] [rbp-3A8h] BYREF
  _BYTE v47[3]; // [rsp+31h] [rbp-3A7h] BYREF
  unsigned int v48; // [rsp+34h] [rbp-3A4h]
  unsigned __int8 *v49; // [rsp+38h] [rbp-3A0h]
  _DWORD v50[8]; // [rsp+40h] [rbp-398h] BYREF
  void *v51; // [rsp+60h] [rbp-378h]
  unsigned __int64 v52[3]; // [rsp+68h] [rbp-370h] BYREF
  ULONG_PTR RegionSize; // [rsp+80h] [rbp-358h] BYREF
  __int128 v54; // [rsp+88h] [rbp-350h]
  __int64 v55; // [rsp+98h] [rbp-340h]
  __int128 v56; // [rsp+A0h] [rbp-338h]
  volatile void *Address; // [rsp+B0h] [rbp-328h]
  __int64 v58; // [rsp+B8h] [rbp-320h]
  _QWORD v59[3]; // [rsp+E0h] [rbp-2F8h] BYREF
  __int128 v60; // [rsp+F8h] [rbp-2E0h]
  volatile void *v61; // [rsp+108h] [rbp-2D0h]
  _QWORD v62[4]; // [rsp+110h] [rbp-2C8h] BYREF
  unsigned __int8 v63[96]; // [rsp+130h] [rbp-2A8h] BYREF
  unsigned __int8 v64[512]; // [rsp+190h] [rbp-248h] BYREF

  v51 = a4;
  v9 = a2;
  v11 = v63;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, (__int64)a4);
  v15 = ThreadWin32Thread;
  if ( a1 )
    v16 = (__int64)a1 - *(_QWORD *)(ThreadWin32Thread + 448);
  else
    v16 = 0LL;
  v17 = 4LL * (unsigned int)a3;
  v18 = -1;
  if ( v17 <= 0xFFFFFFFF )
    v18 = 4 * a3;
  v48 = v18;
  if ( v17 > 0xFFFFFFFF )
    goto LABEL_40;
  v19 = v18;
  result = AllocCallbackMessage(96, 1u, v18, v64, 0, 0x200uLL);
  v11 = result;
  v49 = result;
  if ( !result )
    return result;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21, v22, v23);
  if ( v11 != v63 && v11 != v64 )
    PushW32ThreadLock((__int64)v11, v62, (__int64)Win32FreePool, v24);
  *((_QWORD *)v11 + 5) = v16;
  *((_DWORD *)v11 + 12) = v9;
  *((_QWORD *)v11 + 7) = a3;
  *((_QWORD *)v11 + 8) = a5;
  *((_QWORD *)v11 + 9) = a6;
  if ( (a7 & 2) != 0 )
  {
    v25 = v48;
    *((_DWORD *)v11 + 22) = v48;
    v26 = v51;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v11, (char *)v51, v25, (void **)v11 + 10) < 0 )
      goto LABEL_40;
  }
  else
  {
    if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v11, v48, (void **)v11 + 10) < 0 )
      goto LABEL_40;
    *((_DWORD *)v11 + 22) = v28;
    v26 = v51;
  }
  v29 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27, v13, v14);
  v59[0] = *(_QWORD *)(v29 + 392);
  *(_QWORD *)(v29 + 392) = v59;
  v59[1] = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v32 = *(_QWORD *)(v15 + 456);
  v54 = *(_OWORD *)(v32 + 64);
  v55 = *(_QWORD *)(v32 + 80);
  *(_QWORD *)(v32 + 72) = v16;
  if ( a1 )
    v33 = *(_QWORD *)a1;
  else
    v33 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v15 + 456) + 64LL) = v33;
  if ( a1 )
    v34 = *((_QWORD *)a1 + 35);
  else
    v34 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v15 + 456) + 80LL) = v34;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v47,
    gdwInAtomicOperation,
    v30,
    v31);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v46);
  EtwTraceBeginCallback(37LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v35 = KeUserModeCallback(37LL, v11, *(unsigned int *)v11, v52, v50);
  EtwTraceEndCallback(37LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v46);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v47,
    v36,
    v37,
    v38);
  ThreadUnlock1(v40, v39);
  v41 = *(_QWORD *)(v15 + 456);
  *(_OWORD *)(v41 + 64) = v54;
  *(_QWORD *)(v41 + 80) = v55;
  if ( v35 >= 0 && v50[0] == 24 )
  {
    v42 = (__int64 *)v52[0];
    if ( v52[0] + 8 < v52[0] || v52[0] + 8 > MmUserProbeAddress )
      v42 = (__int64 *)MmUserProbeAddress;
    v43 = *v42;
    v58 = *v42;
    if ( v48 && (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
    {
      v44 = v52[0];
      if ( v52[0] + 24 < v52[0] || v52[0] + 24 > MmUserProbeAddress )
        v44 = MmUserProbeAddress;
      v56 = *(_OWORD *)v44;
      Address = *(volatile void **)(v44 + 16);
      v60 = v56;
      v61 = Address;
      ProbeForRead(Address, v19, 4u);
      memmove(v26, (const void *)Address, v19);
    }
    goto LABEL_41;
  }
LABEL_40:
  v43 = 0LL;
LABEL_41:
  if ( v11 != v63 && v11 != v64 )
  {
    v45 = (PVOID *)(v11 + 32);
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v45, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v62, (__int64)v45, v13, v14);
  }
  return (unsigned __int8 *)v43;
}
