/*
 * XREFs of ReleaseCacheDC @ 0x1C002FBD0
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0026E90 (xxxEnumDisplayMonitors.c)
 *     UserReleaseDC @ 0x1C0028B90 (UserReleaseDC.c)
 *     _ReleaseDC @ 0x1C002DA30 (_ReleaseDC.c)
 * Callees:
 *     GreSetDCOwnerEx @ 0x1C002DA50 (GreSetDCOwnerEx.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C002F388 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0031560 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0031D20 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031E20 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0031EE0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     HmgShareLock @ 0x1C0032A40 (HmgShareLock.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C0033470 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0033500 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryTable@@QEAA_NI_N@Z @ 0x1C00337B0 (-AcquireEntryLock@GdiHandleEntryTable@@QEAA_NI_N@Z.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C0036C18 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     GreUnlockVisRgn @ 0x1C0037960 (GreUnlockVisRgn.c)
 *     DestroyCacheDC @ 0x1C0044760 (DestroyCacheDC.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C00E8220 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00EBC80 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 *     Template_pqz @ 0x1C00FD124 (Template_pqz.c)
 *     Template_pz @ 0x1C00FD1E8 (Template_pz.c)
 */

__int64 __fastcall ReleaseCacheDC(__int64 a1, int a2, int a3)
{
  int v4; // esi
  PERESOURCE v5; // rcx
  struct _ERESOURCE *v6; // rbx
  struct _ERESOURCE *v7; // rbx
  __int64 v8; // rcx
  char *v9; // r15
  char *v10; // rax
  int v11; // r8d
  signed int v12; // esi
  DC *v13; // r13
  unsigned int v14; // edi
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v16; // rax
  GdiHandleManager *v17; // rbx
  unsigned int v18; // eax
  __int64 v19; // r8
  unsigned int v20; // edx
  unsigned int v21; // r9d
  signed int v22; // ecx
  GdiHandleManager *v23; // r12
  unsigned int v24; // eax
  unsigned __int16 *v25; // r14
  unsigned int v26; // eax
  int v27; // ebx
  struct _KTHREAD *CurrentThread; // rdx
  unsigned int v29; // edi
  __int64 v30; // rcx
  unsigned int v31; // r8d
  signed int v32; // edx
  __int64 v33; // rax
  __int16 v34; // ax
  unsigned int v35; // edi
  __int64 v36; // rcx
  unsigned int v37; // r8d
  signed int v38; // edx
  __int64 v39; // rax
  _DWORD *v40; // rdx
  int v41; // eax
  __int64 v42; // rdi
  __int64 v43; // rcx
  unsigned int v44; // r8d
  signed int v45; // edx
  __int64 v46; // r10
  DC *v47; // r13
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rdi
  GdiHandleManager *v52; // r13
  unsigned int v53; // r14d
  __int64 v54; // rbx
  unsigned int v55; // edx
  signed int v56; // ecx
  __int64 v57; // rbx
  char v58; // r13
  GdiHandleManager *v59; // r14
  __int64 v60; // r9
  unsigned int v61; // edx
  __int64 v62; // r9
  unsigned __int16 *v63; // rbx
  int v64; // edi
  __int64 v65; // rdi
  char v66; // al
  GdiHandleManager *v67; // r14
  unsigned int v68; // edi
  __int64 v69; // rcx
  unsigned int v70; // r8d
  signed int v71; // edx
  __int64 v72; // rax
  _DWORD *v73; // rdx
  int v74; // eax
  __int64 v75; // rbx
  __int64 v76; // rcx
  unsigned int v77; // edx
  __int64 v78; // r10
  int v79; // eax
  PERESOURCE v80; // rcx
  __int64 v81; // rcx
  PERESOURCE v82; // rcx
  __int64 v83; // rcx
  __int64 v84; // rcx
  int v86; // eax
  __int64 v87; // rcx
  unsigned int v88; // ebx
  struct _ENTRY *Entry; // rax
  unsigned int v90; // ebx
  unsigned int v91; // ebx
  int v92; // ebx
  DC *v93; // r13
  unsigned int v94; // edx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v95; // rdx
  unsigned int v96; // ecx
  unsigned int v97; // ebx
  unsigned int v98; // edi
  DC *v99; // [rsp+30h] [rbp-49h] BYREF
  __int64 v100; // [rsp+38h] [rbp-41h]
  unsigned __int16 *v101; // [rsp+40h] [rbp-39h] BYREF
  int v102; // [rsp+48h] [rbp-31h]
  int v103; // [rsp+4Ch] [rbp-2Dh]
  _QWORD v104[2]; // [rsp+58h] [rbp-21h] BYREF
  unsigned __int16 *v105; // [rsp+68h] [rbp-11h] BYREF
  int v106; // [rsp+70h] [rbp-9h]
  int v107; // [rsp+74h] [rbp-5h]
  struct GdiHandleEntryTable *v108; // [rsp+80h] [rbp+7h] BYREF
  char *v109; // [rsp+88h] [rbp+Fh]
  __int64 v110; // [rsp+90h] [rbp+17h] BYREF
  _DWORD v111[14]; // [rsp+98h] [rbp+1Fh] BYREF
  __int64 v113; // [rsp+F0h] [rbp+77h] BYREF
  struct _KTHREAD *v114; // [rsp+F8h] [rbp+7Fh]

  v4 = a2;
  v5 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(v5, &LockAcquireShared);
  v6 = ghsemGreLock;
  if ( ghsemGreLock )
  {
    PsEnterPriorityRegion(v5);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v6);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pqz((_DWORD)v5, a2, a3, (_DWORD)ghsemGreLock, 2, (__int64)L"ghsemGreLock");
  v7 = ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    PsEnterPriorityRegion(v5);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v7);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pqz((_DWORD)v5, a2, a3, (_DWORD)ghsemDCVisRgn, 3, (__int64)L"ghsemDCVisRgn");
  v8 = (__int64)gpDispInfo;
  v9 = (char *)*((_QWORD *)gpDispInfo + 2);
  v10 = (char *)gpDispInfo + 16;
  v109 = (char *)gpDispInfo + 16;
  if ( !v9 )
  {
LABEL_148:
    GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 4));
    UserSetLastError(1425LL);
    return 2LL;
  }
  while ( *((_QWORD *)v9 + 1) != a1 )
  {
    v10 = v9;
    v9 = *(char **)v9;
    v109 = v10;
    if ( !v9 )
      goto LABEL_148;
  }
  v11 = *((_DWORD *)v9 + 16);
  if ( v11 < 0 )
  {
    v86 = DestroyCacheDC(v10, *((_QWORD *)v9 + 1));
    v87 = *((_QWORD *)gpDispInfo + 4);
    if ( v86 )
    {
      GreUnlockVisRgn(v87);
      return 1LL;
    }
    goto LABEL_157;
  }
  if ( (v11 & 0x401800) != 0x1000 )
  {
    v87 = *((_QWORD *)gpDispInfo + 4);
LABEL_157:
    GreUnlockVisRgn(v87);
    return 2LL;
  }
  if ( (v11 & 0x4000) != 0
    && (*(_BYTE *)(*((_QWORD *)v9 + 4) + 67LL) & 2) != 0
    && (int)IsFlushWEFCOMPOSITEDDCEBoundsSupported(gpDispInfo) >= 0 )
  {
    FlushWEFCOMPOSITEDDCEBounds(v9);
  }
  if ( (*((_DWORD *)v9 + 16) & 2) != 0 )
  {
    v12 = 0;
    if ( (int)IsGreHintDCWndSupported(v8) >= 0 )
      GreHintDCWnd(a1, 0LL, 0LL, 0LL, 0);
    v110 = *((_QWORD *)v9 + 1);
    v13 = 0LL;
    v14 = (unsigned __int16)v110 | ((unsigned int)v110 >> 8) & 0xFF0000;
    v99 = 0LL;
    v100 = 0LL;
    v101 = 0LL;
    CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v111);
    if ( CurrentThreadWin32ThreadAndEnterCriticalRegion && (v16 = *CurrentThreadWin32ThreadAndEnterCriticalRegion) != 0 )
      v114 = *(struct _KTHREAD **)(v16 + 72);
    else
      v114 = 0LL;
    v17 = gpHandleManager;
    v102 = 1;
    v18 = GdiHandleManager::DecodeIndex(gpHandleManager, v14);
    v19 = *((_QWORD *)v17 + 2);
    v20 = v18;
    v21 = *(_DWORD *)(v19 + 2056);
    if ( v18 >= v21 + ((*(unsigned __int16 *)(v19 + 2) + 0xFFFF) << 16) )
      goto LABEL_173;
    if ( v18 >= v21 )
    {
      v22 = ((v18 - v21) >> 16) + 1;
      if ( (v18 - v21) >> 16 == -2 )
        goto LABEL_173;
    }
    else
    {
      v22 = 0;
    }
    if ( v22 )
      v20 = v18 - (v22 << 16) - v21 + 0x10000;
    if ( GdiHandleEntryTable::AcquireEntryLock(*(GdiHandleEntryTable **)(v19 + 8LL * v22 + 8), v20, 0) )
    {
      v23 = gpHandleManager;
      v108 = 0LL;
      LODWORD(v113) = 0;
      v24 = GdiHandleManager::DecodeIndex(gpHandleManager, v14);
      v25 = 0LL;
      if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(
             *((GdiHandleEntryDirectory **)v23 + 2),
             v24,
             &v108,
             (unsigned int *)&v113)
        && (unsigned int)v113 < *((_DWORD *)v108 + 5)
        && *(_QWORD *)(*(_QWORD *)(**((_QWORD **)v108 + 3) + 8 * ((unsigned __int64)(unsigned int)v113 >> 8))
                     + 16LL * (unsigned __int8)v113
                     + 8) )
      {
        v25 = (unsigned __int16 *)(*(_QWORD *)v108 + 24LL * (unsigned int)v113);
      }
      v101 = v25;
      _m_prefetchw(v25 + 4);
      v103 = *((_DWORD *)v25 + 2);
      v26 = v103 & 0xFFFFFFFE;
      if ( ((v103 & 0xFFFFFFFE) == (v111[0] & 0xFFFFFFFC) || !v26 || v114 && v26 == *((_DWORD *)v114 + 2))
        && (*((_BYTE *)v25 + 15) & 0x20) == 0 )
      {
        v27 = v102;
      }
      else
      {
        HANDLELOCK::vUnlock((HANDLELOCK *)&v101);
        v27 = v102;
        if ( !v102 )
          goto LABEL_72;
        v25 = v101;
        v23 = gpHandleManager;
      }
      if ( v25 )
      {
        if ( *((_BYTE *)v25 + 14) != 1 || v25[6] != WORD1(v110) )
          goto LABEL_51;
        CurrentThread = KeGetCurrentThread();
        v25 = v101;
        v23 = gpHandleManager;
        v114 = CurrentThread;
        v29 = *(_DWORD *)v101 & 0xFFFFFF;
        if ( v29 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            v88 = *v101;
            Entry = GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)gpHandleManager + 2), v88, 1);
            CurrentThread = v114;
            if ( *((unsigned __int8 *)Entry + 13) == HIWORD(v29) )
              v29 = v88;
          }
          else
          {
            v29 = *v101;
          }
        }
        v30 = *((_QWORD *)v23 + 2);
        v31 = *(_DWORD *)(v30 + 2056);
        if ( v29 >= v31 + ((*(unsigned __int16 *)(v30 + 2) + 0xFFFF) << 16) )
        {
LABEL_49:
          v34 = *((_WORD *)v13 + 6);
          if ( !v34 || *((struct _KTHREAD **)v13 + 2) == CurrentThread )
          {
            *((_QWORD *)v13 + 2) = CurrentThread;
            *((_WORD *)v13 + 6) = v34 + 1;
            v23 = gpHandleManager;
          }
          else
          {
            v13 = 0LL;
          }
LABEL_51:
          v35 = *(_DWORD *)v25 & 0xFFFFFF;
          if ( v35 >= 0x10000 )
          {
            if ( *(_DWORD *)v23 > 0x10000u )
            {
              v90 = *v25;
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)v23 + 2),
                                          v90,
                                          1)
                   + 13) == HIWORD(v35) )
                v35 = v90;
            }
            else
            {
              v35 = *v25;
            }
          }
          v36 = *((_QWORD *)v23 + 2);
          v37 = *(_DWORD *)(v36 + 2056);
          if ( v35 >= v37 + ((*(unsigned __int16 *)(v36 + 2) + 0xFFFF) << 16) )
            goto LABEL_192;
          if ( v35 >= v37 )
          {
            v38 = ((v35 - v37) >> 16) + 1;
            if ( (v35 - v37) >> 16 == -2 )
              goto LABEL_192;
          }
          else
          {
            v38 = 0;
          }
          v39 = *(_QWORD *)(v36 + 8LL * v38 + 8);
          if ( v38 )
            v35 = v35 - (v38 << 16) - v37 + 0x10000;
          if ( v35 < *(_DWORD *)(v39 + 20) )
          {
            v40 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v39 + 24) + 8 * ((unsigned __int64)v35 >> 8))
                             + 16LL * (unsigned __int8)v35
                             + 8);
            goto LABEL_61;
          }
