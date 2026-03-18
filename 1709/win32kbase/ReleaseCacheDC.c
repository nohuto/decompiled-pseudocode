/*
 * XREFs of ReleaseCacheDC @ 0x1C0057AF0
 * Callers:
 *     UserReleaseDC @ 0x1C00573D0 (UserReleaseDC.c)
 *     _ReleaseDC @ 0x1C0057860 (_ReleaseDC.c)
 *     NtUserReleaseDC @ 0x1C0057880 (NtUserReleaseDC.c)
 *     xxxEnumDisplayMonitors @ 0x1C005C4E0 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     GreUnlockVisRgn @ 0x1C003FD70 (GreUnlockVisRgn.c)
 *     GreSetDCOwnerEx @ 0x1C0047C80 (GreSetDCOwnerEx.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C004961C (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004AAC0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C004AC70 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C004C150 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C004C3D0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004E690 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C004EA90 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     bDeleteDCInternalEx @ 0x1C0054EF0 (bDeleteDCInternalEx.c)
 *     DestroyCacheDC @ 0x1C0057280 (DestroyCacheDC.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z @ 0x1C00A9654 (--0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C00A9698 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     ?vAltLock@XDCOBJ@@QEAAXPEAUHDC__@@H@Z @ 0x1C00A9B2C (-vAltLock@XDCOBJ@@QEAAXPEAUHDC__@@H@Z.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C00ED900 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00EFB84 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 *     McTemplateK0pqz @ 0x1C00FD6C8 (McTemplateK0pqz.c)
 *     McTemplateK0pz @ 0x1C00FD780 (McTemplateK0pz.c)
 */

