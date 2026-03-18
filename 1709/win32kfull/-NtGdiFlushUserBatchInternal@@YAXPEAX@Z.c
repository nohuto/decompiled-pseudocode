/*
 * XREFs of ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0029360
 * Callers:
 *     NtGdiFlushUserBatch @ 0x1C0029030 (NtGdiFlushUserBatch.c)
 * Callees:
 *     bCvtPts1 @ 0x1C000F444 (bCvtPts1.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0018340 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C001B89C (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z @ 0x1C001C7D8 (-GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C001DD20 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C001E104 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C002B154 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C002B184 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z @ 0x1C002B6F0 (-vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002C0E0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C002C270 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002C390 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     GreSelectFont @ 0x1C007E920 (GreSelectFont.c)
 *     ?GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z @ 0x1C00D4A70 (-GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z.c)
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1C00EB138 (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     GreMaskBlt @ 0x1C01023EC (GreMaskBlt.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C024BFCC (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     GreEnableAppContainerRestriction @ 0x1C024C044 (GreEnableAppContainerRestriction.c)
 */

void __fastcall NtGdiFlushUserBatchInternal(PVOID Parameter, __int64 a2, __int64 a3)
{
  struct _NT_TIB *Self; // rax
  PVOID *p_ArbitraryUserPointer; // r13
  unsigned int SubSystemTib; // edi
  unsigned int v6; // edi
  __int64 v7; // rdx
  int v8; // ecx
  __int64 v9; // r12
  PVOID v10; // rax
  struct _NT_TIB *v11; // rax
  __int64 v12; // rbx
  int v13; // ecx
  __int64 v14; // rbx
  int v15; // ecx
  PVOID v16; // rcx
  struct _NT_TIB *v17; // rax
  PVOID v18; // rcx
  int v19; // r9d
  __int64 v20; // rcx
  int v21; // edi
  unsigned int v22; // r10d
  unsigned int v23; // r11d
  unsigned int v24; // esi
  unsigned int v25; // r14d
  unsigned int v26; // r15d
  int v27; // edx
  __int64 v28; // rdx
  int v29; // ebx
  int v30; // r8d
  __int64 v31; // rcx
  int v32; // edx
  __int64 v33; // rcx
  int v34; // edi
  int v35; // esi
  int v36; // r14d
  DC *v37; // rcx
  __int64 v38; // rdx
  int v39; // r15d
  int v40; // r8d
  __int64 v41; // r8
  int v42; // edx
  int v43; // edx
  int v44; // r8d
  struct EXFORMOBJ *v45; // rdx
  struct SURFACE *v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  DC *v49; // rdx
  int v50; // r8d
  int v51; // ecx
  int v52; // ecx
  __int64 v53; // rdx
  int v54; // eax
  __int64 v55; // rdx
  _DWORD *v56; // rcx
  int v57; // edi
  int v58; // esi
  int v59; // r14d
  int v60; // r15d
  __int64 v61; // rcx
  char v62; // [rsp+70h] [rbp-208h]
  DC *v63; // [rsp+78h] [rbp-200h] BYREF
  __int64 v64; // [rsp+80h] [rbp-1F8h]
  int v65; // [rsp+88h] [rbp-1F0h]
  char v66; // [rsp+8Ch] [rbp-1ECh]
  PVOID *v67; // [rsp+90h] [rbp-1E8h]
  int v68; // [rsp+98h] [rbp-1E0h]
  int StackLimit; // [rsp+9Ch] [rbp-1DCh]
  int v70; // [rsp+A0h] [rbp-1D8h]
  unsigned int v71; // [rsp+A4h] [rbp-1D4h]
  ULONG64 p_Self; // [rsp+A8h] [rbp-1D0h]
  int v73; // [rsp+B0h] [rbp-1C8h]
  unsigned int v74; // [rsp+B4h] [rbp-1C4h]
  unsigned int v75; // [rsp+B8h] [rbp-1C0h]
  unsigned int v76; // [rsp+BCh] [rbp-1BCh]
  unsigned int v77; // [rsp+C0h] [rbp-1B8h]
  int v78; // [rsp+C4h] [rbp-1B4h]
  int v79; // [rsp+C8h] [rbp-1B0h]
  int v80; // [rsp+CCh] [rbp-1ACh] BYREF
  int v81; // [rsp+D0h] [rbp-1A8h]
  int v82; // [rsp+D4h] [rbp-1A4h]
  PVOID v83; // [rsp+D8h] [rbp-1A0h]
  HDC FiberData; // [rsp+E0h] [rbp-198h]
  struct _NT_TIB *v85; // [rsp+E8h] [rbp-190h]
  int v86; // [rsp+F0h] [rbp-188h]
  int v87; // [rsp+F4h] [rbp-184h]
  int v88; // [rsp+F8h] [rbp-180h]
  int v89; // [rsp+FCh] [rbp-17Ch]
  int v90; // [rsp+100h] [rbp-178h]
  int v91; // [rsp+104h] [rbp-174h]
  int v92; // [rsp+108h] [rbp-170h]
  PVOID v93; // [rsp+110h] [rbp-168h]
  __int64 v94; // [rsp+118h] [rbp-160h]
  PVOID v95; // [rsp+120h] [rbp-158h]
  PVOID v96; // [rsp+128h] [rbp-150h]
  PVOID v97; // [rsp+130h] [rbp-148h]
  PVOID v98; // [rsp+138h] [rbp-140h]
  int v99; // [rsp+140h] [rbp-138h]
  int v100; // [rsp+144h] [rbp-134h]
  int v101; // [rsp+148h] [rbp-130h]
  unsigned int v102; // [rsp+14Ch] [rbp-12Ch]
  unsigned int v103; // [rsp+150h] [rbp-128h]
  unsigned int v104; // [rsp+154h] [rbp-124h]
  unsigned int v105; // [rsp+158h] [rbp-120h]
  int v106; // [rsp+15Ch] [rbp-11Ch]
  int v107; // [rsp+160h] [rbp-118h]
  int v108; // [rsp+164h] [rbp-114h]
  int v109; // [rsp+168h] [rbp-110h]
  int v110; // [rsp+16Ch] [rbp-10Ch]
  unsigned int v111; // [rsp+170h] [rbp-108h]
  unsigned int v112; // [rsp+174h] [rbp-104h]
  unsigned int v113; // [rsp+178h] [rbp-100h]
  unsigned int v114; // [rsp+17Ch] [rbp-FCh]
  unsigned int v115; // [rsp+180h] [rbp-F8h]
  unsigned int v116; // [rsp+184h] [rbp-F4h]
  int v117; // [rsp+188h] [rbp-F0h]
  int v118; // [rsp+18Ch] [rbp-ECh]
  unsigned int v119; // [rsp+190h] [rbp-E8h]
  PVOID v120; // [rsp+198h] [rbp-E0h]
  __int64 v121; // [rsp+1A0h] [rbp-D8h]
  __int64 v122; // [rsp+1A8h] [rbp-D0h]
  __int64 v123; // [rsp+1B0h] [rbp-C8h]
  int v124; // [rsp+1B8h] [rbp-C0h]
  unsigned __int64 v125; // [rsp+1C0h] [rbp-B8h] BYREF
  int v126; // [rsp+1CCh] [rbp-ACh]
  PVOID v127; // [rsp+1D0h] [rbp-A8h]
  _BYTE v128[80]; // [rsp+1E0h] [rbp-98h] BYREF
  _DWORD v129[2]; // [rsp+230h] [rbp-48h] BYREF
  int v130; // [rsp+238h] [rbp-40h]
  int v131; // [rsp+23Ch] [rbp-3Ch]
  struct _RECTL v132; // [rsp+240h] [rbp-38h] BYREF

  Self = KeGetPcr()->NtTib.Self;
  v85 = Self;
  v81 = 1;
  StackLimit = (int)Self[106].StackLimit;
  p_ArbitraryUserPointer = &Self[13].ArbitraryUserPointer;
  v67 = &Self[13].ArbitraryUserPointer;
  LODWORD(Self[106].StackLimit) = 0;
  LODWORD(Self[13].SubSystemTib) &= 0x80000000;
  SubSystemTib = (unsigned int)Self[13].SubSystemTib;
  p_Self = (ULONG64)&Self[35].Self;
  if ( (unsigned int)(StackLimit - 1) <= 0x134 )
  {
    FiberData = 0LL;
    v66 = 1;
    FiberData = (HDC)v85[13].FiberData;
    v6 = SubSystemTib >> 31;
    v66 = v6;
    if ( !FiberData )
      goto LABEL_30;
    v64 = 0LL;
    LOBYTE(a2) = 1;
    v63 = (DC *)HmgLockEx(FiberData, a2, 0LL);
    if ( v63 )
    {
      if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v63) )
      {
        _InterlockedDecrement((volatile signed __int32 *)v63 + 3);
        p_ArbitraryUserPointer = v67;
        goto LABEL_30;
      }
      if ( (*((_DWORD *)v63 + 134) & 4) != 0 )
        DC::vMarkTransformDirty(v63);
    }
    else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
    {
      PsGetWin32KFilterSet();
    }
    if ( v63 )
    {
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v128);
      v62 = 0;
      if ( !gbDisableTrappedAcRendering && (unsigned int)UserIsCurrentProcessImmersiveAppContainer() && !(_BYTE)v6 )
      {
        v62 = 1;
        GreEnableAppContainerRestriction(0LL);
      }
      if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v128, (struct XDCOBJ *)&v63, 0) )
      {
        v81 = 0;
        v123 = *(_QWORD *)(*((_QWORD *)v63 + 10) + 16LL);
        do
        {
          v7 = 1LL;
          v68 = 1;
          v8 = *((unsigned __int16 *)p_ArbitraryUserPointer + 1);
          v110 = v8;
          v9 = *(unsigned __int16 *)p_ArbitraryUserPointer;
          v65 = *(unsigned __int16 *)p_ArbitraryUserPointer;
          if ( (unsigned __int64)p_ArbitraryUserPointer + v9 > p_Self )
            break;
          if ( v8 == 2 )
          {
            if ( !v62 )
              GreBatchTextOut((struct XDCOBJ *)&v63, (struct _BATCHTEXTOUT *)p_ArbitraryUserPointer, (unsigned int)v9);
          }
          else if ( v8 == 6 )
          {
            v10 = 0LL;
            v95 = 0LL;
            if ( (unsigned int)v9 < 0x10 )
            {
              LODWORD(v7) = 0;
              v68 = 0;
            }
            else
            {
              v10 = p_ArbitraryUserPointer[1];
              v95 = v10;
            }
            if ( (_DWORD)v7 )
              GreSelectFont(FiberData, v10, 0x1C0000000uLL);
          }
          else
          {
            switch ( v8 )
            {
              case 0:
                if ( (unsigned int)v9 >= 0x48 && !v62 )
                {
                  v34 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                  v91 = v34;
                  v124 = v34;
                  v35 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                  v90 = v35;
                  v99 = v35;
                  v70 = *((_DWORD *)p_ArbitraryUserPointer + 3);
                  v100 = v70;
                  v78 = *((_DWORD *)p_ArbitraryUserPointer + 4);
                  v101 = v78;
                  v88 = *((_DWORD *)p_ArbitraryUserPointer + 8);
                  v74 = *((_DWORD *)p_ArbitraryUserPointer + 9);
                  v102 = v74;
                  v75 = *((_DWORD *)p_ArbitraryUserPointer + 10);
                  v103 = v75;
                  v76 = *((_DWORD *)p_ArbitraryUserPointer + 15);
                  v104 = v76;
                  v77 = *((_DWORD *)p_ArbitraryUserPointer + 16);
                  v105 = v77;
                  v36 = (BYTE2(v88) << 8) | BYTE2(v88);
                  v89 = v36;
                  v88 = v36;
                  if ( (((unsigned __int8)v36 ^ (unsigned __int8)(4 * v36)) & 0xCC) == 0 )
                  {
                    v122 = *(_QWORD *)(*((_QWORD *)v63 + 10) + 16LL);
                    v71 = 0;
                    v127 = p_ArbitraryUserPointer[3];
                    GreDCSelectBrush(v63, v127);
                    v37 = v63;
                    v38 = *((_QWORD *)v63 + 10);
                    v86 = *(_DWORD *)(v38 + 48);
                    v39 = v86;
                    LODWORD(v83) = *(_DWORD *)(v38 + 52);
                    v106 = *((_DWORD *)p_ArbitraryUserPointer + 11);
                    v40 = *((_DWORD *)p_ArbitraryUserPointer + 17);
                    v107 = v40;
                    if ( v86 != v106 )
                    {
                      *(_DWORD *)(v38 + 48) = v106;
                      *(_DWORD *)(*((_QWORD *)v63 + 10) + 52LL) = v40;
                      *(_DWORD *)(*((_QWORD *)v63 + 10) + 8LL) |= 1u;
                      v37 = v63;
                    }
                    if ( (*((_DWORD *)v37 + 28) & 1) != 0 )
                    {
                      v53 = *((_QWORD *)v37 + 10);
                      if ( *(_QWORD *)(v53 + 112) )
                      {
                        v54 = *(_DWORD *)(v53 + 8);
                        v71 = v54 & 0x40000;
                        *(_DWORD *)(v53 + 8) = v54 | 0x40000;
                        v37 = v63;
                        v55 = *((_QWORD *)v63 + 10);
                        v79 = *(_DWORD *)(v55 + 136);
                        v108 = *((_DWORD *)p_ArbitraryUserPointer + 12);
                        if ( v79 != v108 )
                        {
                          *(_DWORD *)(v55 + 136) = v108;
                          *(_DWORD *)(*((_QWORD *)v63 + 10) + 8LL) |= 1u;
                          v37 = v63;
                        }
                      }
                    }
                    v41 = *((_QWORD *)v37 + 10);
                    v94 = *(_QWORD *)(v41 + 336);
                    v29 = v94;
                    v121 = *(__int64 *)((char *)p_ArbitraryUserPointer + 52);
                    v42 = HIDWORD(v121);
                    if ( v94 != v121 )
                    {
                      *(_DWORD *)(v41 + 336) = v121;
                      *(_DWORD *)(*((_QWORD *)v63 + 10) + 340LL) = v42;
                      *(_DWORD *)(*((_QWORD *)v63 + 10) + 352LL) |= 0x2010u;
                    }
                    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v125, (struct XDCOBJ *)&v63, 516);
                    v43 = *(_DWORD *)(v125 + 32);
                    if ( (v43 & 1) != 0 )
                    {
                      v129[0] = v34;
                      v129[1] = v35;
                      v44 = v34 + v70;
                      v130 = v34 + v70;
                      v131 = v35 + v78;
                      if ( (v43 & 0x43) != 0x43 )
                      {
                        bCvtPts1(v125, v129, 2LL);
                        v44 = v130;
                        v34 = v129[0];
                      }
                      if ( v126 )
                      {
                        v129[0] = v34 + 1;
                        v130 = v44 + 1;
                      }
                      ERECTL::vOrder((ERECTL *)v129);
                      if ( !ERECTL::bEmpty((ERECTL *)v129) )
                      {
                        if ( (*((_DWORD *)v63 + 9) & 0xE0) != 0 )
                          XDCOBJ::vAccumulate((XDCOBJ *)&v63, (struct ERECTL *)v129);
                        v46 = (struct SURFACE *)*((_QWORD *)v63 + 64);
                        if ( v46 )
                          GrePatBltLockedDC((__int64)&v63, v45, (struct ERECTL *)v129, v36, v46, v74, v75, v76, v77);
                      }
                    }
                    else
                    {
                      v56 = (_DWORD *)*((_QWORD *)v63 + 10);
                      v57 = v56[10];
                      v58 = v56[8];
                      v59 = v56[11];
                      v60 = v56[9];
                      v56[10] = v74;
                      *(_DWORD *)(*((_QWORD *)v63 + 10) + 32LL) = v75;
                      *(_DWORD *)(*((_QWORD *)v63 + 10) + 44LL) = v76;
                      *(_DWORD *)(*((_QWORD *)v63 + 10) + 36LL) = v77;
                      GreMaskBlt(FiberData, v78, 0LL, 0, 0, 0LL, 0, 0, v89 << 16, 0);
                      *(_DWORD *)(*((_QWORD *)v63 + 10) + 40LL) = v57;
                      *(_DWORD *)(*((_QWORD *)v63 + 10) + 32LL) = v58;
                      *(_DWORD *)(*((_QWORD *)v63 + 10) + 44LL) = v59;
                      *(_DWORD *)(*((_QWORD *)v63 + 10) + 36LL) = v60;
                      v39 = v86;
                    }
                    v47 = *((_QWORD *)v63 + 10);
                    if ( *(_QWORD *)(v47 + 16) != v122 )
                    {
                      *(_QWORD *)(v47 + 16) = v122;
                      *(_DWORD *)(*((_QWORD *)v63 + 10) + 8LL) |= 0x1000u;
                    }
                    v48 = *((_QWORD *)v63 + 10);
                    if ( v39 != *(_DWORD *)(v48 + 48) )
                    {
                      *(_DWORD *)(v48 + 48) = v39;
                      *(_DWORD *)(*((_QWORD *)v63 + 10) + 52LL) = (_DWORD)v83;
                      *(_DWORD *)(*((_QWORD *)v63 + 10) + 8LL) |= 1u;
                    }
                    if ( (*((_DWORD *)v63 + 28) & 1) != 0 )
                    {
                      v61 = *((_QWORD *)v63 + 10);
                      if ( *(_QWORD *)(v61 + 112) )
                      {
                        if ( v79 != *(_DWORD *)(v61 + 136) )
                        {
                          *(_DWORD *)(v61 + 136) = v79;
                          *(_DWORD *)(*((_QWORD *)v63 + 10) + 8LL) |= 1u;
                        }
                        if ( !v71 )
                          *(_DWORD *)(*((_QWORD *)v63 + 10) + 8LL) &= ~0x40000u;
                      }
                    }
                    v32 = HIDWORD(v94);
                    goto LABEL_72;
                  }
                }
                break;
              case 1:
                if ( !v62 && (unsigned int)v9 >= 0x38 )
                {
                  if ( (PVOID *)p_Self != p_ArbitraryUserPointer )
                  {
                    if ( ((unsigned __int8)p_ArbitraryUserPointer & 7) != 0 )
                      ExRaiseDatatypeMisalignment();
                    if ( p_Self > MmUserProbeAddress || p_Self < (unsigned __int64)p_ArbitraryUserPointer )
                      *(_BYTE *)MmUserProbeAddress = 0;
                  }
                  v111 = *((_DWORD *)p_ArbitraryUserPointer + 3);
                  v19 = v111;
                  if ( v111 < 0xAAAAAAA && 24 * (unsigned __int64)v111 <= (unsigned int)(v9 - 48) )
                  {
                    v20 = *((_QWORD *)v63 + 10);
                    v21 = *(_DWORD *)(v20 + 48);
                    v70 = *(_DWORD *)(v20 + 52);
                    v22 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                    v112 = v22;
                    v23 = *((_DWORD *)p_ArbitraryUserPointer + 4);
                    v113 = v23;
                    v24 = *((_DWORD *)p_ArbitraryUserPointer + 5);
                    v114 = v24;
                    v25 = *((_DWORD *)p_ArbitraryUserPointer + 7);
                    v115 = v25;
                    v26 = *((_DWORD *)p_ArbitraryUserPointer + 8);
                    v116 = v26;
                    v117 = *((_DWORD *)p_ArbitraryUserPointer + 6);
                    v27 = *((_DWORD *)p_ArbitraryUserPointer + 9);
                    v118 = v27;
                    v71 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                    v119 = v71;
                    if ( v21 != v117 )
                    {
                      *(_DWORD *)(v20 + 48) = v117;
                      *(_DWORD *)(*((_QWORD *)v63 + 10) + 52LL) = v27;
                      *(_DWORD *)(*((_QWORD *)v63 + 10) + 8LL) |= 1u;
                    }
                    v28 = *((_QWORD *)v63 + 10);
                    v83 = *(PVOID *)(v28 + 336);
                    v29 = (int)v83;
                    v120 = p_ArbitraryUserPointer[5];
                    v30 = HIDWORD(v120);
                    if ( v83 != v120 )
                    {
                      *(_DWORD *)(v28 + 336) = (_DWORD)v120;
                      *(_DWORD *)(*((_QWORD *)v63 + 10) + 340LL) = v30;
                      *(_DWORD *)(*((_QWORD *)v63 + 10) + 352LL) |= 0x2010u;
                    }
                    GrePolyPatBltInternal(
                      (struct XDCOBJ *)&v63,
                      v71,
                      (struct _POLYPATBLT *)(p_ArbitraryUserPointer + 6),
                      v19,
                      v22,
                      v23,
                      v24,
                      v25,
                      v26);
                    v31 = *((_QWORD *)v63 + 10);
                    if ( v21 != *(_DWORD *)(v31 + 48) )
                    {
                      *(_DWORD *)(v31 + 48) = v21;
                      *(_DWORD *)(*((_QWORD *)v63 + 10) + 52LL) = v70;
                      *(_DWORD *)(*((_QWORD *)v63 + 10) + 8LL) |= 1u;
                    }
                    v32 = HIDWORD(v83);
LABEL_72:
                    v33 = *((_QWORD *)v63 + 10);
                    if ( v29 != *(_DWORD *)(v33 + 336) || v32 != *(_DWORD *)(v33 + 340) )
                    {
                      *(_DWORD *)(v33 + 336) = v29;
                      *(_DWORD *)(*((_QWORD *)v63 + 10) + 340LL) = v32;
                      *(_DWORD *)(*((_QWORD *)v63 + 10) + 352LL) |= 0x2010u;
                    }
                  }
                }
                break;
              case 3:
                if ( !v62 )
                  GreBatchTextOutRect((struct XDCOBJ *)&v63, (struct tagRECT *)p_ArbitraryUserPointer, v9);
                break;
              case 4:
                if ( (unsigned int)v9 < 0xC )
                {
                  LODWORD(v7) = 0;
                  v68 = 0;
                }
                else
                {
                  v92 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                  v73 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                }
                if ( (_DWORD)v7 )
                {
                  v49 = v63;
                  *((_DWORD *)v63 + 34) = v92;
                  *((_DWORD *)v49 + 35) = v73;
                  v50 = *((_DWORD *)v49 + 10) & 1;
                  if ( v50 )
                    v51 = *((_DWORD *)v49 + 360);
                  else
                    v51 = *((_DWORD *)v49 + 358);
                  *((_DWORD *)v49 + 398) = *((_DWORD *)v49 + 34) + v51;
                  if ( v50 )
                    v52 = *((_DWORD *)v49 + 361);
                  else
                    v52 = *((_DWORD *)v49 + 359);
                  *((_DWORD *)v49 + 399) = v73 + v52;
                }
                break;
              case 5:
                if ( (unsigned int)v9 < 0x18 )
                {
                  LODWORD(v7) = 0;
                  v68 = 0;
                }
                else
                {
                  v132 = *(struct _RECTL *)(p_ArbitraryUserPointer + 1);
                  v87 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                }
                if ( (_DWORD)v7 )
                {
                  DEVLOCKOBJ::vFlushSpriteUpdates((DEVLOCKOBJ *)v128, 0);
                  GreExtSelectClipRgnLocked((struct XDCOBJ *)&v63, &v132, v87);
                }
                break;
              case 7:
                v18 = 0LL;
                v98 = 0LL;
                if ( (unsigned int)v9 < 0x10 )
                {
                  v7 = 0LL;
                  v68 = 0;
                }
                else
                {
                  v18 = p_ArbitraryUserPointer[1];
                  v98 = v18;
                }
                goto LABEL_50;
              case 8:
                v18 = 0LL;
                v93 = 0LL;
                if ( (unsigned int)v9 < 0x10 )
                {
                  v7 = 0LL;
                  v68 = 0;
                }
                else
                {
                  v18 = p_ArbitraryUserPointer[1];
                  v93 = v18;
                }
LABEL_50:
                if ( (_DWORD)v7 )
                  NtGdiDeleteObjectApp(v18, v7, 0x1C0000000uLL);
                break;
              default:
                break;
            }
          }
          --StackLimit;
          p_ArbitraryUserPointer = (PVOID *)((char *)p_ArbitraryUserPointer + (((_DWORD)v9 + 7) & 0xFFFFFFF8));
          v67 = p_ArbitraryUserPointer;
          if ( !StackLimit )
            break;
        }
        while ( (unsigned __int64)p_ArbitraryUserPointer + 4 < p_Self );
        v11 = v85;
        LODWORD(v85[106].StackLimit) = 0;
        LODWORD(v11[13].SubSystemTib) &= 0x80000000;
        LODWORD(v11[13].SubSystemTib) &= ~0x80000000;
        *(_QWORD *)(*((_QWORD *)v63 + 10) + 16LL) = v123;
        *(_DWORD *)(*((_QWORD *)v63 + 10) + 8LL) |= 0x1000u;
      }
      if ( v63 )
      {
        XDCOBJ::RestoreAttributes((XDCOBJ *)&v63);
        v80 = 0;
        v12 = *(_QWORD *)v63;
        HmgDecrementExclusiveReferenceCountEx(v63, HIDWORD(v64), &v80);
        if ( v80 )
          bDeleteDCInternalEx(v12, 0LL);
      }
      v63 = 0LL;
      if ( v62 )
        GreEnableAppContainerRestriction(1LL);
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v128);
    }
