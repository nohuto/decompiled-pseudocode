/*
 * XREFs of SfnINLPKDRAWSWITCHWND @ 0x1C01FCB60
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
 *     GreSelectFont @ 0x1C007E920 (GreSelectFont.c)
 *     GreSetTextColor @ 0x1C009B5F0 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C009B688 (GreSetBkColor.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     _WindowFromDC @ 0x1C00F8870 (_WindowFromDC.c)
 *     GetDPIServerInfo @ 0x1C0108F94 (GetDPIServerInfo.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

unsigned __int8 *__fastcall SfnINLPKDRAWSWITCHWND(
        volatile signed __int32 *a1,
        __int64 a2,
        HDC a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v8; // r13d
  unsigned __int8 *v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // r9
  __int64 v13; // r14
  __int64 v14; // rsi
  unsigned int v15; // ecx
  __int64 v16; // r8
  unsigned int v17; // edx
  unsigned __int64 v18; // rax
  unsigned __int8 *result; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r9
  struct tagWND *v24; // rax
  HDC DC; // r12
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 DPIServerInfo; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __int128 v38; // xmm6
  __int64 v39; // xmm7_8
  __int64 v40; // rcx
  __int64 v41; // rcx
  int v42; // edi
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rcx
  ULONG_PTR *v49; // rcx
  ULONG_PTR v50; // rdi
  PVOID *v51; // rdx
  char v52; // [rsp+30h] [rbp-398h] BYREF
  _BYTE v53[3]; // [rsp+31h] [rbp-397h] BYREF
  unsigned int v54; // [rsp+34h] [rbp-394h]
  int v55; // [rsp+38h] [rbp-390h]
  int v56; // [rsp+3Ch] [rbp-38Ch]
  _DWORD v57[6]; // [rsp+40h] [rbp-388h] BYREF
  unsigned __int8 *v58; // [rsp+58h] [rbp-370h]
  __int64 v59; // [rsp+68h] [rbp-360h]
  unsigned __int64 v60; // [rsp+70h] [rbp-358h] BYREF
  ULONG_PTR RegionSize[5]; // [rsp+78h] [rbp-350h] BYREF
  _QWORD v62[3]; // [rsp+A0h] [rbp-328h] BYREF
  __int128 v63; // [rsp+B8h] [rbp-310h]
  __int64 v64; // [rsp+C8h] [rbp-300h]
  _QWORD v65[4]; // [rsp+D0h] [rbp-2F8h] BYREF
  unsigned __int8 v66[112]; // [rsp+F0h] [rbp-2D8h] BYREF
  unsigned __int8 v67[512]; // [rsp+160h] [rbp-268h] BYREF

  v8 = a2;
  v10 = v66;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, (__int64)a3, a4);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = (__int64)a1 - *(_QWORD *)(ThreadWin32Thread + 448);
  else
    v14 = 0LL;
  v15 = *(_DWORD *)(a4 + 16);
  v16 = 0xFFFFFFFFLL;
  v17 = -1;
  if ( v15 + 2 >= v15 )
    v17 = v15 + 2;
  v54 = v17;
  if ( v15 + 2 < v15 )
    goto LABEL_33;
  if ( *(int *)(a4 + 20) < 0 )
  {
    v18 = 2LL * v17;
    v17 = -1;
    if ( v18 <= 0xFFFFFFFF )
      v17 = v18;
    v54 = v17;
    if ( v18 > 0xFFFFFFFF )
      goto LABEL_33;
  }
  result = AllocCallbackMessage(104, 1u, v17, v67, 1, 0x200uLL);
  v10 = result;
  v58 = result;
  if ( !result )
    return result;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v21, v22);
  if ( v10 != v66 && v10 != v67 )
    PushW32ThreadLock((__int64)v10, v65, (__int64)Win32FreePool, v23);
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v10,
              *(char **)(a4 + 24),
              *(_DWORD *)(a4 + 16) + 2,
              (void **)v10 + 10) < 0 )
    goto LABEL_33;
  v24 = WindowFromDC(a3);
  DC = (HDC)_GetDC(v24);
  v56 = GreSetTextColor(DC, *(_DWORD *)(gpsi + 4624LL));
  v55 = GreSetBkColor(DC, *(_DWORD *)(gpsi + 4612LL));
  DPIServerInfo = GetDPIServerInfo(v27, v26, v28, v29);
  v59 = GreSelectFont((__int64)DC, *(_QWORD *)(DPIServerInfo + 8));
  *((_QWORD *)v10 + 5) = v14;
  *((_DWORD *)v10 + 12) = v8;
  *((_QWORD *)v10 + 7) = DC;
  *(_OWORD *)(v10 + 88) = *(_OWORD *)a4;
  *((_QWORD *)v10 + 8) = a5;
  *((_QWORD *)v10 + 9) = a6;
  v34 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v32, v33);
  v62[0] = *(_QWORD *)(v34 + 392);
  *(_QWORD *)(v34 + 392) = v62;
  v62[1] = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v37 = *(_QWORD *)(v13 + 456);
  v38 = *(_OWORD *)(v37 + 64);
  v63 = v38;
  v39 = *(_QWORD *)(v37 + 80);
  v64 = v39;
  *(_QWORD *)(v37 + 72) = v14;
  if ( a1 )
    v40 = *(_QWORD *)a1;
  else
    v40 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 456) + 64LL) = v40;
  if ( a1 )
    v41 = *((_QWORD *)a1 + 35);
  else
    v41 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 456) + 80LL) = v41;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v53,
    gdwInAtomicOperation,
    v35,
    v36);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v52);
  EtwTraceBeginCallback(97LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v42 = KeUserModeCallback(97LL, v10, *(unsigned int *)v10, &v60, v57);
  EtwTraceEndCallback(97LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v52);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v53,
    v43,
    v44,
    v45);
  ThreadUnlock1(v47, v46);
  v48 = *(_QWORD *)(v13 + 456);
  *(_OWORD *)(v48 + 64) = v38;
  *(_QWORD *)(v48 + 80) = v39;
  GreSelectFont((__int64)DC, v59);
  GreSetBkColor(DC, v55);
  GreSetTextColor(DC, v56);
  _ReleaseDC(DC);
  if ( v42 < 0 )
    goto LABEL_33;
  if ( v57[0] == 24 )
  {
    v49 = (ULONG_PTR *)v60;
    if ( v60 + 8 < v60 || v60 + 8 > MmUserProbeAddress )
      v49 = (ULONG_PTR *)MmUserProbeAddress;
    v50 = *v49;
    RegionSize[1] = *v49;
  }
  else
  {
LABEL_33:
    v50 = 0LL;
  }
  if ( v10 != v66 && v10 != v67 )
  {
    v51 = (PVOID *)(v10 + 32);
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v51, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v65, (__int64)v51, v16, v12);
  }
  return (unsigned __int8 *)v50;
}
