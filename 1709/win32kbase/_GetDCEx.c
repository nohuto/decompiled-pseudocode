/*
 * XREFs of _GetDCEx @ 0x1C0049920
 * Callers:
 *     NtUserGetDC @ 0x1C0048830 (NtUserGetDC.c)
 *     UserGetMonitorDC @ 0x1C005A800 (UserGetMonitorDC.c)
 *     UserGetDesktopDC @ 0x1C005C284 (UserGetDesktopDC.c)
 *     _GetDC @ 0x1C008E6E0 (_GetDC.c)
 * Callees:
 *     GreLockVisRgn @ 0x1C003E280 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C003FD70 (GreUnlockVisRgn.c)
 *     GreCombineRgn @ 0x1C0043CC0 (GreCombineRgn.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     GreSetDCOwnerEx @ 0x1C0047C80 (GreSetDCOwnerEx.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C004961C (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C004C3D0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004E690 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C004EA90 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0050E30 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreCreateRectRgnIndirect @ 0x1C0054BB0 (GreCreateRectRgnIndirect.c)
 *     bDeleteDCInternalEx @ 0x1C0054EF0 (bDeleteDCInternalEx.c)
 *     GreValidateVisrgn @ 0x1C00552A4 (GreValidateVisrgn.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C00552F8 (--1DCOBJA@@QEAA@XZ.c)
 *     GreIsRendering @ 0x1C0056050 (GreIsRendering.c)
 *     GreSetRectRgn @ 0x1C00560A0 (GreSetRectRgn.c)
 *     GreOffsetRgn @ 0x1C00569D0 (GreOffsetRgn.c)
 *     CreateEmptyRgnPublic @ 0x1C0056A80 (CreateEmptyRgnPublic.c)
 *     CreateCacheDC @ 0x1C0057050 (CreateCacheDC.c)
 *     DestroyCacheDC @ 0x1C0057280 (DestroyCacheDC.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0059B98 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GreSelectVisRgn @ 0x1C0059C20 (GreSelectVisRgn.c)
 *     HmgMarkUndeletable @ 0x1C0063790 (HmgMarkUndeletable.c)
 *     IsShellProcess @ 0x1C007E184 (IsShellProcess.c)
 *     GreSetLayout @ 0x1C00852F0 (GreSetLayout.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C00A9698 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     ?vAltLock@XDCOBJ@@QEAAXPEAUHDC__@@H@Z @ 0x1C00A9B2C (-vAltLock@XDCOBJ@@QEAAXPEAUHDC__@@H@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00EFB84 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 *     McTemplateK0pqz @ 0x1C00FD6C8 (McTemplateK0pqz.c)
 *     McTemplateK0pz @ 0x1C00FD780 (McTemplateK0pz.c)
 */