__int64 __fastcall ReleaseCacheDC(__int64 a1, __int64 a2, int a3)
{
  int v4; // esi
  struct REGION **v5; // rcx
  struct _ERESOURCE *v6; // rbx
  struct _ERESOURCE *v7; // rbx
  __int64 *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  struct HOBJ__ *v11; // r13
  DC *v12; // r15
  _DWORD *v13; // r14
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v15; // esi
  __int64 v16; // rcx
  unsigned int v17; // r9d
  unsigned int v18; // edx
  __int64 v19; // r8
  __int16 v20; // ax
  unsigned int v21; // esi
  GdiHandleManager *v22; // r14
  __int64 v23; // rcx
  unsigned int v24; // r9d
  unsigned int v25; // edx
  __int64 v26; // r8
  _DWORD *v27; // rdx
  int v28; // eax
  __int64 v29; // rsi
  __int64 v30; // rdx
  unsigned int v31; // r8d
  unsigned int v32; // ecx
  __int64 v33; // r10
  int v34; // edi
  HDC v35; // rdx
  struct OBJECT *v36; // rsi
  struct HOBJ__ *v37; // r12
  unsigned __int16 *v38; // rdi
  BOOL v39; // r15d
  char v40; // al
  unsigned int v41; // esi
  GdiHandleManager *v42; // r14
  __int64 v43; // rcx
  unsigned int v44; // r9d
  unsigned int v45; // edx
  __int64 v46; // r8
  _DWORD *v47; // rdx
  int v48; // eax
  __int64 v49; // rsi
  __int64 v50; // rdx
  unsigned int v51; // r8d
  unsigned int v52; // ecx
  __int64 v53; // r10
  int v54; // eax
  int v55; // ecx
  int v56; // ecx
  int v58; // eax
  __int64 v59; // rcx
  __int64 v60; // rdx
  unsigned int v61; // edi
  unsigned int v62; // edi
  unsigned int v63; // edi
  int v64; // edi
  unsigned int v65; // edx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v66; // rdx
  unsigned int v67; // ecx
  unsigned int v68; // edi
  unsigned int v69; // edi
  DC *v70; // [rsp+30h] [rbp-50h] BYREF
  __int64 v71; // [rsp+38h] [rbp-48h]
  struct OBJECT *v72[2]; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int16 *v73; // [rsp+50h] [rbp-30h] BYREF
  int v74; // [rsp+58h] [rbp-28h]
  unsigned __int16 *v75; // [rsp+68h] [rbp-18h] BYREF
  int v76; // [rsp+70h] [rbp-10h]
  int v77; // [rsp+C8h] [rbp+48h]
  __int64 *v78; // [rsp+D8h] [rbp+58h]

  v77 = a2;
  v4 = a2;
  v5 = (struct REGION **)ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz(
      (_DWORD)v5,
      (unsigned int)&LockAcquireShared,
      a3,
      (_DWORD)ghsemDynamicModeChange,
      (__int64)L"ghsemDynamicModeChange");
  v6 = (struct _ERESOURCE *)ghsemGreLock;
  if ( ghsemGreLock )
  {
    PsEnterPriorityRegion(v5);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v6);
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz((_DWORD)v5, a2, a3, (_DWORD)ghsemGreLock, 2, (__int64)L"ghsemGreLock");
  v7 = ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    PsEnterPriorityRegion(v5);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v7);
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz((_DWORD)v5, a2, a3, (_DWORD)ghsemDCVisRgn, 3, (__int64)L"ghsemDCVisRgn");
  v8 = (__int64 *)(gpDispInfo + 16);
  v78 = (__int64 *)(gpDispInfo + 16);
  v9 = *(_QWORD *)(gpDispInfo + 16);
  if ( !v9 )
  {
LABEL_107:
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32), a2, a3);
    UserSetLastError(1425LL);
    return 2LL;
  }
  while ( *(_QWORD *)(v9 + 8) != a1 )
  {
    v8 = (__int64 *)v9;
    v78 = (__int64 *)v9;
    v9 = *(_QWORD *)v9;
    if ( !v9 )
      goto LABEL_107;
  }
  v10 = *(unsigned int *)(v9 + 64);
  if ( (int)v10 < 0 )
  {
    v58 = DestroyCacheDC(v8, *(_QWORD *)(v9 + 8), a3);
    v59 = *(_QWORD *)(gpDispInfo + 32);
    if ( v58 )
    {
      GreUnlockVisRgn(v59, v10, a3);
      return 1LL;
    }
    goto LABEL_116;
  }
  if ( (v10 & 0x401800) != 0x1000 )
  {
LABEL_115:
    v59 = *(_QWORD *)(gpDispInfo + 32);
LABEL_116:
    GreUnlockVisRgn(v59, v10, a3);
    return 2LL;
  }
  if ( (v10 & 0x4000) != 0
    && (*(_BYTE *)(*(_QWORD *)(v9 + 32) + 67LL) & 2) != 0
    && (int)IsFlushWEFCOMPOSITEDDCEBoundsSupported() >= 0 )
  {
    FlushWEFCOMPOSITEDDCEBounds(v9);
  }
  if ( (*(_DWORD *)(v9 + 64) & 2) == 0 )
    goto LABEL_95;
  if ( (int)IsGreHintDCWndSupported() >= 0 )
    GreHintDCWnd(a1, 0LL, 0LL, 0LL, 0);
  v11 = *(struct HOBJ__ **)(v9 + 8);
  v70 = 0LL;
  v71 = 0LL;
  v12 = 0LL;
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v73, v11, 1, 0, 0);
  if ( v74 )
  {
    v13 = v73;
    if ( *((_BYTE *)v73 + 14) == 1 && v73[6] == WORD1(v11) )
    {
      CurrentThread = KeGetCurrentThread();
      v13 = v73;
      v15 = *(_DWORD *)v73 & 0xFFFFFF;
      if ( v15 >= 0x10000 )
      {
        if ( *(_DWORD *)gpHandleManager > 0x10000u )
        {
          v61 = *v73;
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      v61,
                                      1)
               + 13) == HIWORD(v15) )
            v15 = v61;
        }
        else
        {
          v15 = *v73;
        }
      }
      v16 = *((_QWORD *)gpHandleManager + 2);
      v17 = *(_DWORD *)(v16 + 2056);
      if ( v15 < v17 + ((*(unsigned __int16 *)(v16 + 2) + 0xFFFF) << 16) )
      {
        if ( v15 >= v17 )
          v18 = ((v15 - v17) >> 16) + 1;
        else
          v18 = 0;
        v19 = *(_QWORD *)(v16 + 8LL * v18 + 8);
        if ( v18 )
          v15 += ((1 - v18) << 16) - v17;
        if ( v15 < *(_DWORD *)(v19 + 20) )
          v12 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * ((unsigned __int64)v15 >> 8))
                       + 16LL * (unsigned __int8)v15
                       + 8);
      }
      v20 = *((_WORD *)v12 + 6);
      if ( !v20 || *((struct _KTHREAD **)v12 + 2) == CurrentThread )
      {
        *((_QWORD *)v12 + 2) = CurrentThread;
        *((_WORD *)v12 + 6) = v20 + 1;
      }
      else
      {
        v12 = 0LL;
      }
    }
    v21 = *v13 & 0xFFFFFF;
    if ( v21 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        v62 = *(unsigned __int16 *)v13;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    v62,
                                    1)
             + 13) == HIWORD(v21) )
          v21 = v62;
      }
      else
      {
        v21 = *(unsigned __int16 *)v13;
      }
    }
    v22 = gpHandleManager;
    v23 = *((_QWORD *)gpHandleManager + 2);
    v24 = *(_DWORD *)(v23 + 2056);
    if ( v21 >= v24 + ((*(unsigned __int16 *)(v23 + 2) + 0xFFFF) << 16) )
      goto LABEL_140;
    if ( v21 >= v24 )
      v25 = ((v21 - v24) >> 16) + 1;
    else
      v25 = 0;
    v26 = *(_QWORD *)(v23 + 8LL * v25 + 8);
    if ( v25 )
      v21 += ((1 - v25) << 16) - v24;
    if ( v21 >= *(_DWORD *)(v26 + 20) )
