/*
 * XREFs of xxxClientAddFontResourceW @ 0x1C0058B94
 * Callers:
 *     xxxAddFontResourceW @ 0x1C0058B54 (xxxAddFontResourceW.c)
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

__int64 __fastcall xxxClientAddFontResourceW(void **a1, unsigned int a2, __int64 a3)
{
  unsigned __int8 *v6; // rdi
  int v7; // ebx
  ULONG_PTR *v8; // rcx
  ULONG_PTR v9; // rbx
  char v11; // [rsp+30h] [rbp-2F8h] BYREF
  _BYTE v12[3]; // [rsp+31h] [rbp-2F7h] BYREF
  int v13; // [rsp+34h] [rbp-2F4h] BYREF
  _QWORD v14[2]; // [rsp+38h] [rbp-2F0h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+48h] [rbp-2E0h] BYREF
  _BYTE v16[32]; // [rsp+60h] [rbp-2C8h] BYREF
  _BYTE v17[144]; // [rsp+80h] [rbp-2A8h] BYREF
  unsigned __int8 v18[512]; // [rsp+110h] [rbp-218h] BYREF

  v6 = (unsigned __int8 *)AllocCallbackMessage(0x88u, 1u, *((unsigned __int16 *)a1 + 1), v18, 1, 0x200uLL);
  v14[1] = v6;
  if ( !v6 )
    return 0LL;
  W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( v6 != v17 && v6 != v18 )
    PushW32ThreadLock(v6, v16, Win32FreePool);
  *((_WORD *)v6 + 20) = *(_WORD *)a1;
  *((_WORD *)v6 + 21) = *((_WORD *)a1 + 1);
  if ( CaptureCallbackData((struct _CAPTUREBUF *)v6, a1[1], *(unsigned __int16 *)a1 + 2, (void **)v6 + 6) < 0 )
    goto LABEL_19;
  *((_DWORD *)v6 + 14) = a2;
  if ( a3 && *(_DWORD *)(a3 + 4) )
  {
    *(_OWORD *)(v6 + 60) = *(_OWORD *)a3;
    *(_OWORD *)(v6 + 76) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(v6 + 92) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(v6 + 108) = *(_OWORD *)(a3 + 48);
    *(_QWORD *)(v6 + 124) = *(_QWORD *)(a3 + 64);
  }
  else
  {
    *((_DWORD *)v6 + 16) = 0;
  }
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v12);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v11);
  EtwTraceBeginCallback(83LL);
  *((_QWORD *)v6 + 2) = 0LL;
  v7 = KeUserModeCallback(83LL, v6, *(unsigned int *)v6, v14, &v13);
  EtwTraceEndCallback(83LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v11);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v12);
  if ( v7 < 0 )
    goto LABEL_19;
  if ( v13 == 24 )
  {
    v8 = (ULONG_PTR *)v14[0];
    if ( (unsigned __int64)(v14[0] + 8LL) < v14[0] || v14[0] + 8LL > MmUserProbeAddress )
      v8 = (ULONG_PTR *)MmUserProbeAddress;
    v9 = *v8;
    RegionSize[1] = *v8;
  }
  else
  {
LABEL_19:
    LODWORD(v9) = 0;
  }
  if ( v6 != v17 && v6 != v18 )
  {
    if ( *((_QWORD *)v6 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v6 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(v16);
  }
  return (unsigned int)v9;
}
