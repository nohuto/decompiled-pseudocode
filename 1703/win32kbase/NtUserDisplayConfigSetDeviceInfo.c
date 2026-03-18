/*
 * XREFs of NtUserDisplayConfigSetDeviceInfo @ 0x1C00E0890
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C001DFD0 (Win32AllocPoolWithQuota.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C007B40C (CheckAccessForIntegrityLevelEx.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C00F95B0 (DrvDisplayConfigSetDeviceInfo.c)
 */

__int64 __fastcall NtUserDisplayConfigSetDeviceInfo(char *Src)
{
  _DWORD *v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r13
  LARGE_INTEGER v12; // rcx
  LARGE_INTEGER v13; // rbx
  LARGE_INTEGER v14; // r8
  char v15; // al
  unsigned int v16; // ebx
  int v17; // eax
  CTouchProcessor *v18; // rcx
  size_t v19; // r14
  __int64 v20; // rax
  int v21; // eax
  bool v22; // zf
  __int64 v24; // [rsp+20h] [rbp-C8h]
  _BYTE v25[24]; // [rsp+68h] [rbp-80h] BYREF
  _QWORD v26[8]; // [rsp+80h] [rbp-68h] BYREF

  memset(v26, 0, sizeof(v26));
  EtwActivityIdControl(3u, (LPGUID)&v26[1]);
  v26[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v26[3]) = 30;
  v2 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v4, v3, v5);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v7 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v11 = PsGetCurrentThreadWin32Thread(v9, v8, v10);
  if ( v11 )
  {
    v13 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v11 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
    {
      if ( (unsigned __int8)(byte_1C0186D98 - 1) <= 2u
        || (qword_1C0186D80 & 0x200000010000000LL) == 0
        || (v15 = 1, (qword_1C0186D88 & 0x200000010000000LL) != qword_1C0186D88) )
      {
        v15 = 0;
      }
      if ( v15 && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        Template_xqx(
          v12.QuadPart,
          &AcquiredExclusiveUserCritEvent,
          v14.QuadPart,
          v13.QuadPart,
          0,
          gullUserCritAcquireToken,
          -1073741823);
    }
    if ( v13.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      LODWORD(v24) = 1000 * v13.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        1000 * v13.QuadPart / gliQpcFreq.QuadPart,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v14.QuadPart,
        0LL,
        v24,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v11 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    v2 = 0LL;
  }
  gptiCurrent = v7;
  gbValidateHandleForIL = 1;
  if ( !gbVideoInitialized )
    goto LABEL_17;
  if ( (*((_DWORD *)v7 + 110) & 0x20000000) != 0 )
    v17 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 47) + 720LL) + 24LL) & 0x10;
  else
    v17 = 0;
  if ( v17 || !CheckAccessForIntegrityLevelEx(*(_QWORD *)(*((_QWORD *)v7 + 47) + 824LL), 0xFFFFFFFF00002000uLL, 0) )
    goto LABEL_58;
  v18 = (CTouchProcessor *)(Src + 4);
  if ( Src + 4 >= (char *)W32UserProbeAddress )
    v18 = W32UserProbeAddress;
  v19 = *(unsigned int *)v18;
  if ( *(_DWORD *)v18 < 0x14u )
  {
    v16 = -1073741789;
    v2 = 0LL;
    goto LABEL_59;
  }
  v20 = Win32AllocPoolWithQuota(*(unsigned int *)v18, 0x63447355u);
  v2 = (_DWORD *)v20;
  if ( !v20 )
    ExRaiseStatus(-1073741801);
  PushW32ThreadLock(v20, v25, Win32FreePool);
  if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( &Src[v19] > (char *)W32UserProbeAddress || &Src[v19] < Src )
    *(_BYTE *)W32UserProbeAddress = 0;
  memmove(v2, Src, v19);
  v2[1] = v19;
  if ( *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type )
  {
LABEL_17:
    v16 = -1073741823;
    goto LABEL_59;
  }
  if ( gProtocolType )
  {
LABEL_58:
    v16 = -1073741790;
    goto LABEL_59;
  }
  v21 = DrvDisplayConfigSetDeviceInfo(v2, v26);
  v16 = v21;
  if ( v21 == -2147483643 )
  {
    v16 = -1073741789;
    goto LABEL_59;
  }
  if ( v21 == -1073741789 )
    goto LABEL_59;
  if ( (unsigned int)(*v2 - 7) > 1 )
  {
    if ( v21 >= 0 || v21 == -1073741811 || v21 == -1073741801 || v21 == -1073741790 || v21 == -1073741776 )
      goto LABEL_59;
    v22 = v21 == -1073741637;
  }
  else
  {
    if ( v21 == -1073741811
      || v21 == -1073741790
      || v21 == -1073741649
      || v21 == -1073741637
      || v21 == -1073741632
      || v21 >= 0
      || v21 == -1073741801 )
    {
      goto LABEL_59;
    }
    v22 = v21 == -1073741776;
  }
  if ( !v22 && (v21 <= -1073741586 || v21 > -1073741574) )
    goto LABEL_17;
LABEL_59:
  if ( v2 )
    PopAndFreeAlwaysW32ThreadLock(v25);
  UserSessionSwitchLeaveCrit();
  return v16;
}
