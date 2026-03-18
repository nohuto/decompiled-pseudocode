/*
 * XREFs of GreGetDeviceCaps @ 0x1C002A9C0
 * Callers:
 *     NtGdiGetDeviceCaps @ 0x1C002A9B0 (NtGdiGetDeviceCaps.c)
 *     xxxSetSysColors @ 0x1C0058C04 (xxxSetSysColors.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C0070698 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     ?UpdateUserScreen@@YAJH@Z @ 0x1C0070960 (-UpdateUserScreen@@YAJH@Z.c)
 *     EnforceColorDependentSettings @ 0x1C00743A0 (EnforceColorDependentSettings.c)
 *     RIMComputeVirtualDesktopPhysicalSize @ 0x1C0107870 (RIMComputeVirtualDesktopPhysicalSize.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C002B678 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0031D20 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031E20 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0033500 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     ?cFonts@PDEVOBJ@@QEAAKXZ @ 0x1C0038D00 (-cFonts@PDEVOBJ@@QEAAKXZ.c)
 *     EngMulDiv @ 0x1C0049E60 (EngMulDiv.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0076C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C00777D0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C00E8220 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetDeviceCaps(unsigned int a1, int a2)
{
  unsigned int v2; // r14d
  DC *v3; // rsi
  __int64 v4; // rbx
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v6; // rax
  GdiHandleManager *v7; // r13
  unsigned int v8; // r15d
  __int64 v9; // rdi
  unsigned int v10; // edx
  signed int v11; // ecx
  __int64 v12; // rdi
  char v13; // r13
  GdiHandleManager *v14; // r15
  __int64 v15; // rcx
  unsigned int v16; // r8d
  signed int v17; // edx
  __int64 v18; // r9
  __int64 v19; // rdi
  unsigned int v20; // eax
  int v21; // ebx
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v23; // esi
  __int64 v24; // rcx
  unsigned int v25; // r8d
  signed int v26; // edx
  __int64 v27; // rax
  __int16 v28; // ax
  unsigned int v29; // edi
  __int64 v30; // rcx
  unsigned int v31; // r8d
  signed int v32; // edx
  __int64 v33; // rax
  _DWORD *v34; // rdx
  int v35; // eax
  __int64 v36; // rdi
  __int64 v37; // rdx
  unsigned int v38; // r8d
  signed int v39; // ecx
  __int64 v40; // r10
  int v41; // r15d
  int v42; // r12d
  __int64 v43; // rbx
  int v44; // edi
  _QWORD *ThreadWin32Thread; // rax
  __int64 v46; // r15
  __int64 CurrentProcessWin32Process; // rax
  int v48; // edx
  int v49; // edi
  INT v50; // r9d
  PERESOURCE v52; // rdx
  int v53; // ecx
  int v54; // ecx
  __int64 v55; // rcx
  int v56; // eax
  unsigned int v57; // ebx
  unsigned int v58; // ebx
  int v59; // eax
  int v60; // eax
  __int64 v61; // rax
  __int64 v62; // rdx
  int v63; // [rsp+28h] [rbp-19h] BYREF
  DC *v64[2]; // [rsp+30h] [rbp-11h] BYREF
  _DWORD *v65; // [rsp+40h] [rbp-1h] BYREF
  int v66; // [rsp+48h] [rbp+7h]
  int v67; // [rsp+4Ch] [rbp+Bh]
  __int16 v68; // [rsp+AAh] [rbp+69h]
  __int64 v70; // [rsp+B8h] [rbp+77h] BYREF
  __int64 v71; // [rsp+C0h] [rbp+7Fh]

  v68 = HIWORD(a1);
  v2 = 0;
  v3 = 0LL;
  v4 = (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000;
  v64[1] = 0LL;
  v65 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v63);
  if ( CurrentThreadWin32ThreadAndEnterCriticalRegion && (v6 = *CurrentThreadWin32ThreadAndEnterCriticalRegion) != 0 )
    v71 = *(_QWORD *)(v6 + 72);
  else
    v71 = 0LL;
  v7 = gpHandleManager;
  v8 = v4;
  v66 = 1;
  if ( (unsigned int)v4 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v4,
                                  1)
           + 13) == WORD1(v4) )
        v8 = (unsigned __int16)v4;
    }
    else
    {
      v8 = (unsigned __int16)v4;
    }
  }
  v9 = *((_QWORD *)v7 + 2);
  v10 = *(_DWORD *)(v9 + 2056);
  if ( v8 >= v10 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16) )
    goto LABEL_137;
  if ( v8 >= v10 )
  {
    v11 = ((v8 - v10) >> 16) + 1;
    if ( (v8 - v10) >> 16 == -2 )
    {
LABEL_137:
      v21 = 0;
      v66 = 0;
      KeLeaveCriticalRegion();
      goto LABEL_138;
    }
  }
  else
  {
    v11 = 0;
  }
  v12 = *(_QWORD *)(v9 + 8LL * v11 + 8);
  if ( v11 )
    v8 = v8 - (v11 << 16) - v10 + 0x10000;
  v13 = 0;
  if ( v8 >= *(_DWORD *)(v12 + 20) )
    goto LABEL_137;
  v70 = *(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * ((unsigned __int64)v8 >> 8)) + 16LL * (unsigned __int8)v8;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v70, 0LL);
  if ( v8 < *(_DWORD *)(v12 + 20)
    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * ((unsigned __int64)v8 >> 8))
                 + 16LL * (unsigned __int8)v8
                 + 8) )
  {
    v13 = 1;
    *(_DWORD *)(*(_QWORD *)v12 + 24LL * v8 + 8) |= 1u;
  }
  else
  {
    ExReleasePushLockExclusiveEx(v70, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( !v13 )
    goto LABEL_137;
  v14 = gpHandleManager;
  if ( (unsigned int)v4 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v4,
                                  1)
           + 13) == WORD1(v4) )
        v4 = (unsigned __int16)v4;
    }
    else
    {
      v4 = (unsigned __int16)v4;
    }
  }
  v15 = *((_QWORD *)v14 + 2);
  v16 = *(_DWORD *)(v15 + 2056);
  if ( (unsigned int)v4 < v16 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16) )
  {
    if ( (unsigned int)v4 < v16 )
    {
      v17 = 0;
LABEL_23:
      v18 = *(_QWORD *)(v15 + 8LL * v17 + 8);
      if ( v17 )
        v4 = (_DWORD)v4 - (v17 << 16) - v16 + 0x10000;
      v19 = 0LL;
      if ( (unsigned int)v4 < *(_DWORD *)(v18 + 20)
        && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v18 + 24) + 8 * ((unsigned __int64)(unsigned int)v4 >> 8))
                     + 16LL * (unsigned __int8)v4
                     + 8) )
      {
        v19 = *(_QWORD *)v18 + 24 * v4;
      }
      goto LABEL_28;
    }
    v17 = (((unsigned int)v4 - v16) >> 16) + 1;
    if ( ((unsigned int)v4 - v16) >> 16 != -2 )
      goto LABEL_23;
  }
  v19 = 0LL;
LABEL_28:
  v65 = (_DWORD *)v19;
  _m_prefetchw((const void *)(v19 + 8));
  v67 = *(_DWORD *)(v19 + 8);
  v20 = v67 & 0xFFFFFFFE;
  if ( ((v67 & 0xFFFFFFFE) == (v63 & 0xFFFFFFFC) || !v20 || v71 && v20 == *(_DWORD *)(v71 + 8))
    && (*(_BYTE *)(v19 + 15) & 0x20) == 0 )
  {
    v21 = v66;
  }
  else
  {
    HANDLELOCK::vUnlock((HANDLELOCK *)&v65);
    v21 = v66;
    if ( !v66 )
      goto LABEL_67;
    v19 = (__int64)v65;
    v14 = gpHandleManager;
  }
  if ( v19 )
  {
    if ( *(_BYTE *)(v19 + 14) != 1 || *(_WORD *)(v19 + 12) != v68 )
      goto LABEL_46;
    CurrentThread = KeGetCurrentThread();
    v19 = (__int64)v65;
    v14 = gpHandleManager;
    v23 = *v65 & 0xFFFFFF;
    if ( v23 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        v57 = *(unsigned __int16 *)v65;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    v57,
                                    1)
             + 13) == HIWORD(v23) )
          v23 = v57;
      }
      else
      {
        v23 = *(unsigned __int16 *)v65;
      }
    }
    v24 = *((_QWORD *)v14 + 2);
    v25 = *(_DWORD *)(v24 + 2056);
    if ( v23 >= v25 + ((*(unsigned __int16 *)(v24 + 2) + 0xFFFF) << 16) )
      goto LABEL_154;
    if ( v23 >= v25 )
    {
      v26 = ((v23 - v25) >> 16) + 1;
      if ( (v23 - v25) >> 16 == -2 )
        goto LABEL_154;
    }
    else
    {
      v26 = 0;
    }
    v27 = *(_QWORD *)(v24 + 8LL * v26 + 8);
    if ( v26 )
      v23 = v23 - (v26 << 16) - v25 + 0x10000;
    if ( v23 < *(_DWORD *)(v27 + 20) )
    {
      v3 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v27 + 24) + 8 * ((unsigned __int64)v23 >> 8))
                  + 16LL * (unsigned __int8)v23
                  + 8);
LABEL_44:
      v28 = *((_WORD *)v3 + 6);
      if ( !v28 || *((struct _KTHREAD **)v3 + 2) == CurrentThread )
      {
        *((_QWORD *)v3 + 2) = CurrentThread;
        *((_WORD *)v3 + 6) = v28 + 1;
        v14 = gpHandleManager;
      }
      else
      {
        v3 = 0LL;
      }
LABEL_46:
      v29 = *(_DWORD *)v19 & 0xFFFFFF;
      if ( v29 >= 0x10000 )
      {
        if ( *(_DWORD *)v14 > 0x10000u )
        {
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)v14 + 2),
                                      (unsigned __int16)v29,
                                      1)
               + 13) == HIWORD(v29) )
            v29 = (unsigned __int16)v29;
        }
        else
        {
          v29 = (unsigned __int16)v29;
        }
      }
      v30 = *((_QWORD *)v14 + 2);
      v31 = *(_DWORD *)(v30 + 2056);
      if ( v29 >= v31 + ((*(unsigned __int16 *)(v30 + 2) + 0xFFFF) << 16) )
        goto LABEL_161;
      if ( v29 >= v31 )
      {
        v32 = ((v29 - v31) >> 16) + 1;
        if ( (v29 - v31) >> 16 == -2 )
          goto LABEL_161;
      }
      else
      {
        v32 = 0;
      }
      v33 = *(_QWORD *)(v30 + 8LL * v32 + 8);
      if ( v32 )
        v29 = v29 - (v32 << 16) - v31 + 0x10000;
      if ( v29 < *(_DWORD *)(v33 + 20) )
      {
        v34 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v33 + 24) + 8 * ((unsigned __int64)v29 >> 8))
                         + 16LL * (unsigned __int8)v29
                         + 8);
        goto LABEL_56;
      }
LABEL_161:
      v34 = 0LL;
LABEL_56:
      v35 = (unsigned __int16)*v34;
      v36 = v35 | (*v34 >> 8) & 0xFF0000u;
      if ( (unsigned int)v36 >= 0x10000 )
      {
        if ( *(_DWORD *)v14 > 0x10000u )
        {
          v58 = (unsigned __int16)v35;
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)v14 + 2),
                                      (unsigned __int16)v35,
                                      1)
               + 13) == WORD1(v36) )
            v36 = v58;
        }
        else
        {
          v36 = (unsigned __int16)v35;
        }
        if ( (unsigned int)v36 >= 0x10000 && *(_DWORD *)v14 > 0x10000u )
          GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v14 + 2), (unsigned __int16)v36, 1);
      }
      v37 = *((_QWORD *)v14 + 2);
      v38 = *(_DWORD *)(v37 + 2056);
      if ( (unsigned int)v36 >= v38 + ((*(unsigned __int16 *)(v37 + 2) + 0xFFFF) << 16) )
        goto LABEL_66;
      if ( (unsigned int)v36 >= v38 )
      {
        v39 = (((unsigned int)v36 - v38) >> 16) + 1;
        if ( ((unsigned int)v36 - v38) >> 16 == -2 )
        {
LABEL_66:
          KeLeaveCriticalRegion();
          goto LABEL_67;
        }
      }
      else
      {
        v39 = 0;
      }
      v40 = *(_QWORD *)(v37 + 8LL * v39 + 8);
      if ( v39 )
        v36 = (_DWORD)v36 - (v39 << 16) - v38 + 0x10000;
      *(_DWORD *)(*(_QWORD *)v40 + 24 * v36 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v40 + 24) + 8 * ((unsigned __int64)(unsigned int)v36 >> 8))
      + 16LL * (unsigned __int8)v36,
        0LL);
      KeLeaveCriticalRegion();
      goto LABEL_66;
    }
LABEL_154:
    v3 = 0LL;
    goto LABEL_44;
  }
LABEL_138:
  if ( v21 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v65);
LABEL_67:
  v64[0] = v3;
  if ( !v3 )
    goto LABEL_90;
  if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)v64) )
  {
    v3 = 0LL;
    _InterlockedDecrement((volatile signed __int32 *)v64[0] + 3);
    v64[0] = 0LL;
    goto LABEL_90;
  }
  v3 = v64[0];
  if ( (*((_DWORD *)v64[0] + 134) & 4) != 0 )
    DC::vMarkTransformDirty(v64[0]);
  v41 = a2;
  if ( ((a2 - 8) & 0xFFFFFFFD) != 0 )
  {
    v42 = 0;
  }
  else
  {
    v52 = ghsemDynamicModeChange;
    v42 = 1;
    if ( ghsemDynamicModeChange )
    {
      ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
      v52 = ghsemDynamicModeChange;
    }
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", v52);
  }
  v43 = *((_QWORD *)v3 + 6);
  v70 = v43;
  if ( a2 == 88 )
  {
    v2 = *(_DWORD *)(v43 + 2192);
    goto LABEL_75;
  }
  if ( a2 == 90 )
  {
    v2 = *(_DWORD *)(v43 + 2196);
    goto LABEL_75;
  }
  if ( a2 <= 0 )
  {
    switch ( a2 )
    {
      case 0:
        v2 = *(_DWORD *)(v43 + 2152);
        goto LABEL_89;
      case -2147483648:
        v2 = *(_DWORD *)(v43 + 2160);
        goto LABEL_89;
      case -2147483646:
        v2 = *(_DWORD *)(v43 + 2164);
        goto LABEL_89;
    }
  }
  else
  {
    switch ( a2 )
    {
      case 2:
        v2 = *(_DWORD *)(v43 + 2156);
        break;
      case 4:
        v53 = *(_DWORD *)(v43 + 2160);
        goto LABEL_105;
      case 6:
        v53 = *(_DWORD *)(v43 + 2164);
LABEL_105:
        v2 = (v53 + 500) / 0x3E8u;
        break;
      case 8:
      case 118:
        v2 = *(_DWORD *)(v43 + 2168);
        break;
      case 10:
      case 117:
        v2 = *(_DWORD *)(v43 + 2172);
        break;
      case 12:
        v2 = *(_DWORD *)(v43 + 2176);
        if ( v2 == 15 )
          v2 = 16;
        break;
      case 14:
        v2 = *(_DWORD *)(v43 + 2180);
        break;
      case 16:
        goto LABEL_179;
      case 18:
        v59 = *(_DWORD *)(v43 + 2184);
        if ( v59 == -1 )
LABEL_179:
          v2 = -1;
        else
          v2 = 5 * v59;
        break;
      case 22:
        v2 = PDEVOBJ::cFonts((PDEVOBJ *)&v70);
        break;
      case 24:
        v2 = *(_DWORD *)(v43 + 2184);
        break;
      case 28:
        v2 = 511;
        break;
      case 30:
        v2 = 254;
        break;
      case 32:
        v2 = 255;
        break;
      case 34:
        v60 = *(_DWORD *)(v43 + 2200);
        if ( *(_DWORD *)(v43 + 2156) )
          v60 |= 0x4000u;
        v2 = v60 | 0x1800;
        break;
      case 36:
        v2 = 1;
        break;
      case 38:
        v2 = *(_DWORD *)(v43 + 2188);
        break;
      case 40:
        v2 = *(_DWORD *)(v43 + 2216);
        break;
      case 42:
        v2 = *(_DWORD *)(v43 + 2220);
        break;
      case 44:
        v2 = *(_DWORD *)(v43 + 2224);
        break;
      case 94:
        EngAcquireSemaphore(ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
        v55 = *(_QWORD *)(v43 + 2592);
        if ( ((v55 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
        {
          v56 = *(_DWORD *)(v55 + 160);
          if ( (v56 & 8) != 0 )
            v2 = 0x4000;
          if ( (v56 & 0x2000000) != 0 )
            v2 |= 0x8000u;
        }
        EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
        if ( ghsemDriverMgmt )
        {
          ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
          PsLeavePriorityRegion();
        }
        break;
      case 104:
        v2 = *(_DWORD *)(v43 + 2256);
        break;
      case 106:
        v2 = 20;
        break;
      case 108:
        v2 = *(_DWORD *)(v43 + 2204) + *(_DWORD *)(v43 + 2208) + *(_DWORD *)(v43 + 2212);
        break;
      case 110:
        v2 = *(_DWORD *)(v43 + 2248);
        break;
      case 111:
        v2 = *(_DWORD *)(v43 + 2252);
        break;
      case 112:
        v2 = *(_DWORD *)(v43 + 2240);
        break;
      case 113:
        v2 = *(_DWORD *)(v43 + 2244);
        break;
      case 116:
        v2 = *(_DWORD *)(v43 + 2400);
        break;
      case 119:
        v2 = *(_DWORD *)(v43 + 2404);
        break;
      case 120:
        v2 = *(_DWORD *)(v43 + 2456);
        break;
      case 121:
        if ( (int)IsGetColorManagementCapsSupported() >= 0 )
          GetColorManagementCapsWrap(v43);
        break;
      default:
        break;
    }
  }
  if ( a2 == 8 || a2 == 10 )
  {
LABEL_75:
    LOBYTE(v44) = 18;
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      v46 = *ThreadWin32Thread;
      if ( *ThreadWin32Thread )
      {
        if ( *(_QWORD *)(v46 + 352) )
          CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
        if ( !*(_DWORD *)(v46 + 340) )
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
          v41 = a2;
          if ( CurrentProcessWin32Process )
            v44 = *(_DWORD *)(CurrentProcessWin32Process + 280);
          goto LABEL_82;
        }
        LOBYTE(v44) = *(_DWORD *)(v46 + 340);
      }
      v41 = a2;
    }
LABEL_82:
    v48 = *(_DWORD *)(v70 + 32);
    if ( (v48 & 1) != 0 )
    {
      v49 = v44 & 0xF;
      if ( v49 != 2 )
      {
        if ( v49 == 1 )
          v50 = *(_DWORD *)(v43 + 2196);
        else
          v50 = 96;
        if ( ((v41 - 88) & 0xFFFFFFFD) != 0 )
        {
          v54 = *(_DWORD *)(v70 + 2480);
          if ( !v54 )
          {
            if ( (v48 & 0x20000) == 0
              || (v61 = *((_QWORD *)v3 + 6), (*(_DWORD *)(v61 + 32) & 0x20000) == 0)
              || (v62 = *(_QWORD *)(*(_QWORD *)(v61 + 1816) + 40LL)) == 0
              || (*(_DWORD *)(v62 + 32) & 1) == 0
              || (v54 = *(_DWORD *)(v62 + 2480)) == 0 )
            {
              v54 = 100;
            }
          }
          v2 = EngMulDiv(v2, v50, (96 * v54 + 50) / 0x64u);
        }
        else
        {
          v2 = v50;
        }
      }
    }
    v3 = v64[0];
  }
LABEL_89:
  if ( v42 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    if ( ghsemDynamicModeChange )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
      PsLeavePriorityRegion();
    }
  }
LABEL_90:
  if ( v3 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)v64);
    _InterlockedDecrement((volatile signed __int32 *)v64[0] + 3);
  }
  return v2;
}
