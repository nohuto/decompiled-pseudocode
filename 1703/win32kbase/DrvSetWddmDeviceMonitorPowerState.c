/*
 * XREFs of DrvSetWddmDeviceMonitorPowerState @ 0x1C009B5F0
 * Callers:
 *     DrvSetMonitorPowerState @ 0x1C009B5C4 (DrvSetMonitorPowerState.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6B34 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     GreDeviceIoControlEx @ 0x1C00616F0 (GreDeviceIoControlEx.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C009B960 (DrvDxgkLogCodePointPacket.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

_UNKNOWN **__fastcall DrvSetWddmDeviceMonitorPowerState(__int64 a1, int a2, char a3, __int64 a4)
{
  _UNKNOWN **result; // rax
  __int64 v5; // rbx
  __int64 v8; // rax
  wchar_t *v9; // rcx
  unsigned int v10; // ebx
  wchar_t *v11; // rcx
  wchar_t *j; // rbx
  wchar_t *k; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  PDEVICE_OBJECT *v24; // r14
  wchar_t *v25; // rbx
  unsigned int v26; // edi
  unsigned int i; // edx
  __int64 v28; // rdx
  struct _DEVICE_OBJECT *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned int v33; // esi
  PDEVICE_OBJECT *v34; // rbx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rbp
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rdi
  __int64 v46; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  int v48; // ecx
  int v49; // r8d
  LONGLONG v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rax
  int InputBuffer; // [rsp+40h] [rbp-38h] BYREF
  __int64 v54; // [rsp+48h] [rbp-30h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  __int64 v56; // [rsp+88h] [rbp+10h] BYREF

  result = &retaddr;
  v5 = a2;
  InputBuffer = a2;
  v54 = a4;
  if ( gProtocolType )
    return result;
  v8 = WdLogNewEntry5_WdTrace(a1);
  *(_QWORD *)(v8 + 24) = a1;
  *(_QWORD *)(v8 + 32) = v5;
  WdLogEvent5_WdTrace(v8);
  if ( !a3 )
  {
    v9 = gpGraphicsDeviceList;
    v10 = 0;
    while ( v9 )
    {
      if ( (*((_DWORD *)v9 + 40) & 0x800000) != 0 && (!a1 || *((_QWORD *)v9 + 18) == a1) )
        ++v10;
      v9 = (wchar_t *)*((_QWORD *)v9 + 16);
    }
    v24 = (PDEVICE_OBJECT *)PALLOCMEM2(24 * v10, 1886221383LL, 1);
    if ( v24 )
    {
      v25 = gpGraphicsDeviceList;
      v26 = 0;
      while ( v25 )
      {
        if ( (*((_DWORD *)v25 + 40) & 0x800000) != 0 && (!a1 || *((_QWORD *)v25 + 18) == a1) )
        {
          for ( i = 0; i < v26; ++i )
          {
            if ( v24[3 * i + 2] == *((PDEVICE_OBJECT *)v25 + 18) )
              break;
          }
          if ( v26 == i )
          {
            v28 = 3LL * v26;
            v24[v28] = (PDEVICE_OBJECT)*((_QWORD *)v25 + 17);
            v29 = (struct _DEVICE_OBJECT *)*((_QWORD *)v25 + 30);
            v24[v28 + 1] = v29;
            v24[v28 + 2] = (PDEVICE_OBJECT)*((_QWORD *)v25 + 18);
            ObfReferenceObject(v29);
            ++v26;
          }
        }
        v25 = (wchar_t *)*((_QWORD *)v25 + 16);
      }
      KeResetEvent(gpevtMonitorPowerWaiter);
      gfMonitorPowerInProgress = 1;
      UserSessionSwitchLeaveCrit();
      v33 = 0;
      if ( v26 )
      {
        v34 = v24;
        do
        {
          DrvDxgkLogCodePointPacket(90LL, v33, v26, 0LL);
          v35 = GreDeviceIoControlEx(*v34, 0x23200Fu, &InputBuffer, 0x10u, 0LL, 0, &v56, 1u);
          v39 = v35;
          if ( v35 < 0 )
          {
            v46 = WdLogNewEntry5_WdError(v37, v36, v38);
            *(_QWORD *)(v46 + 24) = *v34;
            *(_QWORD *)(v46 + 32) = v39;
            WdLogEvent5_WdError(v46);
          }
          ObfDereferenceObject(v34[1]);
          DrvDxgkLogCodePointPacket(91LL, (unsigned int)v39, 0LL, 0LL);
          ++v33;
          v34 += 3;
        }
        while ( v33 < v26 );
      }
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v31, v30, v32);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      v41 = EnterCritAvoidingDitHitTestHazard(0, 1);
      v45 = PsGetCurrentThreadWin32Thread(v43, v42, v44);
      if ( v45 )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v50 = PerformanceCounter.QuadPart - *(_QWORD *)(v45 + 8);
        if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
          && (qword_1C0186D80 & 0x200000010000000LL) != 0
          && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
          && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        {
          LOBYTE(v48) = byte_1C0186D98 - 1;
          Template_xqx(v48, (unsigned int)&AcquiredExclusiveUserCritEvent, v49, v50, 0, (char)gullUserCritAcquireToken);
        }
        if ( v50 >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2 && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
          Template_xqx(
            (_DWORD)gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v49,
            0,
            1000 * v50 / gliQpcFreq.QuadPart,
            (char)gullUserCritAcquireToken);
        *(_QWORD *)(v45 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
      }
      gptiCurrent = v41;
      gbValidateHandleForIL = 1;
      gfMonitorPowerInProgress = 0;
      KeSetEvent(gpevtMonitorPowerWaiter, 0, 0);
      return (_UNKNOWN **)Win32FreePool((__int64)v24);
    }
    v51 = WdLogNewEntry5_WdLowResource(v21, v20, v22, v23);
    *(_QWORD *)(v51 + 24) = v10;
    WdLogEvent5_WdLowResource(v51);
  }
  v11 = gpGraphicsDeviceList;
  for ( j = gpGraphicsDeviceList; j; j = (wchar_t *)*((_QWORD *)j + 16) )
  {
    if ( (*((_DWORD *)j + 40) & 0x800000) != 0 && (!a1 || *((_QWORD *)j + 18) == a1) )
    {
      for ( k = v11; k; k = (wchar_t *)*((_QWORD *)k + 16) )
      {
        if ( *((_QWORD *)k + 18) == *((_QWORD *)j + 18) )
          break;
      }
      if ( k == j )
      {
        DrvDxgkLogCodePointPacket(90LL, 0LL, 0LL, 0LL);
        v14 = GreDeviceIoControlEx(*((PDEVICE_OBJECT *)j + 17), 0x23200Fu, &InputBuffer, 0x10u, 0LL, 0, &v56, 1u);
        v18 = v14;
        if ( v14 < 0 )
        {
          v52 = WdLogNewEntry5_WdError(v16, v15, v17);
          *(_QWORD *)(v52 + 24) = j;
          *(_QWORD *)(v52 + 32) = v18;
          WdLogEvent5_WdError(v52);
        }
        DrvDxgkLogCodePointPacket(91LL, (unsigned int)v18, 0LL, 0LL);
        v11 = gpGraphicsDeviceList;
      }
    }
  }
  v19 = WdLogNewEntry5_WdTrace(v11);
  return (_UNKNOWN **)WdLogEvent5_WdTrace(v19);
}