LABEL_192:
          v40 = 0LL;
LABEL_61:
          v41 = (unsigned __int16)*v40;
          v42 = v41 | (*v40 >> 8) & 0xFF0000u;
          if ( (unsigned int)v42 >= 0x10000 )
          {
            if ( *(_DWORD *)v23 > 0x10000u )
            {
              v91 = (unsigned __int16)v41;
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)v23 + 2),
                                          (unsigned __int16)v41,
                                          1)
                   + 13) == WORD1(v42) )
                v42 = v91;
            }
            else
            {
              v42 = (unsigned __int16)v41;
            }
            if ( (unsigned int)v42 >= 0x10000 && *(_DWORD *)v23 > 0x10000u )
              GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v23 + 2), (unsigned __int16)v42, 1);
          }
          v43 = *((_QWORD *)v23 + 2);
          v44 = *(_DWORD *)(v43 + 2056);
          if ( (unsigned int)v42 >= v44 + ((*(unsigned __int16 *)(v43 + 2) + 0xFFFF) << 16) )
            goto LABEL_71;
          if ( (unsigned int)v42 >= v44 )
          {
            v45 = (((unsigned int)v42 - v44) >> 16) + 1;
            if ( ((unsigned int)v42 - v44) >> 16 == -2 )
            {
LABEL_71:
              KeLeaveCriticalRegion();
              goto LABEL_72;
            }
          }
          else
          {
            v45 = 0;
          }
          v46 = *(_QWORD *)(v43 + 8LL * v45 + 8);
          if ( v45 )
            v42 = (_DWORD)v42 - (v45 << 16) - v44 + 0x10000;
          *(_DWORD *)(*(_QWORD *)v46 + 24 * v42 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v46 + 24) + 8 * ((unsigned __int64)(unsigned int)v42 >> 8))
          + 16LL * (unsigned __int8)v42,
            0LL);
          KeLeaveCriticalRegion();
          goto LABEL_71;
        }
        if ( v29 >= v31 )
        {
          v32 = ((v29 - v31) >> 16) + 1;
          if ( (v29 - v31) >> 16 == -2 )
          {
LABEL_48:
            CurrentThread = v114;
            goto LABEL_49;
          }
        }
        else
        {
          v32 = 0;
        }
        v33 = *(_QWORD *)(v30 + 8LL * v32 + 8);
        if ( v32 )
          v29 = v29 - (v32 << 16) - v31 + 0x10000;
        if ( v29 < *(_DWORD *)(v33 + 20) )
          v13 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v33 + 24) + 8 * ((unsigned __int64)v29 >> 8))
                       + 16LL * (unsigned __int8)v29
                       + 8);
        goto LABEL_48;
      }
