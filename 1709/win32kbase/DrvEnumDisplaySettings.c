/*
 * XREFs of DrvEnumDisplaySettings @ 0x1C005B8A0
 * Callers:
 *     NtUserEnumDisplaySettings @ 0x1C005C380 (NtUserEnumDisplaySettings.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     PALLOCMEM2 @ 0x1C0040604 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     DrvGetDeviceFromName @ 0x1C005A6D0 (DrvGetDeviceFromName.c)
 *     ?DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z @ 0x1C0064028 (-DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z.c)
 *     DrvBuildDevmodeList @ 0x1C006ABB0 (DrvBuildDevmodeList.c)
 *     DrvGetDisplayDriverParameters @ 0x1C006AF2C (DrvGetDisplayDriverParameters.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0070F10 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0073530 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00789F0 (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall DrvEnumDisplaySettings(UNICODE_STRING *a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  wchar_t *v9; // rdi
  _QWORD *v10; // rax
  unsigned int v11; // r12d
  PERESOURCE v12; // rcx
  __int64 v13; // rax
  wchar_t *DeviceFromName; // rax
  PDEV *i; // rsi
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int16 v19; // ax
  __int64 v20; // rcx
  int PreferredMode; // esi
  __int64 v22; // rax
  struct _devicemodeW *v23; // rax
  __int64 v24; // r15
  int DevModeForLddmPath; // eax
  unsigned __int16 v26; // ax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rax
  int v31; // r11d
  PDEV *j; // rax
  __int64 v33; // rcx
  _DWORD *v34; // rax
  _DWORD *v35; // rsi
  __int64 v36; // r15
  unsigned int v37; // r9d
  unsigned int v38; // edx
  int v39; // r8d
  unsigned __int16 v40; // ax
  size_t v41; // rsi
  unsigned __int16 v42; // ax
  __int64 v43; // rax
  __int64 v44; // rcx
  unsigned __int16 v45; // [rsp+20h] [rbp-58h]
  int v46; // [rsp+80h] [rbp+8h]
  int v47; // [rsp+90h] [rbp+18h] BYREF
  __int64 v48; // [rsp+98h] [rbp+20h]

  v48 = a4;
  v9 = 0LL;
  v10 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v10[3] = a1;
  v10[4] = a2;
  v10[5] = a3;
  v10[6] = a5;
  WdLogEvent5_WdEvent(v10);
  if ( (a4 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v45 = *(_WORD *)(a4 + 70);
  LOWORD(v11) = v45;
  ProbeForWrite((volatile void *)a4, v45 + 220LL, 2u);
  if ( *(_WORD *)(a4 + 68) == 220 )
  {
    if ( a1 )
    {
      DeviceFromName = DrvGetDeviceFromName(a1, 1);
      v9 = DeviceFromName;
      if ( DeviceFromName && !*((_QWORD *)DeviceFromName + 17) && (*((_DWORD *)DeviceFromName + 40) & 0x6000008) == 0 )
        v9 = 0LL;
    }
    else if ( a2 )
    {
      v9 = *(wchar_t **)(a2 + 2592);
    }
    if ( v9 )
    {
      switch ( a3 )
      {
        case 0xFFFFFFFD:
          PreferredMode = DrvGetPreferredMode((struct _devicemodeW *)a4, (struct tagGRAPHICS_DEVICE *)v9);
          break;
        case 0xFFFFFFFE:
          v23 = (struct _devicemodeW *)PALLOCMEM2(0x100DBuLL, 1986356295LL, 1);
          v24 = (__int64)v23;
          if ( v23 )
          {
            if ( (*((_DWORD *)v9 + 40) & 0x800000) != 0 )
            {
              DevModeForLddmPath = DrvGetDevModeForLddmPath((struct tagGRAPHICS_DEVICE *)v9, 0xFFFFFFFE, v23, 0LL);
            }
            else
            {
              *(_DWORD *)&v23->dmSize = -8739;
              DevModeForLddmPath = DrvGetDisplayDriverParameters(v9, v23, 0LL, 0LL);
            }
            PreferredMode = DevModeForLddmPath;
            if ( DevModeForLddmPath >= 0 )
            {
              v26 = *(_WORD *)(v24 + 70);
              if ( v45 < v26 )
                v26 = v45;
              LOWORD(v11) = v26;
              memmove((void *)(a4 + 220), (const void *)(v24 + 220), v26);
              *(_OWORD *)a4 = *(_OWORD *)v24;
              *(_OWORD *)(a4 + 16) = *(_OWORD *)(v24 + 16);
              *(_OWORD *)(a4 + 32) = *(_OWORD *)(v24 + 32);
              *(_OWORD *)(a4 + 48) = *(_OWORD *)(v24 + 48);
              *(_OWORD *)(a4 + 64) = *(_OWORD *)(v24 + 64);
              *(_OWORD *)(a4 + 80) = *(_OWORD *)(v24 + 80);
              *(_OWORD *)(a4 + 96) = *(_OWORD *)(v24 + 96);
              *(_OWORD *)(a4 + 112) = *(_OWORD *)(v24 + 112);
              *(_OWORD *)(a4 + 128) = *(_OWORD *)(v24 + 128);
              *(_OWORD *)(a4 + 144) = *(_OWORD *)(v24 + 144);
              *(_OWORD *)(a4 + 160) = *(_OWORD *)(v24 + 160);
              *(_OWORD *)(a4 + 176) = *(_OWORD *)(v24 + 176);
              *(_OWORD *)(a4 + 192) = *(_OWORD *)(v24 + 192);
              *(_QWORD *)(a4 + 208) = *(_QWORD *)(v24 + 208);
              *(_DWORD *)(a4 + 216) = *(_DWORD *)(v24 + 216);
            }
            Win32FreePool(v24);
          }
          else
          {
            PreferredMode = -1073741801;
          }
          break;
        case 0xFFFFFFFF:
          if ( ghsemDynamicModeChange )
            ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
          EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
          EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
          for ( i = gppdevList; ; i = *(PDEV **)i )
          {
            if ( !i )
            {
              PreferredMode = -1073741585;
              goto LABEL_26;
            }
            v17 = *((_QWORD *)i + 324);
            if ( (wchar_t *)v17 == v9 )
            {
              if ( *((_DWORD *)i + 3) )
                break;
            }
          }
          LOBYTE(v47) = 0;
          if ( *(_DWORD *)(*((_QWORD *)i + 326) + 184LL) == 1 && (*(_DWORD *)(v17 + 160) & 0x800000) != 0 )
          {
            v27 = DrvGetDevModeForLddmPath((struct tagGRAPHICS_DEVICE *)v9, 0xFFFFFFFF, 0LL, (bool *)&v47);
            v29 = v27;
            if ( v27 < 0 )
            {
              v30 = WdLogNewEntry5_WdTrace(v28);
              *(_QWORD *)(v30 + 24) = v29;
              WdLogEvent5_WdTrace(v30);
            }
          }
          v18 = *((_QWORD *)i + 326);
          v19 = *(_WORD *)(v18 + 70);
          if ( v45 < v19 )
            v19 = v45;
          LOWORD(v11) = v19;
          memmove((void *)(a4 + 220), (const void *)(v18 + 220), v19);
          v20 = *((_QWORD *)i + 326);
          *(_OWORD *)a4 = *(_OWORD *)v20;
          *(_OWORD *)(a4 + 16) = *(_OWORD *)(v20 + 16);
          *(_OWORD *)(a4 + 32) = *(_OWORD *)(v20 + 32);
          *(_OWORD *)(a4 + 48) = *(_OWORD *)(v20 + 48);
          *(_OWORD *)(a4 + 64) = *(_OWORD *)(v20 + 64);
          *(_OWORD *)(a4 + 80) = *(_OWORD *)(v20 + 80);
          *(_OWORD *)(a4 + 96) = *(_OWORD *)(v20 + 96);
          *(_OWORD *)(a4 + 112) = *(_OWORD *)(v20 + 112);
          v20 += 128LL;
          *(_OWORD *)(a4 + 128) = *(_OWORD *)v20;
          *(_OWORD *)(a4 + 144) = *(_OWORD *)(v20 + 16);
          *(_OWORD *)(a4 + 160) = *(_OWORD *)(v20 + 32);
          *(_OWORD *)(a4 + 176) = *(_OWORD *)(v20 + 48);
          *(_OWORD *)(a4 + 192) = *(_OWORD *)(v20 + 64);
          *(_QWORD *)(a4 + 208) = *(_QWORD *)(v20 + 80);
          *(_DWORD *)(a4 + 216) = *(_DWORD *)(v20 + 88);
          if ( (_BYTE)v47 )
            *(_DWORD *)(a4 + 184) = 64;
          *(_DWORD *)(a4 + 72) &= 0xF9FFFFFF;
          PreferredMode = 0;
LABEL_26:
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
          if ( ghsemDriverMgmt )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
            PsLeavePriorityRegion();
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
          v12 = ghsemDynamicModeChange;
          if ( ghsemDynamicModeChange )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
            PsLeavePriorityRegion();
          }
          break;
        default:
          DrvBuildDevmodeList((struct tagGRAPHICS_DEVICE *)v9);
          v46 = 0;
          v31 = a5 & 4;
          v47 = v31;
          if ( (a5 & 4) == 0 )
          {
            if ( gProtocolType )
            {
              if ( ghsemDynamicModeChange )
                ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
              EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
              for ( j = gppdevList; j; j = *(PDEV **)j )
              {
                if ( *((wchar_t **)j + 324) == v9 && *((_DWORD *)j + 3) )
                {
                  v33 = *((_QWORD *)j + 326);
                  if ( (*(_DWORD *)(v33 + 72) & 0x80u) != 0 )
                    v46 = *(_DWORD *)(v33 + 84);
                  break;
                }
              }
              EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
              v12 = ghsemDynamicModeChange;
              if ( ghsemDynamicModeChange )
              {
                ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
                PsLeavePriorityRegion();
              }
            }
            else
            {
              v34 = PALLOCMEM2(0x100DBuLL, 1986356295LL, 1);
              v35 = v34;
              if ( v34 )
              {
                memset(v34, 0, 0xDCuLL);
                v35[17] = 56797;
                if ( (int)DrvGetDisplayDriverParameters(v9, v35, 0LL, 0LL) >= 0 && (v35[18] & 0x80u) != 0 )
                  v46 = v35[21];
                Win32FreePool((__int64)v35);
              }
            }
            v31 = v47;
          }
          if ( *((_DWORD *)v9 + 44) && *((_QWORD *)v9 + 23) )
          {
            v36 = 0LL;
            PreferredMode = -1073741584;
            v37 = *((_DWORD *)v9 + 48);
            if ( a3 < v37 )
            {
              if ( (a5 & 6) == 6 )
              {
                _mm_lfence();
                v36 = *(_QWORD *)(*((_QWORD *)v9 + 25) + 16LL * a3 + 8);
LABEL_86:
                LOWORD(v11) = v45;
                PreferredMode = -1073741584;
              }
              else
              {
                v38 = 0;
                v39 = 0;
                while ( v38 < v37 )
                {
                  if ( (a5 & 2) != 0 || (v12 = (PERESOURCE)(2LL * v38), !*(_DWORD *)(*((_QWORD *)v9 + 25) + 16LL * v38)) )
                  {
                    if ( v31
                      || (v12 = *(PERESOURCE *)(*((_QWORD *)v9 + 25) + 16LL * v38 + 8), HIDWORD(v12->Reserved2) == v46) )
                    {
                      if ( v39 == a3 )
                      {
                        _mm_lfence();
                        v12 = (PERESOURCE)(2LL * v38);
                        v36 = *(_QWORD *)(*((_QWORD *)v9 + 25) + 16LL * v38 + 8);
                        goto LABEL_86;
                      }
                      ++v39;
                    }
                  }
                  ++v38;
                }
              }
            }
            if ( v36 )
            {
              v40 = *(_WORD *)(v36 + 70);
              if ( (unsigned __int16)v11 < v40 )
                v40 = v11;
              v11 = v40;
              v41 = 220LL;
              memset((void *)a4, 0, 0xDCuLL);
              memmove((void *)(a4 + 220), (const void *)(v36 + *(unsigned __int16 *)(v36 + 68)), v11);
              v42 = *(_WORD *)(v36 + 68);
              if ( v42 <= 0xDCu )
                v41 = v42;
              memmove((void *)a4, (const void *)v36, v41);
              if ( (*((_DWORD *)v9 + 40) & 0x800000) != 0 && *(_DWORD *)(v36 + 184) == 1 )
                *(_DWORD *)(a4 + 184) = 64;
              PreferredMode = 0;
            }
          }
          else
          {
            v43 = WdLogNewEntry5_WdTrace(v12);
            WdLogEvent5_WdTrace(v43);
            PreferredMode = -1073741823;
          }
          if ( PreferredMode == -1073741584 )
          {
            *((_DWORD *)v9 + 44) = 0;
            v44 = *((_QWORD *)v9 + 23);
            if ( v44 )
            {
              Win32FreePool(v44);
              *((_QWORD *)v9 + 23) = 0LL;
            }
            v12 = (PERESOURCE)*((_QWORD *)v9 + 25);
            if ( v12 )
            {
              Win32FreePool((__int64)v12);
              *((_QWORD *)v9 + 25) = 0LL;
            }
            *((_DWORD *)v9 + 48) = 0;
          }
          break;
      }
    }
    else
    {
      PreferredMode = -1073741585;
    }
    if ( !PreferredMode )
      *(_WORD *)(a4 + 70) = v11;
    v22 = WdLogNewEntry5_WdTrace(v12);
    *(_QWORD *)(v22 + 24) = PreferredMode;
    WdLogEvent5_WdTrace(v22);
    return (unsigned int)PreferredMode;
  }
  else
  {
    v13 = WdLogNewEntry5_WdTrace(v12);
    WdLogEvent5_WdTrace(v13);
    return 3221225507LL;
  }
}