__int64 __fastcall GetDCEx(__int64 a1, HRGN a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned int v4; // r13d
  HRGN v5; // r15
  const wchar_t *v6; // rcx
  struct _ERESOURCE *v7; // rbx
  const wchar_t *v8; // rcx
  struct _ERESOURCE *v9; // rbx
  __int64 v10; // rcx
  char v11; // al
  int v12; // edx
  int v13; // r8d
  unsigned int v14; // r13d
  unsigned int v15; // ecx
  __int64 v16; // r9
  int v17; // r8d
  char v18; // dl
  int v19; // ecx
  __int64 v20; // rdx
  int v21; // r8d
  __int64 LayeredOrRedirectedParent; // rax
  __int64 v23; // rdi
  __int64 v24; // rdi
  unsigned int v25; // r14d
  unsigned int v26; // r12d
  __int64 *v27; // r15
  __int64 *v28; // rsi
  HDC v29; // rdx
  int v30; // ebx
  __int64 *v31; // rsi
  __int64 *i; // rdi
  HDC v33; // rdx
  int v34; // ebx
  int v35; // eax
  HDC v36; // rcx
  unsigned int v37; // ebx
  __int64 v38; // rcx
  int v39; // esi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 *v43; // rdi
  __int64 v44; // rbx
  int v45; // eax
  int v46; // ecx
  HDC v47; // rdx
  struct REGION **v48; // rcx
  struct OBJECT *v49; // rdi
  HDC v50; // r12
  unsigned __int16 *v51; // rbx
  BOOL v52; // r15d
  char v53; // al
  unsigned int v54; // edi
  GdiHandleManager *v55; // r14
  __int64 v56; // rcx
  unsigned int v57; // r9d
  unsigned int v58; // edx
  __int64 v59; // r8
  _DWORD *v60; // rdx
  int v61; // eax
  __int64 v62; // rdi
  __int64 v63; // rdx
  unsigned int v64; // r8d
  unsigned int v65; // ecx
  __int64 v66; // r10
  HDC v67; // rdx
  struct OBJECT *v68; // rax
  __int64 v69; // rcx
  unsigned __int64 v70; // xmm1_8
  struct OBJECT *v71; // rdi
  HDC v72; // r12
  unsigned __int16 *v73; // rbx
  BOOL v74; // r15d
  char v75; // al
  unsigned int v76; // edi
  GdiHandleManager *v77; // r14
  __int64 v78; // rcx
  unsigned int v79; // r9d
  unsigned int v80; // edx
  __int64 v81; // r8
  _DWORD *v82; // rdx
  int v83; // eax
  __int64 v84; // rdi
  __int64 v85; // rdx
  unsigned int v86; // r8d
  unsigned int v87; // ecx
  __int64 v88; // r10
  _QWORD *v89; // rbx
  HDC v90; // rdx
  struct REGION **v91; // rcx
  struct OBJECT *v92; // rdi
  HDC v93; // r12
  unsigned __int16 *v94; // rbx
  BOOL v95; // r15d
  char v96; // al
  unsigned int v97; // edi
  GdiHandleManager *v98; // r14
  __int64 v99; // rcx
  unsigned int v100; // r9d
  unsigned int v101; // edx
  __int64 v102; // r8
  _DWORD *v103; // rdx
  int v104; // eax
  __int64 v105; // rdi
  __int64 v106; // rcx
  unsigned int v107; // r8d
  unsigned int v108; // edx
  __int64 v109; // r10
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  int v113; // ecx
  int v114; // ecx
  void *v116; // rdx
  struct HOBJ__ *v117; // rbx
  __int64 RectRgnIndirect; // rax
  HDC v119; // rcx
  HRGN v120; // rax
  __int64 CurrentProcessWin32Process; // rax
  HRGN v122; // rdx
  __int64 v123; // rax
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // rax
  int v128; // eax
  unsigned int v129; // edx
  __int64 v130; // rdx
  __int64 v131; // rcx
  unsigned int v132; // ebx
  unsigned int v133; // ebx
  __int64 v134; // rax
  HDC v135; // rcx
  HRGN v136; // rax
  unsigned int v137; // edx
  __int64 v138; // rdx
  __int64 v139; // rcx
  unsigned int v140; // ebx
  unsigned int v141; // ebx
  unsigned int v142; // edx
  __int64 v143; // rdx
  __int64 v144; // rcx
  unsigned int v145; // ebx
  unsigned int v146; // ebx
  __int64 v147; // [rsp+30h] [rbp-D0h]
  int v148; // [rsp+38h] [rbp-C8h]
  int v149; // [rsp+3Ch] [rbp-C4h]
  __int64 v150; // [rsp+40h] [rbp-C0h]
  HRGN v151; // [rsp+48h] [rbp-B8h] BYREF
  __int64 RedirectionBitmap; // [rsp+50h] [rbp-B0h]
  struct OBJECT *v153[2]; // [rsp+58h] [rbp-A8h] BYREF
  struct OBJECT *v154[2]; // [rsp+68h] [rbp-98h] BYREF
  struct OBJECT *v155[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v156; // [rsp+88h] [rbp-78h]
  _QWORD v157[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v158[2]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int16 *v159; // [rsp+B0h] [rbp-50h] BYREF
  int v160; // [rsp+B8h] [rbp-48h]
  unsigned __int16 *v161; // [rsp+C8h] [rbp-38h] BYREF
  int v162; // [rsp+D0h] [rbp-30h]
  unsigned __int16 *v163; // [rsp+E0h] [rbp-20h] BYREF
  int v164; // [rsp+E8h] [rbp-18h]
  __int64 v165; // [rsp+150h] [rbp+50h]
  HRGN EmptyRgnPublic; // [rsp+158h] [rbp+58h]
  int v167; // [rsp+160h] [rbp+60h]
  BOOL v168; // [rsp+168h] [rbp+68h]

  EmptyRgnPublic = a2;
  v165 = a1;
  v3 = a1;
  v4 = a3;
  v150 = 0LL;
  v5 = a2;
  RedirectionBitmap = 0LL;
  v148 = 0;
  v149 = 0;
  v168 = 0;
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared();
  v6 = L"ghsemDynamicModeChange";
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz(
      (unsigned int)L"ghsemDynamicModeChange",
      (unsigned int)&LockAcquireShared,
      a3,
      (_DWORD)ghsemDynamicModeChange,
      (__int64)L"ghsemDynamicModeChange");
  v7 = (struct _ERESOURCE *)ghsemGreLock;
  if ( ghsemGreLock )
  {
    PsEnterPriorityRegion(v6);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v7);
  }
  v8 = L"ghsemGreLock";
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz((unsigned int)L"ghsemGreLock", (_DWORD)a2, a3, (_DWORD)ghsemGreLock, 2, (__int64)L"ghsemGreLock");
  v9 = ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    PsEnterPriorityRegion(v8);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v9);
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz((unsigned int)L"ghsemDCVisRgn", (_DWORD)a2, a3, (_DWORD)ghsemDCVisRgn, 3, (__int64)L"ghsemDCVisRgn");
  if ( !v3 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) + 8LL) + 16LL);
    v165 = v3;
  }
  v156 = 0LL;
  v10 = v3;
  v147 = v3;
  if ( v3 )
  {
    while ( 1 )
    {
      v11 = *(_BYTE *)(v10 + 71);
      if ( (v11 & 0x10) == 0 || (v11 & 0x20) != 0 && v10 != v3 )
        break;
      if ( (*(_WORD *)(v10 + 82) & 0x3FFF) != 0x29D )
      {
        v10 = *(_QWORD *)(v10 + 104);
        if ( v10 )
          continue;
      }
      goto LABEL_17;
    }
    v167 = 0;
  }
  else
  {
LABEL_17:
    v167 = 1;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10, a2, a3) + 12) & 0x200) != 0 )
  {
    v39 = 1;
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32), v12, v13);
    v43 = (__int64 *)(gpDispInfo + 16);
    v44 = *(_QWORD *)(gpDispInfo + 16);
    if ( !v44 )
      goto LABEL_239;
    do
    {
      v45 = *(_DWORD *)(v44 + 64);
      if ( v45 < 0 )
      {
        if ( *(_QWORD *)(v44 + 80) == PsGetCurrentProcessWin32Process(v41, v40, v42) )
          v39 = 0;
      }
      else if ( (v45 & 0x400000) != 0 )
      {
        DestroyCacheDC(v43, *(_QWORD *)(v44 + 8));
      }
      if ( v44 == *v43 )
        v43 = (__int64 *)v44;
      v44 = *v43;
    }
    while ( *v43 );
    if ( v39 )
    {
LABEL_239:
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v41, v40, v42);
      *(_DWORD *)(CurrentProcessWin32Process + 12) &= ~0x200u;
    }
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32), v40, v42);
    v3 = v165;
  }
  if ( (v4 & 0x10000) != 0 )
  {
    v14 = v4 & 0xFFFFFFC7;
    v15 = v14;
    if ( (v14 & 1) != 0 )
    {
      v4 = v14 | 0x10;
      if ( (*(_BYTE *)(v3 + 71) & 4) == 0 )
        v4 = v15;
    }
    else
    {
      v16 = *(_QWORD *)(v3 + 168);
      v17 = v14 | 0x20;
      v18 = *(_BYTE *)(v16 + 100);
      if ( v18 >= 0 )
        v17 = v14;
      if ( (((v17 & 2) == 0) & (unsigned __int8)~((unsigned __int8)v18 >> 5)) != 0 )
      {
        if ( (v18 & 0x40) != 0 )
        {
          v127 = *(_QWORD *)(v16 + 24);
          if ( v127 )
            v156 = *(_QWORD *)(v127 + 8);
        }
        else
        {
          v17 |= 2u;
        }
      }
      v19 = v17 | 8;
      if ( (*(_BYTE *)(v3 + 71) & 2) == 0 )
        v19 = v17;
      v4 = v19 | 0x10;
      if ( (*(_BYTE *)(v3 + 71) & 4) == 0 )
        v4 = v19;
      if ( (*(_BYTE *)(v3 + 71) & 0x20) == 0 )
        goto LABEL_31;
      v4 &= ~8u;
      if ( !*(_QWORD *)(v16 + 128) )
        goto LABEL_31;
    }
    v4 |= 2u;
  }