LABEL_174:
      if ( v27 )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v101);
LABEL_72:
      v99 = v13;
      if ( !v13 )
        goto LABEL_162;
      if ( !HIDWORD(v100) )
      {
LABEL_74:
        if ( (unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v99) )
        {
          v47 = v99;
          if ( (*((_DWORD *)v99 + 134) & 4) != 0 )
          {
            DC::vMarkTransformDirty(v99);
            v47 = v99;
          }
          if ( !v47 )
            goto LABEL_162;
          if ( (unsigned int)XDCOBJ::bCleanDC((XDCOBJ *)&v99, 0) )
          {
            XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v99);
            if ( (unsigned int)GreSetDCOwnerEx(*((_QWORD *)v9 + 1), 0x80000012, 0, 1) )
            {
              v49 = *((_QWORD *)v9 + 1);
              LOBYTE(v48) = 1;
              *((_DWORD *)v9 + 16) &= ~0x1000u;
              *((_QWORD *)v9 + 9) = 0LL;
              *((_QWORD *)v9 + 10) = 0LL;
              v104[1] = 0LL;
              v50 = HmgShareLock(v49, v48);
              v104[0] = v50;
              if ( !v50 )
                goto LABEL_131;
              *(_DWORD *)(v50 + 36) &= ~0x100000u;
              GrepValidateVisRgn((struct DC *)v50, *(struct REGION **)(v50 + 1536));
              XDCOBJ::RestoreAttributes((XDCOBJ *)v104);
              v105 = 0LL;
              v51 = (unsigned __int16)*(_DWORD *)v104[0] | (*(_DWORD *)v104[0] >> 8) & 0xFF0000u;
              PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v110);
              v52 = gpHandleManager;
              v53 = v51;
              v106 = 1;
              if ( (unsigned int)v51 >= 0x10000 )
              {
                if ( *(_DWORD *)gpHandleManager > 0x10000u )
                {
                  if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                              *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                              (unsigned __int16)v51,
                                              1)
                       + 13) == WORD1(v51) )
                    v53 = (unsigned __int16)v51;
                }
                else
                {
                  v53 = (unsigned __int16)v51;
                }
              }
              v54 = *((_QWORD *)v52 + 2);
              v55 = *(_DWORD *)(v54 + 2056);
              if ( v53 < v55 + ((*(unsigned __int16 *)(v54 + 2) + 0xFFFF) << 16) )
              {
                if ( v53 >= v55 )
                {
                  v56 = ((v53 - v55) >> 16) + 1;
                  if ( (v53 - v55) >> 16 == -2 )
                    goto LABEL_209;
                }
                else
                {
                  v56 = 0;
                }
                v57 = *(_QWORD *)(v54 + 8LL * v56 + 8);
                if ( v56 )
                  v53 = v53 - (v56 << 16) - v55 + 0x10000;
                v58 = 0;
                if ( v53 < *(_DWORD *)(v57 + 20) )
                {
                  v113 = *(_QWORD *)(**(_QWORD **)(v57 + 24) + 8 * ((unsigned __int64)v53 >> 8))
                       + 16LL * (unsigned __int8)v53;
                  KeEnterCriticalRegion();
                  ExAcquirePushLockExclusiveEx(v113, 0LL);
                  if ( v53 < *(_DWORD *)(v57 + 20)
                    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v57 + 24) + 8 * ((unsigned __int64)v53 >> 8))
                                 + 16LL * (unsigned __int8)v53
                                 + 8) )
                  {
                    v8 = 3LL * v53;
                    v58 = 1;
                    *(_DWORD *)(*(_QWORD *)v57 + 24LL * v53 + 8) |= 1u;
                  }
                  else
                  {
                    ExReleasePushLockExclusiveEx(v113, 0LL);
                    KeLeaveCriticalRegion();
                  }
                  if ( v58 )
                  {
                    v59 = gpHandleManager;
                    if ( (unsigned int)v51 >= 0x10000 )
                    {
                      if ( *(_DWORD *)gpHandleManager > 0x10000u )
                      {
                        v8 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                                    (unsigned __int16)v51,
                                                    1)
                             + 13);
                        if ( (_DWORD)v8 == WORD1(v51) )
                          v51 = (unsigned __int16)v51;
                      }
                      else
                      {
                        v51 = (unsigned __int16)v51;
                      }
                    }
                    v60 = *((_QWORD *)v59 + 2);
                    v61 = *(_DWORD *)(v60 + 2056);
                    if ( (unsigned int)v51 < v61 + ((*(unsigned __int16 *)(v60 + 2) + 0xFFFF) << 16) )
                    {
                      if ( (unsigned int)v51 < v61 )
                      {
                        v8 = 0LL;
LABEL_100:
                        v62 = *(_QWORD *)(v60 + 8LL * (int)v8 + 8);
                        if ( (_DWORD)v8 )
                        {
                          v8 = (unsigned int)((_DWORD)v8 << 16);
                          v51 = (_DWORD)v51 - (_DWORD)v8 - v61 + 0x10000;
                        }
                        v63 = 0LL;
                        if ( (unsigned int)v51 < *(_DWORD *)(v62 + 20) )
                        {
                          v8 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v62 + 24)
                                                     + 8 * ((unsigned __int64)(unsigned int)v51 >> 8))
                                         + 16LL * (unsigned __int8)v51
                                         + 8);
                          if ( v8 )
                          {
                            v8 = 3 * v51;
                            v63 = (unsigned __int16 *)(*(_QWORD *)v62 + 24 * v51);
                          }
                        }
                        goto LABEL_105;
                      }
                      v8 = (((unsigned int)v51 - v61) >> 16) + 1;
                      if ( ((unsigned int)v51 - v61) >> 16 != -2 )
                        goto LABEL_100;
                    }
                    v63 = 0LL;
