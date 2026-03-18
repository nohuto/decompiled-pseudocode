/*
 * XREFs of ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0077C10
 * Callers:
 *     NtGdiFlushUserBatch @ 0x1C0078C40 (NtGdiFlushUserBatch.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C00743C8 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0074420 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z @ 0x1C00748F0 (-vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0075090 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0075230 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0081720 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0092270 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C0092670 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     ?GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z @ 0x1C0093088 (-GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C00954C4 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0095500 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1C009BE74 (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     ?GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z @ 0x1C00D7A10 (-GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z.c)
 *     GreMaskBlt @ 0x1C00F1F6C (GreMaskBlt.c)
 *     GreEnableAppContainerRestriction @ 0x1C010D120 (GreEnableAppContainerRestriction.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     GreSelectFontInternal @ 0x1C013F298 (GreSelectFontInternal.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C024A6C0 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

void __fastcall NtGdiFlushUserBatchInternal(PVOID Parameter, __int64 a2, DC *a3, __int64 a4)
{
  struct _NT_TIB *Self; // rcx
  PVOID *p_ArbitraryUserPointer; // r13
  unsigned int SubSystemTib; // edi
  unsigned int v7; // edi
  __int64 v8; // rdx
  int v9; // ecx
  size_t v10; // r8
  int v11; // ebx
  PVOID v12; // rcx
  DC *v13; // rdx
  int v14; // r8d
  int v15; // ecx
  int v16; // ecx
  unsigned int v17; // r10d
  __int64 v18; // rcx
  int v19; // edi
  unsigned int v20; // r9d
  unsigned int v21; // r11d
  unsigned int v22; // esi
  unsigned int v23; // r14d
  unsigned int v24; // r15d
  int v25; // edx
  __int64 v26; // rdx
  unsigned int v27; // ebx
  int v28; // r8d
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // edx
  int v32; // r14d
  int v33; // r15d
  unsigned int v34; // edi
  DC *v35; // rcx
  __int64 v36; // rdx
  int v37; // esi
  int v38; // r8d
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // r8
  int v43; // edx
  struct EXFORMOBJ *v44; // rdx
  struct SURFACE *v45; // rcx
  _DWORD *v46; // rcx
  int v47; // edi
  int v48; // esi
  int v49; // r14d
  int v50; // r15d
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  struct _NT_TIB *v54; // rcx
  int v55; // ecx
  __int64 v56; // rbx
  int v57; // ecx
  PVOID v58; // rcx
  struct _NT_TIB *v59; // rcx
  char v60; // [rsp+70h] [rbp-208h]
  int v61; // [rsp+74h] [rbp-204h]
  DC *v62[2]; // [rsp+78h] [rbp-200h] BYREF
  int v63; // [rsp+88h] [rbp-1F0h]
  char v64; // [rsp+8Ch] [rbp-1ECh]
  PVOID *v65; // [rsp+90h] [rbp-1E8h]
  int v66; // [rsp+98h] [rbp-1E0h]
  int StackLimit; // [rsp+9Ch] [rbp-1DCh]
  int v68; // [rsp+A0h] [rbp-1D8h]
  unsigned int v69; // [rsp+A4h] [rbp-1D4h]
  unsigned __int64 p_Self; // [rsp+A8h] [rbp-1D0h]
  int v71; // [rsp+B0h] [rbp-1C8h]
  unsigned int v72; // [rsp+B4h] [rbp-1C4h]
  unsigned int v73; // [rsp+B8h] [rbp-1C0h]
  unsigned int v74; // [rsp+BCh] [rbp-1BCh]
  unsigned int v75; // [rsp+C0h] [rbp-1B8h]
  int v76; // [rsp+C4h] [rbp-1B4h]
  int v77; // [rsp+C8h] [rbp-1B0h]
  int v78; // [rsp+CCh] [rbp-1ACh]
  int v79; // [rsp+D0h] [rbp-1A8h]
  PVOID v80; // [rsp+D8h] [rbp-1A0h]
  HDC FiberData; // [rsp+E0h] [rbp-198h]
  struct _NT_TIB *v82; // [rsp+E8h] [rbp-190h]
  int v83; // [rsp+F0h] [rbp-188h]
  int v84; // [rsp+F4h] [rbp-184h]
  unsigned int v85; // [rsp+F8h] [rbp-180h]
  unsigned int v86; // [rsp+FCh] [rbp-17Ch]
  int v87; // [rsp+100h] [rbp-178h]
  int v88; // [rsp+104h] [rbp-174h]
  int v89; // [rsp+108h] [rbp-170h]
  PVOID v90; // [rsp+110h] [rbp-168h]
  __int64 v91; // [rsp+118h] [rbp-160h]
  PVOID v92; // [rsp+120h] [rbp-158h]
  PVOID v93; // [rsp+128h] [rbp-150h]
  PVOID v94; // [rsp+130h] [rbp-148h]
  PVOID v95; // [rsp+138h] [rbp-140h]
  int v96; // [rsp+140h] [rbp-138h]
  int v97; // [rsp+144h] [rbp-134h]
  int v98; // [rsp+148h] [rbp-130h]
  unsigned int v99; // [rsp+14Ch] [rbp-12Ch]
  unsigned int v100; // [rsp+150h] [rbp-128h]
  unsigned int v101; // [rsp+154h] [rbp-124h]
  unsigned int v102; // [rsp+158h] [rbp-120h]
  int v103; // [rsp+15Ch] [rbp-11Ch]
  int v104; // [rsp+160h] [rbp-118h]
  int v105; // [rsp+164h] [rbp-114h]
  int v106; // [rsp+168h] [rbp-110h]
  int v107; // [rsp+16Ch] [rbp-10Ch]
  unsigned int v108; // [rsp+170h] [rbp-108h]
  unsigned int v109; // [rsp+174h] [rbp-104h]
  unsigned int v110; // [rsp+178h] [rbp-100h]
  unsigned int v111; // [rsp+17Ch] [rbp-FCh]
  unsigned int v112; // [rsp+180h] [rbp-F8h]
  unsigned int v113; // [rsp+184h] [rbp-F4h]
  int v114; // [rsp+188h] [rbp-F0h]
  int v115; // [rsp+18Ch] [rbp-ECh]
  unsigned int v116; // [rsp+190h] [rbp-E8h]
  PVOID v117; // [rsp+198h] [rbp-E0h]
  __int64 v118; // [rsp+1A0h] [rbp-D8h]
  __int64 v119; // [rsp+1A8h] [rbp-D0h]
  __int64 v120; // [rsp+1B0h] [rbp-C8h]
  int v121; // [rsp+1B8h] [rbp-C0h]
  _QWORD v122[2]; // [rsp+1C0h] [rbp-B8h] BYREF
  PVOID v123; // [rsp+1D0h] [rbp-A8h]
  _BYTE v124[80]; // [rsp+1E0h] [rbp-98h] BYREF
  _DWORD v125[4]; // [rsp+230h] [rbp-48h] BYREF
  struct _RECTL v126; // [rsp+240h] [rbp-38h] BYREF

  Self = KeGetPcr()->NtTib.Self;
  v82 = Self;
  v78 = 1;
  StackLimit = (int)Self[106].StackLimit;
  p_ArbitraryUserPointer = &Self[13].ArbitraryUserPointer;
  v65 = &Self[13].ArbitraryUserPointer;
  LODWORD(Self[106].StackLimit) = 0;
  LODWORD(Self[13].SubSystemTib) &= 0x80000000;
  SubSystemTib = (unsigned int)Self[13].SubSystemTib;
  p_Self = (unsigned __int64)&Self[35].Self;
  if ( (unsigned int)(StackLimit - 1) > 0x134 )
    goto LABEL_121;
  FiberData = 0LL;
  v64 = 1;
  FiberData = (HDC)v82[13].FiberData;
  v7 = SubSystemTib >> 31;
  v64 = v7;
  if ( FiberData )
  {
    v62[1] = 0LL;
    LOBYTE(a2) = 1;
    a3 = (DC *)HmgLockEx(FiberData, a2, 0LL);
    v62[0] = a3;
    if ( a3 )
    {
      if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)v62) )
      {
        _InterlockedDecrement((volatile signed __int32 *)v62[0] + 3);
        p_ArbitraryUserPointer = v65;
        goto LABEL_111;
      }
      a3 = v62[0];
      if ( (*((_DWORD *)v62[0] + 134) & 4) != 0 )
      {
        DC::vMarkTransformDirty(v62[0]);
        a3 = v62[0];
      }
    }
    if ( a3 )
    {
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v124);
      v60 = 0;
      if ( !gbDisableTrappedAcRendering && (unsigned int)UserIsCurrentProcessImmersiveAppContainer() && !(_BYTE)v7 )
      {
        v60 = 1;
        GreEnableAppContainerRestriction(0LL);
      }
      if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v124, (struct XDCOBJ *)v62, 0) )
      {
        v78 = 0;
        v120 = *(_QWORD *)(*((_QWORD *)v62[0] + 10) + 16LL);
        do
        {
          v8 = 1LL;
          v66 = 1;
          v9 = *((unsigned __int16 *)p_ArbitraryUserPointer + 1);
          v107 = v9;
          v10 = *(unsigned __int16 *)p_ArbitraryUserPointer;
          v61 = *(unsigned __int16 *)p_ArbitraryUserPointer;
          v63 = v61;
          if ( (unsigned __int64)p_ArbitraryUserPointer + v10 > p_Self )
            break;
          if ( v9 == 2 )
          {
            if ( !v60 )
              GreBatchTextOut((struct XDCOBJ *)v62, (struct _BATCHTEXTOUT *)p_ArbitraryUserPointer, v10);
LABEL_102:
            v11 = v61;
          }
          else if ( v9 == 6 )
          {
            v92 = 0LL;
            if ( (unsigned int)v10 >= 0x10 )
            {
              v92 = p_ArbitraryUserPointer[1];
            }
            else
            {
              LODWORD(v8) = 0;
              v66 = 0;
            }
            v11 = v61;
            if ( (_DWORD)v8 )
              GreSelectFontInternal(FiberData);
          }
          else
          {
            switch ( v9 )
            {
              case 0:
                if ( (unsigned int)v10 < 0x48 )
                  goto LABEL_102;
                if ( v60 )
                  goto LABEL_102;
                v32 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                v88 = v32;
                v121 = v32;
                v33 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                v87 = v33;
                v96 = v33;
                v68 = *((_DWORD *)p_ArbitraryUserPointer + 3);
                v97 = v68;
                v76 = *((_DWORD *)p_ArbitraryUserPointer + 4);
                v98 = v76;
                v85 = *((_DWORD *)p_ArbitraryUserPointer + 8);
                v72 = *((_DWORD *)p_ArbitraryUserPointer + 9);
                v99 = v72;
                v73 = *((_DWORD *)p_ArbitraryUserPointer + 10);
                v100 = v73;
                v74 = *((_DWORD *)p_ArbitraryUserPointer + 15);
                v101 = v74;
                v75 = *((_DWORD *)p_ArbitraryUserPointer + 16);
                v102 = v75;
                v34 = (BYTE2(v85) << 8) | BYTE2(v85);
                v86 = v34;
                v85 = v34;
                if ( (((unsigned __int8)v34 ^ (unsigned __int8)(4 * v34)) & 0xCC) != 0 )
                  goto LABEL_102;
                v119 = *(_QWORD *)(*((_QWORD *)v62[0] + 10) + 16LL);
                v69 = 0;
                v123 = p_ArbitraryUserPointer[3];
                GreDCSelectBrush(v62[0], v123);
                v35 = v62[0];
                v36 = *((_QWORD *)v62[0] + 10);
                v83 = *(_DWORD *)(v36 + 48);
                v37 = v83;
                LODWORD(v80) = *(_DWORD *)(v36 + 52);
                v103 = *((_DWORD *)p_ArbitraryUserPointer + 11);
                v38 = *((_DWORD *)p_ArbitraryUserPointer + 17);
                v104 = v38;
                if ( v83 != v103 )
                {
                  *(_DWORD *)(v36 + 48) = v103;
                  *(_DWORD *)(*((_QWORD *)v62[0] + 10) + 52LL) = v38;
                  *(_DWORD *)(*((_QWORD *)v62[0] + 10) + 8LL) |= 1u;
                  v35 = v62[0];
                }
                if ( (*((_DWORD *)v35 + 28) & 1) != 0 )
                {
                  v39 = *((_QWORD *)v35 + 10);
                  if ( *(_QWORD *)(v39 + 112) )
                  {
                    v40 = *(_DWORD *)(v39 + 8);
                    v69 = v40 & 0x40000;
                    *(_DWORD *)(v39 + 8) = v40 | 0x40000;
                    v35 = v62[0];
                    v41 = *((_QWORD *)v62[0] + 10);
                    v77 = *(_DWORD *)(v41 + 136);
                    v105 = *((_DWORD *)p_ArbitraryUserPointer + 12);
                    if ( v77 != v105 )
                    {
                      *(_DWORD *)(v41 + 136) = v105;
                      *(_DWORD *)(*((_QWORD *)v62[0] + 10) + 8LL) |= 1u;
                      v35 = v62[0];
                    }
                  }
                }
                v42 = *((_QWORD *)v35 + 10);
                v91 = *(_QWORD *)(v42 + 336);
                v27 = v91;
                v118 = *(__int64 *)((char *)p_ArbitraryUserPointer + 52);
                v43 = HIDWORD(v118);
                if ( v91 != v118 )
                {
                  *(_DWORD *)(v42 + 336) = v118;
                  *(_DWORD *)(*((_QWORD *)v62[0] + 10) + 340LL) = v43;
                  *(_DWORD *)(*((_QWORD *)v62[0] + 10) + 352LL) |= 0x2010u;
                }
                EXFORMOBJ::vQuickInit((EXFORMOBJ *)v122, (struct XDCOBJ *)v62, 0x204u);
                if ( (*(_BYTE *)(v122[0] + 32LL) & 1) != 0 )
                {
                  v125[0] = v32;
                  v125[1] = v33;
                  v125[2] = v32 + v68;
                  v125[3] = v33 + v76;
                  EXFORMOBJ::bXform((EXFORMOBJ *)v122, (struct ERECTL *)v125);
                  ERECTL::vOrder((ERECTL *)v125);
                  if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v125) )
                  {
                    if ( (*((_DWORD *)v62[0] + 9) & 0xE0) != 0 )
                      XDCOBJ::vAccumulate((XDCOBJ *)v62, (struct ERECTL *)v125);
                    v45 = (struct SURFACE *)*((_QWORD *)v62[0] + 64);
                    if ( v45 )
                      GrePatBltLockedDC((struct XDCOBJ *)v62, v44, (struct ERECTL *)v125, v34, v45, v72, v73, v74, v75);
                  }
                }
                else
                {
                  v46 = (_DWORD *)*((_QWORD *)v62[0] + 10);
                  v47 = v46[10];
                  v48 = v46[8];
                  v49 = v46[11];
                  v50 = v46[9];
                  v46[10] = v72;
                  *(_DWORD *)(*((_QWORD *)v62[0] + 10) + 32LL) = v73;
                  *(_DWORD *)(*((_QWORD *)v62[0] + 10) + 44LL) = v74;
                  *(_DWORD *)(*((_QWORD *)v62[0] + 10) + 36LL) = v75;
                  GreMaskBlt(FiberData, v76, 0LL, 0, 0, 0LL, 0, 0, v86 << 16, 0);
                  *(_DWORD *)(*((_QWORD *)v62[0] + 10) + 40LL) = v47;
                  *(_DWORD *)(*((_QWORD *)v62[0] + 10) + 32LL) = v48;
                  *(_DWORD *)(*((_QWORD *)v62[0] + 10) + 44LL) = v49;
                  *(_DWORD *)(*((_QWORD *)v62[0] + 10) + 36LL) = v50;
                  v37 = v83;
                }
                v51 = *((_QWORD *)v62[0] + 10);
                if ( *(_QWORD *)(v51 + 16) != v119 )
                {
                  *(_QWORD *)(v51 + 16) = v119;
                  *(_DWORD *)(*((_QWORD *)v62[0] + 10) + 8LL) |= 0x1000u;
                }
                v52 = *((_QWORD *)v62[0] + 10);
                if ( v37 != *(_DWORD *)(v52 + 48) )
                {
                  *(_DWORD *)(v52 + 48) = v37;
                  *(_DWORD *)(*((_QWORD *)v62[0] + 10) + 52LL) = (_DWORD)v80;
                  *(_DWORD *)(*((_QWORD *)v62[0] + 10) + 8LL) |= 1u;
                }
                if ( (*((_DWORD *)v62[0] + 28) & 1) != 0 )
                {
                  v53 = *((_QWORD *)v62[0] + 10);
                  if ( *(_QWORD *)(v53 + 112) )
                  {
                    if ( v77 != *(_DWORD *)(v53 + 136) )
                    {
                      *(_DWORD *)(v53 + 136) = v77;
                      *(_DWORD *)(*((_QWORD *)v62[0] + 10) + 8LL) |= 1u;
                    }
                    if ( !v69 )
                      *(_DWORD *)(*((_QWORD *)v62[0] + 10) + 8LL) &= ~0x40000u;
                  }
                }
                v30 = *((_QWORD *)v62[0] + 10);
                v31 = HIDWORD(v91);
                if ( __PAIR64__(HIDWORD(v91), v27) == *(_QWORD *)(v30 + 336) )
                  goto LABEL_102;
                goto LABEL_64;
              case 1:
                if ( v60 || (unsigned int)v10 < 0x38 )
                  goto LABEL_102;
                if ( (PVOID *)p_Self != p_ArbitraryUserPointer )
                {
                  if ( ((unsigned __int8)p_ArbitraryUserPointer & 7) != 0 )
                    ExRaiseDatatypeMisalignment();
                  if ( p_Self > W32UserProbeAddress || p_Self < (unsigned __int64)p_ArbitraryUserPointer )
                    *W32UserProbeAddress = 0;
                }
                v108 = *((_DWORD *)p_ArbitraryUserPointer + 3);
                v17 = v108;
                if ( v108 >= 0xAAAAAAA || 24 * (unsigned __int64)v108 > (unsigned int)(v10 - 48) )
                  goto LABEL_102;
                v18 = *((_QWORD *)v62[0] + 10);
                v19 = *(_DWORD *)(v18 + 48);
                v68 = *(_DWORD *)(v18 + 52);
                v20 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                v109 = v20;
                v21 = *((_DWORD *)p_ArbitraryUserPointer + 4);
                v110 = v21;
                v22 = *((_DWORD *)p_ArbitraryUserPointer + 5);
                v111 = v22;
                v23 = *((_DWORD *)p_ArbitraryUserPointer + 7);
                v112 = v23;
                v24 = *((_DWORD *)p_ArbitraryUserPointer + 8);
                v113 = v24;
                v114 = *((_DWORD *)p_ArbitraryUserPointer + 6);
                v25 = *((_DWORD *)p_ArbitraryUserPointer + 9);
                v115 = v25;
                v69 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                v116 = v69;
                if ( v19 != v114 )
                {
                  *(_DWORD *)(v18 + 48) = v114;
                  *(_DWORD *)(*((_QWORD *)v62[0] + 10) + 52LL) = v25;
                  *(_DWORD *)(*((_QWORD *)v62[0] + 10) + 8LL) |= 1u;
                }
                v26 = *((_QWORD *)v62[0] + 10);
                v80 = *(PVOID *)(v26 + 336);
                v27 = (unsigned int)v80;
                v117 = p_ArbitraryUserPointer[5];
                v28 = HIDWORD(v117);
                if ( v80 != v117 )
                {
                  *(_DWORD *)(v26 + 336) = (_DWORD)v117;
                  *(_DWORD *)(*((_QWORD *)v62[0] + 10) + 340LL) = v28;
                  *(_DWORD *)(*((_QWORD *)v62[0] + 10) + 352LL) |= 0x2010u;
                }
                GrePolyPatBltInternal(
                  (struct XDCOBJ *)v62,
                  v69,
                  (struct _POLYPATBLT *)(p_ArbitraryUserPointer + 6),
                  v17,
                  v20,
                  v21,
                  v22,
                  v23,
                  v24);
                v29 = *((_QWORD *)v62[0] + 10);
                if ( v19 != *(_DWORD *)(v29 + 48) )
                {
                  *(_DWORD *)(v29 + 48) = v19;
                  *(_DWORD *)(*((_QWORD *)v62[0] + 10) + 52LL) = v68;
                  *(_DWORD *)(*((_QWORD *)v62[0] + 10) + 8LL) |= 1u;
                }
                v30 = *((_QWORD *)v62[0] + 10);
                v31 = HIDWORD(v80);
                if ( __PAIR64__(HIDWORD(v80), v27) == *(_QWORD *)(v30 + 336) )
                  goto LABEL_102;
LABEL_64:
                *(_DWORD *)(v30 + 336) = v27;
                *(_DWORD *)(*((_QWORD *)v62[0] + 10) + 340LL) = v31;
                *(_DWORD *)(*((_QWORD *)v62[0] + 10) + 352LL) |= 0x2010u;
                goto LABEL_102;
              case 3:
                if ( !v60 )
                  GreBatchTextOutRect((struct XDCOBJ *)v62, (struct _BATCHTEXTOUTRECT *)p_ArbitraryUserPointer, v10);
                goto LABEL_102;
              case 4:
                if ( (unsigned int)v10 >= 0xC )
                {
                  v89 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                  v71 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                }
                else
                {
                  LODWORD(v8) = 0;
                  v66 = 0;
                }
                v11 = v61;
                if ( (_DWORD)v8 )
                {
                  v13 = v62[0];
                  *((_DWORD *)v62[0] + 34) = v89;
                  *((_DWORD *)v13 + 35) = v71;
                  v14 = *((_DWORD *)v13 + 10) & 1;
                  if ( v14 )
                    v15 = *((_DWORD *)v13 + 360);
                  else
                    v15 = *((_DWORD *)v13 + 358);
                  *((_DWORD *)v13 + 398) = *((_DWORD *)v13 + 34) + v15;
                  if ( v14 )
                    v16 = *((_DWORD *)v13 + 361);
                  else
                    v16 = *((_DWORD *)v13 + 359);
                  *((_DWORD *)v13 + 399) = v71 + v16;
                }
                break;
              case 5:
                if ( (unsigned int)v10 >= 0x18 )
                {
                  v126 = *(struct _RECTL *)(p_ArbitraryUserPointer + 1);
                  v84 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                }
                else
                {
                  LODWORD(v8) = 0;
                  v66 = 0;
                }
                v11 = v61;
                if ( (_DWORD)v8 )
                {
                  DEVLOCKOBJ::vFlushSpriteUpdates((DEVLOCKOBJ *)v124, 0);
                  GreExtSelectClipRgnLocked((struct XDCOBJ *)v62, &v126, v84);
                }
                break;
              case 7:
                v12 = 0LL;
                v95 = 0LL;
                if ( (unsigned int)v10 >= 0x10 )
                {
                  v12 = p_ArbitraryUserPointer[1];
                  v95 = v12;
                }
                else
                {
                  v8 = 0LL;
                  v66 = 0;
                }
                v11 = v61;
                goto LABEL_30;
              case 8:
                v12 = 0LL;
                v90 = 0LL;
                if ( (unsigned int)v10 >= 0x10 )
                {
                  v12 = p_ArbitraryUserPointer[1];
                  v90 = v12;
                }
                else
                {
                  v8 = 0LL;
                  v66 = 0;
                }
                v11 = v61;
LABEL_30:
                if ( (_DWORD)v8 )
                  NtGdiDeleteObjectApp(v12, v8, v10, 0x1C0000000uLL);
                break;
              default:
                goto LABEL_102;
            }
          }
          --StackLimit;
          p_ArbitraryUserPointer = (PVOID *)((char *)p_ArbitraryUserPointer + ((v11 + 7) & 0xFFFFFFF8));
          v65 = p_ArbitraryUserPointer;
          if ( !StackLimit )
            break;
        }
        while ( (unsigned __int64)p_ArbitraryUserPointer + 4 < p_Self );
        v54 = v82;
        LODWORD(v82[106].StackLimit) = 0;
        LODWORD(v54[13].SubSystemTib) &= 0x80000000;
        LODWORD(v54[13].SubSystemTib) &= ~0x80000000;
        *(_QWORD *)(*((_QWORD *)v62[0] + 10) + 16LL) = v120;
        *(_DWORD *)(*((_QWORD *)v62[0] + 10) + 8LL) |= 0x1000u;
      }
      if ( v62[0] )
      {
        XDCOBJ::RestoreAttributes((XDCOBJ *)v62);
        _InterlockedDecrement((volatile signed __int32 *)v62[0] + 3);
        v62[0] = 0LL;
        p_ArbitraryUserPointer = v65;
      }
      if ( v60 )
        GreEnableAppContainerRestriction(1LL);
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v124);
    }
  }
LABEL_111:
  if ( v78 )
  {
    while ( 1 )
    {
      v55 = *((unsigned __int16 *)p_ArbitraryUserPointer + 1);
      v106 = v55;
      v56 = *(unsigned __int16 *)p_ArbitraryUserPointer;
      v79 = *(unsigned __int16 *)p_ArbitraryUserPointer;
      if ( (unsigned __int64)p_ArbitraryUserPointer + v56 > p_Self )
      {
LABEL_120:
        v59 = v82;
        LODWORD(v82[106].StackLimit) = 0;
        LODWORD(v59[13].SubSystemTib) &= 0x80000000;
        break;
      }
      v57 = v55 - 7;
      if ( v57 )
      {
        if ( v57 != 1 )
          goto LABEL_118;
        v93 = 0LL;
        v58 = p_ArbitraryUserPointer[1];
        v93 = v58;
      }
      else
      {
        v94 = 0LL;
        v58 = p_ArbitraryUserPointer[1];
        v94 = v58;
      }
      NtGdiDeleteObjectApp(v58, 1LL, a3, a4);
LABEL_118:
      --StackLimit;
      p_ArbitraryUserPointer = (PVOID *)((char *)p_ArbitraryUserPointer + (((_DWORD)v56 + 7) & 0xFFFFFFF8));
      v65 = p_ArbitraryUserPointer;
      if ( !StackLimit || (unsigned __int64)p_ArbitraryUserPointer + 4 >= p_Self )
        goto LABEL_120;
    }
  }
LABEL_121:
  v82[13].FiberData = 0LL;
}
