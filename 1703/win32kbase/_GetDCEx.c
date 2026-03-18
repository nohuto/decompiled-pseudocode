/*
 * XREFs of _GetDCEx @ 0x1C0033980
 * Callers:
 *     UserGetDesktopDC @ 0x1C0026B64 (UserGetDesktopDC.c)
 *     UserGetMonitorDC @ 0x1C0028978 (UserGetMonitorDC.c)
 *     NtUserGetDC @ 0x1C00373A0 (NtUserGetDC.c)
 *     _GetDC @ 0x1C0088020 (_GetDC.c)
 * Callees:
 *     CreateCacheDC @ 0x1C0028CC0 (CreateCacheDC.c)
 *     GreIsRendering @ 0x1C002A1F0 (GreIsRendering.c)
 *     GreGetStockObject @ 0x1C002B5C0 (GreGetStockObject.c)
 *     GreSelectVisRgn @ 0x1C002B720 (GreSelectVisRgn.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C002CDEC (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreSetDCOwnerEx @ 0x1C002DA50 (GreSetDCOwnerEx.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     ?RECALTUNLOCK@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C002F370 (-RECALTUNLOCK@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C002F388 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C003152C (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031E20 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     HmgShareLock @ 0x1C0032A40 (HmgShareLock.c)
 *     ?_GetEntryTableIndexContainingEntry@GdiHandleEntryDirectory@@AEAAHI@Z @ 0x1C00334D0 (-_GetEntryTableIndexContainingEntry@GdiHandleEntryDirectory@@AEAAHI@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0033500 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C0036C18 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     DelayedDestroyCacheDC @ 0x1C00378A0 (DelayedDestroyCacheDC.c)
 *     GreUnlockVisRgn @ 0x1C0037960 (GreUnlockVisRgn.c)
 *     GreCombineRgn @ 0x1C003DDE0 (GreCombineRgn.c)
 *     GreCreateRectRgnIndirect @ 0x1C003F3D0 (GreCreateRectRgnIndirect.c)
 *     GreOffsetRgn @ 0x1C00400D0 (GreOffsetRgn.c)
 *     GreSetRectRgn @ 0x1C0040BF0 (GreSetRectRgn.c)
 *     CreateEmptyRgnPublic @ 0x1C00425D0 (CreateEmptyRgnPublic.c)
 *     DestroyCacheDC @ 0x1C0044760 (DestroyCacheDC.c)
 *     HmgMarkUndeletable @ 0x1C005A5D0 (HmgMarkUndeletable.c)
 *     GreValidateVisrgn @ 0x1C007BB98 (GreValidateVisrgn.c)
 *     GreSetLayout @ 0x1C00808C0 (GreSetLayout.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00EBC80 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 *     Template_pqz @ 0x1C00FD124 (Template_pqz.c)
 *     Template_pz @ 0x1C00FD1E8 (Template_pz.c)
 */

__int64 __fastcall GetDCEx(__int64 a1, HRGN a2, __int64 a3)
{
  int v3; // r14d
  unsigned int v4; // r15d
  HRGN v5; // r13
  const wchar_t *v7; // rcx
  struct _ERESOURCE *v8; // rbx
  const wchar_t *v9; // rcx
  struct _ERESOURCE *v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rcx
  char v14; // al
  __int64 v15; // rcx
  unsigned int v16; // r15d
  __int64 v17; // r9
  unsigned int v18; // r8d
  char v19; // dl
  __int64 LayeredOrRedirectedParent; // rax
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rcx
  CCursorClip *v24; // rax
  struct tagDCE *v25; // r12
  char *v26; // rcx
  __int64 v27; // r13
  __int64 v28; // rdi
  GdiHandleManager *v29; // r14
  unsigned int v30; // esi
  __int64 v31; // r14
  unsigned int v32; // edx
  signed int v33; // ecx
  __int64 v34; // r14
  char v35; // r15
  __int64 v36; // r12
  GdiHandleManager *v37; // r14
  __int64 v38; // r9
  unsigned int v39; // edx
  signed int v40; // ecx
  __int64 v41; // r9
  unsigned __int16 *v42; // rsi
  bool v43; // zf
  int v44; // ebx
  unsigned int v45; // edi
  __int64 v46; // rcx
  unsigned int v47; // r8d
  signed int v48; // edx
  __int64 v49; // rax
  __int64 v50; // rbx
  unsigned int v51; // edi
  __int64 v52; // rcx
  unsigned int v53; // r8d
  signed int v54; // edx
  __int64 v55; // rax
  _DWORD *v56; // rdx
  int v57; // eax
  __int64 v58; // rdi
  __int64 v59; // rcx
  unsigned int v60; // r8d
  signed int v61; // edx
  __int64 v62; // r10
  int v63; // ebx
  _QWORD *v64; // r13
  struct tagDCE *v65; // rbx
  __int64 v66; // r13
  __int64 v67; // rdi
  GdiHandleManager *v68; // r14
  unsigned int v69; // esi
  __int64 v70; // r14
  unsigned int v71; // edx
  signed int v72; // ecx
  __int64 v73; // r14
  char v74; // r12
  __int64 v75; // r15
  __int64 v76; // rcx
  GdiHandleManager *v77; // r14
  __int64 v78; // r9
  unsigned int v79; // edx
  __int64 v80; // r9
  unsigned __int16 *v81; // rsi
  int v82; // ebx
  unsigned int v83; // edi
  __int64 v84; // rcx
  unsigned int v85; // r8d
  signed int v86; // edx
  __int64 v87; // rax
  __int64 v88; // rbx
  unsigned int v89; // edi
  __int64 v90; // rcx
  unsigned int v91; // r8d
  signed int v92; // edx
  __int64 v93; // rax
  _DWORD *v94; // rdx
  int v95; // eax
  __int64 v96; // rdi
  __int64 v97; // rcx
  unsigned int v98; // r8d
  signed int v99; // edx
  __int64 v100; // r10
  __int64 v101; // r13
  __int64 v102; // rdi
  GdiHandleManager *v103; // r14
  unsigned int v104; // esi
  __int64 v105; // r14
  unsigned int v106; // edx
  signed int v107; // ecx
  __int64 v108; // r14
  char v109; // r12
  __int64 v110; // r15
  GdiHandleManager *v111; // rsi
  __int64 v112; // r9
  unsigned int v113; // edx
  __int64 v114; // r9
  unsigned __int16 *v115; // rbx
  int v116; // edi
  char v117; // al
  GdiHandleManager *v118; // rsi
  unsigned int v119; // edi
  __int64 v120; // rcx
  unsigned int v121; // r8d
  signed int v122; // edx
  __int64 v123; // rax
  _DWORD *v124; // rdx
  int v125; // eax
  __int64 v126; // rdi
  __int64 v127; // rcx
  unsigned int v128; // r8d
  signed int v129; // edx
  __int64 v130; // r10
  unsigned int v131; // edi
  struct tagDCE *v132; // rsi
  __int64 v133; // r15
  __int64 v134; // rdi
  GdiHandleManager *v135; // r14
  unsigned int v136; // esi
  __int64 v137; // r14
  unsigned int v138; // edx
  signed int v139; // ecx
  __int64 v140; // r14
  char v141; // r13
  __int64 v142; // r12
  GdiHandleManager *v143; // r14
  __int64 v144; // r9
  unsigned int v145; // edx
  signed int v146; // ecx
  __int64 v147; // r9
  unsigned __int16 *v148; // rsi
  int v149; // ebx
  unsigned int v150; // edi
  __int64 v151; // rcx
  unsigned int v152; // r8d
  signed int v153; // edx
  __int64 v154; // rax
  unsigned int v155; // edi
  __int64 v156; // rcx
  unsigned int v157; // r8d
  signed int v158; // edx
  __int64 v159; // rax
  _DWORD *v160; // rdx
  int v161; // eax
  __int64 v162; // rdi
  __int64 v163; // rcx
  unsigned int v164; // r8d
  signed int v165; // edx
  __int64 v166; // r10
  __int64 v167; // rdx
  unsigned __int64 v168; // xmm1_8
  __int64 v169; // r13
  __int64 v170; // rdi
  GdiHandleManager *v171; // rsi
  unsigned int v172; // r14d
  int EntryTableIndexContainingEntry; // eax
  __int64 v174; // r9
  __int64 v175; // rsi
  char v176; // r12
  __int64 v177; // r15
  GdiHandleManager *v178; // rsi
  int v179; // eax
  __int64 v180; // r10
  __int64 v181; // r9
  unsigned __int16 *v182; // rbx
  int v183; // edi
  char v184; // al
  GdiHandleManager *v185; // rsi
  unsigned int v186; // edi
  int v187; // eax
  GdiHandleEntryDirectory *v188; // r9
  __int64 v189; // r8
  _DWORD *v190; // rdx
  int v191; // eax
  __int64 v192; // rdi
  int v193; // eax
  __int64 v194; // r9
  __int64 v195; // rdx
  __int64 v196; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v198; // rcx
  __int64 v199; // r13
  __int64 v200; // r15
  __int64 v201; // rdi
  unsigned int v202; // esi
  GdiHandleManager *v203; // r14
  __int64 v204; // r14
  unsigned int v205; // edx
  signed int v206; // ecx
  __int64 v207; // r14
  __int64 v208; // r12
  __int64 v209; // rcx
  char v210; // al
  GdiHandleManager *v211; // r14
  __int64 v212; // r9
  unsigned int v213; // edx
  __int64 v214; // r9
  unsigned __int16 *v215; // rsi
  int v216; // ebx
  unsigned int v217; // edi
  __int64 v218; // rcx
  unsigned int v219; // r8d
  signed int v220; // edx
  __int64 v221; // rax
  unsigned int v222; // edi
  __int64 v223; // rcx
  unsigned int v224; // r8d
  signed int v225; // edx
  __int64 v226; // rax
  _DWORD *v227; // rdx
  int v228; // eax
  __int64 v229; // rdi
  __int64 v230; // rcx
  unsigned int v231; // r8d
  signed int v232; // edx
  __int64 v233; // r10
  __int64 v234; // r13
  __int64 v235; // rdi
  GdiHandleManager *v236; // r14
  unsigned int v237; // esi
  __int64 v238; // r14
  unsigned int v239; // edx
  signed int v240; // ecx
  __int64 v241; // r14
  char v242; // r12
  __int64 v243; // r15
  GdiHandleManager *v244; // rsi
  __int64 v245; // r9
  unsigned __int64 v246; // rdx
  __int64 v247; // r9
  unsigned __int16 *v248; // rbx
  int v249; // edi
  char v250; // al
  GdiHandleManager *v251; // rsi
  unsigned int v252; // edi
  __int64 v253; // rcx
  unsigned int v254; // r8d
  signed int v255; // edx
  __int64 v256; // rax
  _DWORD *v257; // rdx
  int v258; // eax
  __int64 v259; // rbx
  __int64 v260; // rcx
  unsigned int v261; // r8d
  signed int v262; // edx
  __int64 v263; // r10
  __int64 v264; // rdx
  __int64 v265; // rcx
  __int64 v266; // r8
  PERESOURCE v267; // rcx
  __int64 v268; // rcx
  PERESOURCE v269; // rcx
  __int64 v270; // rcx
  __int64 v271; // rcx
  struct tagDCE *v273; // rdi
  struct tagDCE **v274; // rbx
  struct tagDCE **v275; // rsi
  __int64 v276; // rcx
  __int64 v277; // rax
  int v278; // ebx
  __int64 v279; // rcx
  unsigned __int8 v280; // dl
  int v281; // eax
  HDC v282; // rcx
  __int64 v283; // rcx
  void *StockObject; // rax
  HRGN v285; // rbx
  __int64 RectRgnIndirect; // rax
  HDC v287; // rcx
  __int64 v288; // rcx
  HRGN v289; // rax
  __int64 v290; // rdx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v292; // rdx
  __int64 v293; // rcx
  __int64 v294; // r8
  HRGN v295; // rdx
  __int64 v296; // rax
  int v297; // eax
  unsigned int v298; // ebx
  unsigned int v299; // ebx
  unsigned int v300; // ebx
  unsigned int v301; // ebx
  unsigned int v302; // ebx
  unsigned int v303; // ebx
  unsigned int v304; // edx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v305; // rdx
  unsigned int v306; // ecx
  unsigned int v307; // ebx
  unsigned int v308; // ebx
  __int64 v309; // rax
  HDC v310; // rcx
  __int64 v311; // rcx
  HRGN v312; // rax
  unsigned int v313; // ebx
  unsigned int v314; // ebx
  unsigned int v315; // ebx
  unsigned int v316; // edx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v317; // rdx
  unsigned int v318; // ecx
  unsigned int v319; // ebx
  unsigned int v320; // ebx
  unsigned int v321; // ebx
  unsigned int v322; // ebx
  unsigned int v323; // ebx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v324; // rdx
  unsigned int v325; // ecx
  unsigned int v326; // ebx
  unsigned int v327; // edi
  __int64 v328; // [rsp+30h] [rbp-D0h]
  __int64 v329; // [rsp+30h] [rbp-D0h]
  struct tagDCE *v330; // [rsp+38h] [rbp-C8h]
  __int64 v331; // [rsp+40h] [rbp-C0h]
  struct tagDCE *v332; // [rsp+48h] [rbp-B8h]
  struct tagDCE **v333; // [rsp+48h] [rbp-B8h]
  int v334; // [rsp+50h] [rbp-B0h]
  int v335; // [rsp+54h] [rbp-ACh]
  int v336; // [rsp+58h] [rbp-A8h]
  __int64 v337; // [rsp+68h] [rbp-98h]
  HRGN v338; // [rsp+70h] [rbp-90h] BYREF
  __int64 RedirectionBitmap; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v340; // [rsp+80h] [rbp-80h] BYREF
  int v341; // [rsp+88h] [rbp-78h]
  int v342; // [rsp+8Ch] [rbp-74h]
  unsigned __int16 *v343; // [rsp+98h] [rbp-68h] BYREF
  int v344; // [rsp+A0h] [rbp-60h]
  int v345; // [rsp+A4h] [rbp-5Ch]
  unsigned __int16 *v346; // [rsp+B0h] [rbp-50h] BYREF
  int v347; // [rsp+B8h] [rbp-48h]
  int v348; // [rsp+BCh] [rbp-44h]
  unsigned __int16 *v349; // [rsp+C8h] [rbp-38h] BYREF
  int v350; // [rsp+D0h] [rbp-30h]
  int v351; // [rsp+D4h] [rbp-2Ch]
  unsigned __int16 *v352; // [rsp+E0h] [rbp-20h] BYREF
  int v353; // [rsp+E8h] [rbp-18h]
  int v354; // [rsp+ECh] [rbp-14h]
  unsigned __int16 *v355; // [rsp+F8h] [rbp-8h] BYREF
  int v356; // [rsp+100h] [rbp+0h]
  int v357; // [rsp+104h] [rbp+4h]
  unsigned __int16 *v358; // [rsp+110h] [rbp+10h] BYREF
  int v359; // [rsp+118h] [rbp+18h]
  int v360; // [rsp+11Ch] [rbp+1Ch]
  _QWORD v361[2]; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v362[2]; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v363[2]; // [rsp+148h] [rbp+48h] BYREF
  _QWORD v364[2]; // [rsp+158h] [rbp+58h] BYREF
  _QWORD v365[2]; // [rsp+168h] [rbp+68h] BYREF
  char v366[8]; // [rsp+178h] [rbp+78h] BYREF
  char v367[8]; // [rsp+180h] [rbp+80h] BYREF
  char v368[8]; // [rsp+188h] [rbp+88h] BYREF
  char v369[8]; // [rsp+190h] [rbp+90h] BYREF
  char v370[8]; // [rsp+198h] [rbp+98h] BYREF
  char v371[8]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v372[72]; // [rsp+1A8h] [rbp+A8h] BYREF
  _QWORD *v373; // [rsp+200h] [rbp+100h]
  HRGN EmptyRgnPublic; // [rsp+208h] [rbp+108h]
  unsigned int v375; // [rsp+210h] [rbp+110h]
  unsigned int v376; // [rsp+218h] [rbp+118h]
  __int64 v377; // [rsp+218h] [rbp+118h]

  v375 = a3;
  EmptyRgnPublic = a2;
  v3 = 0;
  v337 = 0LL;
  v4 = a3;
  RedirectionBitmap = 0LL;
  v5 = a2;
  v335 = 0;
  v336 = 0;
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
  v7 = L"ghsemDynamicModeChange";
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(L"ghsemDynamicModeChange", &LockAcquireShared);
  v8 = ghsemGreLock;
  if ( ghsemGreLock )
  {
    PsEnterPriorityRegion(v7);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v8);
    LODWORD(v8) = (_DWORD)ghsemGreLock;
  }
  v9 = L"ghsemGreLock";
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pqz((unsigned int)L"ghsemGreLock", (_DWORD)a2, a3, (_DWORD)v8, 2, (__int64)L"ghsemGreLock");
  v10 = ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    PsEnterPriorityRegion(v9);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v10);
    LODWORD(v10) = (_DWORD)ghsemDCVisRgn;
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pqz((unsigned int)L"ghsemDCVisRgn", (_DWORD)a2, a3, (_DWORD)v10, 3, (__int64)L"ghsemDCVisRgn");
  if ( !a1 )
    a1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 16LL);
  v373 = (_QWORD *)a1;
  v11 = 0LL;
  v331 = a1;
  v12 = a1;
  v13 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      v14 = *(_BYTE *)(v13 + 71);
      if ( (v14 & 0x10) == 0 || (v14 & 0x20) != 0 && v13 != a1 )
        break;
      if ( (*(_WORD *)(v13 + 82) & 0x3FFF) != 0x29D )
      {
        v13 = *(_QWORD *)(v13 + 104);
        if ( v13 )
          continue;
      }
      goto LABEL_17;
    }
  }
  else
  {
LABEL_17:
    v3 = 1;
  }
  v334 = v3;
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13, a2, a3) + 12) & 0x200) != 0 )
    DelayedDestroyCacheDC(0LL);
  if ( (v4 & 0x10000) != 0 )
  {
    v16 = v4 & 0xFFFFFFC7;
    v15 = v16;
    if ( (v16 & 1) != 0 )
    {
      v4 = v16 | 0x10;
      if ( (*(_BYTE *)(a1 + 71) & 4) == 0 )
        v4 = v15;
    }
    else
    {
      v17 = *(_QWORD *)(a1 + 168);
      v18 = v16 | 0x20;
      v19 = *(_BYTE *)(v17 + 92);
      if ( v19 >= 0 )
        v18 = v16;
      if ( (((v18 & 2) == 0) & (unsigned __int8)~((unsigned __int8)v19 >> 5)) != 0 )
      {
        if ( (v19 & 0x40) != 0 )
        {
          v296 = *(_QWORD *)(v17 + 24);
          if ( v296 )
            v11 = *(_QWORD *)(v296 + 8);
        }
        else
        {
          v18 |= 2u;
        }
      }
      v15 = v18 | 8;
      if ( (*(_BYTE *)(a1 + 71) & 2) == 0 )
        v15 = v18;
      v4 = v15 | 0x10;
      if ( (*(_BYTE *)(a1 + 71) & 4) == 0 )
        v4 = v15;
      v375 = v4;
      if ( (*(_BYTE *)(a1 + 71) & 0x20) == 0 )
        goto LABEL_32;
      v4 &= ~8u;
      v375 = v4;
      if ( !*(_QWORD *)(v17 + 120) )
        goto LABEL_32;
    }
    v4 |= 2u;
    v375 = v4;
  }
