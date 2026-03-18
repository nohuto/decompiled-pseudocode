/*
 * XREFs of xxxClientCallManipulationThread @ 0x1C0201440
 * Callers:
 *     ?xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z @ 0x1C020D430 (-xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?ReserveCaptureBytes@@YAJPEAU_CAPTUREBUF@@KPEAPEAX1@Z @ 0x1C005D044 (-ReserveCaptureBytes@@YAJPEAU_CAPTUREBUF@@KPEAPEAX1@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C005D0C4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

unsigned __int8 *__fastcall xxxClientCallManipulationThread(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int8 *result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int8 *v10; // rdi
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  ULONG_PTR *v20; // rcx
  ULONG_PTR v21; // rbx
  PVOID *v22; // rdx
  char v23; // [rsp+30h] [rbp-2B8h] BYREF
  _BYTE v24[3]; // [rsp+31h] [rbp-2B7h] BYREF
  int v25; // [rsp+34h] [rbp-2B4h] BYREF
  void *v26[2]; // [rsp+38h] [rbp-2B0h] BYREF
  unsigned __int64 v27; // [rsp+48h] [rbp-2A0h] BYREF
  ULONG_PTR RegionSize[4]; // [rsp+50h] [rbp-298h] BYREF
  _QWORD v29[3]; // [rsp+70h] [rbp-278h] BYREF
  unsigned __int8 v30[56]; // [rsp+88h] [rbp-260h] BYREF
  unsigned __int8 v31[512]; // [rsp+C0h] [rbp-228h] BYREF

  v26[0] = 0LL;
  result = AllocCallbackMessage(56, 1u, a3, v31, 1, 0x200uLL);
  v10 = result;
  v26[1] = result;
  if ( result )
  {
    W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, v8, v9);
    if ( v10 != v30 && v10 != v31 )
      PushW32ThreadLock((__int64)v10, v29, (__int64)Win32FreePool, v11);
    *((_QWORD *)v10 + 5) = a1;
    if ( (int)ReserveCaptureBytes((struct _CAPTUREBUF *)v10, a3, (void **)v10 + 6, v26) < 0 )
      goto LABEL_15;
    BuildManipulationInputInteropInfoMessage(v26[0], a3, a2);
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v24,
      gdwInAtomicOperation,
      v14,
      v15);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v23);
    EtwTraceBeginCallback(51LL);
    *((_QWORD *)v10 + 2) = 0LL;
    v16 = KeUserModeCallback(51LL, v10, *(unsigned int *)v10, &v27, &v25);
    EtwTraceEndCallback(51LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v23);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v24,
      v17,
      v18,
      v19);
    if ( v16 < 0 )
      goto LABEL_15;
    if ( v25 == 24 )
    {
      v20 = (ULONG_PTR *)v27;
      if ( v27 + 8 < v27 || v27 + 8 > MmUserProbeAddress )
        v20 = (ULONG_PTR *)MmUserProbeAddress;
      v21 = *v20;
      RegionSize[1] = *v20;
    }
    else
    {
LABEL_15:
      LODWORD(v21) = 0;
    }
    if ( v10 != v30 && v10 != v31 )
    {
      v22 = (PVOID *)(v10 + 32);
      if ( *((_QWORD *)v10 + 4) )
      {
        RegionSize[0] = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v22, RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)v29, (__int64)v22, v12, v13);
    }
    return (unsigned __int8 *)(unsigned int)v21;
  }
  return result;
}