LABEL_140:
      v27 = 0LL;
    else
      v27 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v26 + 24) + 8 * ((unsigned __int64)v21 >> 8))
                       + 16LL * (unsigned __int8)v21
                       + 8);
    v28 = (unsigned __int16)*v27;
    v29 = v28 | (*v27 >> 8) & 0xFF0000u;
    if ( (unsigned int)v29 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        v63 = (unsigned __int16)v28;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)v28,
                                    1)
             + 13) == WORD1(v29) )
          v29 = v63;
      }
      else
      {
        v29 = (unsigned __int16)v28;
      }
    }
    v30 = *((_QWORD *)v22 + 2);
    v31 = *(_DWORD *)(v30 + 2056);
    if ( (unsigned int)v29 < v31 + ((*(unsigned __int16 *)(v30 + 2) + 0xFFFF) << 16) )
    {
      if ( (unsigned int)v29 >= v31 )
        v32 = (((unsigned int)v29 - v31) >> 16) + 1;
      else
        v32 = 0;
      v33 = *(_QWORD *)(v30 + 8LL * v32 + 8);
      if ( v32 )
        v29 = ((1 - v32) << 16) - v31 + (unsigned int)v29;
      *(_DWORD *)(*(_QWORD *)v33 + 24 * v29 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v33 + 24) + 8 * ((unsigned __int64)(unsigned int)v29 >> 8))
      + 16LL * (unsigned __int8)v29,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
  v70 = v12;
  if ( v12 )
  {
    if ( !HIDWORD(v71) )
    {
LABEL_56:
      if ( (unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v70) )
      {
        if ( (*((_DWORD *)v70 + 134) & 4) != 0 )
          DC::vMarkTransformDirty(v70);
        goto LABEL_59;
      }
      _InterlockedDecrement((volatile signed __int32 *)v70 + 3);
LABEL_149:
      v70 = 0LL;
      goto LABEL_150;
    }
    if ( (*(_DWORD *)(*((_QWORD *)v12 + 6) + 32LL) & 0x8000) != 0 )
    {
      v64 = *((_DWORD *)v12 + 636);
      if ( v64 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        goto LABEL_56;
      v12 = v70;
    }
    _InterlockedDecrement((volatile signed __int32 *)v12 + 3);
    goto LABEL_149;
  }
  if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
    PsGetWin32KFilterSet();
LABEL_59:
  if ( v70 && (unsigned int)XDCOBJ::bCleanDC(&v70) && (unsigned int)GreSetDCOwnerEx(v11, 2147483666LL, 0LL, 1LL) )
  {
    v34 = 1;
    goto LABEL_63;
  }
LABEL_150:
  v34 = 0;
LABEL_63:
  DCOBJ::~DCOBJ((DCOBJ *)&v70);
  if ( !v34 )
    goto LABEL_115;
  v35 = *(HDC *)(v9 + 8);
  *(_DWORD *)(v9 + 64) &= ~0x1000u;
  *(_QWORD *)(v9 + 72) = 0LL;
  *(_QWORD *)(v9 + 80) = 0LL;
  v72[0] = 0LL;
  v72[1] = 0LL;
  XDCOBJ::vAltLock((XDCOBJ *)v72, v35, 0);
  v5 = (struct REGION **)v72[0];
  if ( v72[0] )
  {
    *((_DWORD *)v72[0] + 9) &= ~0x100000u;
    GrepValidateVisRgn((struct DC *)v5, v5[192]);
    XDCOBJ::RestoreAttributes((XDCOBJ *)v72);
    v36 = v72[0];
    v37 = *(struct HOBJ__ **)v72[0];
    HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v75, v72[0], 0, 0, 1);
    if ( v76 )
    {
      v38 = v75;
      if ( *((_BYTE *)v75 + 14) == 5 && gbGdiHmgrAltStacks && gpentHmgrAltStacks )
      {
        v65 = (unsigned __int16)*(_DWORD *)v36 | (*(_DWORD *)v36 >> 8) & 0xFF0000;
        RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v65 | (v65 >> 8) & 0xFF0000);
      }
      v39 = (*((_BYTE *)v38 + 15) & 8) != 0;
      v40 = *((_BYTE *)v38 + 14);
      if ( v40 == 5 )
      {
        v66 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v36 + 77);
        v67 = 0;
      }
      else
      {
        if ( v40 != 16 )
        {
LABEL_69:
          --*((_DWORD *)v36 + 2);
          v41 = *(_DWORD *)v38 & 0xFFFFFF;
          if ( v41 >= 0x10000 )
          {
            if ( *(_DWORD *)gpHandleManager > 0x10000u )
            {
              v68 = *v38;
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                          (unsigned __int16)v41,
                                          1)
                   + 13) == HIWORD(v41) )
                v41 = v68;
            }
            else
            {
              v41 = *v38;
            }
          }
          v42 = gpHandleManager;
          v43 = *((_QWORD *)gpHandleManager + 2);
          v44 = *(_DWORD *)(v43 + 2056);
          if ( v41 >= v44 + ((*(unsigned __int16 *)(v43 + 2) + 0xFFFF) << 16) )
            goto LABEL_121;
          if ( v41 >= v44 )
            v45 = ((v41 - v44) >> 16) + 1;
          else
            v45 = 0;
          v46 = *(_QWORD *)(v43 + 8LL * v45 + 8);
          if ( v45 )
            v41 += ((1 - v45) << 16) - v44;
          if ( v41 >= *(_DWORD *)(v46 + 20) )