LABEL_105:
                    v105 = v63;
                    _m_prefetchw(v63 + 4);
                    v107 = *((_DWORD *)v63 + 2);
                    if ( (*((_BYTE *)v63 + 15) & 0x20) == 0 )
                    {
                      v64 = v106;
                      goto LABEL_107;
                    }
                    HANDLELOCK::vUnlock((HANDLELOCK *)&v105);
                    v64 = v106;
                    if ( v106 )
                    {
                      v63 = v105;
LABEL_107:
                      if ( v63 )
                      {
                        v65 = v104[0];
                        if ( *((_BYTE *)v63 + 14) == 5 && gbGdiHmgrAltStacks && gpentHmgrAltStacks )
                        {
                          v94 = (unsigned __int16)*(_DWORD *)v104[0] | (*(_DWORD *)v104[0] >> 8) & 0xFF0000;
                          RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v94 | (v94 >> 8) & 0xFF0000);
                        }
                        v66 = *((_BYTE *)v63 + 14);
                        if ( v66 == 5 )
                        {
                          v95 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v65 + 616);
                          v96 = 0;
                        }
                        else
                        {
                          if ( v66 != 16 )
                            goto LABEL_111;
                          v95 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v65 + 152);
                          v96 = 2;
                        }
                        TrackObjectReferenceDecrement(v96, v95);