LABEL_32:
  if ( (v4 & 0x80000) != 0 )
  {
    v4 = v4 & 0xFFFFFFD5 | 2;
    v375 = v4;
  }
  if ( (int)IsGetLayeredOrRedirectedParentSupported(v15) >= 0 )
  {
    LayeredOrRedirectedParent = GetLayeredOrRedirectedParent(a1);
    v22 = LayeredOrRedirectedParent;
    if ( LayeredOrRedirectedParent && (*(_DWORD *)(LayeredOrRedirectedParent + 64) & 0x20000000) != 0 )
    {
      if ( (int)IsGetRedirectionBitmapSupported(v21) < 0 )
      {
        RedirectionBitmap = 0LL;
      }
      else
      {
        RedirectionBitmap = GetRedirectionBitmap(v22);
        if ( RedirectionBitmap )
          goto LABEL_39;
      }
      if ( (*(_BYTE *)(v22 + 66) & 0x20) == 0 )
      {
LABEL_41:
        v12 = a1;
        goto LABEL_42;
      }
LABEL_39:
      v4 |= 0x4000u;
      v337 = v22;
      v375 = v4;
      if ( a1 == v22 && (v4 & 0x20) != 0 )
      {
        v4 = v4 & 0xFFFFFFDD | 2;
        v375 = v4;
      }
      if ( (unsigned __int64)v5 > 2 )
      {
        if ( (v4 & 0x40000) != 0 )
        {
          EmptyRgnPublic = (HRGN)CreateEmptyRgnPublic(v23);
          v295 = v5;
          v5 = EmptyRgnPublic;
          GreCombineRgn(EmptyRgnPublic, v295, 0LL, 5);
          v4 &= ~0x40000u;
          v375 = v4;
        }
        GreOffsetRgn(v5);
      }
      goto LABEL_41;
    }
    v12 = a1;
  }
LABEL_42:
  if ( (v4 & 0x20) != 0 )
  {
    v279 = *(_QWORD *)(a1 + 104);
    if ( !v279 )
      v279 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                       + 16LL);
    v4 |= 2u;
    v375 = v4;
    if ( (v4 & 0x18) == 0 && ((*(_BYTE *)(a1 + 61) & 1) != 0 || (*(_BYTE *)(v279 + 71) & 2) == 0) )
    {
      v280 = *(_BYTE *)(v279 + 71);
      if ( ((v280 ^ *(_BYTE *)(a1 + 71)) & 0x10) == 0 )
      {
        v4 &= 0xFFFFFFE7;
        v331 = v279;
        v375 = v4;
        v12 = v279;
        if ( (v280 & 4) != 0 )
        {
          v4 |= 0x10u;
          v375 = v4;
        }
      }
    }
  }
  if ( (v4 & 2) == 0 && (!a1 || *(_QWORD *)(a1 + 16) != W32GetThreadWin32Thread((__int64)KeGetCurrentThread())) )
  {
    v4 |= 2u;
    v375 = v4;
  }
  v376 = v4 & 0x8080441F;
  if ( (v4 & 2) == 0 )
  {
    v65 = (CCursorClip *)((char *)gpDispInfo + 16);
    v25 = (struct tagDCE *)*((_QWORD *)gpDispInfo + 2);
    v330 = v25;
    if ( !v25 )
      goto LABEL_766;
    while ( 1 )
    {
      if ( (*((_DWORD *)v25 + 16) & 0x400002) == 0 && !(unsigned int)GreIsRendering(*((HDC *)v25 + 1)) )
      {
        v64 = v373;
        if ( *((_QWORD **)v25 + 2) == v373 || *((_QWORD *)v25 + 1) == v11 )
          break;
      }
      v65 = v25;
      v25 = *(struct tagDCE **)v25;
      v330 = v25;
      if ( !v25 )
        goto LABEL_766;
    }
    if ( *((_QWORD *)v25 + 7) )
    {
      if ( (v4 & 0xC0) != 0 )
      {
        v297 = IsDeleteHrgnClipSupported(v26);
        if ( v297 >= 0 )
          DeleteHrgnClip(v25);
      }
    }
    if ( (*((_DWORD *)v25 + 16) & 0x4000) != 0 )
    {
      if ( (*(_BYTE *)(*((_QWORD *)v25 + 4) + 67LL) & 2) != 0 && (int)IsFlushWEFCOMPOSITEDDCEBoundsSupported(v26) >= 0 )
        FlushWEFCOMPOSITEDDCEBounds(v25);
      if ( (int)IsGreSelectRedirectionBitmapSupported(v26) >= 0 )
        GreSelectRedirectionBitmap(*((_QWORD *)v25 + 1), 0LL);
    }
    if ( *((_QWORD **)v25 + 2) != v373 )
      goto LABEL_520;
    if ( *((_QWORD *)v25 + 4) != v337 )
      goto LABEL_520;
    if ( *((_QWORD *)v25 + 3) != v12 )
      goto LABEL_520;
    if ( !v3 )
      goto LABEL_520;
    v26 = (char *)*((unsigned int *)v25 + 16);
    if ( ((v4 ^ *((_DWORD *)v25 + 16)) & 0x4000) != 0 || ((unsigned int)v26 & 0x10000000) != 0 )
      goto LABEL_520;
LABEL_118:
    while ( (*((_DWORD *)v25 + 16) & 0x8080441F) != v376 )
    {
LABEL_520:
      v336 = 1;
      if ( (*((_DWORD *)v25 + 16) & 0x800) == 0 && (int)IsSpbCheckDceSupported(v26) >= 0 )
        SpbCheckDce(v25);
      v282 = (HDC)*((_QWORD *)v25 + 1);
      *((_DWORD *)v25 + 16) = v376 | 0x1000;
      GreValidateVisrgn(v282);
      v338 = 0LL;
      if ( (int)IsCalcVisRgnSupported(v283) < 0 || !(unsigned int)CalcVisRgn(&v338, v64, v12, v376) )
        *((_DWORD *)v25 + 16) |= 0x10000000u;
      *((_QWORD *)v25 + 4) = v337;
      *((_QWORD *)v25 + 2) = v64;
      *((_QWORD *)v25 + 3) = v12;
      *((_QWORD *)v25 + 5) = 0LL;
      *((_QWORD *)v25 + 6) = 0LL;
      ResetOrg(v338, v25, 1);
      if ( !v338 )
        v335 = 1;
    }
    if ( v25 != *((struct tagDCE **)gpDispInfo + 2) )
    {
      *(_QWORD *)v65 = *(_QWORD *)v25;
      *(_QWORD *)v25 = *((_QWORD *)gpDispInfo + 2);
      *((_QWORD *)gpDispInfo + 2) = v25;
    }
    v66 = *((_QWORD *)v25 + 1);
    v361[1] = 0LL;
    v67 = (unsigned __int16)v66 | ((unsigned int)v66 >> 8) & 0xFF0000;
    v329 = 0LL;
    v343 = 0LL;
    PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v367);
    v68 = gpHandleManager;
    v344 = 1;
    v69 = v67;
    if ( (unsigned int)v67 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)v67,
                                    1)
             + 13) == WORD1(v67) )
          v69 = (unsigned __int16)v66;
      }
      else
      {
        v69 = (unsigned __int16)v66;
      }
    }
    v70 = *((_QWORD *)v68 + 2);
    v71 = *(_DWORD *)(v70 + 2056);
    if ( v69 >= v71 + ((*(unsigned __int16 *)(v70 + 2) + 0xFFFF) << 16) )
      goto LABEL_633;
    if ( v69 >= v71 )
    {
      v72 = ((v69 - v71) >> 16) + 1;
      if ( (v69 - v71) >> 16 == -2 )
        goto LABEL_633;
    }
    else
    {
      v72 = 0;
    }
    v73 = *(_QWORD *)(v70 + 8LL * v72 + 8);
    if ( v72 )
      v69 = v69 - (v72 << 16) - v71 + 0x10000;
    v74 = 0;
    if ( v69 < *(_DWORD *)(v73 + 20) )
    {
      v75 = *(_QWORD *)(**(_QWORD **)(v73 + 24) + 8 * ((unsigned __int64)v69 >> 8)) + 16LL * (unsigned __int8)v69;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v75, 0LL);
      if ( v69 < *(_DWORD *)(v73 + 20)
        && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v73 + 24) + 8 * ((unsigned __int64)v69 >> 8))
                     + 16LL * (unsigned __int8)v69
                     + 8) )
      {
        v76 = 3LL * v69;
        v74 = 1;
        *(_DWORD *)(*(_QWORD *)v73 + 24LL * v69 + 8) |= 1u;
      }
      else
      {
        ExReleasePushLockExclusiveEx(v75, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( v74 )
      {
        v77 = gpHandleManager;
        if ( (unsigned int)v67 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            v76 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                         *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                         (unsigned __int16)v66,
                                         1)
                  + 13);
            if ( (_DWORD)v76 == WORD1(v67) )
              v67 = (unsigned __int16)v66;
          }
          else
          {
            v67 = (unsigned __int16)v66;
          }
        }
        v78 = *((_QWORD *)v77 + 2);
        v79 = *(_DWORD *)(v78 + 2056);
        if ( (unsigned int)v67 < v79 + ((*(unsigned __int16 *)(v78 + 2) + 0xFFFF) << 16) )
        {
          if ( (unsigned int)v67 < v79 )
          {
            v76 = 0LL;
LABEL_140:
            v80 = *(_QWORD *)(v78 + 8LL * (int)v76 + 8);
            if ( (_DWORD)v76 )
            {
              v76 = (unsigned int)((_DWORD)v76 << 16);
              v67 = (_DWORD)v67 - (_DWORD)v76 - v79 + 0x10000;
            }
            v81 = 0LL;
            if ( (unsigned int)v67 < *(_DWORD *)(v80 + 20) )
            {
              v76 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v80 + 24) + 8 * ((unsigned __int64)(unsigned int)v67 >> 8))
                              + 16LL * (unsigned __int8)v67
                              + 8);
              if ( v76 )
              {
                v76 = 3 * v67;
                v81 = (unsigned __int16 *)(*(_QWORD *)v80 + 24 * v67);
              }
            }
            goto LABEL_145;
          }
          v76 = (((unsigned int)v67 - v79) >> 16) + 1;
          if ( ((unsigned int)v67 - v79) >> 16 != -2 )
            goto LABEL_140;
        }
        v81 = 0LL;