LABEL_121:
            v47 = 0LL;
          else
            v47 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v46 + 24) + 8 * ((unsigned __int64)v41 >> 8))
                             + 16LL * (unsigned __int8)v41
                             + 8);
          v48 = (unsigned __int16)*v47;
          v49 = v48 | (*v47 >> 8) & 0xFF0000u;
          if ( (unsigned int)v49 >= 0x10000 )
          {
            if ( *(_DWORD *)gpHandleManager > 0x10000u )
            {
              v69 = (unsigned __int16)v48;
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                          (unsigned __int16)v48,
                                          1)
                   + 13) == WORD1(v49) )
                v49 = v69;
            }
            else
            {
              v49 = (unsigned __int16)v48;
            }
          }
          v50 = *((_QWORD *)v42 + 2);
          v51 = *(_DWORD *)(v50 + 2056);
          if ( (unsigned int)v49 < v51 + ((*(unsigned __int16 *)(v50 + 2) + 0xFFFF) << 16) )
          {
            if ( (unsigned int)v49 >= v51 )
              v52 = (((unsigned int)v49 - v51) >> 16) + 1;
            else
              v52 = 0;
            v53 = *(_QWORD *)(v50 + 8LL * v52 + 8);
            if ( v52 )
              v49 = ((1 - v52) << 16) - v51 + (unsigned int)v49;
            *(_DWORD *)(*(_QWORD *)v53 + 24 * v49 + 8) &= ~1u;
            ExReleasePushLockExclusiveEx(
              *(_QWORD *)(**(_QWORD **)(v53 + 24) + 8 * ((unsigned __int64)(unsigned int)v49 >> 8))
            + 16LL * (unsigned __int8)v49,
              0LL);
            KeLeaveCriticalRegion();
          }
          KeLeaveCriticalRegion();
          if ( v39 )
            bDeleteDCInternalEx(v37, 0LL);
          goto LABEL_90;
        }
        v66 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v36 + 19);
        v67 = 2;
      }
      TrackObjectReferenceDecrement(v67, v66);
      goto LABEL_69;
    }
  }
LABEL_90:
  if ( (*(_DWORD *)(v9 + 64) & 0x4000) != 0 && (int)IsGreSelectRedirectionBitmapSupported() >= 0 )
    GreSelectRedirectionBitmap(*(_QWORD *)(v9 + 8), 0LL);
  if ( ++gnDCECount > 32 && (unsigned int)DestroyCacheDC(v78, *(_QWORD *)(v9 + 8), a3) )
  {
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32), v60, a3);
    return 1LL;
  }
  v4 = v77;
LABEL_95:
  v54 = *(_DWORD *)(v9 + 64);
  if ( (v54 & 0xC0) != 0 && ((v54 & 2) != 0 || v4) && (int)IsDeleteHrgnClipSupported() >= 0 )
    DeleteHrgnClip(v9);
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz((_DWORD)v5, (unsigned int)&LockRelease, a3, (_DWORD)ghsemDCVisRgn, (__int64)L"ghsemDCVisRgn");
  v55 = (int)ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
    PsLeavePriorityRegion();
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz(v55, (unsigned int)&LockRelease, a3, (_DWORD)ghsemGreLock, (__int64)L"ghsemGreLock");
  v56 = (int)ghsemGreLock;
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
    PsLeavePriorityRegion();
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz(
      v56,
      (unsigned int)&LockRelease,
      a3,
      (_DWORD)ghsemDynamicModeChange,
      (__int64)L"ghsemDynamicModeChange");
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
  return 0LL;
}
