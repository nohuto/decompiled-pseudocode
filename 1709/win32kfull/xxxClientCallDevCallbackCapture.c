/*
 * XREFs of xxxClientCallDevCallbackCapture @ 0x1C011C694
 * Callers:
 *     EditionInputExtensibilityCallout @ 0x1C011C660 (EditionInputExtensibilityCallout.c)
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
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall xxxClientCallDevCallbackCapture(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  const void *v4; // r14
  unsigned int v5; // esi
  int v6; // edx
  __int64 v7; // rdx
  unsigned __int8 *v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r9
  _OWORD *v12; // rax
  __int64 v13; // rcx
  void **v14; // r8
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // r9
  ULONG_PTR *v23; // rcx
  ULONG_PTR v24; // rbx
  PVOID *v26; // rdx
  char v27; // [rsp+30h] [rbp-3B8h] BYREF
  _BYTE v28[3]; // [rsp+31h] [rbp-3B7h] BYREF
  int v29; // [rsp+34h] [rbp-3B4h] BYREF
  void *v30[2]; // [rsp+38h] [rbp-3B0h] BYREF
  unsigned __int64 v31; // [rsp+48h] [rbp-3A0h] BYREF
  ULONG_PTR RegionSize[4]; // [rsp+50h] [rbp-398h] BYREF
  _QWORD v33[4]; // [rsp+70h] [rbp-378h] BYREF
  unsigned __int8 v34[304]; // [rsp+90h] [rbp-358h] BYREF
  unsigned __int8 v35[512]; // [rsp+1C0h] [rbp-228h] BYREF

  v2 = a2;
  v4 = 0LL;
  v5 = 0;
  v30[0] = 0LL;
  v6 = *(_DWORD *)(a2 + 4) - 1;
  if ( v6 )
  {
    if ( v6 == 5 )
    {
      v4 = *(const void **)(v2 + 16);
      v5 = *(_DWORD *)(v2 + 8);
    }
  }
  else
  {
    v4 = *(const void **)(v2 + 24);
    v5 = *(_DWORD *)(v2 + 16);
  }
  if ( !v4 || !v5 )
    return 87LL;
  v8 = AllocCallbackMessage(304, 1u, v5, v35, 1, 0x200uLL);
  v30[1] = v8;
  if ( !v8 )
    return 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, v9, v10);
  if ( v8 != v34 && v8 != v35 )
    PushW32ThreadLock((__int64)v8, v33, (__int64)Win32FreePool, v11);
  *((_QWORD *)v8 + 5) = a1;
  v12 = v8 + 48;
  v13 = 2LL;
  do
  {
    *v12 = *(_OWORD *)v2;
    v12[1] = *(_OWORD *)(v2 + 16);
    v12[2] = *(_OWORD *)(v2 + 32);
    v12[3] = *(_OWORD *)(v2 + 48);
    v12[4] = *(_OWORD *)(v2 + 64);
    v12[5] = *(_OWORD *)(v2 + 80);
    v12[6] = *(_OWORD *)(v2 + 96);
    v12 += 8;
    *(v12 - 1) = *(_OWORD *)(v2 + 112);
    v2 += 128LL;
    --v13;
  }
  while ( v13 );
  v14 = 0LL;
  if ( *((_DWORD *)v8 + 13) == 1 )
  {
    v14 = (void **)(v8 + 72);
  }
  else if ( *((_DWORD *)v8 + 13) == 6 )
  {
    v14 = (void **)(v8 + 64);
  }
  ReserveCaptureBytes((struct _CAPTUREBUF *)v8, v5, v14, v30);
  memmove(v30[0], v4, v5);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v28,
    gdwInAtomicOperation,
    v15,
    v16);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v27);
  EtwTraceBeginCallback(55LL);
  *((_QWORD *)v8 + 2) = 0LL;
  v17 = KeUserModeCallback(55LL, v8, *(unsigned int *)v8, &v31, &v29);
  EtwTraceEndCallback(55LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v27);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v28,
    v18,
    v19,
    v20);
  if ( v17 >= 0 && v29 == 24 )
  {
    v23 = (ULONG_PTR *)v31;
    if ( v31 + 8 < v31 || v31 + 8 > MmUserProbeAddress )
      v23 = (ULONG_PTR *)MmUserProbeAddress;
    v24 = *v23;
    RegionSize[1] = *v23;
  }
  else
  {
    LODWORD(v24) = 0;
  }
  if ( v8 != v34 && v8 != v35 )
  {
    v26 = (PVOID *)(v8 + 32);
    if ( *((_QWORD *)v8 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v26, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v33, (__int64)v26, v21, v22);
  }
  return (unsigned int)v24;
}