LABEL_145:
        v343 = v81;
        _m_prefetchw(v81 + 4);
        v43 = (*((_BYTE *)v81 + 15) & 0x20) == 0;
        v345 = *((_DWORD *)v81 + 2);
        if ( v43 )
        {
          v82 = v344;
        }
        else
        {
          HANDLELOCK::vUnlock((HANDLELOCK *)&v343);
          v82 = v344;
          if ( !v344 )
          {
LABEL_636:
            v88 = 0LL;
LABEL_182:
            v361[0] = v88;
            if ( !v88 )
              goto LABEL_234;
            *(_DWORD *)(v88 + 36) &= ~0x100000u;
            GrepValidateVisRgn((struct DC *)v88, *(struct REGION **)(v88 + 1536));
            XDCOBJ::RestoreAttributes((XDCOBJ *)v361);
            v101 = v361[0];
            v346 = 0LL;
            v102 = (unsigned __int16)*(_DWORD *)v361[0] | (*(_DWORD *)v361[0] >> 8) & 0xFF0000u;
            PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v368);
            v103 = gpHandleManager;
            v104 = v102;
            v347 = 1;
            if ( (unsigned int)v102 >= 0x10000 )
            {
              if ( *(_DWORD *)gpHandleManager > 0x10000u )
              {
                if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                            *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                            (unsigned __int16)v102,
                                            1)
                     + 13) == WORD1(v102) )
                  v104 = (unsigned __int16)v102;
              }
              else
              {
                v104 = (unsigned __int16)v102;
              }
            }
            v105 = *((_QWORD *)v103 + 2);
            v106 = *(_DWORD *)(v105 + 2056);
            if ( v104 >= v106 + ((*(unsigned __int16 *)(v105 + 2) + 0xFFFF) << 16) )
              goto LABEL_667;
            if ( v104 >= v106 )
            {
              v107 = ((v104 - v106) >> 16) + 1;
              if ( (v104 - v106) >> 16 == -2 )
                goto LABEL_667;
            }
            else
            {
              v107 = 0;
            }
            v108 = *(_QWORD *)(v105 + 8LL * v107 + 8);
            if ( v107 )
              v104 = v104 - (v107 << 16) - v106 + 0x10000;
            v109 = 0;
            if ( v104 < *(_DWORD *)(v108 + 20) )
            {
              v110 = *(_QWORD *)(**(_QWORD **)(v108 + 24) + 8 * ((unsigned __int64)v104 >> 8))
                   + 16LL * (unsigned __int8)v104;
              KeEnterCriticalRegion();
              ExAcquirePushLockExclusiveEx(v110, 0LL);
              if ( v104 < *(_DWORD *)(v108 + 20)
                && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v108 + 24) + 8 * ((unsigned __int64)v104 >> 8))
                             + 16LL * (unsigned __int8)v104
                             + 8) )
              {
                v76 = 3LL * v104;
                v109 = 1;
                *(_DWORD *)(*(_QWORD *)v108 + 24LL * v104 + 8) |= 1u;
              }
              else
              {
                ExReleasePushLockExclusiveEx(v110, 0LL);
                KeLeaveCriticalRegion();
              }
              if ( v109 )
              {
                v111 = gpHandleManager;
                if ( (unsigned int)v102 >= 0x10000 )
                {
                  if ( *(_DWORD *)gpHandleManager > 0x10000u )
                  {
                    v76 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                 *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                                 (unsigned __int16)v102,
                                                 1)
                          + 13);
                    if ( (_DWORD)v76 == WORD1(v102) )
                      v102 = (unsigned __int16)v102;
                  }
                  else
                  {
                    v102 = (unsigned __int16)v102;
                  }
                }
                v112 = *((_QWORD *)v111 + 2);
                v113 = *(_DWORD *)(v112 + 2056);
                if ( (unsigned int)v102 < v113 + ((*(unsigned __int16 *)(v112 + 2) + 0xFFFF) << 16) )
                {
                  if ( (unsigned int)v102 < v113 )
                  {
                    v76 = 0LL;
LABEL_202:
                    v114 = *(_QWORD *)(v112 + 8LL * (int)v76 + 8);
                    if ( (_DWORD)v76 )
                    {
                      v76 = (unsigned int)((_DWORD)v76 << 16);
                      v102 = (_DWORD)v102 - (_DWORD)v76 - v113 + 0x10000;
                    }
                    v115 = 0LL;
                    if ( (unsigned int)v102 < *(_DWORD *)(v114 + 20) )
                    {
                      v76 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v114 + 24)
                                                  + 8 * ((unsigned __int64)(unsigned int)v102 >> 8))
                                      + 16LL * (unsigned __int8)v102
                                      + 8);
                      if ( v76 )
                      {
                        v76 = 3 * v102;
                        v115 = (unsigned __int16 *)(*(_QWORD *)v114 + 24 * v102);
                      }
                    }
                    goto LABEL_207;
                  }
                  v76 = (((unsigned int)v102 - v113) >> 16) + 1;
                  if ( ((unsigned int)v102 - v113) >> 16 != -2 )
                    goto LABEL_202;
                }
                v115 = 0LL;
LABEL_207:
                v346 = v115;
                _m_prefetchw(v115 + 4);
                v348 = *((_DWORD *)v115 + 2);
                if ( (*((_BYTE *)v115 + 15) & 0x20) != 0 )
                {
                  HANDLELOCK::vUnlock((HANDLELOCK *)&v346);
                  v116 = v347;
                  if ( !v347 )
                    goto LABEL_234;
                  v115 = v346;
                }
                else
                {
                  v116 = v347;
                }
                if ( v115 )
                {
                  if ( *((_BYTE *)v115 + 14) == 5 && gbGdiHmgrAltStacks && gpentHmgrAltStacks )
                  {
                    v304 = (unsigned __int16)*(_DWORD *)v101 | (*(_DWORD *)v101 >> 8) & 0xFF0000;
                    RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v304 | (v304 >> 8) & 0xFF0000);
                  }
                  v117 = *((_BYTE *)v115 + 14);
                  if ( v117 == 5 )
                  {
                    v305 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v101 + 616);
                    v306 = 0;
                  }
                  else
                  {
                    if ( v117 != 16 )
                      goto LABEL_213;
                    v305 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v101 + 152);
                    v306 = 2;
                  }
                  TrackObjectReferenceDecrement(v306, v305);
LABEL_213:
                  --*(_DWORD *)(v101 + 8);
                  v118 = gpHandleManager;
                  v119 = *(_DWORD *)v115 & 0xFFFFFF;
                  if ( v119 >= 0x10000 )
                  {
                    if ( *(_DWORD *)gpHandleManager > 0x10000u )
                    {
                      v307 = *v115;
                      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                                  (unsigned __int16)v119,
                                                  1)
                           + 13) == HIWORD(v119) )
                        v119 = v307;
                    }
                    else
                    {
                      v119 = *v115;
                    }
                  }
                  v120 = *((_QWORD *)v118 + 2);
                  v121 = *(_DWORD *)(v120 + 2056);
                  if ( v119 >= v121 + ((*(unsigned __int16 *)(v120 + 2) + 0xFFFF) << 16) )
                    goto LABEL_688;
                  if ( v119 >= v121 )
                  {
                    v122 = ((v119 - v121) >> 16) + 1;
                    if ( (v119 - v121) >> 16 == -2 )
                      goto LABEL_688;
                  }
                  else
                  {
                    v122 = 0;
                  }
                  v123 = *(_QWORD *)(v120 + 8LL * v122 + 8);
                  if ( v122 )
                    v119 = v119 - (v122 << 16) - v121 + 0x10000;
                  if ( v119 < *(_DWORD *)(v123 + 20) )
                  {
                    v124 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v123 + 24) + 8 * ((unsigned __int64)v119 >> 8))
                                      + 16LL * (unsigned __int8)v119
                                      + 8);
                    goto LABEL_223;
                  }
LABEL_688:
                  v124 = 0LL;
LABEL_223:
                  v125 = (unsigned __int16)*v124;
                  v126 = v125 | (*v124 >> 8) & 0xFF0000u;
                  if ( (unsigned int)v126 >= 0x10000 )
                  {
                    if ( *(_DWORD *)v118 > 0x10000u )
                    {
                      v308 = (unsigned __int16)v125;
                      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                  *((GdiHandleEntryDirectory **)v118 + 2),
                                                  (unsigned __int16)v125,
                                                  1)
                           + 13) == WORD1(v126) )
                        v126 = v308;
                    }
                    else
                    {
                      v126 = (unsigned __int16)v125;
                    }
                    if ( (unsigned int)v126 >= 0x10000 && *(_DWORD *)v118 > 0x10000u )
                      GdiHandleEntryDirectory::GetEntry(
                        *((GdiHandleEntryDirectory **)v118 + 2),
                        (unsigned __int16)v126,
                        1);
                  }
                  v127 = *((_QWORD *)v118 + 2);
                  v128 = *(_DWORD *)(v127 + 2056);
                  if ( (unsigned int)v126 >= v128 + ((*(unsigned __int16 *)(v127 + 2) + 0xFFFF) << 16) )
                    goto LABEL_233;
                  if ( (unsigned int)v126 >= v128 )
                  {
                    v129 = (((unsigned int)v126 - v128) >> 16) + 1;
                    if ( ((unsigned int)v126 - v128) >> 16 == -2 )
                    {
LABEL_233:
                      KeLeaveCriticalRegion();
                      goto LABEL_234;
                    }
                  }
                  else
                  {
                    v129 = 0;
                  }
                  v130 = *(_QWORD *)(v127 + 8LL * v129 + 8);
                  if ( v129 )
                    v126 = (_DWORD)v126 - (v129 << 16) - v128 + 0x10000;
                  *(_DWORD *)(*(_QWORD *)v130 + 24 * v126 + 8) &= ~1u;
                  ExReleasePushLockExclusiveEx(
                    *(_QWORD *)(**(_QWORD **)(v130 + 24) + 8 * ((unsigned __int64)(unsigned int)v126 >> 8))
                  + 16LL * (unsigned __int8)v126,
                    0LL);
                  KeLeaveCriticalRegion();
                  goto LABEL_233;
                }
LABEL_668:
                if ( v116 )
                  HANDLELOCK::vUnlock((HANDLELOCK *)&v346);