LABEL_31:
  if ( (v4 & 0x80000) != 0 )
    v4 = v4 & 0xFFFFFFD5 | 2;
  if ( (int)IsGetLayeredOrRedirectedParentSupported() >= 0 )
  {
    LayeredOrRedirectedParent = GetLayeredOrRedirectedParent(v3);
    v23 = LayeredOrRedirectedParent;
    if ( LayeredOrRedirectedParent )
    {
      if ( (*(_DWORD *)(LayeredOrRedirectedParent + 64) & 0x20000000) != 0 )
      {
        if ( (int)IsGetRedirectionBitmapSupported() < 0 )
        {
          RedirectionBitmap = 0LL;
        }
        else
        {
          RedirectionBitmap = GetRedirectionBitmap(v23);
          if ( RedirectionBitmap )
          {
LABEL_38:
            v4 |= 0x4000u;
            v150 = v23;
            v168 = (v4 & 0x20000000) != 0
                && ((*(_DWORD *)(v23 + 304) & 0x20) != 0 && *(_WORD *)(v23 + 324) < 0xA00u
                 || (unsigned int)IsShellProcess(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 400LL)));
            if ( v3 == v23 && (v4 & 0x20) != 0 )
              v4 = v4 & 0xFFFFFFDD | 2;
            if ( (unsigned __int64)v5 > 2 )
            {
              if ( (v4 & 0x40000) != 0 )
              {
                EmptyRgnPublic = (HRGN)CreateEmptyRgnPublic();
                v122 = v5;
                v5 = EmptyRgnPublic;
                GreCombineRgn(EmptyRgnPublic, v122, 0LL, 5);
                v4 &= ~0x40000u;
              }
              GreOffsetRgn(v5);
            }
            goto LABEL_42;
          }
        }
        if ( (*(_BYTE *)(v23 + 66) & 0x20) == 0 )
          goto LABEL_42;
        goto LABEL_38;
      }
    }
  }
