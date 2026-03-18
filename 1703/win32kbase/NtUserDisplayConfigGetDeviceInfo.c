/*
 * XREFs of NtUserDisplayConfigGetDeviceInfo @ 0x1C000D420
 * Callers:
 *     <none>
 * Callees:
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C000D740 (DrvDisplayConfigGetDeviceInfo.c)
 *     Win32AllocPoolWithQuota @ 0x1C001DFD0 (Win32AllocPoolWithQuota.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall NtUserDisplayConfigGetDeviceInfo(char *a1, __int64 a2, __int64 a3)
{
  int *v4; // rdi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r14
  int v11; // ecx
  LARGE_INTEGER v12; // rbx
  int v13; // r8d
  CTouchProcessor *v14; // rcx
  __int64 v15; // rbx
  SIZE_T v16; // r14
  __int64 v17; // rax
  int v18; // ecx
  bool v19; // zf
  int DeviceInfo; // ebx
  __int64 CurrentProcessWow64Process; // rax
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  char v27; // al
  int v28; // ecx
  int v29; // ecx
  bool v30; // zf
  _BYTE v31[24]; // [rsp+68h] [rbp-30h] BYREF

  v4 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v6 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
  v10 = PsGetCurrentThreadWin32Thread(v8, v7, v9);
  if ( v10 )
  {
    v12 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v10 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
    {
      if ( (unsigned __int8)(byte_1C0186D98 - 1) <= 2u
        || (qword_1C0186D80 & 0x200000010000000LL) == 0
        || (v27 = 1, (qword_1C0186D88 & 0x200000010000000LL) != qword_1C0186D88) )
      {
        v27 = 0;
      }
      if ( v27 && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        Template_xqx(
          v11,
          (unsigned int)&AcquiredExclusiveUserCritEvent,
          v13,
          v12.LowPart,
          0,
          (char)gullUserCritAcquireToken);
    }
    if ( v12.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      Template_xqx(
        1000 * v12.QuadPart / gliQpcFreq.QuadPart,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v13,
        0,
        1000 * v12.QuadPart / gliQpcFreq.QuadPart,
        (char)gullUserCritAcquireToken);
    }
    *(_QWORD *)(v10 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    v4 = 0LL;
  }
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  if ( !gbVideoInitialized )
    goto LABEL_49;
  v14 = (CTouchProcessor *)(a1 + 4);
  if ( a1 + 4 >= (char *)W32UserProbeAddress )
    v14 = W32UserProbeAddress;
  v15 = *(unsigned int *)v14;
  if ( (unsigned int)v15 < 0x14 )
    ExRaiseStatus(-1073741811);
  v16 = (unsigned int)v15;
  v17 = Win32AllocPoolWithQuota((unsigned int)v15, 1665430357LL);
  v4 = (int *)v17;
  if ( !v17 )
    ExRaiseStatus(-1073741801);
  PushW32ThreadLock(v17, v31, Win32FreePool);
  if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( &a1[v15] > (char *)W32UserProbeAddress || &a1[v15] < a1 )
    *(_BYTE *)W32UserProbeAddress = 0;
  memmove(v4, a1, (unsigned int)v15);
  v4[1] = v15;
  v18 = *v4;
  if ( *v4 == -2 || v18 == -11 )
    goto LABEL_24;
  if ( *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type )
  {
LABEL_49:
    DeviceInfo = -1073741823;
    goto LABEL_36;
  }
  if ( gProtocolType )
  {
    DeviceInfo = -1073741790;
    goto LABEL_36;
  }
LABEL_24:
  if ( v18 <= 1 )
  {
    switch ( v18 )
    {
      case 1:
        v19 = (_DWORD)v15 == 84;
        goto LABEL_28;
      case -2:
LABEL_27:
        v19 = (_DWORD)v15 == 2032;
        goto LABEL_28;
      case -9:
        goto LABEL_40;
      case -11:
        goto LABEL_27;
    }
    if ( v18 != -10 )
    {
      switch ( v18 )
      {
        case -8:
          v19 = (_DWORD)v15 == 536;
          break;
        case -7:
          v19 = (_DWORD)v15 == 540;
          break;
        case -5:
          goto LABEL_69;
        case -3:
LABEL_68:
          v19 = (_DWORD)v15 == 32;
          break;
        default:
          goto LABEL_72;
      }
LABEL_28:
      if ( v19 )
      {
        DeviceInfo = DrvDisplayConfigGetDeviceInfo(v4);
        if ( *v4 == 3 )
          v4[7] = 0;
        if ( DeviceInfo == -2147483643 )
        {
          DeviceInfo = -1073741789;
        }
        else if ( DeviceInfo != -1073741789 )
        {
          if ( *v4 < 7 || *v4 > 8 )
          {
            if ( DeviceInfo < 0
              && DeviceInfo != -1073741811
              && DeviceInfo != -1073741801
              && DeviceInfo != -1073741790
              && DeviceInfo != -1073741776 )
            {
              v30 = DeviceInfo == -1073741637;
              goto LABEL_91;
            }
          }
          else if ( DeviceInfo != -1073741811
                 && DeviceInfo != -1073741790
                 && DeviceInfo != -1073741649
                 && DeviceInfo != -1073741637
                 && DeviceInfo != -1073741632
                 && DeviceInfo < 0
                 && DeviceInfo != -1073741801 )
          {
            v30 = DeviceInfo == -1073741776;
LABEL_91:
            if ( !v30 && (DeviceInfo <= -1073741586 || DeviceInfo > -1073741574) )
              DeviceInfo = -1073741823;
          }
        }
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
        ProbeForWrite(a1, v16, CurrentProcessWow64Process != 0 ? 1 : 4);
        memmove(a1, v4, v16);
        goto LABEL_36;
      }
      goto LABEL_72;
    }
LABEL_69:
    v19 = (_DWORD)v15 == 28;
    goto LABEL_28;
  }
  v23 = v18 - 2;
  if ( !v23 )
  {
    v19 = (_DWORD)v15 == 420;
    goto LABEL_28;
  }
  v24 = v23 - 1;
  if ( !v24 )
  {
    v19 = (_DWORD)v15 == 80;
    goto LABEL_28;
  }
  v25 = v24 - 1;
  if ( !v25 )
  {
    v19 = (_DWORD)v15 == 276;
    goto LABEL_28;
  }
  v26 = v25 - 2;
  if ( !v26 )
    goto LABEL_40;
  v28 = v26 - 1;
  if ( !v28 )
    goto LABEL_40;
  v29 = v28 - 2;
  if ( !v29 )
    goto LABEL_68;
  if ( v29 == 1 )
  {
LABEL_40:
    v19 = (_DWORD)v15 == 24;
    goto LABEL_28;
  }
LABEL_72:
  DeviceInfo = -1073741811;
LABEL_36:
  if ( v4 )
    PopAndFreeAlwaysW32ThreadLock(v31);
  UserSessionSwitchLeaveCrit();
  return (unsigned int)DeviceInfo;
}