LABEL_234:
                v131 = v375;
                if ( (v375 & 0x80u) != 0 )
                {
                  v285 = EmptyRgnPublic;
                  if ( EmptyRgnPublic != (HRGN)1 )
                  {
                    GreSetRectRgn(ghrgnGDC, 0);
                    RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
                    v132 = v330;
                    v287 = (HDC)*((_QWORD *)v330 + 1);
                    *((_QWORD *)v330 + 7) = RectRgnIndirect;
                    GreSelectVisRgn(v287, RectRgnIndirect, 4u);
                    *((_QWORD *)v330 + 5) = EmptyRgnPublic;
                    if ( (v375 & 0x40000) != 0 )
                      *((_DWORD *)v330 + 16) |= 0x40000u;
                    *((_DWORD *)v330 + 16) |= 0x80u;
                    if ( !EmptyRgnPublic )
                    {
                      *((_QWORD *)v330 + 6) = 0LL;
                      goto LABEL_538;
                    }
                    GreCombineRgn(ghrgnGDC, *((HRGN *)v330 + 7), EmptyRgnPublic, 1);
                    v289 = (HRGN)CreateEmptyRgnPublic(v288);
                    *((_QWORD *)v330 + 6) = v289;
                    GreCombineRgn(v289, EmptyRgnPublic, 0LL, 5);
                    if ( (unsigned __int64)EmptyRgnPublic <= 2 || (*((_DWORD *)v330 + 16) & 0x40000) != 0 )
                      goto LABEL_538;
LABEL_537:
                    PsGetCurrentProcessId();
                    LOBYTE(v290) = 4;
                    HmgMarkUndeletable(v285, v290);
LABEL_538:
                    *((_DWORD *)v132 + 16) &= ~0x2000u;
                    GreSelectVisRgn(*((HDC *)v132 + 1), (__int64)ghrgnGDC, 4u);
LABEL_237:
                    if ( (*((_DWORD *)v132 + 16) & 0x4000) == 0 )
                      goto LABEL_350;
                    if ( (int)IsGreSelectRedirectionBitmapSupported(v76) >= 0
                      && !(unsigned int)GreSelectRedirectionBitmap(*((_QWORD *)v132 + 1), RedirectionBitmap) )
                    {
                      v335 = 1;
                    }
                    v377 = *((_QWORD *)v132 + 1);
                    v133 = 0LL;
                    v134 = (unsigned __int16)v377 | ((unsigned int)v377 >> 8) & 0xFF0000;
                    v362[1] = 0LL;
                    v349 = 0LL;
                    PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v369);
                    v135 = gpHandleManager;
                    v136 = v134;
                    v350 = 1;
                    if ( (unsigned int)v134 >= 0x10000 )
                    {
                      if ( *(_DWORD *)gpHandleManager > 0x10000u )
                      {
                        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                                    (unsigned __int16)v134,
                                                    1)
                             + 13) == WORD1(v134) )
                          v136 = (unsigned __int16)v377;
                      }
                      else
                      {
                        v136 = (unsigned __int16)v377;
                      }
                    }
                    v137 = *((_QWORD *)v135 + 2);
                    v138 = *(_DWORD *)(v137 + 2056);
                    if ( v136 >= v138 + ((*(unsigned __int16 *)(v137 + 2) + 0xFFFF) << 16) )
                      goto LABEL_708;
                    if ( v136 >= v138 )
                    {
                      v139 = ((v136 - v138) >> 16) + 1;
                      if ( (v136 - v138) >> 16 == -2 )
                        goto LABEL_708;
                    }
                    else
                    {
                      v139 = 0;
                    }
                    v140 = *(_QWORD *)(v137 + 8LL * v139 + 8);
                    if ( v139 )
                      v136 = v136 - (v139 << 16) - v138 + 0x10000;
                    v141 = 0;
                    if ( v136 < *(_DWORD *)(v140 + 20) )
                    {
                      v142 = *(_QWORD *)(**(_QWORD **)(v140 + 24) + 8 * ((unsigned __int64)v136 >> 8))
                           + 16LL * (unsigned __int8)v136;
                      KeEnterCriticalRegion();
                      ExAcquirePushLockExclusiveEx(v142, 0LL);
                      if ( v136 < *(_DWORD *)(v140 + 20)
                        && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v140 + 24) + 8 * ((unsigned __int64)v136 >> 8))
                                     + 16LL * (unsigned __int8)v136
                                     + 8) )
                      {
                        v141 = 1;
                        *(_DWORD *)(*(_QWORD *)v140 + 24LL * v136 + 8) |= 1u;
                      }
                      else
                      {
                        ExReleasePushLockExclusiveEx(v142, 0LL);
                        KeLeaveCriticalRegion();
                      }
                      if ( v141 )
                      {
                        v143 = gpHandleManager;
                        if ( (unsigned int)v134 >= 0x10000 )
                        {
                          if ( *(_DWORD *)gpHandleManager > 0x10000u )
                          {
                            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                                        (unsigned __int16)v134,
                                                        1)
                                 + 13) == WORD1(v134) )
                              v134 = (unsigned __int16)v377;
                          }
                          else
                          {
                            v134 = (unsigned __int16)v377;
                          }
                        }
                        v144 = *((_QWORD *)v143 + 2);
                        v145 = *(_DWORD *)(v144 + 2056);
                        if ( (unsigned int)v134 < v145 + ((*(unsigned __int16 *)(v144 + 2) + 0xFFFF) << 16) )
                        {
                          if ( (unsigned int)v134 < v145 )
                          {
                            v146 = 0;
LABEL_260:
                            v147 = *(_QWORD *)(v144 + 8LL * v146 + 8);
                            if ( v146 )
                              v134 = (_DWORD)v134 - (v146 << 16) - v145 + 0x10000;
                            v148 = 0LL;
                            if ( (unsigned int)v134 < *(_DWORD *)(v147 + 20)
                              && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v147 + 24)
                                                       + 8 * ((unsigned __int64)(unsigned int)v134 >> 8))
                                           + 16LL * (unsigned __int8)v134
                                           + 8) )
                            {
                              v148 = (unsigned __int16 *)(*(_QWORD *)v147 + 24 * v134);
                            }
                            goto LABEL_265;
                          }
                          v146 = (((unsigned int)v134 - v145) >> 16) + 1;
                          if ( ((unsigned int)v134 - v145) >> 16 != -2 )
                            goto LABEL_260;
                        }
                        v148 = 0LL;
LABEL_265:
                        v349 = v148;
                        _m_prefetchw(v148 + 4);
                        v43 = (*((_BYTE *)v148 + 15) & 0x20) == 0;
                        v351 = *((_DWORD *)v148 + 2);
                        if ( v43 )
                        {
                          v149 = v350;
                        }
                        else
                        {
                          HANDLELOCK::vUnlock((HANDLELOCK *)&v349);
                          v149 = v350;
                          if ( !v350 )
                            goto LABEL_302;
                          v143 = gpHandleManager;
                          v148 = v349;
                        }
                        if ( v148 )
                        {
                          if ( *((_BYTE *)v148 + 14) != 1 || v148[6] != WORD1(v377) )
                          {
LABEL_281:
                            v155 = *(_DWORD *)v148 & 0xFFFFFF;
                            if ( v155 >= 0x10000 )
                            {
                              if ( *(_DWORD *)v143 > 0x10000u )
                              {
                                v314 = *v148;
                                if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                            *((GdiHandleEntryDirectory **)v143 + 2),
                                                            v314,
                                                            1)
                                     + 13) == HIWORD(v155) )
                                  v155 = v314;
                              }
                              else
                              {
                                v155 = *v148;
                              }
                            }
                            v156 = *((_QWORD *)v143 + 2);
                            v157 = *(_DWORD *)(v156 + 2056);
                            if ( v155 >= v157 + ((*(unsigned __int16 *)(v156 + 2) + 0xFFFF) << 16) )
                              goto LABEL_728;
                            if ( v155 >= v157 )
                            {
                              v158 = ((v155 - v157) >> 16) + 1;
                              if ( (v155 - v157) >> 16 == -2 )
                                goto LABEL_728;
                            }
                            else
                            {
                              v158 = 0;
                            }
                            v159 = *(_QWORD *)(v156 + 8LL * v158 + 8);
                            if ( v158 )
                              v155 = v155 - (v158 << 16) - v157 + 0x10000;
                            if ( v155 < *(_DWORD *)(v159 + 20) )
                            {
                              v160 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v159 + 24)
                                                            + 8 * ((unsigned __int64)v155 >> 8))
                                                + 16LL * (unsigned __int8)v155
                                                + 8);
                              goto LABEL_291;
                            }
LABEL_728:
                            v160 = 0LL;
LABEL_291:
                            v161 = (unsigned __int16)*v160;
                            v162 = v161 | (*v160 >> 8) & 0xFF0000u;
                            if ( (unsigned int)v162 >= 0x10000 )
                            {
                              if ( *(_DWORD *)v143 > 0x10000u )
                              {
                                v315 = (unsigned __int16)v161;
                                if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                            *((GdiHandleEntryDirectory **)v143 + 2),
                                                            (unsigned __int16)v161,
                                                            1)
                                     + 13) == WORD1(v162) )
                                  v162 = v315;
                              }
                              else
                              {
                                v162 = (unsigned __int16)v161;
                              }
                              if ( (unsigned int)v162 >= 0x10000 && *(_DWORD *)v143 > 0x10000u )
                                GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)v143 + 2),
                                  (unsigned __int16)v162,
                                  1);
                            }
                            v163 = *((_QWORD *)v143 + 2);
                            v164 = *(_DWORD *)(v163 + 2056);
                            if ( (unsigned int)v162 >= v164 + ((*(unsigned __int16 *)(v163 + 2) + 0xFFFF) << 16) )
                              goto LABEL_301;
                            if ( (unsigned int)v162 >= v164 )
                            {
                              v165 = (((unsigned int)v162 - v164) >> 16) + 1;
                              if ( ((unsigned int)v162 - v164) >> 16 == -2 )
                              {
LABEL_301:
                                KeLeaveCriticalRegion();
                                goto LABEL_302;
                              }
                            }
                            else
                            {
                              v165 = 0;
                            }
                            v166 = *(_QWORD *)(v163 + 8LL * v165 + 8);
                            if ( v165 )
                              v162 = (_DWORD)v162 - (v165 << 16) - v164 + 0x10000;
                            *(_DWORD *)(*(_QWORD *)v166 + 24 * v162 + 8) &= ~1u;
                            ExReleasePushLockExclusiveEx(
                              *(_QWORD *)(**(_QWORD **)(v166 + 24) + 8 * ((unsigned __int64)(unsigned int)v162 >> 8))
                            + 16LL * (unsigned __int8)v162,
                              0LL);
                            KeLeaveCriticalRegion();
                            goto LABEL_301;
                          }
                          v150 = *(_DWORD *)v148 & 0xFFFFFF;
                          if ( v150 >= 0x10000 )
                          {
                            if ( *(_DWORD *)v143 > 0x10000u )
                            {
                              v313 = *v148;
                              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                          *((GdiHandleEntryDirectory **)v143 + 2),
                                                          v313,
                                                          1)
                                   + 13) == HIWORD(v150) )
                                v150 = v313;
                            }
                            else
                            {
                              v150 = *v148;
                            }
                          }
                          v151 = *((_QWORD *)v143 + 2);
                          v152 = *(_DWORD *)(v151 + 2056);
                          if ( v150 < v152 + ((*(unsigned __int16 *)(v151 + 2) + 0xFFFF) << 16) )
                          {
                            if ( v150 < v152 )
                            {
                              v153 = 0;
LABEL_276:
                              v154 = *(_QWORD *)(v151 + 8LL * v153 + 8);
                              if ( v153 )
                                v150 = v150 - (v153 << 16) - v152 + 0x10000;
                              if ( v150 < *(_DWORD *)(v154 + 20) )
                                v133 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v154 + 24)
                                                             + 8 * ((unsigned __int64)v150 >> 8))
                                                 + 16LL * (unsigned __int8)v150
                                                 + 8);
                              goto LABEL_280;
                            }
                            v153 = ((v150 - v152) >> 16) + 1;
                            if ( (v150 - v152) >> 16 != -2 )
                              goto LABEL_276;
                          }
LABEL_280:
                          ++*(_DWORD *)(v133 + 8);
                          v143 = gpHandleManager;
                          goto LABEL_281;
                        }
LABEL_709:
                        if ( v149 )
                          HANDLELOCK::vUnlock((HANDLELOCK *)&v349);