LABEL_42:
  if ( (v4 & 0x20) == 0 )
    goto LABEL_43;
  v38 = *(_QWORD *)(v3 + 104);
  if ( !v38 )
    v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) + 8LL) + 16LL);
  if ( (v4 |= 2u, (v4 & 0x18) != 0)
    || (*(_BYTE *)(v3 + 61) & 1) == 0 && (*(_BYTE *)(v38 + 71) & 2) != 0
    || (v20 = *(unsigned __int8 *)(v38 + 71), (((unsigned __int8)v20 ^ *(_BYTE *)(v3 + 71)) & 0x10) != 0) )
  {
LABEL_43:
    v24 = v147;
  }
  else
  {
    v4 &= 0xFFFFFFE7;
    v147 = v38;
    v24 = v38;
    if ( (v20 & 4) != 0 )
      v4 |= 0x10u;
  }
  if ( (v4 & 2) == 0 && (!v3 || *(_QWORD *)(v3 + 16) != W32GetThreadWin32Thread((__int64)KeGetCurrentThread())) )
    v4 |= 2u;
  v25 = v4 & 0x8080441F;
  v26 = v4 & 0x8080441F;
  if ( (v4 & 2) != 0 )
  {
    while ( 1 )
    {
      v27 = (__int64 *)(gpDispInfo + 16);
      v28 = *(__int64 **)(gpDispInfo + 16);
      if ( v28 )
        break;
LABEL_53:
      v27 = (__int64 *)(gpDispInfo + 16);
      v31 = 0LL;
      for ( i = *(__int64 **)(gpDispInfo + 16); i; i = (__int64 *)*i )
      {
        if ( (i[8] & 0x400002) == 2 )
        {
          v33 = (HDC)i[1];
          v158[0] = 0LL;
          v158[1] = 0LL;
          XDCOBJ::vAltLock((XDCOBJ *)v158, v33, 0);
          if ( !v158[0] || (v34 = *(_DWORD *)(v158[0] + 40LL), DCOBJA::~DCOBJA((DCOBJA *)v158), (v34 & 1) == 0) )
          {
            if ( !i[11] )
            {
              v35 = *((_DWORD *)i + 16);
              if ( (v35 & 0x800) != 0 )
                goto LABEL_63;
              if ( (v35 & 0x1000) == 0 )
                v31 = v27;
            }
          }
        }
        v27 = i;
      }
      v27 = v31;
      if ( v31 )
      {
LABEL_63:
        v28 = (__int64 *)*v27;
        goto LABEL_64;
      }
      if ( !CreateCacheDC(v165, v4 & 0x4000 | 0x802, 0LL) )
        goto LABEL_336;
      v24 = v147;
    }
    while ( 1 )
    {
      if ( v28[3] == v24 && v28[4] == v150 && !v28[11] )
      {
        v29 = (HDC)v28[1];
        v157[0] = 0LL;
        v157[1] = 0LL;
        XDCOBJ::vAltLock((XDCOBJ *)v157, v29, 0);
        if ( !v157[0] || (v30 = *(_DWORD *)(v157[0] + 40LL), DCOBJA::~DCOBJA((DCOBJA *)v157), (v30 & 1) == 0) )
        {
          v46 = *((_DWORD *)v28 + 16);
          if ( v25 == (v46 & 0x80C05C1F)
            && ((*(_BYTE *)(v24 + 71) & 0x20) == 0 || v28[2] == v28[3])
            && (!v167 || (v46 & 0x10000000) == 0) )
          {
            break;
          }
        }
      }
      v27 = v28;
      v28 = (__int64 *)*v28;
      if ( !v28 )
        goto LABEL_53;
    }
    *((_DWORD *)v28 + 16) = v46 | 0x1000;
    if ( v165 != v28[2] )
    {
      if ( (int)IsSpbCheckDceSupported() >= 0 )
        SpbCheckDce(v28);
      v28[2] = v165;
      ResetOrg(0LL, (struct tagDCE *)v28, 0);
    }
  }
  else
  {
    v27 = (__int64 *)(gpDispInfo + 16);
    v28 = *(__int64 **)(gpDispInfo + 16);
    if ( !v28 )
    {
LABEL_336:
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32), v20, v21);
      return 0LL;
    }
    while ( (v28[8] & 0x400002) != 0 || (unsigned int)GreIsRendering((HDC)v28[1]) || v28[2] != v165 && v28[1] != v156 )
    {
      v27 = v28;
      v28 = (__int64 *)*v28;
      if ( !v28 )
        goto LABEL_336;
    }
    if ( v28[7] )
    {
      if ( (v4 & 0xC0) != 0 )
      {
        v128 = IsDeleteHrgnClipSupported();
        if ( v128 >= 0 )
          DeleteHrgnClip(v28);
      }
    }
    if ( (v28[8] & 0x4000) != 0 )
    {
      if ( (*(_BYTE *)(v28[4] + 67) & 2) != 0 && (int)IsFlushWEFCOMPOSITEDDCEBoundsSupported() >= 0 )
        FlushWEFCOMPOSITEDDCEBounds(v28);
      if ( (int)IsGreSelectRedirectionBitmapSupported() >= 0 )
        GreSelectRedirectionBitmap(v28[1], 0LL);
    }
    if ( v28[2] != v165
      || !v167
      || v28[4] != v150
      || v28[3] != v24
      || ((v4 ^ *((_DWORD *)v28 + 16)) & 0x4000) != 0
      || (v28[8] & 0x10000000) != 0 )
    {
      goto LABEL_64;
    }
  }
  while ( (v28[8] & 0x8080441F) != v25 )
  {
LABEL_64:
    v149 = 1;
    if ( (v28[8] & 0x800) == 0 && (int)IsSpbCheckDceSupported() >= 0 )
      SpbCheckDce(v28);
    v36 = (HDC)v28[1];
    *((_DWORD *)v28 + 16) = v26 | 0x1000;
    GreValidateVisrgn(v36);
    v37 = v26 & 0xFFFFBFFF;
    if ( !v168 )
      v37 = v26;
    v151 = 0LL;
    if ( (int)IsCalcVisRgnSupported() < 0 || !(unsigned int)CalcVisRgn(&v151, v165, v147, v37) )
      *((_DWORD *)v28 + 16) |= 0x10000000u;
    v28[2] = v165;
    v26 = v37 | 0x4000;
    v28[4] = v150;
    if ( !v168 )
      v26 = v37;
    v28[3] = v147;
    v28[5] = 0LL;
    v28[6] = 0LL;
    ResetOrg(v151, (struct tagDCE *)v28, 1);
    if ( !v151 )
      v148 = 1;
  }
  if ( v28 != *(__int64 **)(gpDispInfo + 16) )
  {
    *v27 = *v28;
    *v28 = *(_QWORD *)(gpDispInfo + 16);
    *(_QWORD *)(gpDispInfo + 16) = v28;
  }
  v47 = (HDC)v28[1];
  v153[0] = 0LL;
  v153[1] = 0LL;
  XDCOBJ::vAltLock((XDCOBJ *)v153, v47, 0);
  v48 = (struct REGION **)v153[0];
  if ( v153[0] )
  {
    *((_DWORD *)v153[0] + 9) &= ~0x100000u;
    GrepValidateVisRgn((struct DC *)v48, v48[192]);
    XDCOBJ::RestoreAttributes((XDCOBJ *)v153);
    v49 = v153[0];
    v50 = *(HDC *)v153[0];
    HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v159, v153[0], 0, 0, 1);
    if ( v160 )
    {
      v51 = v159;
      if ( *((_BYTE *)v159 + 14) == 5 && gbGdiHmgrAltStacks && gpentHmgrAltStacks )
      {
        v129 = (unsigned __int16)*(_DWORD *)v49 | (*(_DWORD *)v49 >> 8) & 0xFF0000;
        RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v129 | (v129 >> 8) & 0xFF0000);
      }
      v52 = (*((_BYTE *)v51 + 15) & 8) != 0;
      v53 = *((_BYTE *)v51 + 14);
      if ( v53 == 5 )
      {
        v130 = *((_QWORD *)v49 + 77);
        v131 = 0LL;
      }
      else
      {
        if ( v53 != 16 )
        {
LABEL_115:
          --*((_DWORD *)v49 + 2);
          v54 = *(_DWORD *)v51 & 0xFFFFFF;
          if ( v54 >= 0x10000 )
          {
            if ( *(_DWORD *)gpHandleManager > 0x10000u )
            {
              v132 = *v51;
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                          (unsigned __int16)v54,
                                          1)
                   + 13) == HIWORD(v54) )
                v54 = v132;
            }
            else
            {
              v54 = *v51;
            }
          }
          v55 = gpHandleManager;
          v56 = *((_QWORD *)gpHandleManager + 2);
          v57 = *(_DWORD *)(v56 + 2056);
          if ( v54 >= v57 + ((*(unsigned __int16 *)(v56 + 2) + 0xFFFF) << 16) )
            goto LABEL_307;
          if ( v54 >= v57 )
            v58 = ((v54 - v57) >> 16) + 1;
          else
            v58 = 0;
          v59 = *(_QWORD *)(v56 + 8LL * v58 + 8);
          if ( v58 )
            v54 += ((1 - v58) << 16) - v57;
          if ( v54 >= *(_DWORD *)(v59 + 20) )
