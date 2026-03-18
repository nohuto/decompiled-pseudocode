/*
 * XREFs of ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAVDXGPROCESSVIDMMLOCK@@PEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0061CF0
 * Callers:
 *     ?VidMmReferenceDmaBuffer@@YAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAVDXGPROCESSVIDMMLOCK@@PEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0002C50 (-VidMmReferenceDmaBuffer@@YAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARG.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001774 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00024B4 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002B40 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     VidSchiMarkDeviceAsError @ 0x1C00127A4 (VidSchiMarkDeviceAsError.c)
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z @ 0x1C001F430 (-RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z.c)
 *     Template_ppqPR2TR2 @ 0x1C001F8BC (Template_ppqPR2TR2.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0056C04 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00582B8 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C0058308 (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?AddDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z @ 0x1C0092338 (-AddDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z.c)
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
  unsigned int v13; // r14d
  __int64 v16; // r8
  unsigned int v17; // eax
  union _LARGE_INTEGER v18; // rax
  struct VIDMM_ALLOC *v19; // rdx
  unsigned int v20; // edi
  struct _D3DDDI_ALLOCATIONLIST *v21; // r15
  struct VIDMM_ALLOC **v22; // r13
  VIDMM_SEGMENT *v23; // r9
  struct DXGALLOCATION *v24; // r12
  struct VIDMM_ALLOC *v25; // r12
  __int64 v26; // r14
  _DWORD *v27; // rax
  __int64 v28; // rcx
  struct _VIDMM_PRIMARIES_REFERENCES *i; // rcx
  struct _VIDMM_PRIMARIES_REFERENCES *v30; // rdx
  unsigned __int64 *v31; // r13
  unsigned int v32; // r8d
  __int64 v33; // rax
  int v34; // r12d
  __int64 v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rdi
  struct VIDMM_ALLOC *v43; // r14
  UINT v44; // edi
  __int64 v45; // rax
  _QWORD *v46; // rax
  unsigned int v47; // ebx
  unsigned int v48; // esi
  unsigned __int64 *v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rax
  int v63; // eax
  _DWORD *v64; // rdx
  __int64 v65; // rax
  int v66; // r9d
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rcx
  int v70; // edi
  PRKPROCESS **v71; // rcx
  __int64 v72; // r9
  __int64 v73; // rax
  _QWORD *v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  int v79; // eax
  union _LARGE_INTEGER *v80; // rcx
  union _LARGE_INTEGER v81; // r14
  signed int v82; // r15d
  unsigned int v83; // edi
  __int64 v85; // rdi
  _QWORD *v86; // rax
  __int64 v87; // rax
  union _LARGE_INTEGER v88; // r12
  union _LARGE_INTEGER v89; // r14
  __int64 v90; // r15
  __int64 j; // rsi
  __int64 v92; // rdx
  __int64 v93; // r8
  int *v94; // r9
  signed __int32 v95[8]; // [rsp+0h] [rbp-398h] BYREF
  __int64 v96; // [rsp+28h] [rbp-370h]
  unsigned int v97; // [rsp+40h] [rbp-358h]
  int v98; // [rsp+44h] [rbp-354h]
  VIDMM_SEGMENT *v99; // [rsp+48h] [rbp-350h]
  struct VIDMM_ALLOC *v100; // [rsp+50h] [rbp-348h]
  unsigned __int64 *p_QuadPart; // [rsp+58h] [rbp-340h]
  VIDMM_SEGMENT *v102; // [rsp+60h] [rbp-338h]
  struct VIDMM_ALLOC **QuadPart; // [rsp+68h] [rbp-330h]
  __int64 v104; // [rsp+70h] [rbp-328h]
  int v105; // [rsp+78h] [rbp-320h]
  int v106; // [rsp+7Ch] [rbp-31Ch]
  unsigned int v107; // [rsp+80h] [rbp-318h]
  struct VIDMM_ALLOC *v108; // [rsp+88h] [rbp-310h]
  unsigned int *v109; // [rsp+90h] [rbp-308h]
  union _LARGE_INTEGER *v110; // [rsp+98h] [rbp-300h]
  __int64 v111; // [rsp+A0h] [rbp-2F8h]
  struct _VIDMM_PRIMARIES_REFERENCES *v112; // [rsp+A8h] [rbp-2F0h]
  struct DXGPROCESSVIDMMLOCK *v113; // [rsp+B0h] [rbp-2E8h]
  __int64 v114; // [rsp+B8h] [rbp-2E0h]
  unsigned int v115; // [rsp+C0h] [rbp-2D8h]
  struct DXGALLOCATION **v116; // [rsp+C8h] [rbp-2D0h]
  __int64 v117; // [rsp+D0h] [rbp-2C8h]
  struct VIDMM_ALLOC **v118; // [rsp+D8h] [rbp-2C0h]
  unsigned __int64 *v119; // [rsp+E0h] [rbp-2B8h]
  __int64 v120; // [rsp+E8h] [rbp-2B0h]
  struct _VIDMM_PRIMARIES_REFERENCES *v121; // [rsp+F0h] [rbp-2A8h]
  struct _VIDMM_PRIMARIES_REFERENCES *v122; // [rsp+F8h] [rbp-2A0h]
  __int64 v123; // [rsp+100h] [rbp-298h]
  struct _KTHREAD *CurrentThread; // [rsp+108h] [rbp-290h]
  struct _KTHREAD *v125; // [rsp+110h] [rbp-288h]
  struct _KAPC_STATE ApcState; // [rsp+118h] [rbp-280h] BYREF
  _BYTE v127[512]; // [rsp+150h] [rbp-248h] BYREF

  v13 = a4;
  v107 = a4;
  v109 = a7;
  v110 = a8;
  p_QuadPart = (unsigned __int64 *)&a9->QuadPart;
  v119 = (unsigned __int64 *)&a9->QuadPart;
  v113 = a10;
  v118 = a11;
  v112 = a12;
  v116 = a13;
  v97 = 0;
  v100 = 0LL;
  QuadPart = (struct VIDMM_ALLOC **)a2[13].QuadPart;
  v102 = (VIDMM_SEGMENT *)a2[14].QuadPart;
  DXGPROCESS::GetCurrent();
  v16 = *(_QWORD *)(a2[17].QuadPart + 16);
  v114 = v16;
  v98 = 0;
  if ( a9 )
    *a9 = a2[12];
  *a11 = 0LL;
  ++*((_DWORD *)this + 1784);
  *((_DWORD *)this + 1785) += v13;
  v17 = *((_DWORD *)this + 1786);
  if ( v13 > v17 )
    v17 = v13;
  *((_DWORD *)this + 1786) = v17;
  a2[3].HighPart |= 4u;
  v18 = *(union _LARGE_INTEGER *)(*(_QWORD *)a2[17].QuadPart + 40LL);
  _InterlockedOr(v95, 0);
  a2[19] = v18;
  *(_DWORD *)a12 = 0;
  v111 = 0LL;
  v19 = 0LL;
  v108 = 0LL;
  v20 = 0;
  v97 = 0;
  v21 = a3;
  v22 = QuadPart;
  v23 = v102;
  while ( 1 )
  {
    v99 = v23;
    if ( v20 >= v13 )
      break;
    if ( !v21->hAllocation )
    {
      ++*((_DWORD *)this + 1787);
      *v22 = 0LL;
      *(_QWORD *)v23 = 0LL;
      *((_QWORD *)v23 + 1) = 0LL;
      *((_QWORD *)v23 + 2) = 0LL;
      goto LABEL_61;
    }
    v24 = v116[v20];
    if ( !v24 )
    {
      v78 = WdLogNewEntry5_WdError(v116, v19, v16, v23);
      *(_QWORD *)(v78 + 24) = v21->hAllocation;
      *(_QWORD *)(v78 + 32) = v20;
      WdLogEvent5_WdError(v78);
      v47 = -1071775468;
      v98 = -1071775468;
      v48 = a6;
      v49 = p_QuadPart;
LABEL_158:
      if ( !v49 && v20 )
      {
        do
        {
          if ( *--v22 )
            VIDMM_GLOBAL::RemoveDMAReferences(*v22, v48, v16);
          --v20;
        }
        while ( v20 );
      }
      return v47;
    }
    v25 = (struct VIDMM_ALLOC *)*((_QWORD *)v24 + 3);
    v100 = v25;
    v26 = **(_QWORD **)v25;
    v27 = *(_DWORD **)(v26 + 520);
    v28 = *v27 >> 14;
    if ( (*v27 & 0x4000) != 0 )
    {
      if ( v19 || (v21->Value & 1) == 0 )
      {
        v46 = (_QWORD *)WdLogNewEntry5_WdAssertion(v28, v19);
        v46[3] = v25;
        v46[4] = v108;
        v46[5] = v21->Value & 1;
        WdLogEvent5_WdAssertion(v46);
        v47 = -1071775482;
        v98 = -1071775482;
        v48 = a6;
        v49 = p_QuadPart;
        goto LABEL_158;
      }
      v108 = v25;
    }
    if ( *(_BYTE *)(v26 + 96) )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v28);
        v51 = WdLogNewEntry5_WdTrace(v50);
        *(_QWORD *)(v51 + 24) = a2;
        *(_QWORD *)(v51 + 32) = v25;
      }
      v47 = -1071775482;
      v98 = -1071775482;
      v48 = a6;
      v49 = p_QuadPart;
      goto LABEL_158;
    }
    if ( *((_QWORD *)v25 + 1) != v16 )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdError(v28, v19, v16, v23);
      v52[3] = v114;
      v52[4] = v25;
      v52[5] = v20;
      v52[6] = *((_QWORD *)v25 + 1);
      WdLogEvent5_WdError(v52);
      v47 = -1071775467;
      v98 = -1071775467;
      v48 = a6;
      v49 = p_QuadPart;
      goto LABEL_158;
    }
    if ( *(_WORD *)(*((_QWORD *)v25 + 12) + 4LL) && a5 )
    {
      if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
      {
        v57 = WdLogNewEntry5_WdAssertion(v54, v53);
        *(_QWORD *)(v57 + 24) = a2;
        *(_QWORD *)(v57 + 32) = v25;
        WdLogEvent5_WdAssertion(v57);
        v47 = -1071775466;
        v98 = -1071775466;
        v48 = a6;
        v49 = p_QuadPart;
        goto LABEL_158;
      }
      v58 = WdLogNewEntry5_WdError(v54, v53, v55, v56);
      *(_QWORD *)(v58 + 24) = a2;
      *(_QWORD *)(v58 + 32) = v25;
      WdLogEvent5_WdError(v58);
      v23 = v99;
    }
    *v22 = v25;
    *(_QWORD *)v23 = *(_QWORD *)(*((_QWORD *)v25 + 2) + 32LL);
    i = (struct _VIDMM_PRIMARIES_REFERENCES *)(v21->Value & 1);
    if ( (v21->Value & 1) != 0 )
    {
      if ( *((_BYTE *)v25 + 24) )
      {
        v120 = *((_QWORD *)this + 3);
        if ( *(int *)(v120 + 1944) >= 4608 )
        {
          v59 = WdLogNewEntry5_WdWarning(i, v19);
          WdLogEvent5_WdWarning(v59);
          v62 = WdLogNewEntry5_WdWarning(v61, v60);
          *(_QWORD *)(v62 + 24) = a2;
          *(_QWORD *)(v62 + 32) = v25;
          WdLogEvent5_WdWarning(v62);
          v47 = -1073741790;
          v98 = -1073741790;
          v48 = a6;
          v49 = p_QuadPart;
          goto LABEL_158;
        }
      }
    }
    v30 = (VIDMM_SEGMENT *)((char *)v23 + 8);
    *((_DWORD *)v23 + 2) = (unsigned int)i | *((_DWORD *)v23 + 2) & 0xFFFFFFFE;
    if ( (v21->Value & 1) != 0 )
      ++*((_DWORD *)this + 1788);
    if ( (*(_DWORD *)v30 & 1) != 0 && (**(_DWORD **)(v26 + 520) & 0x200000) != 0 )
      *((_DWORD *)v112 + 34) |= 1u;
    if ( (*(_DWORD *)v30 & 1) != 0 )
    {
      i = (struct _VIDMM_PRIMARIES_REFERENCES *)((**(_DWORD **)(v26 + 520) >> 23) | ((unsigned __int16)**(_DWORD **)(v26 + 520) | (unsigned __int16)((unsigned int)(**(_DWORD **)(v26 + 520) | (**(_DWORD **)(v26 + 520) >> 11)) >> 11)) & 0x100u);
      if ( (unsigned int)i >= 0x100 )
      {
        i = v112;
        if ( *(_DWORD *)v112 >= 0x10u )
        {
          ++*((_DWORD *)this + 1794);
        }
        else
        {
          _InterlockedIncrement((volatile signed __int32 *)v25 + 26);
          v25 = v100;
          *((_QWORD *)i + *(unsigned int *)i + 1) = v100;
          v23 = v102;
        }
        ++*(_DWORD *)i;
      }
    }
    v99 = *(VIDMM_SEGMENT **)(v26 + 136);
    v31 = p_QuadPart;
    if ( p_QuadPart )
      goto LABEL_23;
    if ( !v99 || (*((_DWORD *)this + 1616) & 0x40) != 0 )
    {
      v25 = v100;
      v23 = v102;
LABEL_23:
      ++*((_DWORD *)this + 1792);
      *(_DWORD *)v30 &= 0xFFFFFFC1;
      if ( v31 )
      {
        i = (struct _VIDMM_PRIMARIES_REFERENCES *)a2[17].QuadPart;
        v121 = i;
        if ( (*((_DWORD *)i + 8) & 0x20) != 0 )
        {
          v33 = *((_QWORD *)v25 + 18);
        }
        else
        {
          v122 = i;
          v32 = *((_DWORD *)i + 2);
          v115 = v32;
          v30 = (struct VIDMM_ALLOC *)((char *)v25 + 128);
          for ( i = (struct _VIDMM_PRIMARIES_REFERENCES *)*((_QWORD *)v25 + 16);
                i != v30;
                i = *(struct _VIDMM_PRIMARIES_REFERENCES **)i )
          {
            if ( ((*((_DWORD *)i + 10) >> 4) & 0x3F) == v32 )
            {
              v33 = *((_QWORD *)i + 9);
              goto LABEL_29;
            }
          }
          v33 = 0LL;
LABEL_29:
          v117 = v33;
        }
        *((_QWORD *)v23 + 2) = v33;
      }
      else
      {
        *((_QWORD *)v23 + 2) = 0LL;
      }
      a2[3].HighPart &= ~4u;
      if ( (VIDMM_GLOBAL::_Config & 1) != 0 )
        goto LABEL_55;
      v123 = *((_QWORD *)this + 3);
      if ( (*(_DWORD *)(v123 + 300) & 4) != 0 || !*(_BYTE *)(v26 + 97) && (*(_DWORD *)(v26 + 76) & 0x400) == 0 )
        goto LABEL_55;
      v34 = 0;
      v105 = 0;
      v35 = *(_QWORD *)(v26 + 320);
      KeEnterCriticalRegion();
      CurrentThread = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(v35 + 8) == CurrentThread )
      {
        if ( *(int *)(v35 + 24) <= 0 )
        {
          v65 = WdLogNewEntry5_WdAssertion(v37, v36);
          *(_QWORD *)(v65 + 24) = 351LL;
          WdLogEvent5_WdAssertion(v65);
        }
        ++*(_DWORD *)(v35 + 24);
      }
      else
      {
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v35 + 16, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v66 = *(_DWORD *)(v35 + 28);
            if ( v66 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              Template_q(v37, &EventBlockThread, v38, v66);
          }
          _InterlockedIncrement64((volatile signed __int64 *)v35);
          ExAcquirePushLockExclusiveEx(v35 + 16, 0LL);
        }
        if ( *(_QWORD *)(v35 + 8) )
        {
          v67 = WdLogNewEntry5_WdAssertion(v37, v36);
          *(_QWORD *)(v67 + 24) = 375LL;
          WdLogEvent5_WdAssertion(v67);
        }
        if ( *(_DWORD *)(v35 + 24) )
        {
          v68 = WdLogNewEntry5_WdAssertion(v37, v36);
          *(_QWORD *)(v68 + 24) = 376LL;
          WdLogEvent5_WdAssertion(v68);
        }
        *(_QWORD *)(v35 + 8) = KeGetCurrentThread();
        *(_DWORD *)(v35 + 24) = 1;
      }
      v111 = v26;
      v39 = *(_QWORD *)(v26 + 112);
      if ( v39 )
      {
        v45 = *(_QWORD *)(v39 + 8);
      }
      else if ( (*(_DWORD *)(v26 + 80) & 0x2000) != 0 )
      {
        v45 = *(_QWORD *)(v26 + 376);
      }
      else
      {
        v40 = *(_QWORD **)(v26 + 104);
        v36 = v40[3];
        if ( v36 )
        {
          v45 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v40[1] + 24LL) + 88LL))(*(_QWORD *)(v40[1] + 24LL));
        }
        else
        {
          v37 = v40[10];
          if ( !v37 )
          {
            v104 = 0LL;
            goto LABEL_46;
          }
          v45 = *(_QWORD *)(v37 + 8);
        }
      }
      v104 = v45;
      if ( !v45 )
      {
LABEL_46:
        if ( !*(_QWORD *)(v26 + 136)
          && (**(_DWORD **)(v26 + 520) & 0x40000000) == 0
          && (int)VIDMM_GLOBAL::ChargePinnedBackingStore(this, *(_QWORD *)(v26 + 8)) >= 0 )
        {
          if ( *(_QWORD *)v113 )
          {
            v69 = *(_QWORD *)v113 + 112LL;
            *(_QWORD *)(v69 + 8) = 0LL;
            ExReleasePushLockExclusiveEx(v69, 0LL);
            KeLeaveCriticalRegion();
          }
          v34 = 1;
          v105 = 1;
          v70 = 0;
          v106 = 0;
          v71 = *(PRKPROCESS ***)(v26 + 104);
          if ( v71 && v71 != *(PRKPROCESS ***)v100 )
          {
            KeStackAttachProcess(*v71[1], &ApcState);
            v70 = 1;
            v106 = 1;
          }
          if ( (int)VIDMM_GLOBAL::ProbeAndLockAllocation(
                      (VIDMM_GLOBAL *)v71,
                      *(struct _VIDMM_LOCAL_ALLOC **)(v26 + 104),
                      (struct _VIDMM_GLOBAL_ALLOC *)v26,
                      0LL,
                      *(_QWORD *)(v26 + 8),
                      (enum _LOCK_OPERATION)v96,
                      0LL,
                      0) < 0 )
          {
            v73 = WdLogNewEntry5_WdError(v37, v36, v38, v72);
            *(_QWORD *)(v73 + 24) = v26;
            WdLogEvent5_WdError(v73);
            VIDMM_GLOBAL::ReturnPinnedBackingStore(this, *(_QWORD *)(v26 + 8));
          }
          else
          {
            ++*(_DWORD *)(v26 + 348);
            *(_DWORD *)(v26 + 84) |= 2u;
          }
          if ( v70 )
            KeUnstackDetachProcess(&ApcState);
        }
      }
      v111 = 0LL;
      v41 = *(_QWORD *)(v26 + 320);
      v125 = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(v41 + 8) != v125 )
      {
        v74 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v37, v36, v38);
        v74[3] = 275LL;
        v74[4] = 4LL;
        v74[5] = v41;
        v74[6] = 0LL;
        v74[7] = 0LL;
        WdLogEvent5_WdCriticalError(v74);
      }
      if ( *(int *)(v41 + 24) <= 0 )
      {
        v75 = WdLogNewEntry5_WdAssertion(v37, v36);
        *(_QWORD *)(v75 + 24) = 395LL;
        WdLogEvent5_WdAssertion(v75);
      }
      if ( (*(_DWORD *)(v41 + 24))-- == 1 )
      {
        *(_QWORD *)(v41 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v41 + 16, 0LL);
      }
      KeLeaveCriticalRegion();
      if ( v34 )
      {
        i = *(struct _VIDMM_PRIMARIES_REFERENCES **)v113;
        if ( *(_QWORD *)v113 )
          DXGPUSHLOCK::AcquireExclusive((struct _VIDMM_PRIMARIES_REFERENCES *)((char *)i + 112));
      }
      goto LABEL_54;
    }
    ++*((_DWORD *)this + 1791);
    v63 = VIDMM_SEGMENT::DriverId(v99);
    *v64 ^= (*v64 ^ (2 * v63)) & 0x3E;
    v30 = (struct _VIDMM_PRIMARIES_REFERENCES *)(*(_QWORD *)(v26 + 144) + *((_QWORD *)v99 + 3));
    *((_QWORD *)v102 + 2) = v30;
LABEL_54:
    v25 = v100;
LABEL_55:
    if ( !v31 )
      VIDMM_GLOBAL::AddDMAReferences(v25, a6);
    v43 = v100;
    if ( !*((_DWORD *)v25 + 38) && (*((_BYTE *)v100 + 25) & 1) == 0 )
    {
      if ( (*((_BYTE *)this + 40872) & 2) == 0
        || (i = (struct _VIDMM_PRIMARIES_REFERENCES *)*(unsigned int *)(*((_QWORD *)this + 3) + 300LL),
            ((unsigned __int8)i & 0x10) == 0) )
      {
        v76 = WdLogNewEntry5_WdAssertion(i, v30);
        *(_QWORD *)(v76 + 24) = v43;
        WdLogEvent5_WdAssertion(v76);
        v47 = -1073741823;
        v98 = -1073741823;
        VidSchiMarkDeviceAsError(*(_QWORD *)(*((_QWORD *)v43 + 1) + 32LL), 16);
        v48 = a6;
        if ( !v31 )
          VIDMM_GLOBAL::RemoveDMAReferences(v43, a6, v16);
        v20 = v97;
        v22 = QuadPart;
        v49 = p_QuadPart;
        goto LABEL_158;
      }
    }
    v21 = a3;
    v44 = (a3->Value >> 2) & 7;
    if ( v44 )
    {
      v77 = WdLogNewEntry5_WdAssertion(i, v30);
      *(_QWORD *)(v77 + 24) = v43;
      *(_QWORD *)(v77 + 32) = v44;
      WdLogEvent5_WdAssertion(v77);
    }
    v20 = v97;
    v22 = QuadPart;
    v23 = v102;
    v13 = v107;
    v19 = v108;
    v16 = v114;
LABEL_61:
    QuadPart = ++v22;
    a3 = ++v21;
    v23 = (VIDMM_SEGMENT *)((char *)v23 + 24);
    v102 = v23;
    v97 = ++v20;
  }
  *v118 = v19;
  if ( a2[8].QuadPart )
  {
    v99 = *(VIDMM_SEGMENT **)(a2[7].QuadPart + 136);
    if ( !v99 || (*((_DWORD *)this + 1616) & 0x40) != 0 )
    {
      ++*((_DWORD *)this + 1792);
      a2[3].HighPart &= ~4u;
      *v109 = 0;
      v80 = v110;
      v110->QuadPart = 0LL;
    }
    else
    {
      ++*((_DWORD *)this + 1791);
      if ( (*((_DWORD *)v99 + 20) & 0x1000) != 0 )
        v79 = 0;
      else
        v79 = *((_DWORD *)v99 + 4) + 1;
      *v109 = v79;
      v19 = (struct VIDMM_ALLOC *)(*((_QWORD *)v99 + 3) + *(_QWORD *)(a2[7].QuadPart + 144));
      v80 = v110;
      v110->QuadPart = (LONGLONG)v19;
    }
    v81 = a2[8];
    v82 = a6;
    if ( a6 + *(_DWORD *)(v81.QuadPart + 156) == 0x7FFFFFFF )
    {
      v85 = *(int *)(v81.QuadPart + 156);
      v86 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v80, v19, v16);
      v86[3] = 270LL;
      v86[4] = 41LL;
      v86[5] = v81.QuadPart;
      v86[6] = v85;
      v86[7] = 0LL;
      WdLogEvent5_WdCriticalError(v86);
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)(v81.QuadPart + 156), a6);
  }
  else
  {
    *v109 = 0;
    *v110 = a2[11];
    v82 = a6;
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)&a2[4], v82);
  if ( v82 > 1 )
    a2[3].HighPart |= 2u;
  v83 = v97;
  if ( !p_QuadPart )
    a2[18].LowPart = v97;
  a2[2].LowPart = v82;
  if ( (a2[3].HighPart & 4) != 0 )
  {
    v87 = *(_QWORD *)(*(_QWORD *)a2[17].QuadPart + 40LL);
    _InterlockedOr(v95, 0);
    v83 = v97;
    if ( a2[19].QuadPart == v87 )
      ++*((_DWORD *)this + 1793);
  }
  if ( (qword_1C003C050 & 4) != 0 )
  {
    v88 = a2[14];
    v89 = a2[13];
    v90 = *(_QWORD *)(a2[17].QuadPart + 24);
    for ( j = 0LL; (unsigned int)j < v83; j = (unsigned int)(j + 128) )
    {
      v92 = 128LL;
      if ( v83 - (unsigned int)j < 0x80 )
        v92 = v83 - (unsigned int)j;
      v93 = 0LL;
      if ( (_DWORD)v92 )
      {
        v94 = (int *)v127;
        do
        {
          *v94 = *(_DWORD *)(v88.QuadPart + 24LL * (unsigned int)(v93 + j) + 8) & 1;
          v93 = (unsigned int)(v93 + 1);
          ++v94;
        }
        while ( (unsigned int)v93 < (unsigned int)v92 );
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      {
        LODWORD(v96) = v92;
        Template_ppqPR2TR2(v89.QuadPart + 8 * j, v92, v93, v90, a2, v96, v89.QuadPart + 8 * j, v127);
      }
    }
  }
  return 0LL;
}