LABEL_302:
                        v362[0] = v133;
                        if ( v133 )
                        {
                          *(_DWORD *)(v133 + 36) |= 0x40u;
                          v167 = *(_QWORD *)(v133 + 1496);
                          v168 = _mm_srli_si128(*(__m128i *)(v133 + 1496), 8).m128i_u64[0];
                          if ( (_DWORD)v167 != (_DWORD)v168
                            && (int)v167 < (int)v168
                            && HIDWORD(v167) != HIDWORD(v168)
                            && SHIDWORD(v167) < SHIDWORD(v168) )
                          {
                            *(_DWORD *)(v133 + 1496) = 0x7FFFFFFF;
                            *(_DWORD *)(v133 + 1500) = 0x7FFFFFFF;
                            *(_DWORD *)(v133 + 1504) = 0x80000000;
                            *(_DWORD *)(v133 + 1508) = 0x80000000;
                          }
                          XDCOBJ::RestoreAttributes((XDCOBJ *)v362);
                          v169 = v362[0];
                          v352 = 0LL;
                          v170 = (unsigned __int16)*(_DWORD *)v362[0] | (*(_DWORD *)v362[0] >> 8) & 0xFF0000u;
                          PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v370);
                          v171 = gpHandleManager;
                          v172 = v170;
                          v353 = 1;
                          if ( (unsigned int)v170 >= 0x10000 )
                          {
                            if ( *(_DWORD *)gpHandleManager > 0x10000u )
                            {
                              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                          *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                                          (unsigned __int16)v170,
                                                          1)
                                   + 13) == WORD1(v170) )
                                v172 = (unsigned __int16)v170;
                            }
                            else
                            {
                              v172 = (unsigned __int16)v170;
                            }
                          }
                          EntryTableIndexContainingEntry = GdiHandleEntryDirectory::_GetEntryTableIndexContainingEntry(
                                                             *((GdiHandleEntryDirectory **)v171 + 2),
                                                             v172);
                          if ( EntryTableIndexContainingEntry == -1 )
                            goto LABEL_762;
                          v175 = *(_QWORD *)(v174 + 8LL * EntryTableIndexContainingEntry + 8);
                          if ( EntryTableIndexContainingEntry )
                            v172 = v172 - ((EntryTableIndexContainingEntry - 1) << 16) - *(_DWORD *)(v174 + 2056);
                          v176 = 0;
                          if ( v172 >= *(_DWORD *)(v175 + 20) )
                            goto LABEL_762;
                          v177 = *(_QWORD *)(**(_QWORD **)(v175 + 24) + 8 * ((unsigned __int64)v172 >> 8))
                               + 16LL * (unsigned __int8)v172;
                          KeEnterCriticalRegion();
                          ExAcquirePushLockExclusiveEx(v177, 0LL);
                          if ( v172 < *(_DWORD *)(v175 + 20)
                            && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v175 + 24) + 8 * ((unsigned __int64)v172 >> 8))
                                         + 16LL * (unsigned __int8)v172
                                         + 8) )
                          {
                            v176 = 1;
                            *(_DWORD *)(*(_QWORD *)v175 + 24LL * v172 + 8) |= 1u;
                          }
                          else
                          {
                            ExReleasePushLockExclusiveEx(v177, 0LL);
                            KeLeaveCriticalRegion();
                          }
                          if ( !v176 )
                          {
LABEL_762:
                            v183 = 0;
                            v353 = 0;
                            KeLeaveCriticalRegion();
                            goto LABEL_763;
                          }
                          v178 = gpHandleManager;
                          if ( (unsigned int)v170 >= 0x10000 )
                          {
                            if ( *(_DWORD *)gpHandleManager > 0x10000u )
                            {
                              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                          *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                                          (unsigned __int16)v170,
                                                          1)
                                   + 13) == WORD1(v170) )
                                v170 = (unsigned __int16)v170;
                            }
                            else
                            {
                              v170 = (unsigned __int16)v170;
                            }
                          }
                          v179 = GdiHandleEntryDirectory::_GetEntryTableIndexContainingEntry(
                                   *((GdiHandleEntryDirectory **)v178 + 2),
                                   v170);
                          if ( v179 == -1 )
                          {
                            v182 = 0LL;
                          }
                          else
                          {
                            v181 = *(_QWORD *)(v180 + 8LL * v179 + 8);
                            if ( v179 )
                              v170 = (unsigned int)(v170 - ((v179 - 1) << 16) - *(_DWORD *)(v180 + 2056));
                            v182 = 0LL;
                            if ( (unsigned int)v170 < *(_DWORD *)(v181 + 20)
                              && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v181 + 24)
                                                       + 8 * ((unsigned __int64)(unsigned int)v170 >> 8))
                                           + 16LL * (unsigned __int8)v170
                                           + 8) )
                            {
                              v182 = (unsigned __int16 *)(*(_QWORD *)v181 + 24 * v170);
                            }
                          }
                          v352 = v182;
                          _m_prefetchw(v182 + 4);
                          v354 = *((_DWORD *)v182 + 2);
                          if ( (*((_BYTE *)v182 + 15) & 0x20) == 0 )
                          {
                            v183 = v353;
                            goto LABEL_327;
                          }
                          HANDLELOCK::vUnlock((HANDLELOCK *)&v352);
                          v183 = v353;
                          if ( v353 )
                          {
                            v182 = v352;
LABEL_327:
                            if ( v182 )
                            {
                              if ( *((_BYTE *)v182 + 14) == 5 && gbGdiHmgrAltStacks && gpentHmgrAltStacks )
                              {
                                v316 = (unsigned __int16)*(_DWORD *)v169 | (*(_DWORD *)v169 >> 8) & 0xFF0000;
                                RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v316 | (v316 >> 8) & 0xFF0000);
                              }
                              v184 = *((_BYTE *)v182 + 14);
                              if ( v184 == 5 )
                              {
                                v317 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v169 + 616);
                                v318 = 0;
                              }
                              else
                              {
                                if ( v184 != 16 )
                                {
LABEL_331:
                                  --*(_DWORD *)(v169 + 8);
                                  v185 = gpHandleManager;
                                  v186 = *(_DWORD *)v182 & 0xFFFFFF;
                                  if ( v186 >= 0x10000 )
                                  {
                                    if ( *(_DWORD *)gpHandleManager > 0x10000u )
                                    {
                                      v319 = *v182;
                                      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                                                  (unsigned __int16)v186,
                                                                  1)
                                           + 13) == HIWORD(v186) )
                                        v186 = v319;
                                    }
                                    else
                                    {
                                      v186 = *v182;
                                    }
                                  }
                                  v187 = GdiHandleEntryDirectory::_GetEntryTableIndexContainingEntry(
                                           *((GdiHandleEntryDirectory **)v185 + 2),
                                           v186);
                                  if ( v187 == -1 )
                                    goto LABEL_758;
                                  v189 = *((_QWORD *)v188 + v187 + 1);
                                  if ( v187 )
                                    v186 = v186 - ((v187 - 1) << 16) - *((_DWORD *)v188 + 514);
                                  if ( v186 >= *(_DWORD *)(v189 + 20) )
LABEL_758:
                                    v190 = 0LL;
                                  else
                                    v190 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v189 + 24)
                                                                  + 8 * ((unsigned __int64)v186 >> 8))
                                                      + 16LL * (unsigned __int8)v186
                                                      + 8);
                                  v191 = (unsigned __int16)*v190;
                                  v192 = v191 | (*v190 >> 8) & 0xFF0000u;
                                  if ( (unsigned int)v192 >= 0x10000 )
                                  {
                                    if ( *(_DWORD *)v185 > 0x10000u )
                                    {
                                      v320 = (unsigned __int16)v191;
                                      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                                  v188,
                                                                  (unsigned __int16)v191,
                                                                  1)
                                           + 13) == WORD1(v192) )
                                        v192 = v320;
                                    }
                                    else
                                    {
                                      v192 = (unsigned __int16)v191;
                                    }
                                  }
                                  v193 = GdiHandleEntryDirectory::_GetEntryTableIndexContainingEntry(
                                           *((GdiHandleEntryDirectory **)v185 + 2),
                                           v192);
                                  if ( v193 != -1 )
                                  {
                                    v195 = *(_QWORD *)(v194 + 8LL * v193 + 8);
                                    if ( v193 )
                                      v192 = (unsigned int)(v192 - ((v193 - 1) << 16) - *(_DWORD *)(v194 + 2056));
                                    *(_DWORD *)(*(_QWORD *)v195 + 24 * v192 + 8) &= ~1u;
                                    ExReleasePushLockExclusiveEx(
                                      *(_QWORD *)(**(_QWORD **)(v195 + 24)
                                                + 8 * ((unsigned __int64)(unsigned int)v192 >> 8))
                                    + 16LL * (unsigned __int8)v192,
                                      0LL);
                                    KeLeaveCriticalRegion();
                                  }
                                  KeLeaveCriticalRegion();
                                  goto LABEL_347;
                                }
                                v317 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v169 + 152);
                                v318 = 2;
                              }
                              TrackObjectReferenceDecrement(v318, v317);
                              goto LABEL_331;
                            }
LABEL_763:
                            if ( v183 )
                              HANDLELOCK::vUnlock((HANDLELOCK *)&v352);
                          }
                        }
LABEL_347:
                        v132 = v330;
                        if ( v335 )
                          GreSelectVisRgn(*((HDC *)v330 + 1), 0LL, 1u);
                        v131 = v375;
LABEL_350:
                        if ( (*((_DWORD *)v132 + 16) & 2) != 0 )
                        {
                          if ( !(unsigned int)GreSetDCOwnerEx(*((_QWORD *)v132 + 1), 0x80000002, 0, 1) )
                          {
                            *((_DWORD *)v132 + 16) &= ~0x1000u;
                            DestroyCacheDC((char *)gpDispInfo + 16, 0LL);
                            goto LABEL_766;
                          }
                          v196 = 0LL;
                          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                          if ( ThreadWin32Thread )
                            v196 = *ThreadWin32Thread;
                          *((_QWORD *)v132 + 9) = v196;
                          *((_QWORD *)v132 + 10) = 0LL;
                          --gnDCECount;
                          if ( v336 && (int)IsGreSelectFontSupported(v198) >= 0 )
                          {
                            StockObject = GreGetStockObject(13);
                            GreSelectFont(*((_QWORD *)v132 + 1), StockObject);
                          }
                        }
                        if ( (((v131 & 0x40000000) == 0) & (*((_BYTE *)v373 + 66) >> 6)) != 0 )
                          GreSetLayout(*((HDC *)v132 + 1), -1, 1u);
                        v199 = *((_QWORD *)v132 + 1);
                        v200 = 0LL;
                        v363[1] = 0LL;
                        v201 = (unsigned __int16)v199 | ((unsigned int)v199 >> 8) & 0xFF0000;
                        v355 = 0LL;
                        PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v371);
                        v356 = 1;
                        v202 = v201;
                        v203 = gpHandleManager;
                        if ( (unsigned int)v201 >= 0x10000 )
                        {
                          if ( *(_DWORD *)gpHandleManager > 0x10000u )
                          {
                            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                                        (unsigned __int16)v201,
                                                        1)
                                 + 13) == WORD1(v201) )
                              v202 = (unsigned __int16)v199;
                          }
                          else
                          {
                            v202 = (unsigned __int16)v199;
                          }
                        }
                        v204 = *((_QWORD *)v203 + 2);
                        v205 = *(_DWORD *)(v204 + 2056);
                        if ( v202 >= v205 + ((*(unsigned __int16 *)(v204 + 2) + 0xFFFF) << 16) )
                          goto LABEL_771;
                        if ( v202 >= v205 )
                        {
                          v206 = ((v202 - v205) >> 16) + 1;
                          if ( (v202 - v205) >> 16 == -2 )
                            goto LABEL_771;
                        }
                        else
                        {
                          v206 = 0;
                        }
                        v207 = *(_QWORD *)(v204 + 8LL * v206 + 8);
                        if ( v206 )
                          v202 = v202 - (v206 << 16) - v205 + 0x10000;
                        if ( v202 < *(_DWORD *)(v207 + 20) )
                        {
                          v208 = *(_QWORD *)(**(_QWORD **)(v207 + 24) + 8 * ((unsigned __int64)v202 >> 8))
                               + 16LL * (unsigned __int8)v202;
                          KeEnterCriticalRegion();
                          ExAcquirePushLockExclusiveEx(v208, 0LL);
                          if ( v202 < *(_DWORD *)(v207 + 20)
                            && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v207 + 24) + 8 * ((unsigned __int64)v202 >> 8))
                                         + 16LL * (unsigned __int8)v202
                                         + 8) )
                          {
                            v209 = 3LL * v202;
                            *(_DWORD *)(*(_QWORD *)v207 + 24LL * v202 + 8) |= 1u;
                            v210 = 1;
                          }
                          else
                          {
                            ExReleasePushLockExclusiveEx(v208, 0LL);
                            KeLeaveCriticalRegion();
                            v210 = 0;
                          }
                          if ( v210 )
                          {
                            v211 = gpHandleManager;
                            if ( (unsigned int)v201 >= 0x10000 )
                            {
                              if ( *(_DWORD *)gpHandleManager > 0x10000u )
                              {
                                v209 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                              *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                                              (unsigned __int16)v199,
                                                              1)
                                       + 13);
                                if ( (_DWORD)v209 == WORD1(v201) )
                                  v201 = (unsigned __int16)v199;
                              }
                              else
                              {
                                v201 = (unsigned __int16)v199;
                              }
                            }
                            v212 = *((_QWORD *)v211 + 2);
                            v213 = *(_DWORD *)(v212 + 2056);
                            if ( (unsigned int)v201 < v213 + ((*(unsigned __int16 *)(v212 + 2) + 0xFFFF) << 16) )
                            {
                              if ( (unsigned int)v201 < v213 )
                              {
                                v209 = 0LL;
LABEL_376:
                                v214 = *(_QWORD *)(v212 + 8LL * (int)v209 + 8);
                                if ( (_DWORD)v209 )
                                {
                                  v209 = (unsigned int)((_DWORD)v209 << 16);
                                  v201 = (_DWORD)v201 - (_DWORD)v209 - v213 + 0x10000;
                                }
                                v215 = 0LL;
                                if ( (unsigned int)v201 < *(_DWORD *)(v214 + 20) )
                                {
                                  v209 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v214 + 24)
                                                               + 8 * ((unsigned __int64)(unsigned int)v201 >> 8))
                                                   + 16LL * (unsigned __int8)v201
                                                   + 8);
                                  if ( v209 )
                                  {
                                    v209 = 3 * v201;
                                    v215 = (unsigned __int16 *)(*(_QWORD *)v214 + 24 * v201);
                                  }
                                }
                                goto LABEL_381;
                              }
                              v209 = (((unsigned int)v201 - v213) >> 16) + 1;
                              if ( ((unsigned int)v201 - v213) >> 16 != -2 )
                                goto LABEL_376;
                            }
                            v215 = 0LL;
