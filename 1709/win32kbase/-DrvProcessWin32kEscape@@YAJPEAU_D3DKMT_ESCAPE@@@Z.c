/*
 * XREFs of ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C0073750
 * Callers:
 *     NtGdiDdDDIEscape @ 0x1C00736F0 (NtGdiDdDDIEscape.c)
 * Callees:
 *     EnterCrit @ 0x1C003BF20 (EnterCrit.c)
 *     PALLOCMEM2 @ 0x1C0040604 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x1C006755C (-DrvAcquireChangeDisplaySettingLocks@@YAXXZ.c)
 *     ?DrvReleaseChangeDisplaySettingLocks@@YAXXZ @ 0x1C00675E8 (-DrvReleaseChangeDisplaySettingLocks@@YAXXZ.c)
 *     _DrvProcessWin32kEscape_::_93_::UserCritShared::UserCritShared @ 0x1C00AA1B4 (_DrvProcessWin32kEscape_--_93_--UserCritShared--UserCritShared.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     ?xxxDisplayDiagBlackScreenDetected@@YAXI@Z @ 0x1C00DD980 (-xxxDisplayDiagBlackScreenDetected@@YAXI@Z.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C00F7F08 (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 */

__int64 __fastcall DrvProcessWin32kEscape(struct _D3DKMT_ESCAPE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int HipDeviceInfoSupported; // ebx
  _WORD *v6; // rdi
  size_t PrivateDriverDataSize; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
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
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  char v33; // [rsp+48h] [rbp+10h] BYREF
  _WORD *v34; // [rsp+50h] [rbp+18h]

  HipDeviceInfoSupported = 0;
  v6 = 0LL;
  v34 = 0LL;
  PrivateDriverDataSize = a1->PrivateDriverDataSize;
  if ( !(_DWORD)PrivateDriverDataSize )
    goto LABEL_7;
  v6 = PALLOCMEM2(PrivateDriverDataSize, 1886221383LL, 1);
  v34 = v6;
  if ( v6 )
  {
    v11 = a1->PrivateDriverDataSize;
    pPrivateDriverData = (char *)a1->pPrivateDriverData;
    if ( &pPrivateDriverData[v11] < pPrivateDriverData
      || (unsigned __int64)&pPrivateDriverData[v11] > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v6, pPrivateDriverData, v11);
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
            HipDeviceInfoSupported = -1073741637;
            goto LABEL_21;
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
                  *v6 = gdmLogPixels;
                  v6[1] = *(_WORD *)(PsGetCurrentProcessWin32Process(v25, a2, a3) + 284);
                  v6[2] = *((_WORD *)gpsi + 4987);
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
              CurrentDpiInfoFromHDC = DrvGetCurrentDpiInfoFromHDC(*(HDC *)v6, (struct _DPI_INFORMATION *const)(v6 + 4));
              goto LABEL_14;
            }
            HipDeviceInfoSupported = -1073741811;
          }
          if ( a1->PrivateDriverDataSize < 8 )
            goto LABEL_34;
          if ( *(_DWORD *)v6 == 1 )
          {
            if ( qword_1C01908F0 )
            {
              *((_DWORD *)v6 + 1) = (unsigned __int8)_guard_dispatch_icall_fptr() != 0;
              goto LABEL_15;
            }
            goto LABEL_65;
          }
          if ( *(_DWORD *)v6 == 2 && gbOSTestSigningEnabled )
          {
            gbBypassPresenterViewProcessCheck = *((_DWORD *)v6 + 1);
            goto LABEL_15;
          }
LABEL_57:
          HipDeviceInfoSupported = -1073741811;
          goto LABEL_15;
        }
        v27 = a1->PrivateDriverDataSize;
        if ( v27 < 4 || v27 != *(_DWORD *)v6 )
          goto LABEL_34;
        HipDeviceInfoSupported = IsUserGetHipDeviceInfoSupported();
        if ( HipDeviceInfoSupported >= 0 )
        {
          CurrentDpiInfoFromHDC = UserGetHipDeviceInfo(v6);
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
              if ( qword_1C0190AC0 )
              {
LABEL_13:
                CurrentDpiInfoFromHDC = _guard_dispatch_icall_fptr();
LABEL_14:
                HipDeviceInfoSupported = CurrentDpiInfoFromHDC;
                goto LABEL_15;
              }
LABEL_65:
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
          EnterCrit(0LL, 1LL, a3, a4);
          DrvAcquireChangeDisplaySettingLocks();
          if ( qword_1C0190AC8 )
            HipDeviceInfoSupported = _guard_dispatch_icall_fptr();
          else
            HipDeviceInfoSupported = -1073741637;
          DrvReleaseChangeDisplaySettingLocks();
LABEL_64:
          UserSessionSwitchLeaveCrit(v30, v29, v31, v32);
          goto LABEL_15;
        }
        if ( (unsigned int)DxgkEngIsDwmProcess() )
        {
          DrvProcessWin32kEscape_::_93_::UserCritShared::UserCritShared(&v33);
          xxxDisplayDiagBlackScreenDetected(4u);
          HipDeviceInfoSupported = 0;
          goto LABEL_64;
        }
        HipDeviceInfoSupported = -1073741790;
LABEL_15:
        if ( HipDeviceInfoSupported >= 0 )
        {
          if ( !v6 )
            return (unsigned int)HipDeviceInfoSupported;
          v18 = a1->PrivateDriverDataSize;
          v19 = (char *)a1->pPrivateDriverData;
          if ( (unsigned __int64)&v19[v18] > MmUserProbeAddress || &v19[v18] <= v19 )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v19, v6, v18);
        }
LABEL_21:
        if ( v6 )
          Win32FreePool((__int64)v6);
        return (unsigned int)HipDeviceInfoSupported;
      }
      if ( a1->PrivateDriverDataSize != 4 )
        goto LABEL_34;
      if ( gbOSTestSigningEnabled )
      {
        if ( (*(_DWORD *)v6 & 3) == 2 )
        {
          v26 = WdLogNewEntry5_WdError(*(unsigned int *)v6, a2, a3);
          *(_QWORD *)(v26 + 24) = a1->Type;
          WdLogEvent5_WdError(v26);
          goto LABEL_34;
        }
        gOutputDuplicationTestControl = *(_DWORD *)v6;
        goto LABEL_15;
      }
    }
    HipDeviceInfoSupported = -1073741790;
    goto LABEL_21;
  }
  v21 = WdLogNewEntry5_WdLowResource(v9, v8, v10);
  *(_QWORD *)(v21 + 24) = a1->PrivateDriverDataSize;
  WdLogEvent5_WdLowResource(v21);
  return 3221225495LL;
}
