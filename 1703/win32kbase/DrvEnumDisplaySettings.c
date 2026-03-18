/*
 * XREFs of DrvEnumDisplaySettings @ 0x1C0061B40
 * Callers:
 *     NtUserEnumDisplaySettings @ 0x1C0061A90 (NtUserEnumDisplaySettings.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     DrvBuildDevmodeList @ 0x1C005E770 (DrvBuildDevmodeList.c)
 *     DrvGetDisplayDriverParameters @ 0x1C005EAEC (DrvGetDisplayDriverParameters.c)
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0061848 (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvGetDeviceFromName @ 0x1C00620F0 (DrvGetDeviceFromName.c)
 *     ?DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z @ 0x1C00621D8 (-DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0076C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C00777D0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall DrvEnumDisplaySettings(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 v9; // rdi
  _QWORD *v10; // rax
  unsigned int v11; // r12d
  PERESOURCE v12; // rcx
  __int64 v13; // rax
  __int64 DeviceFromName; // rax
  PERESOURCE v16; // rdx
  __int64 *i; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int16 v20; // ax
  __int64 v21; // rcx
  int PreferredMode; // esi
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  struct _devicemodeW *v26; // rax
  __int64 v27; // r15
  int DevModeForLddmPath; // eax
  unsigned __int16 v29; // ax
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rax
  int v34; // r11d
  PERESOURCE v35; // rdx
  __int64 *j; // rax
  __int64 v37; // rcx
  __int64 v38; // rcx
  void *v39; // rax
  __int64 v40; // rsi
  __int64 v41; // r15
  unsigned int v42; // r9d
  unsigned int v43; // edx
  int v44; // r8d
  unsigned __int16 v45; // ax
  size_t v46; // rsi
  unsigned __int16 v47; // ax
  __int64 v48; // rax
  __int64 v49; // rcx
  unsigned __int16 v50; // [rsp+20h] [rbp-58h]
  int v51; // [rsp+80h] [rbp+8h]
  int v52; // [rsp+90h] [rbp+18h] BYREF
  __int64 v53; // [rsp+98h] [rbp+20h]

  v53 = a4;
  v9 = 0LL;
  v10 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
  v10[3] = a1;
  v10[4] = a2;
  v10[5] = a3;
  v10[6] = a5;
  WdLogEvent5_WdEvent(v10);
  if ( (a4 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v50 = *(_WORD *)(a4 + 70);
  LOWORD(v11) = v50;
  ProbeForWrite((volatile void *)a4, v50 + 220LL, 2u);
  if ( *(_WORD *)(a4 + 68) == 220 )
  {
    if ( a1 )
    {
      DeviceFromName = DrvGetDeviceFromName(a1, 1LL);
      v9 = DeviceFromName;
      if ( DeviceFromName && !*(_QWORD *)(DeviceFromName + 136) && (*(_DWORD *)(DeviceFromName + 160) & 0x6000008) == 0 )
        v9 = 0LL;
    }
    else if ( a2 )
    {
      v9 = *(_QWORD *)(a2 + 2592);
    }
    if ( v9 )
    {
      switch ( a3 )
      {
        case 0xFFFFFFFD:
          PreferredMode = DrvGetPreferredMode((struct _devicemodeW *)a4, (struct tagGRAPHICS_DEVICE *)v9);
          break;
        case 0xFFFFFFFE:
          v26 = (struct _devicemodeW *)PALLOCMEM2(0x100DBuLL, 1986356295LL, 1);
          v27 = (__int64)v26;
          if ( v26 )
          {
            if ( (*(_DWORD *)(v9 + 160) & 0x800000) != 0 )
            {
              DevModeForLddmPath = DrvGetDevModeForLddmPath((struct tagGRAPHICS_DEVICE *)v9, 0xFFFFFFFE, v26, 0LL);
            }
            else
            {
              *(_DWORD *)&v26->dmSize = -8739;
              DevModeForLddmPath = DrvGetDisplayDriverParameters(v9, v26, 0, 0LL);
            }
            PreferredMode = DevModeForLddmPath;
            if ( DevModeForLddmPath >= 0 )
            {
              v29 = *(_WORD *)(v27 + 70);
              if ( v50 < v29 )
                v29 = v50;
              LOWORD(v11) = v29;
              memmove((void *)(a4 + 220), (const void *)(v27 + 220), v29);
              *(_OWORD *)a4 = *(_OWORD *)v27;
              *(_OWORD *)(a4 + 16) = *(_OWORD *)(v27 + 16);
              *(_OWORD *)(a4 + 32) = *(_OWORD *)(v27 + 32);
              *(_OWORD *)(a4 + 48) = *(_OWORD *)(v27 + 48);
              *(_OWORD *)(a4 + 64) = *(_OWORD *)(v27 + 64);
              *(_OWORD *)(a4 + 80) = *(_OWORD *)(v27 + 80);
              *(_OWORD *)(a4 + 96) = *(_OWORD *)(v27 + 96);
              *(_OWORD *)(a4 + 112) = *(_OWORD *)(v27 + 112);
              *(_OWORD *)(a4 + 128) = *(_OWORD *)(v27 + 128);
              *(_OWORD *)(a4 + 144) = *(_OWORD *)(v27 + 144);
              *(_OWORD *)(a4 + 160) = *(_OWORD *)(v27 + 160);
              *(_OWORD *)(a4 + 176) = *(_OWORD *)(v27 + 176);
              *(_OWORD *)(a4 + 192) = *(_OWORD *)(v27 + 192);
              *(_QWORD *)(a4 + 208) = *(_QWORD *)(v27 + 208);
              *(_DWORD *)(a4 + 216) = *(_DWORD *)(v27 + 216);
            }
            Win32FreePool(v27);
          }
          else
          {
            PreferredMode = -1073741801;
          }
          break;
        case 0xFFFFFFFF:
          v16 = ghsemDynamicModeChange;
          if ( ghsemDynamicModeChange )
          {
            ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
            v16 = ghsemDynamicModeChange;
          }
          EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", v16);
          EngAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
          for ( i = *(__int64 **)&WPP_MAIN_CB.SectorSize; ; i = (__int64 *)*i )
          {
            if ( !i )
            {
              PreferredMode = -1073741585;
              goto LABEL_26;
            }
            v18 = i[324];
            if ( v18 == v9 )
            {
              if ( *((_DWORD *)i + 3) )
                break;
            }
          }
          LOBYTE(v52) = 0;
          if ( *(_DWORD *)(i[326] + 184) == 1 && (*(_DWORD *)(v18 + 160) & 0x800000) != 0 )
          {
            v30 = DrvGetDevModeForLddmPath((struct tagGRAPHICS_DEVICE *)v9, 0xFFFFFFFF, 0LL, (bool *)&v52);
            v32 = v30;
            if ( v30 < 0 )
            {
              v33 = WdLogNewEntry5_WdTrace(v31);
              *(_QWORD *)(v33 + 24) = v32;
              WdLogEvent5_WdTrace(v33);
            }
          }
          v19 = i[326];
          v20 = *(_WORD *)(v19 + 70);
          if ( v50 < v20 )
            v20 = v50;
          LOWORD(v11) = v20;
          memmove((void *)(a4 + 220), (const void *)(v19 + 220), v20);
          v21 = i[326];
          *(_OWORD *)a4 = *(_OWORD *)v21;
          *(_OWORD *)(a4 + 16) = *(_OWORD *)(v21 + 16);
          *(_OWORD *)(a4 + 32) = *(_OWORD *)(v21 + 32);
          *(_OWORD *)(a4 + 48) = *(_OWORD *)(v21 + 48);
          *(_OWORD *)(a4 + 64) = *(_OWORD *)(v21 + 64);
          *(_OWORD *)(a4 + 80) = *(_OWORD *)(v21 + 80);
          *(_OWORD *)(a4 + 96) = *(_OWORD *)(v21 + 96);
          *(_OWORD *)(a4 + 112) = *(_OWORD *)(v21 + 112);
          v21 += 128LL;
          *(_OWORD *)(a4 + 128) = *(_OWORD *)v21;
          *(_OWORD *)(a4 + 144) = *(_OWORD *)(v21 + 16);
          *(_OWORD *)(a4 + 160) = *(_OWORD *)(v21 + 32);
          *(_OWORD *)(a4 + 176) = *(_OWORD *)(v21 + 48);
          *(_OWORD *)(a4 + 192) = *(_OWORD *)(v21 + 64);
          *(_QWORD *)(a4 + 208) = *(_QWORD *)(v21 + 80);
          *(_DWORD *)(a4 + 216) = *(_DWORD *)(v21 + 88);
          if ( (_BYTE)v52 )
            *(_DWORD *)(a4 + 184) = 64;
          *(_DWORD *)(a4 + 72) &= 0xF9FFFFFF;
          PreferredMode = 0;
LABEL_26:
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
          if ( ghsemDriverMgmt )
          {
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
            PsLeavePriorityRegion(v23);
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
          v12 = ghsemDynamicModeChange;
          if ( ghsemDynamicModeChange )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
            PsLeavePriorityRegion(v24);
          }
          break;
        default:
          DrvBuildDevmodeList((struct tagGRAPHICS_DEVICE *)v9, a3 == 0, 1);
          v51 = 0;
          v34 = a5 & 4;
          v52 = v34;
          if ( (a5 & 4) == 0 )
          {
            if ( gProtocolType )
            {
              v35 = ghsemDynamicModeChange;
              if ( ghsemDynamicModeChange )
              {
                ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
                v35 = ghsemDynamicModeChange;
              }
              EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", v35);
              for ( j = *(__int64 **)&WPP_MAIN_CB.SectorSize; j; j = (__int64 *)*j )
              {
                if ( j[324] == v9 && *((_DWORD *)j + 3) )
                {
                  v37 = j[326];
                  if ( (*(_DWORD *)(v37 + 72) & 0x80u) != 0 )
                    v51 = *(_DWORD *)(v37 + 84);
                  break;
                }
              }
              EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
              v12 = ghsemDynamicModeChange;
              if ( ghsemDynamicModeChange )
              {
                ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
                PsLeavePriorityRegion(v38);
              }
            }
            else
            {
              v39 = PALLOCMEM2(0x100DBuLL, 1986356295LL, 1);
              v40 = (__int64)v39;
              if ( v39 )
              {
                memset(v39, 0, 0xDCuLL);
                *(_DWORD *)(v40 + 68) = 56797;
                if ( (int)DrvGetDisplayDriverParameters(v9, (struct _devicemodeW *)v40, 0, 0LL) >= 0
                  && (*(_DWORD *)(v40 + 72) & 0x80u) != 0 )
                {
                  v51 = *(_DWORD *)(v40 + 84);
                }
                Win32FreePool(v40);
              }
            }
            v34 = v52;
          }
          if ( *(_DWORD *)(v9 + 176) && *(_QWORD *)(v9 + 184) )
          {
            v41 = 0LL;
            PreferredMode = -1073741584;
            v42 = *(_DWORD *)(v9 + 192);
            if ( a3 < v42 )
            {
              if ( (a5 & 6) == 6 )
              {
                _mm_lfence();
                v41 = *(_QWORD *)(*(_QWORD *)(v9 + 200) + 16LL * a3 + 8);
LABEL_86:
                LOWORD(v11) = v50;
                PreferredMode = -1073741584;
              }
              else
              {
                v43 = 0;
                v44 = 0;
                while ( v43 < v42 )
                {
                  if ( (a5 & 2) != 0
                    || (v12 = (PERESOURCE)(2LL * v43), !*(_DWORD *)(*(_QWORD *)(v9 + 200) + 16LL * v43)) )
                  {
                    if ( v34
                      || (v12 = *(PERESOURCE *)(*(_QWORD *)(v9 + 200) + 16LL * v43 + 8), HIDWORD(v12->Reserved2) == v51) )
                    {
                      if ( v44 == a3 )
                      {
                        _mm_lfence();
                        v12 = (PERESOURCE)(2LL * v43);
                        v41 = *(_QWORD *)(*(_QWORD *)(v9 + 200) + 16LL * v43 + 8);
                        goto LABEL_86;
                      }
                      ++v44;
                    }
                  }
                  ++v43;
                }
              }
            }
            if ( v41 )
            {
              v45 = *(_WORD *)(v41 + 70);
              if ( (unsigned __int16)v11 < v45 )
                v45 = v11;
              v11 = v45;
              v46 = 220LL;
              memset((void *)a4, 0, 0xDCuLL);
              memmove((void *)(a4 + 220), (const void *)(v41 + *(unsigned __int16 *)(v41 + 68)), v11);
              v47 = *(_WORD *)(v41 + 68);
              if ( v47 <= 0xDCu )
                v46 = v47;
              memmove((void *)a4, (const void *)v41, v46);
              if ( (*(_DWORD *)(v9 + 160) & 0x800000) != 0 && *(_DWORD *)(v41 + 184) == 1 )
                *(_DWORD *)(a4 + 184) = 64;
              PreferredMode = 0;
            }
          }
          else
          {
            v48 = WdLogNewEntry5_WdTrace(v12);
            WdLogEvent5_WdTrace(v48);
            PreferredMode = -1073741823;
          }
          if ( PreferredMode == -1073741584 )
          {
            *(_DWORD *)(v9 + 176) = 0;
            v49 = *(_QWORD *)(v9 + 184);
            if ( v49 )
            {
              Win32FreePool(v49);
              *(_QWORD *)(v9 + 184) = 0LL;
            }
            v12 = *(PERESOURCE *)(v9 + 200);
            if ( v12 )
            {
              Win32FreePool((__int64)v12);
              *(_QWORD *)(v9 + 200) = 0LL;
            }
            *(_DWORD *)(v9 + 192) = 0;
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
    v25 = WdLogNewEntry5_WdTrace(v12);
    *(_QWORD *)(v25 + 24) = PreferredMode;
    WdLogEvent5_WdTrace(v25);
    return (unsigned int)PreferredMode;
  }
  else
  {
    v13 = WdLogNewEntry5_WdTrace(v12);
    WdLogEvent5_WdTrace(v13);
    return 3221225507LL;
  }
}
