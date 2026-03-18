/*
 * XREFs of SfnINCNTOUTSTRING @ 0x1C01FB680
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C005D0C4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C00DDA7C (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00DDBC8 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00DE0CC (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

unsigned __int8 *__fastcall SfnINCNTOUTSTRING(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  unsigned __int8 *v11; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // r13
  __int64 v14; // r14
  __int64 v15; // r8
  unsigned int v16; // ecx
  __int64 v17; // r9
  unsigned int v18; // edx
  unsigned __int64 v19; // rax
  unsigned __int8 *result; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r9
  unsigned __int16 v25; // r12
  __int16 v26; // ax
  __int64 v27; // rdx
  int v28; // r11d
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  int v35; // esi
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 *v42; // rsi
  __int64 v43; // rsi
  ULONG64 v44; // rcx
  __int64 v45; // xmm1_8
  _WORD *v46; // rax
  PVOID *v47; // rdx
  char v48; // [rsp+30h] [rbp-388h] BYREF
  _BYTE v49[3]; // [rsp+31h] [rbp-387h] BYREF
  unsigned int v50; // [rsp+34h] [rbp-384h]
  int v51; // [rsp+38h] [rbp-380h]
  unsigned __int8 *v52; // [rsp+40h] [rbp-378h]
  int v53; // [rsp+48h] [rbp-370h]
  _DWORD v54[5]; // [rsp+4Ch] [rbp-36Ch] BYREF
  unsigned __int64 v55; // [rsp+60h] [rbp-358h] BYREF
  __int64 v56; // [rsp+68h] [rbp-350h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-340h] BYREF
  __int128 v58; // [rsp+80h] [rbp-338h]
  __int64 v59; // [rsp+90h] [rbp-328h]
  __int128 v60; // [rsp+98h] [rbp-320h] BYREF
  __int64 v61; // [rsp+A8h] [rbp-310h]
  _QWORD v62[3]; // [rsp+D8h] [rbp-2E0h] BYREF
  _QWORD v63[4]; // [rsp+F0h] [rbp-2C8h] BYREF
  unsigned __int8 v64[112]; // [rsp+110h] [rbp-2A8h] BYREF
  unsigned __int8 v65[512]; // [rsp+180h] [rbp-238h] BYREF

  v53 = a2;
  v51 = a7 & 1;
  v11 = v64;
  v56 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = (__int64)a1 - *(_QWORD *)(ThreadWin32Thread + 448);
  else
    v14 = 0LL;
  v15 = *(unsigned int *)(a4 + 4);
  v16 = *(_DWORD *)(a4 + 4) & 0x7FFFFFFF;
  v17 = 0xFFFFFFFFLL;
  v18 = -1;
  if ( v16 + 2 >= v16 )
    v18 = v16 + 2;
  v50 = v18;
  if ( v16 + 2 < v16 )
    goto LABEL_46;
  if ( (int)v15 < 0 && !v51 )
  {
    v19 = 2LL * v18;
    v18 = -1;
    if ( v19 <= 0xFFFFFFFF )
      v18 = v19;
    v50 = v18;
    if ( v19 > 0xFFFFFFFF )
      goto LABEL_46;
  }
  result = AllocCallbackMessage(104, 1u, v18, v65, 0, 0x200uLL);
  v11 = result;
  v52 = result;
  if ( !result )
    return result;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21, v22, v23);
  if ( v11 != v64 && v11 != v65 )
    PushW32ThreadLock((__int64)v11, v63, (__int64)Win32FreePool, v24);
  *((_QWORD *)v11 + 5) = v14;
  *((_DWORD *)v11 + 12) = v53;
  *((_QWORD *)v11 + 7) = a3;
  v25 = *(_WORD *)(a4 + 4);
  if ( *(int *)(a4 + 4) >= 0 )
    v25 >>= 1;
  v26 = -1;
  if ( v25 != 0xFFFF )
    v26 = v25;
  *((_WORD *)v11 + 40) = v26;
  *((_QWORD *)v11 + 8) = a5;
  *((_QWORD *)v11 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v11, v50, (void **)v11 + 11) < 0 )
    goto LABEL_46;
  *((_DWORD *)v11 + 24) = v28;
  v29 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27, v15, v17);
  v62[0] = *(_QWORD *)(v29 + 392);
  *(_QWORD *)(v29 + 392) = v62;
  v62[1] = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v32 = *(_QWORD *)(v13 + 456);
  v58 = *(_OWORD *)(v32 + 64);
  v59 = *(_QWORD *)(v32 + 80);
  *(_QWORD *)(v32 + 72) = v14;
  v33 = 0LL;
  if ( a1 )
    v33 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)(v13 + 456) + 64LL) = v33;
  v34 = 0LL;
  if ( a1 )
    v34 = *((_QWORD *)a1 + 35);
  *(_QWORD *)(*(_QWORD *)(v13 + 456) + 80LL) = v34;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v49,
    gdwInAtomicOperation,
    v30,
    v31);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v48);
  EtwTraceBeginCallback(7LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v35 = KeUserModeCallback(7LL, v11, *(unsigned int *)v11, &v55, v54);
  EtwTraceEndCallback(7LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v48);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v49,
    v36,
    v37,
    v38);
  ThreadUnlock1(v40, v39);
  v41 = *(_QWORD *)(v13 + 456);
  *(_OWORD *)(v41 + 64) = v58;
  *(_QWORD *)(v41 + 80) = v59;
  if ( v35 < 0 )
    goto LABEL_46;
  if ( v54[0] == 24 )
  {
    v42 = (__int64 *)v55;
    if ( v55 + 8 < v55 || v55 + 8 > MmUserProbeAddress )
      v42 = (__int64 *)MmUserProbeAddress;
    v43 = *v42;
    v56 = v43;
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
    {
      if ( v43 )
      {
        v44 = v55;
        if ( v55 + 24 < v55 || v55 + 24 > MmUserProbeAddress )
          v44 = MmUserProbeAddress;
        v45 = *(_QWORD *)(v44 + 16);
        v60 = *(_OWORD *)v44;
        v61 = v45;
        v43 = (unsigned int)CalcOutputStringSize((struct _CALLBACKSTATUS *)&v60, v43, *(_DWORD *)(a4 + 4) >> 31, v51);
        v56 = v43;
        CopyOutputString((struct _CALLBACKSTATUS *)&v60, (PWCH *)a4, v25, v51);
      }
      else
      {
        v46 = *(_WORD **)(a4 + 8);
        if ( *(int *)(a4 + 4) >= 0 )
          *v46 = 0;
        else
          *(_BYTE *)v46 = 0;
      }
    }
  }
  else
  {
LABEL_46:
    v43 = 0LL;
  }
  if ( v11 != v64 && v11 != v65 )
  {
    v47 = (PVOID *)(v11 + 32);
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v47, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v63, (__int64)v47, v15, v17);
  }
  return (unsigned __int8 *)v43;
}