LABEL_381:
                            v355 = v215;
                            _m_prefetchw(v215 + 4);
                            v43 = (*((_BYTE *)v215 + 15) & 0x20) == 0;
                            v357 = *((_DWORD *)v215 + 2);
                            if ( v43 )
                            {
                              v216 = v356;
                            }
                            else
                            {
                              HANDLELOCK::vUnlock((HANDLELOCK *)&v355);
                              v216 = v356;
                              if ( !v356 )
                                goto LABEL_418;
                              v211 = gpHandleManager;
                              v215 = v355;
                            }
                            if ( v215 )
                            {
                              if ( *((_BYTE *)v215 + 14) != 1 || v215[6] != WORD1(v199) )
                              {
LABEL_397:
                                v222 = *(_DWORD *)v215 & 0xFFFFFF;
                                if ( v222 >= 0x10000 )
                                {
                                  if ( *(_DWORD *)v211 > 0x10000u )
                                  {
                                    v322 = *v215;
                                    if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                                *((GdiHandleEntryDirectory **)v211 + 2),
                                                                v322,
                                                                1)
                                         + 13) == HIWORD(v222) )
                                      v222 = v322;
                                  }
                                  else
                                  {
                                    v222 = *v215;
                                  }
                                }
                                v223 = *((_QWORD *)v211 + 2);
                                v224 = *(_DWORD *)(v223 + 2056);
                                if ( v222 >= v224 + ((*(unsigned __int16 *)(v223 + 2) + 0xFFFF) << 16) )
                                  goto LABEL_791;
                                if ( v222 >= v224 )
                                {
                                  v225 = ((v222 - v224) >> 16) + 1;
                                  if ( (v222 - v224) >> 16 == -2 )
                                    goto LABEL_791;
                                }
                                else
                                {
                                  v225 = 0;
                                }
                                v226 = *(_QWORD *)(v223 + 8LL * v225 + 8);
                                if ( v225 )
                                  v222 = v222 - (v225 << 16) - v224 + 0x10000;
                                if ( v222 < *(_DWORD *)(v226 + 20) )
                                {
                                  v227 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v226 + 24)
                                                                + 8 * ((unsigned __int64)v222 >> 8))
                                                    + 16LL * (unsigned __int8)v222
                                                    + 8);
                                  goto LABEL_407;
                                }
LABEL_791:
                                v227 = 0LL;
LABEL_407:
                                v228 = (unsigned __int16)*v227;
                                v229 = v228 | (*v227 >> 8) & 0xFF0000u;
                                if ( (unsigned int)v229 >= 0x10000 )
                                {
                                  if ( *(_DWORD *)v211 > 0x10000u )
                                  {
                                    v323 = (unsigned __int16)v228;
                                    if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                                *((GdiHandleEntryDirectory **)v211 + 2),
                                                                (unsigned __int16)v228,
                                                                1)
                                         + 13) == WORD1(v229) )
                                      v229 = v323;
                                  }
                                  else
                                  {
                                    v229 = (unsigned __int16)v228;
                                  }
                                  if ( (unsigned int)v229 >= 0x10000 && *(_DWORD *)v211 > 0x10000u )
                                    GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)v211 + 2),
                                      (unsigned __int16)v229,
                                      1);
                                }
                                v230 = *((_QWORD *)v211 + 2);
                                v231 = *(_DWORD *)(v230 + 2056);
                                if ( (unsigned int)v229 >= v231 + ((*(unsigned __int16 *)(v230 + 2) + 0xFFFF) << 16) )
                                  goto LABEL_417;
                                if ( (unsigned int)v229 >= v231 )
                                {
                                  v232 = (((unsigned int)v229 - v231) >> 16) + 1;
                                  if ( ((unsigned int)v229 - v231) >> 16 == -2 )
                                  {
LABEL_417:
                                    KeLeaveCriticalRegion();
                                    goto LABEL_418;
                                  }
                                }
                                else
                                {
                                  v232 = 0;
                                }
                                v233 = *(_QWORD *)(v230 + 8LL * v232 + 8);
                                if ( v232 )
                                  v229 = (_DWORD)v229 - (v232 << 16) - v231 + 0x10000;
                                *(_DWORD *)(*(_QWORD *)v233 + 24 * v229 + 8) &= ~1u;
                                ExReleasePushLockExclusiveEx(
                                  *(_QWORD *)(**(_QWORD **)(v233 + 24) + 8 * ((unsigned __int64)(unsigned int)v229 >> 8))
                                + 16LL * (unsigned __int8)v229,
                                  0LL);
                                KeLeaveCriticalRegion();
                                goto LABEL_417;
                              }
                              v217 = *(_DWORD *)v215 & 0xFFFFFF;
                              if ( v217 >= 0x10000 )
                              {
                                if ( *(_DWORD *)v211 > 0x10000u )
                                {
                                  v321 = *v215;
                                  if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                              *((GdiHandleEntryDirectory **)v211 + 2),
                                                              v321,
                                                              1)
                                       + 13) == HIWORD(v217) )
                                    v217 = v321;
                                }
                                else
                                {
                                  v217 = *v215;
                                }
                              }
                              v218 = *((_QWORD *)v211 + 2);
                              v219 = *(_DWORD *)(v218 + 2056);
                              if ( v217 < v219 + ((*(unsigned __int16 *)(v218 + 2) + 0xFFFF) << 16) )
                              {
                                if ( v217 < v219 )
                                {
                                  v220 = 0;
LABEL_392:
                                  v221 = *(_QWORD *)(v218 + 8LL * v220 + 8);
                                  if ( v220 )
                                    v217 = v217 - (v220 << 16) - v219 + 0x10000;
                                  if ( v217 < *(_DWORD *)(v221 + 20) )
                                    v200 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v221 + 24)
                                                                 + 8 * ((unsigned __int64)v217 >> 8))
                                                     + 16LL * (unsigned __int8)v217
                                                     + 8);
                                  goto LABEL_396;
                                }
                                v220 = ((v217 - v219) >> 16) + 1;
                                if ( (v217 - v219) >> 16 != -2 )
                                  goto LABEL_392;
                              }
LABEL_396:
                              ++*(_DWORD *)(v200 + 8);
                              v211 = gpHandleManager;
                              goto LABEL_397;
                            }
LABEL_772:
                            if ( v216 )
                              HANDLELOCK::vUnlock((HANDLELOCK *)&v355);
LABEL_418:
                            v363[0] = v200;
                            if ( !v200 )
                            {
LABEL_471:
                              if ( (int)IsGreHintDCWndSupported(v209) >= 0 )
                                GreHintDCWnd(*((_QWORD *)v330 + 1), *v373, 0LL, 0LL, 0);
                              if ( v337 && (*(_BYTE *)(v337 + 66) & 8) != 0 && (int)IsGreHintDCWndSupported(v265) >= 0 )
                                GreHintDCWnd(
                                  *((_QWORD *)v330 + 1),
                                  *v373,
                                  *(_QWORD *)v337,
                                  (*(_BYTE *)(v337 + 67) & 2) == 0,
                                  (*(_WORD *)(v337 + 82) & 0x3FFF) == 669);
                              if ( *((int *)v330 + 16) < 0 )
                              {
                                CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v265, v264, v266);
                                *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200u;
                                *((_QWORD *)v330 + 9) = 0LL;
                                *((_QWORD *)v330 + 10) = PsGetCurrentProcessWin32Process(v293, v292, v294);
                              }
                              if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
                                Template_pz(v265, &LockRelease);
                              v267 = ghsemDCVisRgn;
                              if ( ghsemDCVisRgn )
                              {
                                ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
                                PsLeavePriorityRegion(v268);
                              }
                              if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
                                Template_pz(v267, &LockRelease);
                              v269 = ghsemGreLock;
                              if ( ghsemGreLock )
                              {
                                ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
                                PsLeavePriorityRegion(v270);
                              }
                              if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
                                Template_pz(v269, &LockRelease);
                              if ( ghsemDynamicModeChange )
                              {
                                ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
                                PsLeavePriorityRegion(v271);
                              }
                              return *((_QWORD *)v330 + 1);
                            }
                            *(_DWORD *)(v200 + 36) |= 0x100000u;
                            GrepValidateVisRgn((struct DC *)v200, *(struct REGION **)(v200 + 1536));
                            XDCOBJ::RestoreAttributes((XDCOBJ *)v363);
                            v234 = v363[0];
                            v358 = 0LL;
                            v235 = (unsigned __int16)*(_DWORD *)v363[0] | (*(_DWORD *)v363[0] >> 8) & 0xFF0000u;
                            PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v372);
                            v236 = gpHandleManager;
                            v237 = v235;
                            v359 = 1;
                            if ( (unsigned int)v235 >= 0x10000 )
                            {
                              if ( *(_DWORD *)gpHandleManager > 0x10000u )
                              {
                                if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                            *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                                            (unsigned __int16)v235,
                                                            1)
                                     + 13) == WORD1(v235) )
                                  v237 = (unsigned __int16)v235;
                              }
                              else
                              {
                                v237 = (unsigned __int16)v235;
                              }
                            }
                            v238 = *((_QWORD *)v236 + 2);
                            v239 = *(_DWORD *)(v238 + 2056);
                            if ( v237 >= v239 + ((*(unsigned __int16 *)(v238 + 2) + 0xFFFF) << 16) )
                              goto LABEL_803;
                            if ( v237 >= v239 )
                            {
                              v240 = ((v237 - v239) >> 16) + 1;
                              if ( (v237 - v239) >> 16 == -2 )
                                goto LABEL_803;
                            }
                            else
                            {
                              v240 = 0;
                            }
                            v241 = *(_QWORD *)(v238 + 8LL * v240 + 8);
                            if ( v240 )
                              v237 = v237 - (v240 << 16) - v239 + 0x10000;
                            v242 = 0;
                            if ( v237 < *(_DWORD *)(v241 + 20) )
                            {
                              v243 = *(_QWORD *)(**(_QWORD **)(v241 + 24) + 8 * ((unsigned __int64)v237 >> 8))
                                   + 16LL * (unsigned __int8)v237;
                              KeEnterCriticalRegion();
                              ExAcquirePushLockExclusiveEx(v243, 0LL);
                              if ( v237 < *(_DWORD *)(v241 + 20)
                                && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v241 + 24) + 8 * ((unsigned __int64)v237 >> 8))
                                             + 16LL * (unsigned __int8)v237
                                             + 8) )
                              {
                                v209 = 3LL * v237;
                                v242 = 1;
                                *(_DWORD *)(*(_QWORD *)v241 + 24LL * v237 + 8) |= 1u;
                              }
                              else
                              {
                                ExReleasePushLockExclusiveEx(v243, 0LL);
                                KeLeaveCriticalRegion();
                              }
                              if ( v242 )
                              {
                                v244 = gpHandleManager;
                                if ( (unsigned int)v235 >= 0x10000 )
                                {
                                  if ( *(_DWORD *)gpHandleManager > 0x10000u )
                                  {
                                    v209 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                                                  (unsigned __int16)v235,
                                                                  1)
                                           + 13);
                                    if ( (_DWORD)v209 == WORD1(v235) )
                                      v235 = (unsigned __int16)v235;
                                  }
                                  else
                                  {
                                    v235 = (unsigned __int16)v235;
                                  }
                                }
                                v245 = *((_QWORD *)v244 + 2);
                                v246 = *(unsigned int *)(v245 + 2056);
                                if ( (unsigned int)v235 < (unsigned int)v246
                                                        + ((*(unsigned __int16 *)(v245 + 2) + 0xFFFF) << 16) )
                                {
                                  if ( (unsigned int)v235 < (unsigned int)v246 )
                                  {
                                    v209 = 0LL;
LABEL_438:
                                    v247 = *(_QWORD *)(v245 + 8LL * (int)v209 + 8);
                                    if ( (_DWORD)v209 )
                                    {
                                      v209 = (unsigned int)((_DWORD)v209 << 16);
                                      v235 = (unsigned int)(v235 - v209 - v246 + 0x10000);
                                    }
                                    v248 = 0LL;
                                    if ( (unsigned int)v235 < *(_DWORD *)(v247 + 20) )
                                    {
                                      v246 = (unsigned __int64)(unsigned int)v235 >> 8;
                                      v209 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v247 + 24) + 8 * v246)
                                                       + 16LL * (unsigned __int8)v235
                                                       + 8);
                                      if ( v209 )
                                      {
                                        v209 = 3 * v235;
                                        v248 = (unsigned __int16 *)(*(_QWORD *)v247 + 24 * v235);
                                      }
                                    }