LABEL_307:
            v60 = 0LL;
          else
            v60 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v59 + 24) + 8 * ((unsigned __int64)v54 >> 8))
                             + 16LL * (unsigned __int8)v54
                             + 8);
          v61 = (unsigned __int16)*v60;
          v62 = v61 | (*v60 >> 8) & 0xFF0000u;
          if ( (unsigned int)v62 >= 0x10000 )
          {
            if ( *(_DWORD *)gpHandleManager > 0x10000u )
            {
              v133 = (unsigned __int16)v61;
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                          (unsigned __int16)v61,
                                          1)
                   + 13) == WORD1(v62) )
                v62 = v133;
            }
            else
            {
              v62 = (unsigned __int16)v61;
            }
          }
          v63 = *((_QWORD *)v55 + 2);
          v64 = *(_DWORD *)(v63 + 2056);
          if ( (unsigned int)v62 < v64 + ((*(unsigned __int16 *)(v63 + 2) + 0xFFFF) << 16) )
          {
            if ( (unsigned int)v62 >= v64 )
              v65 = (((unsigned int)v62 - v64) >> 16) + 1;
            else
              v65 = 0;
            v66 = *(_QWORD *)(v63 + 8LL * v65 + 8);
            if ( v65 )
              v62 = ((1 - v65) << 16) - v64 + (unsigned int)v62;
            *(_DWORD *)(*(_QWORD *)v66 + 24 * v62 + 8) &= ~1u;
            ExReleasePushLockExclusiveEx(
              *(_QWORD *)(**(_QWORD **)(v66 + 24) + 8 * ((unsigned __int64)(unsigned int)v62 >> 8))
            + 16LL * (unsigned __int8)v62,
              0LL);
            KeLeaveCriticalRegion();
          }
          KeLeaveCriticalRegion();
          if ( v52 )
            bDeleteDCInternalEx(v50, 0LL);
          goto LABEL_136;
        }
        v130 = *((_QWORD *)v49 + 19);
        v131 = 2LL;
      }
      TrackObjectReferenceDecrement(v131, v130);
      goto LABEL_115;
    }
  }
