/*
 * XREFs of ClientLoadLibrary @ 0x1C005A140
 * Callers:
 *     xxxLoadHmodIndex @ 0x1C0059E80 (xxxLoadHmodIndex.c)
 * Callees:
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
 */

ULONG_PTR __fastcall ClientLoadLibrary(void **a1, void **a2)
{
  unsigned __int8 *v4; // rdi
  int v5; // ebx
  ULONG_PTR *v6; // rcx
  ULONG_PTR v7; // rbx
  char v9; // [rsp+30h] [rbp-2B8h] BYREF
  _BYTE v10[3]; // [rsp+31h] [rbp-2B7h] BYREF
  int v11; // [rsp+34h] [rbp-2B4h] BYREF
  _QWORD v12[2]; // [rsp+38h] [rbp-2B0h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+48h] [rbp-2A0h] BYREF
  _BYTE v14[32]; // [rsp+60h] [rbp-288h] BYREF
  unsigned __int8 v15[80]; // [rsp+80h] [rbp-268h] BYREF
  unsigned __int8 v16[512]; // [rsp+D0h] [rbp-218h] BYREF

  v4 = (unsigned __int8 *)AllocCallbackMessage(
                            0x48u,
                            2u,
                            *((unsigned __int16 *)a1 + 1) + (unsigned int)*((unsigned __int16 *)a2 + 1),
                            v16,
                            1,
                            0x200uLL);
  v12[1] = v4;
  if ( !v4 )
    return 0LL;
  W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( v4 != v15 && v4 != v16 )
    PushW32ThreadLock(v4, v14, Win32FreePool);
  *((_WORD *)v4 + 20) = *(_WORD *)a1;
  *((_WORD *)v4 + 21) = *((_WORD *)a1 + 1);
  if ( CaptureCallbackData((struct _CAPTUREBUF *)v4, a1[1], *(unsigned __int16 *)a1 + 2, (void **)v4 + 6) < 0 )
    goto LABEL_18;
  *((_WORD *)v4 + 28) = *(_WORD *)a2;
  *((_WORD *)v4 + 29) = *((_WORD *)a2 + 1);
  if ( CaptureCallbackData((struct _CAPTUREBUF *)v4, a2[1], *(unsigned __int16 *)a2 + 2, (void **)v4 + 8) < 0 )
    goto LABEL_18;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v10);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9);
  EtwTraceBeginCallback(75LL);
  *((_QWORD *)v4 + 2) = 0LL;
  v5 = KeUserModeCallback(75LL, v4, *(unsigned int *)v4, v12, &v11);
  EtwTraceEndCallback(75LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v10);
  if ( v5 < 0 )
    goto LABEL_18;
  if ( v11 == 24 )
  {
    v6 = (ULONG_PTR *)v12[0];
    if ( (unsigned __int64)(v12[0] + 8LL) < v12[0] || v12[0] + 8LL > MmUserProbeAddress )
      v6 = (ULONG_PTR *)MmUserProbeAddress;
    v7 = *v6;
    RegionSize[1] = *v6;
  }
  else
  {
LABEL_18:
    v7 = 0LL;
  }
  if ( v4 != v15 && v4 != v16 )
  {
    if ( *((_QWORD *)v4 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v4 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(v14);
  }
  return v7;
}
