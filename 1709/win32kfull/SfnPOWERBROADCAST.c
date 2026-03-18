/*
 * XREFs of SfnPOWERBROADCAST @ 0x1C0102BA0
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
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall SfnPOWERBROADCAST(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v9; // r12
  unsigned int v10; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r13
  __int64 v16; // rsi
  unsigned __int64 v17; // rcx
  unsigned int v18; // ecx
  bool v19; // cf
  __int64 v20; // rdx
  unsigned __int8 *v21; // rbx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // edi
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 *v40; // rcx
  __int64 v41; // rdi
  unsigned __int16 v43; // r8
  int v44; // ecx
  PVOID *v45; // rdx
  char v46; // [rsp+30h] [rbp-348h] BYREF
  _BYTE v47[3]; // [rsp+31h] [rbp-347h] BYREF
  unsigned int v48; // [rsp+34h] [rbp-344h]
  unsigned __int8 *v49; // [rsp+38h] [rbp-340h]
  int v50; // [rsp+40h] [rbp-338h]
  _DWORD v51[7]; // [rsp+44h] [rbp-334h] BYREF
  unsigned __int64 v52; // [rsp+60h] [rbp-318h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-310h] BYREF
  __int128 v54; // [rsp+70h] [rbp-308h]
  __int64 v55; // [rsp+80h] [rbp-2F8h]
  __int64 v56; // [rsp+88h] [rbp-2F0h]
  _QWORD v57[3]; // [rsp+A8h] [rbp-2D0h] BYREF
  _QWORD v58[4]; // [rsp+C0h] [rbp-2B8h] BYREF
  _DWORD v59[24]; // [rsp+E0h] [rbp-298h] BYREF
  unsigned __int8 v60[512]; // [rsp+140h] [rbp-238h] BYREF

  v50 = a2;
  v9 = (unsigned __int16)a3 & 0x8000;
  v10 = 0;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v15 = ThreadWin32Thread;
  if ( a1 )
    v16 = a1 - *(_QWORD *)(ThreadWin32Thread + 448);
  else
    v16 = 0LL;
  if ( a1 )
    v17 = *(_QWORD *)a1;
  else
    v17 = 0LL;
  LOBYTE(v12) = 1;
  if ( !HMValidateHandleNoSecure(v17, v12, v13, v14) )
    return 0LL;
  if ( a3 > 0x8013 )
    goto LABEL_14;
  switch ( (_DWORD)a3 )
  {
    case 0:
      v43 = 769;
      goto LABEL_51;
    case 4:
      SetOrClrWF(0, (_DWORD *)a1, 0x301u, 1);
      v43 = 770;
LABEL_51:
      v44 = 1;
      goto LABEL_49;
    case 2:
      if ( (*(_BYTE *)(a1 + 59) & 1) == 0 )
        return 0LL;
      v43 = 769;
LABEL_48:
      v44 = 0;
LABEL_49:
      SetOrClrWF(v44, (_DWORD *)a1, v43, 1);
      goto LABEL_14;
  }
  if ( (unsigned int)a3 > 5 )
  {
    if ( (unsigned int)a3 > 7 )
    {
      if ( (_DWORD)a3 == 32787 )
        v10 = 1;
      goto LABEL_14;
    }
    SetOrClrWF(0, (_DWORD *)a1, 0x301u, 1);
    v43 = 770;
    goto LABEL_48;
  }
LABEL_14:
  v18 = 0;
  v48 = 0;
  if ( v9 && a4 && a4 >= (unsigned __int64)MmSystemRangeStart )
  {
    v18 = -1;
    v19 = *(_DWORD *)(a4 + 16) >= 0xFFFFFFEC;
    if ( *(_DWORD *)(a4 + 16) < 0xFFFFFFEC )
      v18 = *(_DWORD *)(a4 + 16) + 20;
    v48 = v18;
    if ( v19 )
      return 0LL;
  }
  if ( !v10 )
  {
    v21 = (unsigned __int8 *)v59;
    v49 = (unsigned __int8 *)v59;
    memset(v59, 0, 0x58uLL);
    v59[0] = 88;
    goto LABEL_22;
  }
  v21 = AllocCallbackMessage(88, v10, v18, v60, 1, 0x200uLL);
  v49 = v21;
  if ( !v21 )
    return 0LL;
LABEL_22:
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v22, v23);
  if ( v21 != (unsigned __int8 *)v59 && v21 != v60 )
    PushW32ThreadLock((__int64)v21, v58, (__int64)Win32FreePool, v25);
  *((_QWORD *)v21 + 5) = v16;
  *((_DWORD *)v21 + 12) = v50;
  *((_QWORD *)v21 + 7) = a3;
  v26 = v48;
  if ( v48 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v21, (char *)a4, v48, (void **)v21 + 10) < 0 )
      goto LABEL_60;
  }
  else
  {
    *((_QWORD *)v21 + 10) = a4;
  }
  *((_QWORD *)v21 + 8) = a5;
  *((_QWORD *)v21 + 9) = a6;
  v27 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v26, v25);
  v57[0] = *(_QWORD *)(v27 + 392);
  *(_QWORD *)(v27 + 392) = v57;
  v57[1] = a1;
  if ( a1 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  v30 = *(_QWORD *)(v15 + 456);
  v54 = *(_OWORD *)(v30 + 64);
  v55 = *(_QWORD *)(v30 + 80);
  *(_QWORD *)(v30 + 72) = v16;
  if ( a1 )
    v31 = *(_QWORD *)a1;
  else
    v31 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v15 + 456) + 64LL) = v31;
  if ( a1 )
    v32 = *(_QWORD *)(a1 + 280);
  else
    v32 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v15 + 456) + 80LL) = v32;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v47,
    gdwInAtomicOperation,
    v28,
    v29);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v46);
  EtwTraceBeginCallback(29LL);
  *((_QWORD *)v21 + 2) = 0LL;
  v33 = KeUserModeCallback(29LL, v21, *(unsigned int *)v21, &v52, v51);
  EtwTraceEndCallback(29LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v46);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v47,
    v34,
    v35,
    v36);
  ThreadUnlock1(v38, v37);
  v39 = *(_QWORD *)(v15 + 456);
  *(_OWORD *)(v39 + 64) = v54;
  *(_QWORD *)(v39 + 80) = v55;
  if ( v33 >= 0 && v51[0] == 24 )
  {
    v40 = (__int64 *)v52;
    if ( v52 + 8 < v52 || v52 + 8 > MmUserProbeAddress )
      v40 = (__int64 *)MmUserProbeAddress;
    v41 = *v40;
    v56 = *v40;
    goto LABEL_42;
  }
LABEL_60:
  v41 = 0LL;
LABEL_42:
  if ( v21 != (unsigned __int8 *)v59 && v21 != v60 )
  {
    v45 = (PVOID *)(v21 + 32);
    if ( *((_QWORD *)v21 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v45, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v58, (__int64)v45, v26, v25);
  }
  return v41;
}