LABEL_136:
  if ( (v4 & 0x80u) != 0 )
  {
    v117 = (struct HOBJ__ *)EmptyRgnPublic;
    if ( EmptyRgnPublic == (HRGN)1 )
      goto LABEL_138;
    GreSetRectRgn(ghrgnGDC, 0);
    RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
    v119 = (HDC)v28[1];
    v28[7] = RectRgnIndirect;
    GreSelectVisRgn(v119);
    v28[5] = (__int64)EmptyRgnPublic;
    if ( (v4 & 0x40000) != 0 )
      *((_DWORD *)v28 + 16) |= 0x40000u;
    *((_DWORD *)v28 + 16) |= 0x80u;
    if ( !EmptyRgnPublic )
    {
      v28[6] = 0LL;
      goto LABEL_234;
    }
    GreCombineRgn(ghrgnGDC, (HRGN)v28[7], EmptyRgnPublic, 1);
    v120 = (HRGN)CreateEmptyRgnPublic();
    v28[6] = (__int64)v120;
    GreCombineRgn(v120, EmptyRgnPublic, 0LL, 5);
    if ( (unsigned __int64)EmptyRgnPublic <= 2 || (v28[8] & 0x40000) != 0 )
      goto LABEL_234;
LABEL_233:
    PsGetCurrentProcessId();
    HmgMarkUndeletable(v117);
LABEL_234:
    *((_DWORD *)v28 + 16) &= ~0x2000u;
    GreSelectVisRgn((HDC)v28[1]);
    goto LABEL_138;
  }
  if ( (v4 & 0x40) != 0 )
  {
    v117 = (struct HOBJ__ *)EmptyRgnPublic;
    if ( EmptyRgnPublic )
    {
      GreSetRectRgn(ghrgnGDC, 0);
      v134 = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
      v135 = (HDC)v28[1];
      v28[7] = v134;
      GreSelectVisRgn(v135);
      v28[5] = (__int64)EmptyRgnPublic;
      if ( (v4 & 0x40000) != 0 )
        *((_DWORD *)v28 + 16) |= 0x40000u;
      *((_DWORD *)v28 + 16) |= 0x40u;
      if ( EmptyRgnPublic == (HRGN)1 )
      {
        v28[6] = 1LL;
        goto LABEL_234;
      }
      GreCombineRgn(ghrgnGDC, (HRGN)v28[7], EmptyRgnPublic, 4);
      v136 = (HRGN)CreateEmptyRgnPublic();
      v28[6] = (__int64)v136;
      GreCombineRgn(v136, EmptyRgnPublic, 0LL, 5);
      if ( (unsigned __int64)EmptyRgnPublic <= 2 || (v28[8] & 0x40000) != 0 )
        goto LABEL_234;
      goto LABEL_233;
    }
  }
LABEL_138:
  if ( (v28[8] & 0x4000) == 0 )
    goto LABEL_172;
  if ( (int)IsGreSelectRedirectionBitmapSupported() >= 0
    && !(unsigned int)GreSelectRedirectionBitmap(v28[1], RedirectionBitmap) )
  {
    v148 = 1;
  }
  v67 = (HDC)v28[1];
  v154[0] = 0LL;
  v154[1] = 0LL;
  XDCOBJ::vAltLock((XDCOBJ *)v154, v67, 0);
  v68 = v154[0];
  if ( v154[0] )
  {
    *((_DWORD *)v154[0] + 9) |= 0x40u;
    v69 = *((_QWORD *)v68 + 187);
    v70 = _mm_srli_si128(*(__m128i *)((char *)v68 + 1496), 8).m128i_u64[0];
    if ( (_DWORD)v69 != (_DWORD)v70
      && (int)v69 < (int)v70
      && HIDWORD(v69) != HIDWORD(v70)
      && SHIDWORD(v69) < SHIDWORD(v70) )
    {
      *((_DWORD *)v68 + 374) = 0x7FFFFFFF;
      *((_DWORD *)v68 + 375) = 0x7FFFFFFF;
      *((_DWORD *)v68 + 376) = 0x80000000;
      *((_DWORD *)v68 + 377) = 0x80000000;
    }
    XDCOBJ::RestoreAttributes((XDCOBJ *)v154);
    v71 = v154[0];
    v72 = *(HDC *)v154[0];
    HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v161, v154[0], 0, 0, 1);
    if ( v162 )
    {
      v73 = v161;
      if ( *((_BYTE *)v161 + 14) == 5 && gbGdiHmgrAltStacks && gpentHmgrAltStacks )
      {
        v137 = (unsigned __int16)*(_DWORD *)v71 | (*(_DWORD *)v71 >> 8) & 0xFF0000;
        RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v137 | (v137 >> 8) & 0xFF0000);
      }
      v74 = (*((_BYTE *)v73 + 15) & 8) != 0;
      v75 = *((_BYTE *)v73 + 14);
      if ( v75 == 5 )
      {
        v138 = *((_QWORD *)v71 + 77);
        v139 = 0LL;
      }
      else
      {
        if ( v75 != 16 )
        {
LABEL_149:
          --*((_DWORD *)v71 + 2);
          v76 = *(_DWORD *)v73 & 0xFFFFFF;
          if ( v76 >= 0x10000 )
          {
            if ( *(_DWORD *)gpHandleManager > 0x10000u )
            {
              v140 = *v73;
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                          (unsigned __int16)v76,
                                          1)
                   + 13) == HIWORD(v76) )
                v76 = v140;
            }
            else
            {
              v76 = *v73;
            }
          }
          v77 = gpHandleManager;
          v78 = *((_QWORD *)gpHandleManager + 2);
          v79 = *(_DWORD *)(v78 + 2056);
          if ( v76 >= v79 + ((*(unsigned __int16 *)(v78 + 2) + 0xFFFF) << 16) )
            goto LABEL_330;
          if ( v76 >= v79 )
            v80 = ((v76 - v79) >> 16) + 1;
          else
            v80 = 0;
          v81 = *(_QWORD *)(v78 + 8LL * v80 + 8);
          if ( v80 )
            v76 += ((1 - v80) << 16) - v79;
          if ( v76 >= *(_DWORD *)(v81 + 20) )