LABEL_443:
                                    v358 = v248;
                                    _m_prefetchw(v248 + 4);
                                    v360 = *((_DWORD *)v248 + 2);
                                    if ( (*((_BYTE *)v248 + 15) & 0x20) != 0 )
                                    {
                                      HANDLELOCK::vUnlock((HANDLELOCK *)&v358);
                                      v249 = v359;
                                      if ( !v359 )
                                        goto LABEL_471;
                                      v248 = v358;
                                    }
                                    else
                                    {
                                      v249 = v359;
                                    }
                                    if ( v248 )
                                    {
                                      if ( *((_BYTE *)v248 + 14) == 5 )
                                        RECALTUNLOCK(
                                          (struct HOBJ__ *)((unsigned __int16)*(_DWORD *)v234 | (unsigned __int64)((*(_DWORD *)v234 >> 8) & 0xFF0000)),
                                          (struct _BASEOBJECT *)v246);
                                      v250 = *((_BYTE *)v248 + 14);
                                      if ( v250 == 5 )
                                      {
                                        v324 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v234 + 616);
                                        v325 = 0;
                                      }
                                      else
                                      {
                                        if ( v250 != 16 )
                                          goto LABEL_450;
                                        v324 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v234 + 152);
                                        v325 = 2;
                                      }
                                      TrackObjectReferenceDecrement(v325, v324);
LABEL_450:
                                      --*(_DWORD *)(v234 + 8);
                                      v251 = gpHandleManager;
                                      v252 = *(_DWORD *)v248 & 0xFFFFFF;
                                      if ( v252 >= 0x10000 )
                                      {
                                        if ( *(_DWORD *)gpHandleManager > 0x10000u )
                                        {
                                          v326 = *v248;
                                          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                                                      (unsigned __int16)v252,
                                                                      1)
                                               + 13) == HIWORD(v252) )
                                            v252 = v326;
                                        }
                                        else
                                        {
                                          v252 = *v248;
                                        }
                                      }
                                      v253 = *((_QWORD *)v251 + 2);
                                      v254 = *(_DWORD *)(v253 + 2056);
                                      if ( v252 >= v254 + ((*(unsigned __int16 *)(v253 + 2) + 0xFFFF) << 16) )
                                        goto LABEL_821;
                                      if ( v252 >= v254 )
                                      {
                                        v255 = ((v252 - v254) >> 16) + 1;
                                        if ( (v252 - v254) >> 16 == -2 )
                                          goto LABEL_821;
                                      }
                                      else
                                      {
                                        v255 = 0;
                                      }
                                      v256 = *(_QWORD *)(v253 + 8LL * v255 + 8);
                                      if ( v255 )
                                        v252 = v252 - (v255 << 16) - v254 + 0x10000;
                                      if ( v252 < *(_DWORD *)(v256 + 20) )
                                      {
                                        v257 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v256 + 24)
                                                                      + 8 * ((unsigned __int64)v252 >> 8))
                                                          + 16LL * (unsigned __int8)v252
                                                          + 8);
                                        goto LABEL_460;
                                      }
LABEL_821:
                                      v257 = 0LL;
LABEL_460:
                                      v258 = (unsigned __int16)*v257;
                                      v259 = v258 | (*v257 >> 8) & 0xFF0000u;
                                      if ( (unsigned int)v259 >= 0x10000 )
                                      {
                                        if ( *(_DWORD *)v251 > 0x10000u )
                                        {
                                          v327 = (unsigned __int16)v258;
                                          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                                      *((GdiHandleEntryDirectory **)v251 + 2),
                                                                      (unsigned __int16)v258,
                                                                      1)
                                               + 13) == WORD1(v259) )
                                            v259 = v327;
                                        }
                                        else
                                        {
                                          v259 = (unsigned __int16)v258;
                                        }
                                        if ( (unsigned int)v259 >= 0x10000 && *(_DWORD *)v251 > 0x10000u )
                                          GdiHandleEntryDirectory::GetEntry(
                                            *((GdiHandleEntryDirectory **)v251 + 2),
                                            (unsigned __int16)v259,
                                            1);
                                      }
                                      v260 = *((_QWORD *)v251 + 2);
                                      v261 = *(_DWORD *)(v260 + 2056);
                                      if ( (unsigned int)v259 >= v261
                                                               + ((*(unsigned __int16 *)(v260 + 2) + 0xFFFF) << 16) )
                                        goto LABEL_470;
                                      if ( (unsigned int)v259 >= v261 )
                                      {
                                        v262 = (((unsigned int)v259 - v261) >> 16) + 1;
                                        if ( ((unsigned int)v259 - v261) >> 16 == -2 )
                                        {
LABEL_470:
                                          KeLeaveCriticalRegion();
                                          goto LABEL_471;
                                        }
                                      }
                                      else
                                      {
                                        v262 = 0;
                                      }
                                      v263 = *(_QWORD *)(v260 + 8LL * v262 + 8);
                                      if ( v262 )
                                        v259 = (_DWORD)v259 - (v262 << 16) - v261 + 0x10000;
                                      *(_DWORD *)(*(_QWORD *)v263 + 24 * v259 + 8) &= ~1u;
                                      ExReleasePushLockExclusiveEx(
                                        *(_QWORD *)(**(_QWORD **)(v263 + 24)
                                                  + 8 * ((unsigned __int64)(unsigned int)v259 >> 8))
                                      + 16LL * (unsigned __int8)v259,
                                        0LL);
                                      KeLeaveCriticalRegion();
                                      goto LABEL_470;
                                    }
LABEL_804:
                                    if ( v249 )
                                      HANDLELOCK::vUnlock((HANDLELOCK *)&v358);
                                    goto LABEL_471;
                                  }
                                  v209 = ((unsigned int)(v235 - v246) >> 16) + 1;
                                  if ( (unsigned int)(v235 - v246) >> 16 != -2 )
                                    goto LABEL_438;
                                }
                                v248 = 0LL;
                                goto LABEL_443;
                              }
                            }
LABEL_803:
                            v249 = 0;
                            v359 = 0;
                            KeLeaveCriticalRegion();
                            goto LABEL_804;
                          }
                        }
LABEL_771:
                        v216 = 0;
                        v356 = 0;
                        KeLeaveCriticalRegion();
                        goto LABEL_772;
                      }
                    }
LABEL_708:
                    v149 = 0;
                    v350 = 0;
                    KeLeaveCriticalRegion();
                    goto LABEL_709;
                  }
                }
                else if ( (v375 & 0x40) != 0 )
                {
                  v285 = EmptyRgnPublic;
                  if ( EmptyRgnPublic )
                  {
                    GreSetRectRgn(ghrgnGDC, 0);
                    v309 = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
                    v132 = v330;
                    v310 = (HDC)*((_QWORD *)v330 + 1);
                    *((_QWORD *)v330 + 7) = v309;
                    GreSelectVisRgn(v310, v309, 4u);
                    *((_QWORD *)v330 + 5) = EmptyRgnPublic;
                    if ( (v375 & 0x40000) != 0 )
                      *((_DWORD *)v330 + 16) |= 0x40000u;
                    *((_DWORD *)v330 + 16) |= 0x40u;
                    if ( EmptyRgnPublic == (HRGN)1 )
                    {
                      *((_QWORD *)v330 + 6) = 1LL;
                      goto LABEL_538;
                    }
                    GreCombineRgn(ghrgnGDC, *((HRGN *)v330 + 7), EmptyRgnPublic, 4);
                    v312 = (HRGN)CreateEmptyRgnPublic(v311);
                    *((_QWORD *)v330 + 6) = v312;
                    GreCombineRgn(v312, EmptyRgnPublic, 0LL, 5);
                    if ( (unsigned __int64)EmptyRgnPublic <= 2 || (*((_DWORD *)v330 + 16) & 0x40000) != 0 )
                      goto LABEL_538;
                    goto LABEL_537;
                  }
                }
                v132 = v330;
                goto LABEL_237;
              }
            }
LABEL_667:
            v116 = 0;
            v347 = 0;
            KeLeaveCriticalRegion();
            goto LABEL_668;
          }
          v77 = gpHandleManager;
          v81 = v343;
        }
        if ( v81 )
        {
          if ( *((_BYTE *)v81 + 14) != 1 || v81[6] != WORD1(v66) )
          {
            v88 = 0LL;
LABEL_161:
            v89 = *(_DWORD *)v81 & 0xFFFFFF;
            if ( v89 >= 0x10000 )
            {
              if ( *(_DWORD *)v77 > 0x10000u )
              {
                v302 = *v81;
                if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                            *((GdiHandleEntryDirectory **)v77 + 2),
                                            v302,
                                            1)
                     + 13) == HIWORD(v89) )
                  v89 = v302;
                v88 = v329;
              }
              else
              {
                v89 = *v81;
              }
            }
            v90 = *((_QWORD *)v77 + 2);
            v91 = *(_DWORD *)(v90 + 2056);
            if ( v89 >= v91 + ((*(unsigned __int16 *)(v90 + 2) + 0xFFFF) << 16) )
              goto LABEL_655;
            if ( v89 >= v91 )
            {
              v92 = ((v89 - v91) >> 16) + 1;
              if ( (v89 - v91) >> 16 == -2 )
                goto LABEL_655;
            }
            else
            {
              v92 = 0;
            }
            v93 = *(_QWORD *)(v90 + 8LL * v92 + 8);
            if ( v92 )
              v89 = v89 - (v92 << 16) - v91 + 0x10000;
            if ( v89 < *(_DWORD *)(v93 + 20) )
            {
              v94 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v93 + 24) + 8 * ((unsigned __int64)v89 >> 8))
                               + 16LL * (unsigned __int8)v89
                               + 8);
              goto LABEL_171;
            }
LABEL_655:
            v94 = 0LL;
LABEL_171:
            v95 = (unsigned __int16)*v94;
            v96 = v95 | (*v94 >> 8) & 0xFF0000u;
            if ( (unsigned int)v96 >= 0x10000 )
            {
              if ( *(_DWORD *)v77 > 0x10000u )
              {
                v303 = (unsigned __int16)v95;
                if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                            *((GdiHandleEntryDirectory **)v77 + 2),
                                            (unsigned __int16)v95,
                                            1)
                     + 13) == WORD1(v96) )
                  v96 = v303;
                v88 = v329;
              }
              else
              {
                v96 = (unsigned __int16)v95;
              }
              if ( (unsigned int)v96 >= 0x10000 && *(_DWORD *)v77 > 0x10000u )
              {
                GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v77 + 2), (unsigned __int16)v96, 1);
                v88 = v329;
              }
            }
            v97 = *((_QWORD *)v77 + 2);
            v98 = *(_DWORD *)(v97 + 2056);
            if ( (unsigned int)v96 >= v98 + ((*(unsigned __int16 *)(v97 + 2) + 0xFFFF) << 16) )
              goto LABEL_181;
            if ( (unsigned int)v96 >= v98 )
            {
              v99 = (((unsigned int)v96 - v98) >> 16) + 1;
              if ( ((unsigned int)v96 - v98) >> 16 == -2 )
              {
LABEL_181:
                KeLeaveCriticalRegion();
                goto LABEL_182;
              }
            }
            else
            {
              v99 = 0;
            }
            v100 = *(_QWORD *)(v97 + 8LL * v99 + 8);
            if ( v99 )
              v96 = (_DWORD)v96 - (v99 << 16) - v98 + 0x10000;
            *(_DWORD *)(*(_QWORD *)v100 + 24 * v96 + 8) &= ~1u;
            ExReleasePushLockExclusiveEx(
              *(_QWORD *)(**(_QWORD **)(v100 + 24) + 8 * ((unsigned __int64)(unsigned int)v96 >> 8))
            + 16LL * (unsigned __int8)v96,
              0LL);
            KeLeaveCriticalRegion();
            goto LABEL_181;
          }
          v83 = *(_DWORD *)v81 & 0xFFFFFF;
          if ( v83 >= 0x10000 )
          {
            if ( *(_DWORD *)v77 > 0x10000u )
            {
              v301 = *v81;
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)v77 + 2),
                                          v301,
                                          1)
                   + 13) == HIWORD(v83) )
                v83 = v301;
            }
            else
            {
              v83 = *v81;
            }
          }
          v84 = *((_QWORD *)v77 + 2);
          v85 = *(_DWORD *)(v84 + 2056);
          if ( v83 >= v85 + ((*(unsigned __int16 *)(v84 + 2) + 0xFFFF) << 16) )
            goto LABEL_649;
          if ( v83 >= v85 )
          {
            v86 = ((v83 - v85) >> 16) + 1;
            if ( (v83 - v85) >> 16 == -2 )
              goto LABEL_649;
          }
          else
          {
            v86 = 0;
          }
          v87 = *(_QWORD *)(v84 + 8LL * v86 + 8);
          if ( v86 )
            v83 = v83 - (v86 << 16) - v85 + 0x10000;
          if ( v83 < *(_DWORD *)(v87 + 20) )
          {
            v88 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v87 + 24) + 8 * ((unsigned __int64)v83 >> 8))
                            + 16LL * (unsigned __int8)v83
                            + 8);
LABEL_160:
            ++*(_DWORD *)(v88 + 8);
            v77 = gpHandleManager;
            v329 = v88;
            goto LABEL_161;
          }
LABEL_649:
          v88 = 0LL;
          goto LABEL_160;
        }
LABEL_634:
        if ( v82 )
          HANDLELOCK::vUnlock((HANDLELOCK *)&v343);
        goto LABEL_636;
      }
    }
