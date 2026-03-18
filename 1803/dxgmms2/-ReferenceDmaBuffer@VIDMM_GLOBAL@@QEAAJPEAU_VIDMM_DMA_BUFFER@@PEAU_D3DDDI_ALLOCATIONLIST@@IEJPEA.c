/*
 * XREFs of ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAVDXGPROCESSVIDMMLOCK@@PEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C00694B0
 * Callers:
 *     ?VidMmReferenceDmaBuffer@@YAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAVDXGPROCESSVIDMMLOCK@@PEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0002460 (-VidMmReferenceDmaBuffer@@YAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARG.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0004D1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00053A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0005880 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     VidSchiMarkDeviceAsError @ 0x1C0012DA4 (VidSchiMarkDeviceAsError.c)
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     ?RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z @ 0x1C0023DD8 (-RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z.c)
 *     McTemplateK0ppqPR2TR2 @ 0x1C00242D0 (McTemplateK0ppqPR2TR2.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C005E3F4 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C005FCC4 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C005FD14 (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?AddDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z @ 0x1C009ED7C (-AddDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ReferenceDmaBuffer(
        VIDMM_GLOBAL *this,
        union _LARGE_INTEGER *a2,
        struct _D3DDDI_ALLOCATIONLIST *a3,
        unsigned int a4,
        char a5,
        unsigned int a6,
        unsigned int *a7,
        union _LARGE_INTEGER *a8,
        union _LARGE_INTEGER *a9,
        struct DXGPROCESSVIDMMLOCK *a10,
        struct VIDMM_ALLOC **a11,
        struct _VIDMM_PRIMARIES_REFERENCES *a12,
        struct DXGALLOCATION **a13)
{
  unsigned int v13; // r15d
  unsigned __int64 *p_QuadPart; // r13
  __int64 v17; // r8
  unsigned int v18; // eax
  union _LARGE_INTEGER v19; // rax
  struct VIDMM_ALLOC *v20; // rdx
  unsigned int v21; // edi
  int v22; // r10d
  struct _D3DDDI_ALLOCATIONLIST *v23; // rsi
  struct VIDMM_ALLOC **v24; // r12
  VIDMM_SEGMENT *v25; // r9
  struct DXGALLOCATION *v26; // rax
  struct VIDMM_ALLOC *v27; // r13
  __int64 v28; // r15
  _DWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // r8d
  _DWORD *v33; // rdx
  unsigned __int64 i; // rcx
  unsigned __int64 *v35; // rsi
  unsigned int v36; // r8d
  __int64 v37; // rax
  int v38; // r12d
  __int64 v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rdi
  int v46; // eax
  int v47; // eax
  struct VIDMM_ALLOC *v48; // r15
  UINT v49; // edi
  __int64 v50; // rax
  int v51; // r9d
  _QWORD *v52; // rax
  unsigned int v53; // ebx
  unsigned int v54; // r15d
  __int64 v55; // rcx
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rax
  int v68; // eax
  _DWORD *v69; // rdx
  int v70; // eax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rcx
  int v75; // edi
  PRKPROCESS **v76; // rcx
  struct _VIDMM_LOCAL_ALLOC *v77; // rdx
  __int64 v78; // r9
  __int64 v79; // rax
  _QWORD *v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  int v85; // eax
  LONGLONG v86; // rdx
  union _LARGE_INTEGER *v87; // rcx
  union _LARGE_INTEGER v88; // rsi
  signed int v89; // r15d
  unsigned int v90; // edi
  __int64 v92; // rdi
  _QWORD *v93; // rax
  __int64 v94; // rax
  union _LARGE_INTEGER v95; // r12
  union _LARGE_INTEGER v96; // r14
  __int64 v97; // r15
  __int64 j; // rsi
  __int64 v99; // rdx
  __int64 v100; // r8
  int *v101; // r9
  signed __int32 v102[8]; // [rsp+0h] [rbp-398h] BYREF
  __int64 v103; // [rsp+28h] [rbp-370h]
  unsigned int v104; // [rsp+40h] [rbp-358h]
  int v105; // [rsp+44h] [rbp-354h]
  VIDMM_SEGMENT *v106; // [rsp+48h] [rbp-350h]
  unsigned __int64 *v107; // [rsp+50h] [rbp-348h]
  struct VIDMM_ALLOC *v108; // [rsp+58h] [rbp-340h]
  VIDMM_SEGMENT *v109; // [rsp+60h] [rbp-338h]
  struct VIDMM_ALLOC **QuadPart; // [rsp+68h] [rbp-330h]
  int v111; // [rsp+70h] [rbp-328h]
  int v112; // [rsp+74h] [rbp-324h]
  unsigned int v113; // [rsp+78h] [rbp-320h]
  __int64 v114; // [rsp+80h] [rbp-318h]
  struct VIDMM_ALLOC *v115; // [rsp+88h] [rbp-310h]
  unsigned int *v116; // [rsp+90h] [rbp-308h]
  __int64 v117; // [rsp+98h] [rbp-300h]
  struct _VIDMM_PRIMARIES_REFERENCES *v118; // [rsp+A0h] [rbp-2F8h]
  struct DXGPROCESSVIDMMLOCK *v119; // [rsp+A8h] [rbp-2F0h]
  __int64 v120; // [rsp+B0h] [rbp-2E8h]
  union _LARGE_INTEGER *v121; // [rsp+B8h] [rbp-2E0h]
  unsigned int v122; // [rsp+C0h] [rbp-2D8h]
  struct DXGALLOCATION **v123; // [rsp+C8h] [rbp-2D0h]
  __int64 v124; // [rsp+D0h] [rbp-2C8h]
  struct VIDMM_ALLOC **v125; // [rsp+D8h] [rbp-2C0h]
  unsigned __int64 *v126; // [rsp+E0h] [rbp-2B8h]
  __int64 v127; // [rsp+E8h] [rbp-2B0h]
  unsigned __int64 v128; // [rsp+F0h] [rbp-2A8h]
  unsigned __int64 v129; // [rsp+F8h] [rbp-2A0h]
  __int64 v130; // [rsp+100h] [rbp-298h]
  struct _KTHREAD *CurrentThread; // [rsp+108h] [rbp-290h]
  struct _KTHREAD *v132; // [rsp+110h] [rbp-288h]
  struct _KAPC_STATE ApcState; // [rsp+118h] [rbp-280h] BYREF
  _BYTE v134[512]; // [rsp+150h] [rbp-248h] BYREF

  v13 = a4;
  v113 = a4;
  v121 = a8;
  v116 = a7;
  p_QuadPart = (unsigned __int64 *)&a9->QuadPart;
  v107 = (unsigned __int64 *)&a9->QuadPart;
  v126 = (unsigned __int64 *)&a9->QuadPart;
  v119 = a10;
  v125 = a11;
  v118 = a12;
  v123 = a13;
  v104 = 0;
  QuadPart = (struct VIDMM_ALLOC **)a2[13].QuadPart;
  v109 = (VIDMM_SEGMENT *)a2[14].QuadPart;
  DXGPROCESS::GetCurrent();
  v17 = *(_QWORD *)(a2[17].QuadPart + 16);
  v120 = v17;
  if ( a9 )
    *a9 = a2[12];
  *a11 = 0LL;
  ++*((_DWORD *)this + 1928);
  *((_DWORD *)this + 1929) += v13;
  v18 = *((_DWORD *)this + 1930);
  if ( v13 > v18 )
    v18 = v13;
  *((_DWORD *)this + 1930) = v18;
  a2[3].HighPart |= 4u;
  v19 = *(union _LARGE_INTEGER *)(*(_QWORD *)a2[17].QuadPart + 40LL);
  _InterlockedOr(v102, 0);
  a2[19] = v19;
  *(_DWORD *)a12 = 0;
  v117 = 0LL;
  v20 = 0LL;
  v115 = 0LL;
  v21 = 0;
  v104 = 0;
  v22 = a6;
  v23 = a3;
  v24 = QuadPart;
  v25 = v109;
  while ( 1 )
  {
    v106 = v25;
    if ( v21 >= v13 )
      break;
    if ( !v23->hAllocation )
    {
      ++*((_DWORD *)this + 1931);
      *v24 = 0LL;
      *(_QWORD *)v25 = 0LL;
      *((_QWORD *)v25 + 1) = 0LL;
      *((_QWORD *)v25 + 2) = 0LL;
      goto LABEL_61;
    }
    v26 = v123[v21];
    if ( !v26 )
    {
      v84 = WdLogNewEntry5_WdError(v123, v20, v17, v25);
      *(_QWORD *)(v84 + 24) = v23->hAllocation;
      *(_QWORD *)(v84 + 32) = v21;
      WdLogEvent5_WdError(v84);
      v53 = -1071775468;
      v105 = -1071775468;
      v54 = a6;
LABEL_157:
      if ( !p_QuadPart && v21 )
      {
        do
        {
          if ( *--v24 )
            VIDMM_GLOBAL::RemoveDMAReferences(*v24, v54, v17);
          --v21;
        }
        while ( v21 );
      }
      return v53;
    }
    v27 = (struct VIDMM_ALLOC *)*((_QWORD *)v26 + 3);
    v108 = v27;
    v28 = **(_QWORD **)v27;
    v29 = *(_DWORD **)(v28 + 504);
    v30 = *v29 >> 14;
    if ( (*v29 & 0x4000) != 0 )
    {
      if ( v20 || (v23->Value & 1) == 0 )
      {
        v52 = (_QWORD *)WdLogNewEntry5_WdAssertion(v30, v20);
        v52[3] = v27;
        v52[4] = v115;
        v52[5] = v23->Value & 1;
        WdLogEvent5_WdAssertion(v52);
        v53 = -1071775482;
        v105 = -1071775482;
        v54 = a6;
        p_QuadPart = v107;
        goto LABEL_157;
      }
      v115 = v27;
    }
    if ( *(_BYTE *)(v28 + 96) )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v30);
        v56 = WdLogNewEntry5_WdTrace(v55);
        *(_QWORD *)(v56 + 24) = a2;
        *(_QWORD *)(v56 + 32) = v27;
      }
      v53 = -1071775482;
      v105 = -1071775482;
      v54 = a6;
      p_QuadPart = v107;
      goto LABEL_157;
    }
    if ( *((_QWORD *)v27 + 1) != v17 )
    {
      v57 = (_QWORD *)WdLogNewEntry5_WdError(v30, v20, v17, v25);
      v57[3] = v120;
      v57[4] = v27;
      v57[5] = v21;
      v57[6] = *((_QWORD *)v27 + 1);
      WdLogEvent5_WdError(v57);
      v53 = -1071775467;
      v105 = -1071775467;
      v54 = a6;
      p_QuadPart = v107;
      goto LABEL_157;
    }
    if ( *(_WORD *)(*((_QWORD *)v27 + 12) + 4LL) && a5 )
    {
      if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
      {
        v62 = WdLogNewEntry5_WdAssertion(v59, v58);
        *(_QWORD *)(v62 + 24) = a2;
        *(_QWORD *)(v62 + 32) = v27;
        WdLogEvent5_WdAssertion(v62);
        v53 = -1071775466;
        v105 = -1071775466;
        v54 = a6;
        p_QuadPart = v107;
        goto LABEL_157;
      }
      v63 = WdLogNewEntry5_WdError(v59, v58, v60, v61);
      *(_QWORD *)(v63 + 24) = a2;
      *(_QWORD *)(v63 + 32) = v27;
      WdLogEvent5_WdError(v63);
      v25 = v106;
      v22 = a6;
    }
    *v24 = v27;
    v31 = *(_QWORD *)(*((_QWORD *)v27 + 2) + 32LL);
    *(_QWORD *)v25 = v31;
    v32 = v23->Value & 1;
    if ( v32 )
    {
      if ( *((_BYTE *)v27 + 24) )
      {
        v127 = *((_QWORD *)this + 3);
        if ( *(int *)(v127 + 2104) >= 4608 )
        {
          v64 = WdLogNewEntry5_WdWarning(v31, v20);
          WdLogEvent5_WdWarning(v64);
          v67 = WdLogNewEntry5_WdWarning(v66, v65);
          *(_QWORD *)(v67 + 24) = a2;
          *(_QWORD *)(v67 + 32) = v27;
          WdLogEvent5_WdWarning(v67);
          v53 = -1073741790;
          v105 = -1073741790;
          v54 = a6;
          p_QuadPart = v107;
          goto LABEL_157;
        }
      }
    }
    v33 = (_DWORD *)((char *)v25 + 8);
    i = v32 | *((_DWORD *)v25 + 2) & 0xFFFFFFFE;
    *((_DWORD *)v25 + 2) = i;
    if ( (v23->Value & 1) != 0 )
    {
      ++*((_DWORD *)this + 1932);
      i = (unsigned int)*v33;
    }
    if ( (i & 1) != 0 )
    {
      if ( (**(_DWORD **)(v28 + 504) & 0x200000) != 0 )
      {
        *((_DWORD *)v118 + 34) |= 1u;
        i = (unsigned int)*v33;
      }
      if ( (i & 1) != 0 )
      {
        i = (**(_DWORD **)(v28 + 504) >> 23) | ((unsigned __int16)**(_DWORD **)(v28 + 504) | (unsigned __int16)((unsigned int)(**(_DWORD **)(v28 + 504) | (**(_DWORD **)(v28 + 504) >> 11)) >> 11)) & 0x100u;
        if ( (unsigned int)i >= 0x100 )
        {
          i = (unsigned __int64)v118;
          if ( *(_DWORD *)v118 >= 0x10u )
          {
            ++*((_DWORD *)this + 1938);
          }
          else
          {
            _InterlockedIncrement((volatile signed __int32 *)v27 + 26);
            v27 = v108;
            *(_QWORD *)(i + 8LL * *(unsigned int *)i + 8) = v108;
            v25 = v109;
          }
          ++*(_DWORD *)i;
        }
      }
    }
    v106 = *(VIDMM_SEGMENT **)(v28 + 136);
    v35 = v107;
    if ( v107 )
      goto LABEL_23;
    if ( !v106 || (*((_DWORD *)this + 1760) & 0x40) != 0 )
    {
      v27 = v108;
      v25 = v109;
LABEL_23:
      ++*((_DWORD *)this + 1936);
      *v33 &= 0xFFFFFFC1;
      if ( v35 )
      {
        i = a2[17].QuadPart;
        v128 = i;
        if ( (*(_DWORD *)(i + 32) & 0x20) != 0 )
        {
          v37 = *((_QWORD *)v27 + 18);
        }
        else
        {
          v129 = i;
          v36 = *(_DWORD *)(i + 8);
          v122 = v36;
          v33 = (_DWORD *)((char *)v27 + 128);
          for ( i = *((_QWORD *)v27 + 16); (_DWORD *)i != v33; i = *(_QWORD *)i )
          {
            if ( ((*(_DWORD *)(i + 40) >> 4) & 0x3F) == v36 )
            {
              v37 = *(_QWORD *)(i + 72);
              goto LABEL_29;
            }
          }
          v37 = 0LL;
LABEL_29:
          v124 = v37;
        }
        *((_QWORD *)v25 + 2) = v37;
      }
      else
      {
        *((_QWORD *)v25 + 2) = 0LL;
      }
      a2[3].HighPart &= ~4u;
      if ( (VIDMM_GLOBAL::_Config & 1) != 0 )
        goto LABEL_55;
      v130 = *((_QWORD *)this + 3);
      if ( (*(_DWORD *)(v130 + 300) & 4) != 0 || !*(_BYTE *)(v28 + 97) && (*(_DWORD *)(v28 + 76) & 0x400) == 0 )
        goto LABEL_55;
      v38 = 0;
      v111 = 0;
      v39 = *(_QWORD *)(v28 + 320);
      KeEnterCriticalRegion();
      CurrentThread = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(v39 + 8) == CurrentThread )
      {
        v70 = *(_DWORD *)(v39 + 24);
        if ( v70 <= 0 )
        {
          v71 = WdLogNewEntry5_WdAssertion(v41, v40);
          *(_QWORD *)(v71 + 24) = 406LL;
          WdLogEvent5_WdAssertion(v71);
          v70 = *(_DWORD *)(v39 + 24);
        }
        *(_DWORD *)(v39 + 24) = v70 + 1;
      }
      else
      {
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v39 + 16, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v51 = *(_DWORD *)(v39 + 28);
            if ( v51 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v41, (__int64)&EventBlockThread, v42, v51);
          }
          _InterlockedIncrement64((volatile signed __int64 *)v39);
          ExAcquirePushLockExclusiveEx(v39 + 16, 0LL);
        }
        if ( *(_QWORD *)(v39 + 8) )
        {
          v72 = WdLogNewEntry5_WdAssertion(v41, v40);
          *(_QWORD *)(v72 + 24) = 430LL;
          WdLogEvent5_WdAssertion(v72);
        }
        if ( *(_DWORD *)(v39 + 24) )
        {
          v73 = WdLogNewEntry5_WdAssertion(v41, v40);
          *(_QWORD *)(v73 + 24) = 431LL;
          WdLogEvent5_WdAssertion(v73);
        }
        *(_QWORD *)(v39 + 8) = KeGetCurrentThread();
        *(_DWORD *)(v39 + 24) = 1;
      }
      v117 = v28;
      v43 = *(_QWORD *)(v28 + 112);
      if ( v43 )
      {
        v50 = *(_QWORD *)(v43 + 8);
      }
      else if ( (*(_DWORD *)(v28 + 80) & 0x5000) != 0 )
      {
        v50 = *(_QWORD *)(v28 + 512);
      }
      else
      {
        v44 = *(_QWORD **)(v28 + 104);
        v40 = v44[3];
        if ( v40 )
        {
          v50 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v44[1] + 24LL) + 88LL))(*(_QWORD *)(v44[1] + 24LL));
        }
        else
        {
          v41 = v44[10];
          if ( !v41 )
            goto LABEL_45;
          v50 = *(_QWORD *)(v41 + 8);
        }
      }
      v114 = v50;
      if ( !v50 )
      {
LABEL_45:
        if ( !*(_QWORD *)(v28 + 136)
          && (**(_DWORD **)(v28 + 504) & 0x40000000) == 0
          && (int)VIDMM_GLOBAL::ChargePinnedBackingStore(this, *(_QWORD *)(v28 + 8)) >= 0 )
        {
          if ( *(_QWORD *)v119 )
          {
            v74 = *(_QWORD *)v119 + 144LL;
            *(_QWORD *)(v74 + 8) = 0LL;
            ExReleasePushLockExclusiveEx(v74, 0LL);
            KeLeaveCriticalRegion();
          }
          v38 = 1;
          v111 = 1;
          v75 = 0;
          v112 = 0;
          v76 = *(PRKPROCESS ***)(v28 + 104);
          v77 = (struct _VIDMM_LOCAL_ALLOC *)v76;
          if ( v76 && v76 != *(PRKPROCESS ***)v108 )
          {
            KeStackAttachProcess(*v76[1], &ApcState);
            v75 = 1;
            v112 = 1;
            v77 = *(struct _VIDMM_LOCAL_ALLOC **)(v28 + 104);
          }
          if ( (int)VIDMM_GLOBAL::ProbeAndLockAllocation(
                      (VIDMM_GLOBAL *)v76,
                      v77,
                      (struct _VIDMM_GLOBAL_ALLOC *)v28,
                      0LL,
                      *(_QWORD *)(v28 + 8),
                      (enum _LOCK_OPERATION)v103,
                      0LL,
                      0) < 0 )
          {
            v79 = WdLogNewEntry5_WdError(v41, v40, v42, v78);
            *(_QWORD *)(v79 + 24) = v28;
            WdLogEvent5_WdError(v79);
            VIDMM_GLOBAL::ReturnPinnedBackingStore(this, *(_QWORD *)(v28 + 8));
          }
          else
          {
            ++*(_DWORD *)(v28 + 348);
            *(_DWORD *)(v28 + 84) |= 2u;
          }
          if ( v75 )
            KeUnstackDetachProcess(&ApcState);
        }
      }
      v117 = 0LL;
      v45 = *(_QWORD *)(v28 + 320);
      v132 = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(v45 + 8) != v132 )
      {
        v80 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v41, v40, v42);
        v80[3] = 275LL;
        v80[4] = 4LL;
        v80[5] = v45;
        v80[6] = 0LL;
        v80[7] = 0LL;
        WdLogEvent5_WdCriticalError(v80);
      }
      v46 = *(_DWORD *)(v45 + 24);
      if ( v46 <= 0 )
      {
        v81 = WdLogNewEntry5_WdAssertion(v41, v40);
        *(_QWORD *)(v81 + 24) = 450LL;
        WdLogEvent5_WdAssertion(v81);
        v46 = *(_DWORD *)(v45 + 24);
      }
      v47 = v46 - 1;
      *(_DWORD *)(v45 + 24) = v47;
      if ( !v47 )
      {
        *(_QWORD *)(v45 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v45 + 16, 0LL);
      }
      KeLeaveCriticalRegion();
      if ( v38 )
      {
        i = *(_QWORD *)v119;
        if ( *(_QWORD *)v119 )
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(i + 144));
      }
      v22 = a6;
      goto LABEL_54;
    }
    ++*((_DWORD *)this + 1935);
    v68 = VIDMM_SEGMENT::DriverId(v106);
    *v69 ^= (*v69 ^ (2 * v68)) & 0x3E;
    v33 = (_DWORD *)(*(_QWORD *)(v28 + 144) + *((_QWORD *)v106 + 3));
    *((_QWORD *)v109 + 2) = v33;
LABEL_54:
    v27 = v108;
LABEL_55:
    if ( !v35 )
    {
      VIDMM_GLOBAL::AddDMAReferences(v27, v22);
      v22 = a6;
    }
    v48 = v108;
    if ( !*((_DWORD *)v27 + 38) && (*((_BYTE *)v108 + 25) & 1) == 0 )
    {
      if ( (*((_BYTE *)this + 41448) & 4) == 0
        || (i = *(unsigned int *)(*((_QWORD *)this + 3) + 300LL), (i & 0x10) == 0) )
      {
        v82 = WdLogNewEntry5_WdAssertion(i, v33);
        *(_QWORD *)(v82 + 24) = v48;
        WdLogEvent5_WdAssertion(v82);
        v53 = -1073741823;
        v105 = -1073741823;
        VidSchiMarkDeviceAsError(*(_QWORD *)(*((_QWORD *)v48 + 1) + 32LL), 16);
        p_QuadPart = v107;
        if ( !v107 )
          VIDMM_GLOBAL::RemoveDMAReferences(v48, a6, v17);
        v21 = v104;
        v24 = QuadPart;
        v54 = a6;
        goto LABEL_157;
      }
    }
    v23 = a3;
    v49 = (a3->Value >> 2) & 7;
    if ( v49 )
    {
      v83 = WdLogNewEntry5_WdAssertion(i, v33);
      *(_QWORD *)(v83 + 24) = v48;
      *(_QWORD *)(v83 + 32) = v49;
      WdLogEvent5_WdAssertion(v83);
      v22 = a6;
    }
    v21 = v104;
    v24 = QuadPart;
    v25 = v109;
    p_QuadPart = v107;
    v13 = v113;
    v20 = v115;
    v17 = v120;
LABEL_61:
    QuadPart = ++v24;
    a3 = ++v23;
    v25 = (VIDMM_SEGMENT *)((char *)v25 + 24);
    v109 = v25;
    v104 = ++v21;
  }
  *v125 = v20;
  if ( a2[8].QuadPart )
  {
    v106 = *(VIDMM_SEGMENT **)(a2[7].QuadPart + 136);
    if ( !v106 || (*((_DWORD *)this + 1760) & 0x40) != 0 )
    {
      ++*((_DWORD *)this + 1936);
      a2[3].HighPart &= ~4u;
      *v116 = 0;
      v86 = 0LL;
    }
    else
    {
      ++*((_DWORD *)this + 1935);
      if ( (*((_DWORD *)v106 + 20) & 0x1000) != 0 )
        v85 = 0;
      else
        v85 = *((_DWORD *)v106 + 4) + 1;
      *v116 = v85;
      v86 = *((_QWORD *)v106 + 3) + *(_QWORD *)(a2[7].QuadPart + 144);
    }
    v87 = v121;
    v121->QuadPart = v86;
    v88 = a2[8];
    v89 = a6;
    if ( a6 + *(_DWORD *)(v88.QuadPart + 156) == 0x7FFFFFFF )
    {
      v92 = *(int *)(v88.QuadPart + 156);
      v93 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v87, v86, v17);
      v93[3] = 270LL;
      v93[4] = 41LL;
      v93[5] = v88.QuadPart;
      v93[6] = v92;
      v93[7] = 0LL;
      WdLogEvent5_WdCriticalError(v93);
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)(v88.QuadPart + 156), a6);
  }
  else
  {
    *v116 = 0;
    *v121 = a2[11];
    v89 = a6;
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)&a2[4], v89);
  if ( v89 > 1 )
    a2[3].HighPart |= 2u;
  v90 = v104;
  if ( !p_QuadPart )
    a2[18].LowPart = v104;
  a2[2].LowPart = v89;
  if ( (a2[3].HighPart & 4) != 0 )
  {
    v94 = *(_QWORD *)(*(_QWORD *)a2[17].QuadPart + 40LL);
    _InterlockedOr(v102, 0);
    v90 = v104;
    if ( a2[19].QuadPart == v94 )
      ++*((_DWORD *)this + 1937);
  }
  if ( (qword_1C0047010 & 4) != 0 )
  {
    v95 = a2[14];
    v96 = a2[13];
    v97 = *(_QWORD *)(a2[17].QuadPart + 24);
    for ( j = 0LL; (unsigned int)j < v90; j = (unsigned int)(j + 128) )
    {
      v99 = 128LL;
      if ( v90 - (unsigned int)j < 0x80 )
        v99 = v90 - (unsigned int)j;
      v100 = 0LL;
      if ( (_DWORD)v99 )
      {
        v101 = (int *)v134;
        do
        {
          *v101 = *(_DWORD *)(v95.QuadPart + 24LL * (unsigned int)(v100 + j) + 8) & 1;
          v100 = (unsigned int)(v100 + 1);
          ++v101;
        }
        while ( (unsigned int)v100 < (unsigned int)v99 );
      }
      if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      {
        LODWORD(v103) = v99;
        McTemplateK0ppqPR2TR2(v96.QuadPart + 8 * j, v99, v100, v97, a2, v103, v96.QuadPart + 8 * j, v134);
      }
    }
  }
  return 0LL;
}
