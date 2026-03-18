/*
 * XREFs of xxxClientLoadStringW @ 0x1C00DD054
 * Callers:
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C00DCF64 (-xxxLoadSomeStrings@@YAXXZ.c)
 * Callees:
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
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00DE0CC (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientLoadStringW(int a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  unsigned __int8 *v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // rcx
  __int64 v18; // r10
  ULONG64 v19; // rcx
  __int64 v20; // xmm1_8
  unsigned int v21; // ebx
  PVOID *v23; // rdx
  char v24; // [rsp+30h] [rbp-2E8h] BYREF
  _BYTE v25[3]; // [rsp+31h] [rbp-2E7h] BYREF
  int v26; // [rsp+34h] [rbp-2E4h] BYREF
  _QWORD v27[2]; // [rsp+38h] [rbp-2E0h] BYREF
  __int64 v28; // [rsp+48h] [rbp-2D0h]
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-2C8h] BYREF
  _DWORD v30[2]; // [rsp+58h] [rbp-2C0h] BYREF
  __int64 v31; // [rsp+60h] [rbp-2B8h]
  __int128 v32; // [rsp+68h] [rbp-2B0h] BYREF
  __int64 v33; // [rsp+78h] [rbp-2A0h]
  _QWORD v34[4]; // [rsp+90h] [rbp-288h] BYREF
  unsigned __int8 v35[64]; // [rsp+B0h] [rbp-268h] BYREF
  unsigned __int8 v36[512]; // [rsp+F0h] [rbp-228h] BYREF

  v5 = 2 * a3;
  v31 = a2;
  v30[0] = 0;
  v30[1] = 2;
  v7 = AllocCallbackMessage(64, 1u, 2 * a3, v36, 0, 0x200uLL);
  v27[1] = v7;
  if ( !v7 )
    return 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v8, v9);
  if ( v7 != v35 && v7 != v36 )
    PushW32ThreadLock((__int64)v7, v34, (__int64)Win32FreePool, v10);
  *((_DWORD *)v7 + 10) = a1;
  *((_DWORD *)v7 + 11) = a3;
  if ( AllocateCallbackData((struct _CAPTUREBUF *)v7, v5, (void **)v7 + 6) < 0 )
    goto LABEL_20;
  *((_DWORD *)v7 + 14) = v5;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v25,
    gdwInAtomicOperation,
    v11,
    v12);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v24);
  EtwTraceBeginCallback(98LL);
  *((_QWORD *)v7 + 2) = 0LL;
  v13 = KeUserModeCallback(98LL, v7, *(unsigned int *)v7, v27, &v26);
  EtwTraceEndCallback(98LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v24);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v25,
    v14,
    v15,
    v16);
  if ( v13 < 0 )
    goto LABEL_20;
  if ( v26 == 24 )
  {
    v17 = (__int64 *)v27[0];
    if ( (unsigned __int64)(v27[0] + 8LL) < v27[0] || v27[0] + 8LL > MmUserProbeAddress )
      v17 = (__int64 *)MmUserProbeAddress;
    v18 = *v17;
    v28 = *v17;
    v19 = v27[0];
    if ( (unsigned __int64)(v27[0] + 24LL) < v27[0] || v27[0] + 24LL > MmUserProbeAddress )
      v19 = MmUserProbeAddress;
    v20 = *(_QWORD *)(v19 + 16);
    v32 = *(_OWORD *)v19;
    v33 = v20;
    v21 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v32, v18, 0, 0);
    v28 = v21;
    CopyOutputString((struct _CALLBACKSTATUS *)&v32, (struct _LARGE_STRING *)v30, a3, 0);
  }
  else
  {
LABEL_20:
    v21 = 0;
  }
  if ( v7 != v35 && v7 != v36 )
  {
    v23 = (PVOID *)(v7 + 32);
    if ( *((_QWORD *)v7 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v23, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v34, (__int64)v23, v11, v12);
  }
  return v21;
}