LABEL_633:
    v82 = 0;
    v344 = 0;
    KeLeaveCriticalRegion();
    goto LABEL_634;
  }
  while ( 2 )
  {
    v24 = gpDispInfo;
    v25 = (struct tagDCE *)*((_QWORD *)gpDispInfo + 2);
    v26 = (char *)gpDispInfo + 16;
    v332 = (CCursorClip *)((char *)gpDispInfo + 16);
    v330 = v25;
    if ( !v25 )
      goto LABEL_492;
    do
    {
      if ( *((_QWORD *)v25 + 3) != v12 || *((_QWORD *)v25 + 4) != v337 || *((_QWORD *)v25 + 11) )
        goto LABEL_490;
      v27 = *((_QWORD *)v25 + 1);
      v364[1] = 0LL;
      v328 = 0LL;
      v28 = (unsigned __int16)v27 | ((unsigned int)v27 >> 8) & 0xFF0000;
      v340 = 0LL;
      PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v366);
      v29 = gpHandleManager;
      v30 = v28;
      v341 = 1;
      if ( (unsigned int)v28 >= 0x10000 )
      {
        if ( *(_DWORD *)gpHandleManager > 0x10000u )
        {
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      (unsigned __int16)v27,
                                      1)
               + 13) == WORD1(v28) )
            v30 = (unsigned __int16)v27;
        }
        else
        {
          v30 = (unsigned __int16)v27;
        }
      }
      v31 = *((_QWORD *)v29 + 2);
      v32 = *(_DWORD *)(v31 + 2056);
      if ( v30 >= v32 + ((*(unsigned __int16 *)(v31 + 2) + 0xFFFF) << 16) )
        goto LABEL_624;
      if ( v30 >= v32 )
      {
        v33 = ((v30 - v32) >> 16) + 1;
        if ( (v30 - v32) >> 16 == -2 )
          goto LABEL_624;
      }
      else
      {
        v33 = 0;
      }
      v34 = *(_QWORD *)(v31 + 8LL * v33 + 8);
      if ( v33 )
        v30 = v30 - (v33 << 16) - v32 + 0x10000;
      v35 = 0;
      if ( v30 >= *(_DWORD *)(v34 + 20) )
        goto LABEL_624;
      v36 = *(_QWORD *)(**(_QWORD **)(v34 + 24) + 8 * ((unsigned __int64)v30 >> 8)) + 16LL * (unsigned __int8)v30;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v36, 0LL);
      if ( v30 < *(_DWORD *)(v34 + 20)
        && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v34 + 24) + 8 * ((unsigned __int64)v30 >> 8))
                     + 16LL * (unsigned __int8)v30
                     + 8) )
      {
        v35 = 1;
        *(_DWORD *)(*(_QWORD *)v34 + 24LL * v30 + 8) |= 1u;
      }
      else
      {
        ExReleasePushLockExclusiveEx(v36, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( !v35 )
      {
LABEL_624:
        v44 = 0;
        v341 = 0;
        KeLeaveCriticalRegion();
LABEL_625:
        if ( v44 )
          HANDLELOCK::vUnlock((HANDLELOCK *)&v340);
LABEL_627:
        v50 = 0LL;
        goto LABEL_110;
      }
      v37 = gpHandleManager;
      if ( (unsigned int)v28 >= 0x10000 )
      {
        if ( *(_DWORD *)gpHandleManager > 0x10000u )
        {
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      (unsigned __int16)v27,
                                      1)
               + 13) == WORD1(v28) )
            v28 = (unsigned __int16)v27;
        }
        else
        {
          v28 = (unsigned __int16)v27;
        }
      }
      v38 = *((_QWORD *)v37 + 2);
      v39 = *(_DWORD *)(v38 + 2056);
      if ( (unsigned int)v28 >= v39 + ((*(unsigned __int16 *)(v38 + 2) + 0xFFFF) << 16) )
      {
LABEL_603:
        v42 = 0LL;
        goto LABEL_73;
      }
      if ( (unsigned int)v28 >= v39 )
      {
        v40 = (((unsigned int)v28 - v39) >> 16) + 1;
        if ( ((unsigned int)v28 - v39) >> 16 == -2 )
          goto LABEL_603;
      }
      else
      {
        v40 = 0;
      }
      v41 = *(_QWORD *)(v38 + 8LL * v40 + 8);
      if ( v40 )
        v28 = (_DWORD)v28 - (v40 << 16) - v39 + 0x10000;
      v42 = 0LL;
      if ( (unsigned int)v28 < *(_DWORD *)(v41 + 20)
        && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v41 + 24) + 8 * ((unsigned __int64)(unsigned int)v28 >> 8))
                     + 16LL * (unsigned __int8)v28
                     + 8) )
      {
        v42 = (unsigned __int16 *)(*(_QWORD *)v41 + 24 * v28);
      }
LABEL_73:
      v340 = v42;
      _m_prefetchw(v42 + 4);
      v43 = (*((_BYTE *)v42 + 15) & 0x20) == 0;
      v342 = *((_DWORD *)v42 + 2);
      if ( v43 )
      {
        v44 = v341;
      }
      else
      {
        HANDLELOCK::vUnlock((HANDLELOCK *)&v340);
        v44 = v341;
        if ( !v341 )
          goto LABEL_627;
        v37 = gpHandleManager;
        v42 = v340;
      }
      if ( !v42 )
        goto LABEL_625;
      if ( *((_BYTE *)v42 + 14) == 1 && v42[6] == WORD1(v27) )
      {
        v45 = *(_DWORD *)v42 & 0xFFFFFF;
        if ( v45 >= 0x10000 )
        {
          if ( *(_DWORD *)v37 > 0x10000u )
          {
            v298 = *v42;
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v37 + 2), v298, 1)
                 + 13) == HIWORD(v45) )
              v45 = v298;
          }
          else
          {
            v45 = *v42;
          }
        }
        v46 = *((_QWORD *)v37 + 2);
        v47 = *(_DWORD *)(v46 + 2056);
        if ( v45 >= v47 + ((*(unsigned __int16 *)(v46 + 2) + 0xFFFF) << 16) )
          goto LABEL_610;
        if ( v45 >= v47 )
        {
          v48 = ((v45 - v47) >> 16) + 1;
          if ( (v45 - v47) >> 16 == -2 )
            goto LABEL_610;
        }
        else
        {
          v48 = 0;
        }
        v49 = *(_QWORD *)(v46 + 8LL * v48 + 8);
        if ( v48 )
          v45 = v45 - (v48 << 16) - v47 + 0x10000;
        if ( v45 < *(_DWORD *)(v49 + 20) )
        {
          v50 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v49 + 24) + 8 * ((unsigned __int64)v45 >> 8))
                          + 16LL * (unsigned __int8)v45
                          + 8);
LABEL_88:
          ++*(_DWORD *)(v50 + 8);
          v37 = gpHandleManager;
          v328 = v50;
          goto LABEL_89;
        }
LABEL_610:
        v50 = 0LL;
        goto LABEL_88;
      }
      v50 = 0LL;
LABEL_89:
      v51 = *(_DWORD *)v42 & 0xFFFFFF;
      if ( v51 >= 0x10000 )
      {
        if ( *(_DWORD *)v37 > 0x10000u )
        {
          v299 = *v42;
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v37 + 2), v299, 1)
               + 13) == HIWORD(v51) )
            v51 = v299;
          v50 = v328;
        }
        else
        {
          v51 = *v42;
        }
      }
      v52 = *((_QWORD *)v37 + 2);
      v53 = *(_DWORD *)(v52 + 2056);
      if ( v51 >= v53 + ((*(unsigned __int16 *)(v52 + 2) + 0xFFFF) << 16) )
        goto LABEL_616;
      if ( v51 >= v53 )
      {
        v54 = ((v51 - v53) >> 16) + 1;
        if ( (v51 - v53) >> 16 == -2 )
          goto LABEL_616;
      }
      else
      {
        v54 = 0;
      }
      v55 = *(_QWORD *)(v52 + 8LL * v54 + 8);
      if ( v54 )
        v51 = v51 - (v54 << 16) - v53 + 0x10000;
      if ( v51 < *(_DWORD *)(v55 + 20) )
      {
        v56 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v55 + 24) + 8 * ((unsigned __int64)v51 >> 8))
                         + 16LL * (unsigned __int8)v51
                         + 8);
        goto LABEL_99;
      }
LABEL_616:
      v56 = 0LL;
LABEL_99:
      v57 = (unsigned __int16)*v56;
      v58 = v57 | (*v56 >> 8) & 0xFF0000u;
      if ( (unsigned int)v58 >= 0x10000 )
      {
        if ( *(_DWORD *)v37 > 0x10000u )
        {
          v300 = (unsigned __int16)v57;
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)v37 + 2),
                                      (unsigned __int16)v57,
                                      1)
               + 13) == WORD1(v58) )
            v58 = v300;
          v50 = v328;
        }
        else
        {
          v58 = (unsigned __int16)v57;
        }
        if ( (unsigned int)v58 >= 0x10000 && *(_DWORD *)v37 > 0x10000u )
        {
          GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v37 + 2), (unsigned __int16)v58, 1);
          v50 = v328;
        }
      }
      v59 = *((_QWORD *)v37 + 2);
      v60 = *(_DWORD *)(v59 + 2056);
      if ( (unsigned int)v58 >= v60 + ((*(unsigned __int16 *)(v59 + 2) + 0xFFFF) << 16) )
        goto LABEL_109;
      if ( (unsigned int)v58 < v60 )
      {
        v61 = 0;
LABEL_106:
        v62 = *(_QWORD *)(v59 + 8LL * v61 + 8);
        if ( v61 )
          v58 = (_DWORD)v58 - (v61 << 16) - v60 + 0x10000;
        *(_DWORD *)(*(_QWORD *)v62 + 24 * v58 + 8) &= ~1u;
        ExReleasePushLockExclusiveEx(
          *(_QWORD *)(**(_QWORD **)(v62 + 24) + 8 * ((unsigned __int64)(unsigned int)v58 >> 8))
        + 16LL * (unsigned __int8)v58,
          0LL);
        KeLeaveCriticalRegion();
        goto LABEL_109;
      }
      v61 = (((unsigned int)v58 - v60) >> 16) + 1;
      if ( ((unsigned int)v58 - v60) >> 16 != -2 )
        goto LABEL_106;
LABEL_109:
      KeLeaveCriticalRegion();
LABEL_110:
      v364[0] = v50;
      if ( v50 && (v63 = *(_DWORD *)(v50 + 40), XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v364), (v63 & 1) != 0) )
      {
        v12 = v331;
        v25 = v330;
      }
      else
      {
        v25 = v330;
        v12 = v331;
        v26 = (char *)*((unsigned int *)v330 + 16);
        if ( v376 == (*((_DWORD *)v330 + 16) & 0x80C05C1F)
          && ((*(_BYTE *)(v331 + 71) & 0x20) == 0 || *((_QWORD *)v330 + 2) == *((_QWORD *)v330 + 3))
          && (!v334 || ((unsigned int)v26 & 0x10000000) == 0) )
        {
          *((_DWORD *)v330 + 16) |= 0x1000u;
          v64 = v373;
          if ( v373 != *((_QWORD **)v330 + 2) )
          {
            if ( (int)IsSpbCheckDceSupported(v26) >= 0 )
              SpbCheckDce(v330);
            *((_QWORD *)v330 + 2) = v373;
            ResetOrg(0LL, v330, 0);
          }
          v65 = v332;
          goto LABEL_118;
        }
      }
LABEL_490:
      v332 = v25;
      v25 = *(struct tagDCE **)v25;
      v330 = v25;
    }
    while ( v25 );
    v24 = gpDispInfo;
    LOWORD(v4) = v375;
LABEL_492:
    v273 = (struct tagDCE *)*((_QWORD *)v24 + 2);
    v274 = (struct tagDCE **)((char *)v24 + 16);
    v333 = (struct tagDCE **)((char *)v24 + 16);
    v275 = 0LL;
    if ( v273 )
    {
      while ( 2 )
      {
        if ( (*((_DWORD *)v273 + 16) & 0x400002) != 2 )
          goto LABEL_517;
        v276 = *((_QWORD *)v273 + 1);
        v365[1] = 0LL;
        v277 = HmgShareLock(v276, 1);
        v365[0] = v277;
        if ( v277 )
        {
          v278 = *(_DWORD *)(v277 + 40);
          XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v365);
          if ( (v278 & 1) != 0 )
            goto LABEL_517;
          v274 = v333;
        }
        if ( !*((_QWORD *)v273 + 11) )
        {
          v281 = *((_DWORD *)v273 + 16);
          if ( (v281 & 0x800) != 0 )
            goto LABEL_519;
          if ( (v281 & 0x1000) == 0 )
            v275 = v274;
        }
LABEL_517:
        v274 = (struct tagDCE **)v273;
        v273 = *(struct tagDCE **)v273;
        v333 = v274;
        if ( !v273 )
          break;
        continue;
      }
    }
    v274 = v275;
    v333 = v275;
    if ( v275 )
    {
LABEL_519:
      v25 = *v274;
      v65 = (struct tagDCE *)v333;
      v12 = v331;
      v64 = v373;
      v330 = v25;
      goto LABEL_520;
    }
    if ( CreateCacheDC((__int64)v373, v4 & 0x4000 | 0x802, 0LL) )
    {
      v12 = v331;
      continue;
    }
    break;
  }
LABEL_766:
  GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 4));
  return 0LL;
}
