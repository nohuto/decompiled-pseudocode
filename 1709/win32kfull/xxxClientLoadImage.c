/*
 * XREFs of xxxClientLoadImage @ 0x1C00522F0
 * Callers:
 *     xxxUpdateSystemCursorFromRegistry @ 0x1C00515F0 (xxxUpdateSystemCursorFromRegistry.c)
 *     xxxSetMonitorIcoCurIndex @ 0x1C0051864 (xxxSetMonitorIcoCurIndex.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C0117350 (xxxUpdateSystemIconsFromRegistry.c)
 *     ?xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ @ 0x1C01BC2FC (-xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01BC380 (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C0053EA8 (HMValidateHandleNoRip.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C005AB94 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C005D0C4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall xxxClientLoadImage(
        void **a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned __int16 v9; // ax
  unsigned int v10; // ecx
  unsigned int v11; // edx
  unsigned __int8 *v12; // rdi
  unsigned __int16 v13; // ax
  int v14; // ebx
  __int64 v15; // rdx
  __int64 *v16; // rbx
  __int64 v17; // rbx
  char v19; // [rsp+30h] [rbp-2D8h] BYREF
  _BYTE v20[3]; // [rsp+31h] [rbp-2D7h] BYREF
  int v21; // [rsp+34h] [rbp-2D4h] BYREF
  unsigned __int8 *v22; // [rsp+38h] [rbp-2D0h]
  unsigned __int64 v23; // [rsp+40h] [rbp-2C8h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+48h] [rbp-2C0h] BYREF
  _BYTE v25[32]; // [rsp+60h] [rbp-2A8h] BYREF
  _DWORD v26[24]; // [rsp+80h] [rbp-288h] BYREF
  unsigned __int8 v27[512]; // [rsp+E0h] [rbp-228h] BYREF

  v9 = *((_WORD *)a1 + 1);
  if ( v9 )
  {
    v11 = 1;
    v10 = v9;
  }
  else
  {
    v10 = 0;
    v11 = 0;
  }
  if ( v11 )
  {
    v12 = (unsigned __int8 *)AllocCallbackMessage(0x60u, v11, v10, v27, 1, 0x200uLL);
    v22 = v12;
    if ( !v12 )
      return 0LL;
  }
  else
  {
    v12 = (unsigned __int8 *)v26;
    v22 = (unsigned __int8 *)v26;
    memset(v26, 0, sizeof(v26));
    v26[0] = 96;
  }
  W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( v12 != (unsigned __int8 *)v26 && v12 != v27 )
    PushW32ThreadLock(v12, v25, Win32FreePool);
  *((_DWORD *)v12 + 10) = 0;
  if ( CaptureCallbackData((struct _CAPTUREBUF *)v12, 0LL, 2u, (void **)v12 + 6) < 0 )
    goto LABEL_30;
  *((_WORD *)v12 + 28) = *(_WORD *)a1;
  v13 = *((_WORD *)a1 + 1);
  *((_WORD *)v12 + 29) = v13;
  if ( v13 )
  {
    if ( CaptureCallbackData((struct _CAPTUREBUF *)v12, a1[1], *(unsigned __int16 *)a1 + 2, (void **)v12 + 8) < 0 )
      goto LABEL_30;
  }
  else
  {
    *((_QWORD *)v12 + 8) = a1[1];
  }
  *((_DWORD *)v12 + 18) = a3;
  *((_DWORD *)v12 + 19) = a4;
  *((_DWORD *)v12 + 20) = a5;
  *((_DWORD *)v12 + 21) = a6;
  *((_DWORD *)v12 + 22) = 0;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v20);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v19);
  EtwTraceBeginCallback(74LL);
  *((_QWORD *)v12 + 2) = 0LL;
  v14 = KeUserModeCallback(74LL, v12, *(unsigned int *)v12, &v23, &v21);
  EtwTraceEndCallback(74LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v19);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v20);
  if ( v14 >= 0 && v21 == 24 )
  {
    v16 = (__int64 *)v23;
    if ( v23 + 8 < v23 || v23 + 8 > MmUserProbeAddress )
      v16 = (__int64 *)MmUserProbeAddress;
    v17 = *v16;
    RegionSize[1] = v17;
    if ( v17 )
    {
      LOBYTE(v15) = 3;
      v17 = HMValidateHandleNoRip(v17, v15);
    }
    goto LABEL_17;
  }
LABEL_30:
  v17 = 0LL;
LABEL_17:
  if ( v12 != (unsigned __int8 *)v26 && v12 != v27 )
  {
    if ( *((_QWORD *)v12 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v12 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(v25);
  }
  return v17;
}
