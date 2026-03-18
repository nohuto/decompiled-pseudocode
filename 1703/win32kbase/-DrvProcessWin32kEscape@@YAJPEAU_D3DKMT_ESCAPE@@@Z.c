/*
 * XREFs of ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C007B4BC
 * Callers:
 *     NtGdiDdDDIEscape @ 0x1C007B460 (NtGdiDdDDIEscape.c)
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x1C005A9FC (-DrvAcquireChangeDisplaySettingLocks@@YAXXZ.c)
 *     ?DrvReleaseChangeDisplaySettingLocks@@YAXXZ @ 0x1C005AA88 (-DrvReleaseChangeDisplaySettingLocks@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     ?xxxDisplayDiagBlackScreenDetected@@YAXI@Z @ 0x1C00D7870 (-xxxDisplayDiagBlackScreenDetected@@YAXI@Z.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C00F6E84 (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 *     ?QueryAllowAppLiteRotationModeChangeOverride@@YAXXZ @ 0x1C00F7EA4 (-QueryAllowAppLiteRotationModeChangeOverride@@YAXXZ.c)
 */

__int64 __fastcall DrvProcessWin32kEscape(struct _D3DKMT_ESCAPE *a1, __int64 a2, __int64 a3)
{
  int HipDeviceInfoSupported; // ebx
  _WORD *v5; // rdi
  size_t PrivateDriverDataSize; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  size_t v11; // r8
  char *pPrivateDriverData; // rdx
  D3DKMT_ESCAPETYPE Type; // ecx
  __int32 v14; // ecx
  __int32 v15; // ecx
  __int32 v16; // ecx
  int CurrentDpiInfoFromHDC; // eax
  size_t v18; // r8
  char *v19; // rcx
  __int64 v21; // rax
  __int32 v22; // ecx
  __int32 v23; // ecx
  __int32 v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rax
  UINT v27; // eax
  __int64 v28; // rax
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v30; // r12
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r15
  int v35; // ecx
  LARGE_INTEGER v36; // rbx
  int v37; // r8d
  bool v38; // al
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  LARGE_INTEGER *v42; // rbx
  struct tagTHREADINFO *v43; // r12
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r15
  int v48; // ecx
  LARGE_INTEGER v49; // rbx
  int v50; // r8d
  bool v51; // al

  HipDeviceInfoSupported = 0;
  v5 = 0LL;
  PrivateDriverDataSize = a1->PrivateDriverDataSize;
  if ( !(_DWORD)PrivateDriverDataSize )
    goto LABEL_7;
  v5 = PALLOCMEM2(PrivateDriverDataSize, 1886221383LL, 1);
  if ( v5 )
  {
    v11 = a1->PrivateDriverDataSize;
    pPrivateDriverData = (char *)a1->pPrivateDriverData;
    if ( &pPrivateDriverData[v11] < pPrivateDriverData || &pPrivateDriverData[v11] > (char *)W32UserProbeAddress )
      *(_BYTE *)W32UserProbeAddress = 0;
    memmove(v5, pPrivateDriverData, v11);
LABEL_7:
    Type = a1->Type;
    if ( Type <= D3DKMT_ESCAPE_WIN32K_BDD_FALLBACK )
    {
      if ( Type != D3DKMT_ESCAPE_WIN32K_BDD_FALLBACK )
      {
        v22 = Type - 1024;
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( !v23 )
          {
            QueryAllowAppLiteRotationModeChangeOverride();
            HipDeviceInfoSupported = 0;
LABEL_16:
            if ( !v5 )
              return (unsigned int)HipDeviceInfoSupported;
            v18 = a1->PrivateDriverDataSize;
            v19 = (char *)a1->pPrivateDriverData;
            if ( &v19[v18] > (char *)W32UserProbeAddress || &v19[v18] <= v19 )
              *(_BYTE *)W32UserProbeAddress = 0;
            memmove(v19, v5, v18);
LABEL_21:
            if ( v5 )
              Win32FreePool((__int64)v5);
            return (unsigned int)HipDeviceInfoSupported;
          }
          v24 = v23 - 1;
          if ( v24 )
          {
            v25 = (unsigned int)(v24 - 1);
            if ( (_DWORD)v25 )
            {
              if ( (_DWORD)v25 == 1 )
              {
                if ( a1->PrivateDriverDataSize == 6 )
                {
                  *v5 = gdmLogPixels;
                  v5[1] = *((_WORD *)gpsi + 4339);
                  v5[2] = *((_WORD *)gpDispInfo + 72);
                  goto LABEL_15;
                }
                goto LABEL_34;
              }
              goto LABEL_56;
            }
          }
          else
          {
            if ( a1->PrivateDriverDataSize == 104 )
            {
              CurrentDpiInfoFromHDC = DrvGetCurrentDpiInfoFromHDC(*(HDC *)v5, (struct _DPI_INFORMATION *const)(v5 + 4));
              goto LABEL_14;
            }
            HipDeviceInfoSupported = -1073741811;
          }
          if ( a1->PrivateDriverDataSize < 8 )
            goto LABEL_34;
          if ( *(_DWORD *)v5 == 1 )
          {
            if ( qword_1C018BC88 )
            {
              *((_DWORD *)v5 + 1) = (unsigned __int8)_guard_dispatch_icall_fptr() != 0;
              goto LABEL_15;
            }
            goto LABEL_82;
          }
          if ( *(_DWORD *)v5 == 2 && gbOSTestSigningEnabled )
          {
            gbBypassPresenterViewProcessCheck = *((_DWORD *)v5 + 1);
            goto LABEL_15;
          }
LABEL_57:
          HipDeviceInfoSupported = -1073741811;
          goto LABEL_15;
        }
        v27 = a1->PrivateDriverDataSize;
        if ( v27 < 4 || v27 != *(_DWORD *)v5 )
          goto LABEL_34;
        HipDeviceInfoSupported = IsUserGetHipDeviceInfoSupported();
        if ( HipDeviceInfoSupported >= 0 )
        {
          CurrentDpiInfoFromHDC = UserGetHipDeviceInfo(v5);
          goto LABEL_14;
        }
        goto LABEL_15;
      }
      if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
        goto LABEL_13;
    }
    else
    {
      v14 = Type - 1030;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( !v16 )
          {
            if ( a1->PrivateDriverDataSize == 76 )
            {
              if ( qword_1C018BE40 )
              {
LABEL_13:
                CurrentDpiInfoFromHDC = _guard_dispatch_icall_fptr();
LABEL_14:
                HipDeviceInfoSupported = CurrentDpiInfoFromHDC;
                goto LABEL_15;
              }
LABEL_82:
              HipDeviceInfoSupported = -1073741637;
              goto LABEL_15;
            }
LABEL_34:
            HipDeviceInfoSupported = -1073741811;
            goto LABEL_21;
          }
          v25 = (unsigned int)(v16 - 1);
          if ( (_DWORD)v25 )
          {
            if ( (_DWORD)v25 == 1 )
            {
              if ( a1->PrivateDriverDataSize == 40 )
                goto LABEL_13;
              goto LABEL_34;
            }
LABEL_56:
            v28 = WdLogNewEntry5_WdError(v25, a2, a3);
            *(_QWORD *)(v28 + 24) = a1->Type;
            WdLogEvent5_WdError(v28);
            goto LABEL_57;
          }
          if ( a1->PrivateDriverDataSize != 20 )
            goto LABEL_34;
          CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v25, a2, a3);
          if ( CurrentThreadWin32Thread )
            CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
          v30 = EnterCritAvoidingDitHitTestHazard(0, 1);
          v34 = PsGetCurrentThreadWin32Thread(v32, v31, v33);
          if ( v34 )
          {
            v36 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v34 + 8));
            if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
            {
              v38 = (unsigned __int8)(byte_1C0186D98 - 1) > 2u
                 && (qword_1C0186D80 & 0x200000010000000LL) != 0
                 && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88;
              if ( v38 && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
              {
                LOBYTE(v35) = byte_1C0186D98 - 1;
                Template_xqx(
                  v35,
                  (unsigned int)&AcquiredExclusiveUserCritEvent,
                  v37,
                  v36.LowPart,
                  0,
                  (char)gullUserCritAcquireToken);
              }
            }
            if ( v36.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
              && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
            {
              Template_xqx(
                (_DWORD)gullUserCritAcquireToken,
                (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                v37,
                0,
                1000 * v36.QuadPart / gliQpcFreq.QuadPart,
                (char)gullUserCritAcquireToken);
            }
            *(_QWORD *)(v34 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
          }
          gptiCurrent = v30;
          gbValidateHandleForIL = 1;
          DrvAcquireChangeDisplaySettingLocks();
          if ( qword_1C018BE48 )
            HipDeviceInfoSupported = _guard_dispatch_icall_fptr();
          else
            HipDeviceInfoSupported = -1073741637;
          DrvReleaseChangeDisplaySettingLocks();
LABEL_81:
          UserSessionSwitchLeaveCrit();
          goto LABEL_15;
        }
        if ( (unsigned int)DxgkEngIsDwmProcess() )
        {
          v42 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v40, v39, v41);
          if ( v42 )
            v42[1] = KeQueryPerformanceCounter(0LL);
          v43 = EnterCritAvoidingDitHitTestHazard(0, 1);
          v47 = PsGetCurrentThreadWin32Thread(v45, v44, v46);
          if ( v47 )
          {
            v49 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v47 + 8));
            if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
            {
              v51 = (unsigned __int8)(byte_1C0186D98 - 1) > 2u
                 && (qword_1C0186D80 & 0x200000010000000LL) != 0
                 && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88;
              if ( v51 && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
              {
                LOBYTE(v48) = byte_1C0186D98 - 1;
                Template_xqx(
                  v48,
                  (unsigned int)&AcquiredExclusiveUserCritEvent,
                  v50,
                  v49.LowPart,
                  0,
                  (char)gullUserCritAcquireToken);
              }
            }
            if ( v49.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
              && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
            {
              Template_xqx(
                (_DWORD)gullUserCritAcquireToken,
                (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                v50,
                0,
                1000 * v49.QuadPart / gliQpcFreq.QuadPart,
                (char)gullUserCritAcquireToken);
            }
            *(_QWORD *)(v47 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
          }
          gptiCurrent = v43;
          gbValidateHandleForIL = 1;
          xxxDisplayDiagBlackScreenDetected(4u);
          HipDeviceInfoSupported = 0;
          goto LABEL_81;
        }
        HipDeviceInfoSupported = -1073741790;
LABEL_15:
        if ( HipDeviceInfoSupported < 0 )
          goto LABEL_21;
        goto LABEL_16;
      }
      if ( a1->PrivateDriverDataSize != 4 )
        goto LABEL_34;
      if ( gbOSTestSigningEnabled )
      {
        if ( (*(_DWORD *)v5 & 3) == 2 )
        {
          v26 = WdLogNewEntry5_WdError(*(unsigned int *)v5, a2, a3);
          *(_QWORD *)(v26 + 24) = a1->Type;
          WdLogEvent5_WdError(v26);
          goto LABEL_34;
        }
        gOutputDuplicationTestControl = *(_DWORD *)v5;
        goto LABEL_15;
      }
    }
    HipDeviceInfoSupported = -1073741790;
    goto LABEL_21;
  }
  v21 = WdLogNewEntry5_WdLowResource(v8, v7, v9, v10);
  *(_QWORD *)(v21 + 24) = a1->PrivateDriverDataSize;
  WdLogEvent5_WdLowResource(v21);
  return 3221225495LL;
}