LABEL_111:
                        --*(_DWORD *)(v65 + 8);
                        v67 = gpHandleManager;
                        v68 = *(_DWORD *)v63 & 0xFFFFFF;
                        if ( v68 >= 0x10000 )
                        {
                          if ( *(_DWORD *)gpHandleManager > 0x10000u )
                          {
                            v97 = *v63;
                            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                                        (unsigned __int16)v68,
                                                        1)
                                 + 13) == HIWORD(v68) )
                              v68 = v97;
                          }
                          else
                          {
                            v68 = *v63;
                          }
                        }
                        v69 = *((_QWORD *)v67 + 2);
                        v70 = *(_DWORD *)(v69 + 2056);
                        if ( v68 >= v70 + ((*(unsigned __int16 *)(v69 + 2) + 0xFFFF) << 16) )
                          goto LABEL_230;
                        if ( v68 >= v70 )
                        {
                          v71 = ((v68 - v70) >> 16) + 1;
                          if ( (v68 - v70) >> 16 == -2 )
                            goto LABEL_230;
                        }
                        else
                        {
                          v71 = 0;
                        }
                        v72 = *(_QWORD *)(v69 + 8LL * v71 + 8);
                        if ( v71 )
                          v68 = v68 - (v71 << 16) - v70 + 0x10000;
                        if ( v68 < *(_DWORD *)(v72 + 20) )
                        {
                          v73 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v72 + 24) + 8 * ((unsigned __int64)v68 >> 8))
                                           + 16LL * (unsigned __int8)v68
                                           + 8);
