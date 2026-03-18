/*
 * XREFs of xxxClientExpandStringW @ 0x1C00DCBFC
 * Callers:
 *     xxxUpdateSystemCursorFromRegistry @ 0x1C00515F0 (xxxUpdateSystemCursorFromRegistry.c)
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
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C00DDA7C (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00DDBC8 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientExpandStringW(struct _LARGE_STRING *a1)
{
  unsigned int v2; // eax
  __int64 v3; // rdx
  unsigned __int8 *v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // rcx
  __int64 v15; // r10
  ULONG64 v16; // rcx
  __int64 v17; // xmm1_8
  unsigned int v18; // ebx
  PVOID *v20; // rdx
  char v21; // [rsp+30h] [rbp-308h] BYREF
  _BYTE v22[3]; // [rsp+31h] [rbp-307h] BYREF
  int v23; // [rsp+34h] [rbp-304h] BYREF
  _QWORD v24[2]; // [rsp+38h] [rbp-300h] BYREF
  __int64 v25; // [rsp+48h] [rbp-2F0h]
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-2E8h] BYREF
  __int128 v27; // [rsp+58h] [rbp-2E0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-2D0h]
  _QWORD v29[3]; // [rsp+80h] [rbp-2B8h] BYREF
  _BYTE v30[56]; // [rsp+98h] [rbp-2A0h] BYREF
  unsigned __int8 v31[592]; // [rsp+D0h] [rbp-268h] BYREF

  v2 = *((_DWORD *)a1 + 1) & 0x7FFFFFFF;
  if ( v2 > 0x208 )
    v2 = 520;
  v4 = AllocCallbackMessage(56, 1u, v2, v31, 1, 0x248uLL);
  v24[1] = v4;
  if ( !v4 )
    return 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3, v5, v6);
  if ( v4 != v30 && v4 != v31 )
    PushW32ThreadLock((__int64)v4, v29, (__int64)Win32FreePool, v7);
  *((_DWORD *)v4 + 10) = *(_DWORD *)a1;
  *((_DWORD *)v4 + 11) ^= (*((_DWORD *)a1 + 1) ^ *((_DWORD *)v4 + 11)) & 0x7FFFFFFF;
  if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v4, *((char **)a1 + 1), *(_DWORD *)a1 + 2, (void **)v4 + 6) < 0 )
    goto LABEL_22;
  *((_DWORD *)v4 + 11) &= ~0x80000000;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v22,
    gdwInAtomicOperation,
    v8,
    v9);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v21);
  EtwTraceBeginCallback(59LL);
  *((_QWORD *)v4 + 2) = 0LL;
  v10 = KeUserModeCallback(59LL, v4, *(unsigned int *)v4, v24, &v23);
  EtwTraceEndCallback(59LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v21);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v22,
    v11,
    v12,
    v13);
  if ( v10 < 0 )
    goto LABEL_22;
  if ( v23 == 24 )
  {
    v14 = (__int64 *)v24[0];
    if ( (unsigned __int64)(v24[0] + 8LL) < v24[0] || v24[0] + 8LL > MmUserProbeAddress )
      v14 = (__int64 *)MmUserProbeAddress;
    v15 = *v14;
    v25 = *v14;
    v16 = v24[0];
    if ( (unsigned __int64)(v24[0] + 24LL) < v24[0] || v24[0] + 24LL > MmUserProbeAddress )
      v16 = MmUserProbeAddress;
    v17 = *(_QWORD *)(v16 + 16);
    v27 = *(_OWORD *)v16;
    v28 = v17;
    v18 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v27, v15, *((_DWORD *)a1 + 1) >> 31, 0);
    v25 = v18;
    CopyOutputString((struct _CALLBACKSTATUS *)&v27, a1, *((_DWORD *)a1 + 1) & 0x7FFFFFFF, 0);
  }
  else
  {
LABEL_22:
    v18 = 0;
  }
  if ( v4 != v30 && v4 != v31 )
  {
    v20 = (PVOID *)(v4 + 32);
    if ( *((_QWORD *)v4 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v20, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v29, (__int64)v20, v8, v9);
  }
  return v18;
}
