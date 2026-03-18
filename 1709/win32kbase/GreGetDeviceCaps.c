/*
 * XREFs of GreGetDeviceCaps @ 0x1C005CBF0
 * Callers:
 *     NtGdiGetDeviceCaps @ 0x1C005CBD0 (NtGdiGetDeviceCaps.c)
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C005EE74 (-UpdateUserScreen@@YAJXZ.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C0061814 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     EnforceColorDependentSettings @ 0x1C0061FC0 (EnforceColorDependentSettings.c)
 *     xxxSetSysColors @ 0x1C0063184 (xxxSetSysColors.c)
 * Callees:
 *     ?cFonts@PDEVOBJ@@QEAAKXZ @ 0x1C003D390 (-cFonts@PDEVOBJ@@QEAAKXZ.c)
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0048C48 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C004C150 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C004C224 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C004C3D0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004E690 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     bDeleteDCInternalEx @ 0x1C0054EF0 (bDeleteDCInternalEx.c)
 *     EngMulDiv @ 0x1C0059AB0 (EngMulDiv.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0070F10 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0073530 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z @ 0x1C00A9654 (--0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C00A9698 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C00ED900 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetDeviceCaps(struct HOBJ__ *a1, int a2)
{
  unsigned int v4; // ebx
  DC *v5; // rbp
  _DWORD *v6; // r14
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v8; // esi
  __int64 v9; // rcx
  unsigned int v10; // r9d
  unsigned int v11; // edx
  __int64 v12; // r8
  __int16 v13; // ax
  unsigned int v14; // esi
  GdiHandleManager *v15; // r14
  __int64 v16; // rcx
  unsigned int v17; // r8d
  unsigned int v18; // edx
  __int64 v19; // r9
  _DWORD *v20; // rdx
  int v21; // eax
  __int64 v22; // rsi
  __int64 v23; // rdx
  unsigned int v24; // r8d
  unsigned int v25; // ecx
  __int64 v26; // r10
  __int64 v27; // rbp
  DC *v28; // rdi
  struct HOBJ__ *v29; // r12
  int v30; // r15d
  unsigned int v31; // esi
  GdiHandleManager *v32; // r14
  __int64 v33; // rcx
  unsigned int v34; // r8d
  unsigned int v35; // edx
  __int64 v36; // r9
  _DWORD *v37; // rdx
  int v38; // eax
  __int64 v39; // rsi
  __int64 v40; // rdx
  unsigned int v41; // r8d
  unsigned int v42; // ecx
  __int64 v43; // r10
  int v44; // r14d
  int v45; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rdi
  __int64 CurrentProcessWin32Process; // rax
  INT v52; // edi
  int v53; // esi
  __int64 v54; // rax
  unsigned __int16 v55; // ax
  int v57; // ecx
  int v58; // eax
  __int64 v59; // rcx
  int v60; // eax
  unsigned int v61; // edi
  unsigned int v62; // edi
  unsigned int v63; // edi
  unsigned int v64; // edi
  unsigned int v65; // edi
  int v66; // eax
  int v67; // eax
  __int64 v68; // rcx
  DC *v69; // [rsp+30h] [rbp-78h] BYREF
  int v70[2]; // [rsp+38h] [rbp-70h]
  unsigned __int16 *v71; // [rsp+40h] [rbp-68h] BYREF
  int v72; // [rsp+48h] [rbp-60h]
  unsigned __int16 *v73; // [rsp+58h] [rbp-50h] BYREF
  int v74; // [rsp+60h] [rbp-48h]
  __int64 v75; // [rsp+C8h] [rbp+20h] BYREF

  v4 = 0;
  if ( (unsigned int)PsGetWin32KFilterSet() == 5 && a1 == (struct HOBJ__ *)-589410304LL )
  {
    v27 = *(_QWORD *)(gpDispInfo + 32);
    goto LABEL_66;
  }
  *(_QWORD *)v70 = 0LL;
  v5 = 0LL;
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v71, a1, 1, 0, 0);
  if ( v72 )
  {
    v6 = v71;
    if ( *((_BYTE *)v71 + 14) == 1 && v71[6] == WORD1(a1) )
    {
      CurrentThread = KeGetCurrentThread();
      v6 = v71;
      v8 = *(_DWORD *)v71 & 0xFFFFFF;
      if ( v8 >= 0x10000 )
      {
        if ( *(_DWORD *)gpHandleManager > 0x10000u )
        {
          v61 = *v71;
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      v61,
                                      1)
               + 13) == HIWORD(v8) )
            v8 = v61;
        }
        else
        {
          v8 = *v71;
        }
      }
      v9 = *((_QWORD *)gpHandleManager + 2);
      v10 = *(_DWORD *)(v9 + 2056);
      if ( v8 < v10 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16) )
      {
        if ( v8 >= v10 )
          v11 = ((v8 - v10) >> 16) + 1;
        else
          v11 = 0;
        v12 = *(_QWORD *)(v9 + 8LL * v11 + 8);
        if ( v11 )
          v8 += ((1 - v11) << 16) - v10;
        if ( v8 < *(_DWORD *)(v12 + 20) )
          v5 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * ((unsigned __int64)v8 >> 8))
                      + 16LL * (unsigned __int8)v8
                      + 8);
      }
      v13 = *((_WORD *)v5 + 6);
      if ( !v13 || *((struct _KTHREAD **)v5 + 2) == CurrentThread )
      {
        *((_QWORD *)v5 + 2) = CurrentThread;
        *((_WORD *)v5 + 6) = v13 + 1;
      }
      else
      {
        v5 = 0LL;
      }
    }
    v14 = *v6 & 0xFFFFFF;
    if ( v14 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        v62 = *(unsigned __int16 *)v6;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    v62,
                                    1)
             + 13) == HIWORD(v14) )
          v14 = v62;
      }
      else
      {
        v14 = *(unsigned __int16 *)v6;
      }
    }
    v15 = gpHandleManager;
    v16 = *((_QWORD *)gpHandleManager + 2);
    v17 = *(_DWORD *)(v16 + 2056);
    if ( v14 >= v17 + ((*(unsigned __int16 *)(v16 + 2) + 0xFFFF) << 16) )
      goto LABEL_134;
    if ( v14 >= v17 )
      v18 = ((v14 - v17) >> 16) + 1;
    else
      v18 = 0;
    v19 = *(_QWORD *)(v16 + 8LL * v18 + 8);
    if ( v18 )
      v14 += ((1 - v18) << 16) - v17;
    if ( v14 >= *(_DWORD *)(v19 + 20) )
LABEL_134:
      v20 = 0LL;
    else
      v20 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * ((unsigned __int64)v14 >> 8))
                       + 16LL * (unsigned __int8)v14
                       + 8);
    v21 = (unsigned __int16)*v20;
    v22 = v21 | (*v20 >> 8) & 0xFF0000u;
    if ( (unsigned int)v22 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        v63 = (unsigned __int16)v21;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)v21,
                                    1)
             + 13) == WORD1(v22) )
          v22 = v63;
      }
      else
      {
        v22 = (unsigned __int16)v21;
      }
    }
    v23 = *((_QWORD *)v15 + 2);
    v24 = *(_DWORD *)(v23 + 2056);
    if ( (unsigned int)v22 < v24 + ((*(unsigned __int16 *)(v23 + 2) + 0xFFFF) << 16) )
    {
      if ( (unsigned int)v22 >= v24 )
        v25 = (((unsigned int)v22 - v24) >> 16) + 1;
      else
        v25 = 0;
      v26 = *(_QWORD *)(v23 + 8LL * v25 + 8);
      if ( v25 )
        v22 = ((1 - v25) << 16) - v24 + (unsigned int)v22;
      *(_DWORD *)(*(_QWORD *)v26 + 24 * v22 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v26 + 24) + 8 * ((unsigned __int64)(unsigned int)v22 >> 8))
      + 16LL * (unsigned __int8)v22,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
  v69 = v5;
  if ( v5 )
  {
    if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v69) )
    {
      _InterlockedDecrement((volatile signed __int32 *)v69 + 3);
      v69 = 0LL;
      return 0LL;
    }
    v5 = v69;
    if ( (*((_DWORD *)v69 + 134) & 4) != 0 )
      DC::vMarkTransformDirty(v69);
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
  if ( !v5 )
    return 0LL;
  v27 = *((_QWORD *)v5 + 6);
  XDCOBJ::RestoreAttributes((XDCOBJ *)&v69);
  v28 = v69;
  v29 = *(struct HOBJ__ **)v69;
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v73, v69, 0, v70[1], 1);
  if ( v74 )
  {
    if ( (*((_BYTE *)v73 + 15) & 8) == 0 || *((_DWORD *)v28 + 2) || (v30 = 1, *((_WORD *)v28 + 6) != 1) )
      v30 = 0;
    _InterlockedDecrement((volatile signed __int32 *)v28 + 3);
    v31 = *(_DWORD *)v73 & 0xFFFFFF;
    if ( v31 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        v64 = *v73;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    v64,
                                    1)
             + 13) == HIWORD(v31) )
          v31 = v64;
      }
      else
      {
        v31 = *v73;
      }
    }
    v32 = gpHandleManager;
    v33 = *((_QWORD *)gpHandleManager + 2);
    v34 = *(_DWORD *)(v33 + 2056);
    if ( v31 >= v34 + ((*(unsigned __int16 *)(v33 + 2) + 0xFFFF) << 16) )
      goto LABEL_151;
    if ( v31 >= v34 )
      v35 = ((v31 - v34) >> 16) + 1;
    else
      v35 = 0;
    v36 = *(_QWORD *)(v33 + 8LL * v35 + 8);
    if ( v35 )
      v31 += ((1 - v35) << 16) - v34;
    if ( v31 >= *(_DWORD *)(v36 + 20) )
LABEL_151:
      v37 = 0LL;
    else
      v37 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v36 + 24) + 8 * ((unsigned __int64)v31 >> 8))
                       + 16LL * (unsigned __int8)v31
                       + 8);
    v38 = (unsigned __int16)*v37;
    v39 = v38 | (*v37 >> 8) & 0xFF0000u;
    if ( (unsigned int)v39 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        v65 = (unsigned __int16)v38;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)v38,
                                    1)
             + 13) == WORD1(v39) )
          v39 = v65;
      }
      else
      {
        v39 = (unsigned __int16)v38;
      }
    }
    v40 = *((_QWORD *)v32 + 2);
    v41 = *(_DWORD *)(v40 + 2056);
    if ( (unsigned int)v39 < v41 + ((*(unsigned __int16 *)(v40 + 2) + 0xFFFF) << 16) )
    {
      if ( (unsigned int)v39 >= v41 )
        v42 = (((unsigned int)v39 - v41) >> 16) + 1;
      else
        v42 = 0;
      v43 = *(_QWORD *)(v40 + 8LL * v42 + 8);
      if ( v42 )
        v39 = ((1 - v42) << 16) - v41 + (unsigned int)v39;
      *(_DWORD *)(*(_QWORD *)v43 + 24 * v39 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v43 + 24) + 8 * ((unsigned __int64)(unsigned int)v39 >> 8))
      + 16LL * (unsigned __int8)v39,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
    if ( v30 )
      bDeleteDCInternalEx(v29, 0LL);
  }
LABEL_66:
  if ( ((a2 - 8) & 0xFFFFFFFD) != 0 )
  {
    v44 = 0;
  }
  else
  {
    v44 = 1;
    if ( ghsemDynamicModeChange )
      ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  }
  v75 = v27;
  if ( !v27 )
    goto LABEL_84;
  if ( a2 == 88 )
  {
    v4 = *(_DWORD *)(v27 + 2192);
LABEL_71:
    LOBYTE(v45) = 18;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v50 = ThreadWin32Thread;
    if ( ThreadWin32Thread )
    {
      if ( *(_QWORD *)(ThreadWin32Thread + 352) )
        CaptureAndValidateUserModeDpiAwarenessContext(ThreadWin32Thread);
      if ( *(_DWORD *)(v50 + 340) )
      {
        LOBYTE(v45) = *(_DWORD *)(v50 + 340);
      }
      else
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v48, v47, v49);
        if ( CurrentProcessWin32Process )
          v45 = *(_DWORD *)(CurrentProcessWin32Process + 280);
      }
    }
    if ( (*(_DWORD *)(v27 + 32) & 1) != 0 )
    {
      v52 = 96;
      v53 = v45 & 0xF;
      if ( v53 )
      {
        v52 = *(_DWORD *)(v27 + 2196);
        v54 = PsGetCurrentProcessWin32Process(v48, v47, v49);
        if ( v54 )
        {
          v55 = *(_WORD *)(v54 + 284);
          if ( v55 )
            v52 = v55;
        }
      }
      if ( ((a2 - 88) & 0xFFFFFFFD) != 0 )
      {
        if ( v53 != 2 )
        {
          v58 = *(_DWORD *)(v27 + 2480);
          if ( !v58
            && ((*(_DWORD *)(v27 + 32) & 0x20000) == 0
             || (v68 = *(_QWORD *)(*(_QWORD *)(v27 + 1816) + 40LL)) == 0
             || (*(_DWORD *)(v68 + 32) & 1) == 0
             || (v58 = *(_DWORD *)(v68 + 2480)) == 0) )
          {
            v58 = 100;
          }
          v4 = EngMulDiv(v4, v52, (96 * v58 + 50) / 0x64u);
        }
      }
      else
      {
        v4 = v52;
      }
    }
    goto LABEL_84;
  }
  if ( a2 == 90 )
  {
    v4 = *(_DWORD *)(v27 + 2196);
    goto LABEL_71;
  }
  if ( a2 <= 0 )
  {
    switch ( a2 )
    {
      case 0:
        v4 = *(_DWORD *)(v27 + 2152);
        goto LABEL_84;
      case -2147483648:
        v4 = *(_DWORD *)(v27 + 2160);
        goto LABEL_84;
      case -2147483646:
        v4 = *(_DWORD *)(v27 + 2164);
        goto LABEL_84;
    }
  }
  else
  {
    switch ( a2 )
    {
      case 2:
        v4 = *(_DWORD *)(v27 + 2156);
        break;
      case 4:
        v57 = *(_DWORD *)(v27 + 2160);
        goto LABEL_97;
      case 6:
        v57 = *(_DWORD *)(v27 + 2164);
LABEL_97:
        v4 = (v57 + 500) / 0x3E8u;
        break;
      case 8:
      case 118:
        v4 = *(_DWORD *)(v27 + 2168);
        break;
      case 10:
      case 117:
        v4 = *(_DWORD *)(v27 + 2172);
        break;
      case 12:
        v4 = *(_DWORD *)(v27 + 2176);
        if ( v4 == 15 )
          v4 = 16;
        break;
      case 14:
        v4 = *(_DWORD *)(v27 + 2180);
        break;
      case 16:
        goto LABEL_165;
      case 18:
        v66 = *(_DWORD *)(v27 + 2184);
        if ( v66 == -1 )
LABEL_165:
          v4 = -1;
        else
          v4 = 5 * v66;
        break;
      case 22:
        v4 = PDEVOBJ::cFonts((PDEVOBJ *)&v75);
        break;
      case 24:
        v4 = *(_DWORD *)(v27 + 2184);
        break;
      case 28:
        v4 = 511;
        break;
      case 30:
        v4 = 254;
        break;
      case 32:
        v4 = 255;
        break;
      case 34:
        v67 = *(_DWORD *)(v27 + 2200);
        if ( *(_DWORD *)(v27 + 2156) )
          v67 |= 0x4000u;
        v4 = v67 | 0x1800;
        break;
      case 36:
        v4 = 1;
        break;
      case 38:
        v4 = *(_DWORD *)(v27 + 2188);
        break;
      case 40:
        v4 = *(_DWORD *)(v27 + 2216);
        break;
      case 42:
        v4 = *(_DWORD *)(v27 + 2220);
        break;
      case 44:
        v4 = *(_DWORD *)(v27 + 2224);
        break;
      case 94:
        EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
        v59 = *(_QWORD *)(v27 + 2592);
        if ( ((v59 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
        {
          v60 = *(_DWORD *)(v59 + 160);
          if ( (v60 & 8) != 0 )
            v4 = 0x4000;
          if ( (v60 & 0x2000000) != 0 )
            v4 |= 0x8000u;
        }
        EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
        if ( ghsemDriverMgmt )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
          PsLeavePriorityRegion();
        }
        break;
      case 104:
        v4 = *(_DWORD *)(v27 + 2256);
        break;
      case 106:
        v4 = 20;
        break;
      case 108:
        v4 = *(_DWORD *)(v27 + 2204) + *(_DWORD *)(v27 + 2208) + *(_DWORD *)(v27 + 2212);
        break;
      case 110:
        v4 = *(_DWORD *)(v27 + 2248);
        break;
      case 111:
        v4 = *(_DWORD *)(v27 + 2252);
        break;
      case 112:
        v4 = *(_DWORD *)(v27 + 2240);
        break;
      case 113:
        v4 = *(_DWORD *)(v27 + 2244);
        break;
      case 116:
        v4 = *(_DWORD *)(v27 + 2400);
        break;
      case 119:
        v4 = *(_DWORD *)(v27 + 2404);
        break;
      case 120:
        v4 = *(_DWORD *)(v27 + 2456);
        break;
      case 121:
        if ( (int)IsGetColorManagementCapsSupported() >= 0 )
          GetColorManagementCapsWrap(v27);
        break;
      default:
        break;
    }
  }
  if ( a2 == 8 || a2 == 10 )
    goto LABEL_71;
LABEL_84:
  if ( v44 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    if ( ghsemDynamicModeChange )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
      PsLeavePriorityRegion();
    }
  }
  return v4;
}