LABEL_121:
                          v74 = (unsigned __int16)*v73;
                          v75 = v74 | (*v73 >> 8) & 0xFF0000u;
                          if ( (unsigned int)v75 >= 0x10000 )
                          {
                            if ( *(_DWORD *)v67 > 0x10000u )
                            {
                              v98 = (unsigned __int16)v74;
                              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                          *((GdiHandleEntryDirectory **)v67 + 2),
                                                          (unsigned __int16)v74,
                                                          1)
                                   + 13) == WORD1(v75) )
                                v75 = v98;
                            }
                            else
                            {
                              v75 = (unsigned __int16)v74;
                            }
                            if ( (unsigned int)v75 >= 0x10000 && *(_DWORD *)v67 > 0x10000u )
                              GdiHandleEntryDirectory::GetEntry(
                                *((GdiHandleEntryDirectory **)v67 + 2),
                                (unsigned __int16)v75,
                                1);
                          }
                          v76 = *((_QWORD *)v67 + 2);
                          v77 = *(_DWORD *)(v76 + 2056);
                          if ( (unsigned int)v75 < v77 + ((*(unsigned __int16 *)(v76 + 2) + 0xFFFF) << 16) )
                          {
                            if ( (unsigned int)v75 < v77
                              || (v12 = (((unsigned int)v75 - v77) >> 16) + 1, ((unsigned int)v75 - v77) >> 16 != -2) )
                            {
                              v78 = *(_QWORD *)(v76 + 8LL * v12 + 8);
                              if ( v12 )
                                v75 = (_DWORD)v75 - (v12 << 16) - v77 + 0x10000;
                              *(_DWORD *)(*(_QWORD *)v78 + 24 * v75 + 8) &= ~1u;
                              ExReleasePushLockExclusiveEx(
                                *(_QWORD *)(**(_QWORD **)(v78 + 24) + 8 * ((unsigned __int64)(unsigned int)v75 >> 8))
                              + 16LL * (unsigned __int8)v75,
                                0LL);
                              KeLeaveCriticalRegion();
                            }
                          }
                          KeLeaveCriticalRegion();
                          goto LABEL_131;
                        }
