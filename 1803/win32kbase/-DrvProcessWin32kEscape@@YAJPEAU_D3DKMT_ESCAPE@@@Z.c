/*
 * XREFs of ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00D02B4
 * Callers:
 *     NtGdiDdDDIEscape @ 0x1C005EC90 (NtGdiDdDDIEscape.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCrit @ 0x1C0030490 (EnterCrit.c)
 *     ?DrvReleaseChangeDisplaySettingLocks@@YAXXZ @ 0x1C006DBF0 (-DrvReleaseChangeDisplaySettingLocks@@YAXXZ.c)
 *     ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x1C006DC8C (-DrvAcquireChangeDisplaySettingLocks@@YAXXZ.c)
 *     _DrvProcessWin32kEscape_::_93_::UserCritShared::UserCritShared @ 0x1C0077340 (_DrvProcessWin32kEscape_--_93_--UserCritShared--UserCritShared.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     ?xxxDisplayDiagBlackScreenDetected@@YAXIEE@Z @ 0x1C00A61B0 (-xxxDisplayDiagBlackScreenDetected@@YAXIEE@Z.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C00CF188 (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 */

__int64 __fastcall DrvProcessWin32kEscape(struct _D3DKMT_ESCAPE *a1, __int64 a2, __int64 a3)
{
  int HipDeviceInfoSupported; // ebx
  _DWORD *v5; // rdi
  size_t PrivateDriverDataSize; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  size_t v13; // r8
  char *pPrivateDriverData; // rdx
  D3DKMT_ESCAPETYPE Type; // ecx
  __int32 v16; // ecx
  __int32 v17; // ecx
  __int32 v18; // ecx
  __int64 v19; // rcx
  int HipDeviceInfo; // eax
  UINT v21; // eax
  __int32 v22; // ecx
  __int64 v23; // rcx
  int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // r8d
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rax
  size_t v33; // r8
  char *v34; // rcx
  char v35; // [rsp+48h] [rbp+10h] BYREF
  _DWORD *v36; // [rsp+50h] [rbp+18h]

  HipDeviceInfoSupported = 0;
  v5 = 0LL;
  v36 = 0LL;
  PrivateDriverDataSize = a1->PrivateDriverDataSize;
  if ( (_DWORD)PrivateDriverDataSize )
  {
    v5 = PALLOCMEM2(PrivateDriverDataSize, 0x706D7447u, 1);
    v36 = v5;
    if ( !v5 )
    {
      v11 = WdLogNewEntry5_WdLowResource(v8, v7, v9, v10);
      *(_QWORD *)(v11 + 24) = a1->PrivateDriverDataSize;
      WdLogEvent5_WdLowResource(v11);
      return 3221225495LL;
    }
    v13 = a1->PrivateDriverDataSize;
    pPrivateDriverData = (char *)a1->pPrivateDriverData;
    if ( &pPrivateDriverData[v13] < pPrivateDriverData
      || (unsigned __int64)&pPrivateDriverData[v13] > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v5, pPrivateDriverData, v13);
  }
  Type = a1->Type;
  if ( Type > D3DKMT_ESCAPE_WIN32K_BDD_FALLBACK )
  {
    v22 = Type - 1030;
    if ( !v22 )
    {
      if ( a1->PrivateDriverDataSize != 4 )
        goto LABEL_16;
      if ( gbOSTestSigningEnabled )
      {
        if ( (*v5 & 3) == 2 )
        {
          v32 = WdLogNewEntry5_WdError((unsigned int)*v5, a2, a3);
          *(_QWORD *)(v32 + 24) = a1->Type;
          WdLogEvent5_WdError(v32);
          goto LABEL_16;
        }
        gOutputDuplicationTestControl = *v5;
        goto LABEL_63;
      }
LABEL_35:
      HipDeviceInfoSupported = -1073741790;
      goto LABEL_69;
    }
    v23 = (unsigned int)(v22 - 1);
    if ( (_DWORD)v23 )
    {
      v24 = v23 - 1;
      if ( !v24 )
      {
        if ( a1->PrivateDriverDataSize != 76 )
          goto LABEL_16;
        if ( !qword_1C01A1E90 )
          goto LABEL_54;
        goto LABEL_36;
      }
      v19 = (unsigned int)(v24 - 1);
      if ( (_DWORD)v19 )
      {
        if ( (_DWORD)v19 != 1 )
          goto LABEL_42;
        if ( a1->PrivateDriverDataSize != 40 )
          goto LABEL_16;
        goto LABEL_36;
      }
      if ( a1->PrivateDriverDataSize != 20 )
        goto LABEL_16;
      EnterCrit(0LL, 1LL, a3);
      DrvAcquireChangeDisplaySettingLocks();
      if ( qword_1C01A1E98 )
        HipDeviceInfoSupported = _guard_dispatch_icall_fptr();
      else
        HipDeviceInfoSupported = -1073741637;
      DrvReleaseChangeDisplaySettingLocks(v27, v26, v28);
    }
    else
    {
      if ( !(unsigned int)DxgkEngIsDwmProcess(v23) )
      {
        HipDeviceInfoSupported = -1073741790;
        goto LABEL_63;
      }
      DrvProcessWin32kEscape_::_93_::UserCritShared::UserCritShared((__int64)&v35, v30, v31);
      xxxDisplayDiagBlackScreenDetected(4u, 1, 1);
      HipDeviceInfoSupported = 0;
    }
    UserSessionSwitchLeaveCrit(v29);
    goto LABEL_63;
  }
  if ( Type == D3DKMT_ESCAPE_WIN32K_BDD_FALLBACK )
  {
    if ( PsGetCurrentProcessId() != (HANDLE)gpidLogon )
      goto LABEL_35;
LABEL_36:
    HipDeviceInfo = _guard_dispatch_icall_fptr();
    goto LABEL_33;
  }
  v16 = Type - 1024;
  if ( !v16 )
  {
    v21 = a1->PrivateDriverDataSize;
    if ( v21 < 4 || v21 != *v5 )
      goto LABEL_16;
    HipDeviceInfoSupported = IsUserGetHipDeviceInfoSupported();
    if ( HipDeviceInfoSupported < 0 )
      goto LABEL_63;
    HipDeviceInfo = UserGetHipDeviceInfo(v5);
    goto LABEL_33;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    HipDeviceInfoSupported = -1073741637;
    goto LABEL_69;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    if ( a1->PrivateDriverDataSize != 104 )
    {
      HipDeviceInfoSupported = -1073741811;
      goto LABEL_20;
    }
    HipDeviceInfo = DrvGetCurrentDpiInfoFromHDC(*(HDC *)v5, (struct _DPI_INFORMATION *const)(v5 + 2));
LABEL_33:
    HipDeviceInfoSupported = HipDeviceInfo;
    goto LABEL_63;
  }
  v19 = (unsigned int)(v18 - 1);
  if ( !(_DWORD)v19 )
  {
LABEL_20:
    if ( a1->PrivateDriverDataSize < 8 )
      goto LABEL_16;
    if ( *v5 != 1 )
    {
      if ( *v5 == 2 && gbOSTestSigningEnabled )
      {
        gbBypassPresenterViewProcessCheck = v5[1];
        goto LABEL_63;
      }
      goto LABEL_43;
    }
    if ( qword_1C01A1CC0 )
    {
      v5[1] = (unsigned __int8)_guard_dispatch_icall_fptr() != 0;
      goto LABEL_63;
    }
LABEL_54:
    HipDeviceInfoSupported = -1073741637;
    goto LABEL_63;
  }
  if ( (_DWORD)v19 != 1 )
  {
LABEL_42:
    v25 = WdLogNewEntry5_WdError(v19, a2, a3);
    *(_QWORD *)(v25 + 24) = a1->Type;
    WdLogEvent5_WdError(v25);
LABEL_43:
    HipDeviceInfoSupported = -1073741811;
    goto LABEL_63;
  }
  if ( a1->PrivateDriverDataSize != 6 )
  {
LABEL_16:
    HipDeviceInfoSupported = -1073741811;
    goto LABEL_69;
  }
  *(_WORD *)v5 = gdmLogPixels;
  *((_WORD *)v5 + 1) = *(_WORD *)(PsGetCurrentProcessWin32Process(v19) + 284);
  *((_WORD *)v5 + 2) = *((_WORD *)gpsi + 3499);
LABEL_63:
  if ( HipDeviceInfoSupported < 0 )
  {
LABEL_69:
    if ( v5 )
      Win32FreePool((__int64)v5);
    return (unsigned int)HipDeviceInfoSupported;
  }
  if ( v5 )
  {
    v33 = a1->PrivateDriverDataSize;
    v34 = (char *)a1->pPrivateDriverData;
    if ( (unsigned __int64)&v34[v33] > MmUserProbeAddress || &v34[v33] <= v34 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v34, v5, v33);
    goto LABEL_69;
  }
  return (unsigned int)HipDeviceInfoSupported;
}