LABEL_330:
            v82 = 0LL;
          else
            v82 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v81 + 24) + 8 * ((unsigned __int64)v76 >> 8))
                             + 16LL * (unsigned __int8)v76
                             + 8);
          v83 = (unsigned __int16)*v82;
          v84 = v83 | (*v82 >> 8) & 0xFF0000u;
          if ( (unsigned int)v84 >= 0x10000 )
          {
            if ( *(_DWORD *)gpHandleManager > 0x10000u )
            {
              v141 = (unsigned __int16)v83;
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                          (unsigned __int16)v83,
                                          1)
                   + 13) == WORD1(v84) )
                v84 = v141;
            }
            else
            {
              v84 = (unsigned __int16)v83;
            }
          }
          v85 = *((_QWORD *)v77 + 2);
          v86 = *(_DWORD *)(v85 + 2056);
          if ( (unsigned int)v84 < v86 + ((*(unsigned __int16 *)(v85 + 2) + 0xFFFF) << 16) )
          {
            if ( (unsigned int)v84 >= v86 )
              v87 = (((unsigned int)v84 - v86) >> 16) + 1;
            else
              v87 = 0;
            v88 = *(_QWORD *)(v85 + 8LL * v87 + 8);
            if ( v87 )
              v84 = ((1 - v87) << 16) - v86 + (unsigned int)v84;
            *(_DWORD *)(*(_QWORD *)v88 + 24 * v84 + 8) &= ~1u;
            ExReleasePushLockExclusiveEx(
              *(_QWORD *)(**(_QWORD **)(v88 + 24) + 8 * ((unsigned __int64)(unsigned int)v84 >> 8))
            + 16LL * (unsigned __int8)v84,
              0LL);
            KeLeaveCriticalRegion();
          }
          KeLeaveCriticalRegion();
          if ( v74 )
            bDeleteDCInternalEx(v72, 0LL);
          goto LABEL_170;
        }
        v138 = *((_QWORD *)v71 + 19);
        v139 = 2LL;
      }
      TrackObjectReferenceDecrement(v139, v138);
      goto LABEL_149;
    }
  }
LABEL_170:
  if ( v148 )
    GreSelectVisRgn((HDC)v28[1]);
LABEL_172:
  if ( (v28[8] & 2) == 0 )
    goto LABEL_175;
  if ( !(unsigned int)GreSetDCOwnerEx((struct HOBJ__ *)v28[1], 2147483650LL, 0LL, 1LL) )
  {
    *((_DWORD *)v28 + 16) &= ~0x1000u;
    DestroyCacheDC(gpDispInfo + 16, 0LL);
    goto LABEL_336;
  }
  v28[9] = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v28[10] = 0LL;
  --gnDCECount;
  if ( v149 && (int)IsGreSelectFontSupported() >= 0 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 || (v116 = gahStockObjects96[13]) == 0LL )
      v116 = gahStockObjects[13];
    GreSelectFont(v28[1], v116);
  }
