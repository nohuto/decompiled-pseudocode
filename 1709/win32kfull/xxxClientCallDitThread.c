/*
 * XREFs of xxxClientCallDitThread @ 0x1C005B094
 * Callers:
 *     ClientCallDitThread @ 0x1C005B080 (ClientCallDitThread.c)
 *     xxxDCompSpeedHitTest @ 0x1C005DFBC (xxxDCompSpeedHitTest.c)
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

__int64 __fastcall xxxClientCallDitThread(__int64 a1, __int64 a2)
{
  const void **v4; // r13
  void *v5; // r12
  unsigned int v6; // esi
  unsigned __int8 *v7; // rbx
  int v8; // r15d
  ULONG_PTR *v9; // rcx
  ULONG_PTR v10; // rdi
  __int128 *v11; // rcx
  __int128 *v12; // rcx
  _OWORD *v13; // r14
  char v15; // [rsp+30h] [rbp-478h] BYREF
  char v16; // [rsp+31h] [rbp-477h] BYREF
  _BYTE v17[2]; // [rsp+32h] [rbp-476h] BYREF
  int v18; // [rsp+34h] [rbp-474h] BYREF
  unsigned __int8 *v19; // [rsp+38h] [rbp-470h]
  unsigned __int64 v20; // [rsp+40h] [rbp-468h] BYREF
  void *v21; // [rsp+48h] [rbp-460h] BYREF
  ULONG_PTR RegionSize[6]; // [rsp+50h] [rbp-458h] BYREF
  _BYTE v23[24]; // [rsp+80h] [rbp-428h] BYREF
  __int128 v24; // [rsp+98h] [rbp-410h]
  __int128 v25; // [rsp+A8h] [rbp-400h]
  __int128 v26; // [rsp+B8h] [rbp-3F0h]
  __int128 v27; // [rsp+C8h] [rbp-3E0h]
  __int128 v28; // [rsp+D8h] [rbp-3D0h]
  __int128 v29; // [rsp+E8h] [rbp-3C0h]
  __int128 v30; // [rsp+F8h] [rbp-3B0h]
  __int128 v31; // [rsp+108h] [rbp-3A0h]
  __int128 v32; // [rsp+118h] [rbp-390h]
  __int128 v33; // [rsp+128h] [rbp-380h]
  __int128 v34; // [rsp+138h] [rbp-370h]
  __int128 v35; // [rsp+148h] [rbp-360h]
  __int128 v36; // [rsp+158h] [rbp-350h]
  unsigned __int8 v37[256]; // [rsp+170h] [rbp-338h] BYREF
  unsigned __int8 v38[512]; // [rsp+270h] [rbp-238h] BYREF

  v4 = (const void **)(a2 + 40);
  v5 = *(void **)(a2 + 40);
  v6 = 8 * *(_DWORD *)(a2 + 48);
  v21 = 0LL;
  v7 = (unsigned __int8 *)AllocCallbackMessage(0x100u, 1u, v6, v38, 1, 0x200uLL);
  v19 = v7;
  if ( !v7 )
    return 0LL;
  W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( v7 != v37 && v7 != v38 )
    PushW32ThreadLock(v7, v23, Win32FreePool);
  *((_QWORD *)v7 + 5) = a1;
  *((_OWORD *)v7 + 3) = *(_OWORD *)a2;
  *((_OWORD *)v7 + 4) = *(_OWORD *)(a2 + 16);
  *((_OWORD *)v7 + 5) = *(_OWORD *)(a2 + 32);
  *((_OWORD *)v7 + 6) = *(_OWORD *)(a2 + 48);
  *((_OWORD *)v7 + 7) = *(_OWORD *)(a2 + 64);
  *((_OWORD *)v7 + 8) = *(_OWORD *)(a2 + 80);
  *((_OWORD *)v7 + 9) = *(_OWORD *)(a2 + 96);
  *((_OWORD *)v7 + 10) = *(_OWORD *)(a2 + 112);
  *((_OWORD *)v7 + 11) = *(_OWORD *)(a2 + 128);
  *((_OWORD *)v7 + 12) = *(_OWORD *)(a2 + 144);
  *((_OWORD *)v7 + 13) = *(_OWORD *)(a2 + 160);
  *((_OWORD *)v7 + 14) = *(_OWORD *)(a2 + 176);
  *((_OWORD *)v7 + 15) = *(_OWORD *)(a2 + 192);
  if ( ReserveCaptureBytes((struct _CAPTUREBUF *)v7, v6, (void **)v7 + 11, &v21) < 0 )
    goto LABEL_25;
  if ( v6 )
    memmove(v21, v5, v6);
  if ( (unsigned __int8)IsInputThread() )
  {
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v16);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v15);
    EtwTraceBeginCallback(56LL);
    *((_QWORD *)v7 + 2) = 0LL;
    v8 = KeUserModeCallback(56LL, v7, *(unsigned int *)v7, &v20, &v18);
    EtwTraceEndCallback(56LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v15);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v16);
  }
  else
  {
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    *((_QWORD *)v7 + 2) = 0LL;
    DwmHitTestLeaveEnterCrit::DwmHitTestLeaveEnterCrit((DwmHitTestLeaveEnterCrit *)v17);
    EtwTraceBeginCallback(56LL);
    v8 = KeUserModeCallback(56LL, v7, *(unsigned int *)v7, &v20, &v18);
    EtwTraceEndCallback(56LL);
    DwmHitTestLeaveEnterCrit::~DwmHitTestLeaveEnterCrit((DwmHitTestLeaveEnterCrit *)v17);
  }
  if ( v8 >= 0 && v18 == 24 )
  {
    v9 = (ULONG_PTR *)v20;
    if ( v20 + 8 < v20 || v20 + 8 > MmUserProbeAddress )
      v9 = (ULONG_PTR *)MmUserProbeAddress;
    v10 = *v9;
    RegionSize[2] = *v9;
    v11 = *(__int128 **)(v20 + 16);
    if ( v11 + 13 < v11 || (unsigned __int64)(v11 + 13) > MmUserProbeAddress )
      v11 = (__int128 *)MmUserProbeAddress;
    v24 = *v11;
    v25 = v11[1];
    v26 = v11[2];
    v27 = v11[3];
    v28 = v11[4];
    v29 = v11[5];
    v30 = v11[6];
    v31 = v11[7];
    v12 = v11 + 8;
    v32 = *v12;
    v33 = v12[1];
    v34 = v12[2];
    v35 = v12[3];
    v36 = v12[4];
    *(_OWORD *)a2 = v24;
    *(_OWORD *)(a2 + 16) = v25;
    *(_OWORD *)(a2 + 32) = v26;
    *(_OWORD *)(a2 + 48) = v27;
    *(_OWORD *)(a2 + 64) = v28;
    *(_OWORD *)(a2 + 80) = v29;
    *(_OWORD *)(a2 + 96) = v30;
    v13 = (_OWORD *)(a2 + 128);
    *(v13 - 1) = v31;
    *v13 = v32;
    v13[1] = v33;
    v13[2] = v34;
    v13[3] = v35;
    v13[4] = v36;
    if ( v6 )
    {
      memmove(v5, *v4, v6);
      *v4 = v5;
    }
  }
  else
  {
LABEL_25:
    LODWORD(v10) = 0;
  }
  if ( v7 != v37 && v7 != v38 )
  {
    if ( *((_QWORD *)v7 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v7 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(v23);
  }
  return (unsigned int)v10;
}