LABEL_230:
                        v73 = 0LL;
                        goto LABEL_121;
                      }
LABEL_210:
                      if ( v64 )
                        HANDLELOCK::vUnlock((HANDLELOCK *)&v105);
                    }
LABEL_131:
                    if ( (*((_DWORD *)v9 + 16) & 0x4000) != 0 && (int)IsGreSelectRedirectionBitmapSupported(v8) >= 0 )
                      GreSelectRedirectionBitmap(*((_QWORD *)v9 + 1), 0LL);
                    if ( ++gnDCECount > 32 && (unsigned int)DestroyCacheDC(v109, *((_QWORD *)v9 + 1)) )
                    {
                      GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 4));
                      return 1LL;
                    }
                    v4 = a2;
                    goto LABEL_136;
                  }
                }
              }
LABEL_209:
              v64 = 0;
              v106 = 0;
              KeLeaveCriticalRegion();
              goto LABEL_210;
            }
LABEL_162:
            GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 4));
            return 2LL;
          }
          v93 = v99;
        }
        else
        {
          v93 = 0LL;
          _InterlockedDecrement((volatile signed __int32 *)v99 + 3);
          v99 = 0LL;
        }
LABEL_160:
        if ( v93 )
        {
          XDCOBJ::RestoreAttributes((XDCOBJ *)&v99);
          _InterlockedDecrement((volatile signed __int32 *)v99 + 3);
        }
        goto LABEL_162;
      }
      if ( (*(_DWORD *)(*((_QWORD *)v13 + 6) + 32LL) & 0x8000) != 0 )
      {
        v92 = *((_DWORD *)v13 + 636);
        if ( v92 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
          goto LABEL_74;
        v13 = v99;
      }
      _InterlockedDecrement((volatile signed __int32 *)v13 + 3);
      v93 = 0LL;
      v99 = 0LL;
      goto LABEL_160;
    }
LABEL_173:
    v27 = 0;
    v102 = 0;
    KeLeaveCriticalRegion();
    goto LABEL_174;
  }
LABEL_136:
  v79 = *((_DWORD *)v9 + 16);
  if ( (v79 & 0xC0) != 0 && ((v79 & 2) != 0 || v4) && (int)IsDeleteHrgnClipSupported(v8) >= 0 )
    DeleteHrgnClip(v9);
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(v8, &LockRelease);
  v80 = ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
    PsLeavePriorityRegion(v81);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(v80, &LockRelease);
  v82 = ghsemGreLock;
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
    PsLeavePriorityRegion(v83);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(v82, &LockRelease);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v84);
  }
  return 0LL;
}