LABEL_175:
  v89 = (_QWORD *)v165;
  if ( (*(_BYTE *)(v165 + 66) & 0x40) != 0 && (v4 & 0x40000000) == 0 )
    GreSetLayout((HDC)v28[1], -1, 1u);
  v90 = (HDC)v28[1];
  v155[0] = 0LL;
  v155[1] = 0LL;
  XDCOBJ::vAltLock((XDCOBJ *)v155, v90, 0);
  v91 = (struct REGION **)v155[0];
  if ( !v155[0] )
    goto LABEL_203;
  *((_DWORD *)v155[0] + 9) |= 0x100000u;
  GrepValidateVisRgn((struct DC *)v91, v91[192]);
  XDCOBJ::RestoreAttributes((XDCOBJ *)v155);
  v92 = v155[0];
  v93 = *(HDC *)v155[0];
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v163, v155[0], 0, 0, 1);
  if ( !v164 )
    goto LABEL_203;
  v94 = v163;
  if ( *((_BYTE *)v163 + 14) == 5 && gbGdiHmgrAltStacks && gpentHmgrAltStacks )
  {
    v142 = (unsigned __int16)*(_DWORD *)v92 | (*(_DWORD *)v92 >> 8) & 0xFF0000;
    RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v142 | (v142 >> 8) & 0xFF0000);
  }
  v95 = (*((_BYTE *)v94 + 15) & 8) != 0;
  v96 = *((_BYTE *)v94 + 14);
  if ( v96 == 5 )
  {
    v143 = *((_QWORD *)v92 + 77);
    v144 = 0LL;
LABEL_344:
    TrackObjectReferenceDecrement(v144, v143);
    goto LABEL_181;
  }
  if ( v96 == 16 )
  {
    v143 = *((_QWORD *)v92 + 19);
    v144 = 2LL;
    goto LABEL_344;
  }
LABEL_181:
  --*((_DWORD *)v92 + 2);
  v97 = *(_DWORD *)v94 & 0xFFFFFF;
  if ( v97 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      v145 = *v94;
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v97,
                                  1)
           + 13) == HIWORD(v97) )
        v97 = v145;
    }
    else
    {
      v97 = *v94;
    }
  }
  v98 = gpHandleManager;
  v99 = *((_QWORD *)gpHandleManager + 2);
  v100 = *(_DWORD *)(v99 + 2056);
  if ( v97 >= v100 + ((*(unsigned __int16 *)(v99 + 2) + 0xFFFF) << 16) )
    goto LABEL_349;
  if ( v97 >= v100 )
    v101 = ((v97 - v100) >> 16) + 1;
  else
    v101 = 0;
  v102 = *(_QWORD *)(v99 + 8LL * v101 + 8);
  if ( v101 )
    v97 += ((1 - v101) << 16) - v100;
  if ( v97 >= *(_DWORD *)(v102 + 20) )
LABEL_349:
    v103 = 0LL;
  else
    v103 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v102 + 24) + 8 * ((unsigned __int64)v97 >> 8))
                      + 16LL * (unsigned __int8)v97
                      + 8);
  v104 = (unsigned __int16)*v103;
  v105 = v104 | (*v103 >> 8) & 0xFF0000u;
  if ( (unsigned int)v105 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      v146 = (unsigned __int16)v104;
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v104,
                                  1)
           + 13) == WORD1(v105) )
        v105 = v146;
    }
    else
    {
      v105 = (unsigned __int16)v104;
    }
  }
  v106 = *((_QWORD *)v98 + 2);
  v107 = *(_DWORD *)(v106 + 2056);
  if ( (unsigned int)v105 < v107 + ((*(unsigned __int16 *)(v106 + 2) + 0xFFFF) << 16) )
  {
    if ( (unsigned int)v105 >= v107 )
      v108 = (((unsigned int)v105 - v107) >> 16) + 1;
    else
      v108 = 0;
    v109 = *(_QWORD *)(v106 + 8LL * v108 + 8);
    if ( v108 )
      v105 = ((1 - v108) << 16) - v107 + (unsigned int)v105;
    *(_DWORD *)(*(_QWORD *)v109 + 24 * v105 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v109 + 24) + 8 * ((unsigned __int64)(unsigned int)v105 >> 8))
    + 16LL * (unsigned __int8)v105,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
  if ( v95 )
    bDeleteDCInternalEx(v93, 0LL);
  v89 = (_QWORD *)v165;
LABEL_203:
  if ( (int)IsGreHintDCWndSupported() >= 0 )
    GreHintDCWnd(v28[1], *v89, 0LL, 0LL, 0);
  if ( v150 && (*(_BYTE *)(v150 + 66) & 8) != 0 && (int)IsGreHintDCWndSupported() >= 0 )
    GreHintDCWnd(
      v28[1],
      *v89,
      *(_QWORD *)v150,
      (*(_BYTE *)(v150 + 67) & 2) == 0,
      (*(_WORD *)(v150 + 82) & 0x3FFF) == 669);
  if ( *((int *)v28 + 16) < 0 )
  {
    v123 = PsGetCurrentProcessWin32Process(v111, v110, v112);
    *(_DWORD *)(v123 + 12) |= 0x200u;
    v28[9] = 0LL;
    v28[10] = PsGetCurrentProcessWin32Process(v125, v124, v126);
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz(v111, (unsigned int)&LockRelease, v112, (_DWORD)ghsemDCVisRgn, (__int64)L"ghsemDCVisRgn");
  v113 = (int)ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
    PsLeavePriorityRegion();
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz(v113, (unsigned int)&LockRelease, v112, (_DWORD)ghsemGreLock, (__int64)L"ghsemGreLock");
  v114 = (int)ghsemGreLock;
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
    PsLeavePriorityRegion();
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz(
      v114,
      (unsigned int)&LockRelease,
      v112,
      (_DWORD)ghsemDynamicModeChange,
      (__int64)L"ghsemDynamicModeChange");
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
  return v28[1];
}