LABEL_30:
    if ( !v81 )
      goto LABEL_31;
    while ( 1 )
    {
      v13 = *((unsigned __int16 *)p_ArbitraryUserPointer + 1);
      v109 = v13;
      v14 = *(unsigned __int16 *)p_ArbitraryUserPointer;
      v82 = *(unsigned __int16 *)p_ArbitraryUserPointer;
      if ( (unsigned __int64)p_ArbitraryUserPointer + v14 > p_Self )
      {
LABEL_40:
        v17 = v85;
        LODWORD(v85[106].StackLimit) = 0;
        LODWORD(v17[13].SubSystemTib) &= 0x80000000;
        break;
      }
      v15 = v13 - 7;
      if ( v15 )
      {
        if ( v15 != 1 )
          goto LABEL_39;
        v96 = 0LL;
        v16 = p_ArbitraryUserPointer[1];
        v96 = v16;
      }
      else
      {
        v97 = 0LL;
        v16 = p_ArbitraryUserPointer[1];
        v97 = v16;
      }
      NtGdiDeleteObjectApp(v16, 1LL, a3);
LABEL_39:
      --StackLimit;
      p_ArbitraryUserPointer = (PVOID *)((char *)p_ArbitraryUserPointer + (((_DWORD)v14 + 7) & 0xFFFFFFF8));
      v67 = p_ArbitraryUserPointer;
      if ( !StackLimit || (unsigned __int64)p_ArbitraryUserPointer + 4 >= p_Self )
        goto LABEL_40;
    }
  }
LABEL_31:
  v85[13].FiberData = 0LL;
}
