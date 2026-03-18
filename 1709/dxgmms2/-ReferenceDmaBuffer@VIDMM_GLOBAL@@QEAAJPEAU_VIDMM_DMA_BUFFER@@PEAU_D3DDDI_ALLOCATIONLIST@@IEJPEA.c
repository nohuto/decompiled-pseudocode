/*
 * XREFs of ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAVDXGPROCESSVIDMMLOCK@@PEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0065080
 * Callers:
 *     ?VidMmReferenceDmaBuffer@@YAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAVDXGPROCESSVIDMMLOCK@@PEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0002220 (-VidMmReferenceDmaBuffer@@YAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARG.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001798 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002090 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F1F0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     VidSchiMarkDeviceAsError @ 0x1C000F4C8 (VidSchiMarkDeviceAsError.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z @ 0x1C002148C (-RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z.c)
 *     McTemplateK0ppqPR2TR2 @ 0x1C0021984 (McTemplateK0ppqPR2TR2.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C00599E0 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C005B3AC (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C005B3FC (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?AddDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z @ 0x1C0099BA8 (-AddDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z.c)
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
  unsigned int v13; // esi
  __int64 v16; // r8
  unsigned int v17; // eax
  union _LARGE_INTEGER v18; // rax
  struct VIDMM_ALLOC *v19; // rdx
  unsigned int v20; // edi
  struct _D3DDDI_ALLOCATIONLIST *v21; // r15
  struct VIDMM_ALLOC **v22; // r12
  VIDMM_SEGMENT *v23; // r9
  struct DXGALLOCATION *v24; // r13
  struct VIDMM_ALLOC *v25; // r13
  __int64 v26; // rsi
  _DWORD *v27; // rax
  __int64 v28; // rcx
  struct _VIDMM_PRIMARIES_REFERENCES *i; // rcx
  struct _VIDMM_PRIMARIES_REFERENCES *v30; // rdx
  unsigned __int64 *v31; // r15
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
  struct VIDMM_ALLOC *v43; // rsi
  UINT v44; // edi
  __int64 v45; // rax
  int v46; // r9d
  _QWORD *v47; // rax
  unsigned int v48; // ebx
  unsigned int v49; // r14d
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
  __int64 v60; // rcx
  __int64 v61; // rax
  int v62; // eax
  _DWORD *v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rcx
  int v68; // edi
  PRKPROCESS **v69; // rcx
  __int64 v70; // r9
  __int64 v71; // rax
  _QWORD *v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  int v77; // eax
  union _LARGE_INTEGER *v78; // rcx
  union _LARGE_INTEGER v79; // rsi
  signed int v80; // r15d
  unsigned int v81; // edi
  __int64 v83; // rdi
  _QWORD *v84; // rax
  __int64 v85; // rax
  union _LARGE_INTEGER v86; // r12
  union _LARGE_INTEGER v87; // r14
  __int64 v88; // r15
  __int64 j; // rsi
  __int64 v90; // rdx
  __int64 v91; // r8
  int *v92; // r9
  signed __int32 v93[8]; // [rsp+0h] [rbp-398h] BYREF
  __int64 v94; // [rsp+28h] [rbp-370h]
  unsigned int v95; // [rsp+40h] [rbp-358h]
  int v96; // [rsp+44h] [rbp-354h]
  VIDMM_SEGMENT *v97; // [rsp+48h] [rbp-350h]
  unsigned __int64 *p_QuadPart; // [rsp+50h] [rbp-348h]
  struct VIDMM_ALLOC *v99; // [rsp+58h] [rbp-340h]
  VIDMM_SEGMENT *v100; // [rsp+60h] [rbp-338h]
  struct VIDMM_ALLOC **QuadPart; // [rsp+68h] [rbp-330h]
  int v102; // [rsp+70h] [rbp-328h]
  int v103; // [rsp+74h] [rbp-324h]
  unsigned int v104; // [rsp+78h] [rbp-320h]
  __int64 v105; // [rsp+80h] [rbp-318h]
  struct VIDMM_ALLOC *v106; // [rsp+88h] [rbp-310h]
  unsigned int *v107; // [rsp+90h] [rbp-308h]
  union _LARGE_INTEGER *v108; // [rsp+98h] [rbp-300h]
  __int64 v109; // [rsp+A0h] [rbp-2F8h]
  struct _VIDMM_PRIMARIES_REFERENCES *v110; // [rsp+A8h] [rbp-2F0h]
  struct DXGPROCESSVIDMMLOCK *v111; // [rsp+B0h] [rbp-2E8h]
  __int64 v112; // [rsp+B8h] [rbp-2E0h]
  unsigned int v113; // [rsp+C0h] [rbp-2D8h]
  struct DXGALLOCATION **v114; // [rsp+C8h] [rbp-2D0h]
  __int64 v115; // [rsp+D0h] [rbp-2C8h]
  struct VIDMM_ALLOC **v116; // [rsp+D8h] [rbp-2C0h]
  unsigned __int64 *v117; // [rsp+E0h] [rbp-2B8h]
  __int64 v118; // [rsp+E8h] [rbp-2B0h]
  struct _VIDMM_PRIMARIES_REFERENCES *v119; // [rsp+F0h] [rbp-2A8h]
  struct _VIDMM_PRIMARIES_REFERENCES *v120; // [rsp+F8h] [rbp-2A0h]
  __int64 v121; // [rsp+100h] [rbp-298h]
  struct _KTHREAD *CurrentThread; // [rsp+108h] [rbp-290h]
  struct _KTHREAD *v123; // [rsp+110h] [rbp-288h]
  struct _KAPC_STATE ApcState; // [rsp+118h] [rbp-280h] BYREF
  _BYTE v125[512]; // [rsp+150h] [rbp-248h] BYREF

  v13 = a4;
  v104 = a4;
  v107 = a7;
  v108 = a8;
  p_QuadPart = (unsigned __int64 *)&a9->QuadPart;
  v117 = (unsigned __int64 *)&a9->QuadPart;
  v111 = a10;
  v116 = a11;
  v110 = a12;
  v114 = a13;
  v95 = 0;
  QuadPart = (struct VIDMM_ALLOC **)a2[13].QuadPart;
  v100 = (VIDMM_SEGMENT *)a2[14].QuadPart;
  DXGPROCESS::GetCurrent();
  v16 = *(_QWORD *)(a2[17].QuadPart + 16);
  v112 = v16;
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
  _InterlockedOr(v93, 0);
  a2[19] = v18;
  *(_DWORD *)a12 = 0;
  v109 = 0LL;
  v19 = 0LL;
  v106 = 0LL;
  v20 = 0;
  v95 = 0;
  v21 = a3;
  v22 = QuadPart;
  v23 = v100;
  while ( 1 )
  {
    v97 = v23;
    if ( v20 >= v13 )
      break;
    if ( !v21->hAllocation )
    {
      ++*((_DWORD *)this + 1787);
      *v22 = 0LL;
      *(_QWORD *)v23 = 0LL;
      *((_QWORD *)v23 + 1) = 0LL;
      *((_QWORD *)v23 + 2) = 0LL;
      goto LABEL_60;
    }
    v24 = v114[v20];
    if ( !v24 )
    {
      v76 = WdLogNewEntry5_WdError(v114, v19, v16, v23);
      *(_QWORD *)(v76 + 24) = v21->hAllocation;
      *(_QWORD *)(v76 + 32) = v20;
      WdLogEvent5_WdError(v76);
      v48 = -1071775468;
      v96 = -1071775468;
      v49 = a6;
      v31 = p_QuadPart;
LABEL_157:
      if ( !v31 && v20 )
      {
        do
        {
          if ( *--v22 )
            VIDMM_GLOBAL::RemoveDMAReferences(*v22, v49, v16);
          --v20;
        }
        while ( v20 );
      }
      return v48;
    }
    v25 = (struct VIDMM_ALLOC *)*((_QWORD *)v24 + 3);
    v99 = v25;
    v26 = **(_QWORD **)v25;
    v27 = *(_DWORD **)(v26 + 504);
    v28 = *v27 >> 14;
    if ( (*v27 & 0x4000) != 0 )
    {
      if ( v19 || (v21->Value & 1) == 0 )
      {
        v47 = (_QWORD *)WdLogNewEntry5_WdAssertion(v28, v19);
        v47[3] = v25;
        v47[4] = v106;
        v47[5] = v21->Value & 1;
        WdLogEvent5_WdAssertion(v47);
        v48 = -1071775482;
        v96 = -1071775482;
        v49 = a6;
        v31 = p_QuadPart;
        goto LABEL_157;
      }
      v106 = v25;
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
      v48 = -1071775482;
      v96 = -1071775482;
      v49 = a6;
      v31 = p_QuadPart;
      goto LABEL_157;
    }
    if ( *((_QWORD *)v25 + 1) != v16 )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdError(v28, v19, v16, v23);
      v52[3] = v112;
      v52[4] = v25;
      v52[5] = v20;
      v52[6] = *((_QWORD *)v25 + 1);
      WdLogEvent5_WdError(v52);
      v48 = -1071775467;
      v96 = -1071775467;
      v49 = a6;
      v31 = p_QuadPart;
      goto LABEL_157;
    }
    if ( *(_WORD *)(*((_QWORD *)v25 + 12) + 4LL) && a5 )
    {
      if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
      {
        v57 = WdLogNewEntry5_WdAssertion(v54, v53);
        *(_QWORD *)(v57 + 24) = a2;
        *(_QWORD *)(v57 + 32) = v25;
        WdLogEvent5_WdAssertion(v57);
        v48 = -1071775466;
        v96 = -1071775466;
        v49 = a6;
        v31 = p_QuadPart;
        goto LABEL_157;
      }
      v58 = WdLogNewEntry5_WdError(v54, v53, v55, v56);
      *(_QWORD *)(v58 + 24) = a2;
      *(_QWORD *)(v58 + 32) = v25;
      WdLogEvent5_WdError(v58);
      v23 = v97;
    }
    *v22 = v25;
    *(_QWORD *)v23 = *(_QWORD *)(*((_QWORD *)v25 + 2) + 32LL);
    i = (struct _VIDMM_PRIMARIES_REFERENCES *)(v21->Value & 1);
    if ( (v21->Value & 1) != 0 )
    {
      if ( *((_BYTE *)v25 + 24) )
      {
        v118 = *((_QWORD *)this + 3);
        if ( *(int *)(v118 + 1968) >= 4608 )
        {
          v59 = WdLogNewEntry5_WdWarning(i);
          WdLogEvent5_WdWarning(v59);
          v61 = WdLogNewEntry5_WdWarning(v60);
          *(_QWORD *)(v61 + 24) = a2;
          *(_QWORD *)(v61 + 32) = v25;
          WdLogEvent5_WdWarning(v61);
          v48 = -1073741790;
          v96 = -1073741790;
          v49 = a6;
          v31 = p_QuadPart;
          goto LABEL_157;
        }
      }
    }
    v30 = (VIDMM_SEGMENT *)((char *)v23 + 8);
    *((_DWORD *)v23 + 2) = (unsigned int)i | *((_DWORD *)v23 + 2) & 0xFFFFFFFE;
    if ( (v21->Value & 1) != 0 )
      ++*((_DWORD *)this + 1788);
    if ( (*(_DWORD *)v30 & 1) != 0 && (**(_DWORD **)(v26 + 504) & 0x200000) != 0 )
      *((_DWORD *)v110 + 34) |= 1u;
    if ( (*(_DWORD *)v30 & 1) != 0 )
    {
      i = (struct _VIDMM_PRIMARIES_REFERENCES *)((**(_DWORD **)(v26 + 504) >> 23) | ((unsigned __int16)**(_DWORD **)(v26 + 504) | (unsigned __int16)((unsigned int)(**(_DWORD **)(v26 + 504) | (**(_DWORD **)(v26 + 504) >> 11)) >> 11)) & 0x100u);
      if ( (unsigned int)i >= 0x100 )
      {
        i = v110;
        if ( *(_DWORD *)v110 >= 0x10u )
        {
          ++*((_DWORD *)this + 1794);
        }
        else
        {
          _InterlockedIncrement((volatile signed __int32 *)v25 + 26);
          v25 = v99;
          *((_QWORD *)i + *(unsigned int *)i + 1) = v99;
          v23 = v100;
        }
        ++*(_DWORD *)i;
      }
    }
    v97 = *(VIDMM_SEGMENT **)(v26 + 136);
    v31 = p_QuadPart;
    if ( p_QuadPart )
      goto LABEL_23;
    if ( !v97 || (*((_DWORD *)this + 1616) & 0x40) != 0 )
    {
      v25 = v99;
      v23 = v100;
LABEL_23:
      ++*((_DWORD *)this + 1792);
      *(_DWORD *)v30 &= 0xFFFFFFC1;
      if ( v31 )
      {
        i = (struct _VIDMM_PRIMARIES_REFERENCES *)a2[17].QuadPart;
        v119 = i;
        if ( (*((_DWORD *)i + 8) & 0x20) != 0 )
        {
          v33 = *((_QWORD *)v25 + 18);
        }
        else
        {
          v120 = i;
          v32 = *((_DWORD *)i + 2);
          v113 = v32;
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
          v115 = v33;
        }
        *((_QWORD *)v23 + 2) = v33;
      }
      else
      {
        *((_QWORD *)v23 + 2) = 0LL;
      }
      a2[3].HighPart &= ~4u;
      if ( (VIDMM_GLOBAL::_Config & 1) != 0 )
        goto LABEL_54;
      v121 = *((_QWORD *)this + 3);
      if ( (*(_DWORD *)(v121 + 300) & 4) != 0 || !*(_BYTE *)(v26 + 97) && (*(_DWORD *)(v26 + 76) & 0x400) == 0 )
        goto LABEL_54;
      v34 = 0;
      v102 = 0;
      v35 = *(_QWORD *)(v26 + 320);
      KeEnterCriticalRegion();
      CurrentThread = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(v35 + 8) == CurrentThread )
      {
        if ( *(int *)(v35 + 24) <= 0 )
        {
          v64 = WdLogNewEntry5_WdAssertion(v37, v36);
          *(_QWORD *)(v64 + 24) = 362LL;
          WdLogEvent5_WdAssertion(v64);
        }
        ++*(_DWORD *)(v35 + 24);
      }
      else
      {
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v35 + 16, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v46 = *(_DWORD *)(v35 + 28);
            if ( v46 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v37, (__int64)&EventBlockThread, v38, v46);
          }
          _InterlockedIncrement64((volatile signed __int64 *)v35);
          ExAcquirePushLockExclusiveEx(v35 + 16, 0LL);
        }
        if ( *(_QWORD *)(v35 + 8) )
        {
          v65 = WdLogNewEntry5_WdAssertion(v37, v36);
          *(_QWORD *)(v65 + 24) = 386LL;
          WdLogEvent5_WdAssertion(v65);
        }
        if ( *(_DWORD *)(v35 + 24) )
        {
          v66 = WdLogNewEntry5_WdAssertion(v37, v36);
          *(_QWORD *)(v66 + 24) = 387LL;
          WdLogEvent5_WdAssertion(v66);
        }
        *(_QWORD *)(v35 + 8) = KeGetCurrentThread();
        *(_DWORD *)(v35 + 24) = 1;
      }
      v109 = v26;
      v39 = *(_QWORD *)(v26 + 112);
      if ( v39 )
      {
        v45 = *(_QWORD *)(v39 + 8);
      }
      else if ( (*(_DWORD *)(v26 + 80) & 0x3000) != 0 )
      {
        v45 = *(_QWORD *)(v26 + 512);
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
            goto LABEL_45;
          v45 = *(_QWORD *)(v37 + 8);
        }
      }
      v105 = v45;
      if ( !v45 )
      {
LABEL_45:
        if ( !*(_QWORD *)(v26 + 136)
          && (**(_DWORD **)(v26 + 504) & 0x40000000) == 0
          && (int)VIDMM_GLOBAL::ChargePinnedBackingStore(this, *(_QWORD *)(v26 + 8)) >= 0 )
        {
          if ( *(_QWORD *)v111 )
          {
            v67 = *(_QWORD *)v111 + 136LL;
            *(_QWORD *)(v67 + 8) = 0LL;
            ExReleasePushLockExclusiveEx(v67, 0LL);
            KeLeaveCriticalRegion();
          }
          v34 = 1;
          v102 = 1;
          v68 = 0;
          v103 = 0;
          v69 = *(PRKPROCESS ***)(v26 + 104);
          if ( v69 && v69 != *(PRKPROCESS ***)v99 )
          {
            KeStackAttachProcess(*v69[1], &ApcState);
            v68 = 1;
            v103 = 1;
          }
          if ( (int)VIDMM_GLOBAL::ProbeAndLockAllocation(
                      (VIDMM_GLOBAL *)v69,
                      *(struct _VIDMM_LOCAL_ALLOC **)(v26 + 104),
                      (struct _VIDMM_GLOBAL_ALLOC *)v26,
                      0LL,
                      *(_QWORD *)(v26 + 8),
                      (enum _LOCK_OPERATION)v94,
                      0LL,
                      0) < 0 )
          {
            v71 = WdLogNewEntry5_WdError(v37, v36, v38, v70);
            *(_QWORD *)(v71 + 24) = v26;
            WdLogEvent5_WdError(v71);
            VIDMM_GLOBAL::ReturnPinnedBackingStore(this, *(_QWORD *)(v26 + 8));
          }
          else
          {
            ++*(_DWORD *)(v26 + 348);
            *(_DWORD *)(v26 + 84) |= 2u;
          }
          if ( v68 )
            KeUnstackDetachProcess(&ApcState);
        }
      }
      v109 = 0LL;
      v41 = *(_QWORD *)(v26 + 320);
      v123 = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(v41 + 8) != v123 )
      {
        v72 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v37, v36, v38);
        v72[3] = 275LL;
        v72[4] = 4LL;
        v72[5] = v41;
        v72[6] = 0LL;
        v72[7] = 0LL;
        WdLogEvent5_WdCriticalError(v72);
      }
      if ( *(int *)(v41 + 24) <= 0 )
      {
        v73 = WdLogNewEntry5_WdAssertion(v37, v36);
        *(_QWORD *)(v73 + 24) = 406LL;
        WdLogEvent5_WdAssertion(v73);
      }
      if ( (*(_DWORD *)(v41 + 24))-- == 1 )
      {
        *(_QWORD *)(v41 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v41 + 16, 0LL);
      }
      KeLeaveCriticalRegion();
      if ( v34 )
      {
        i = *(struct _VIDMM_PRIMARIES_REFERENCES **)v111;
        if ( *(_QWORD *)v111 )
          DXGPUSHLOCK::AcquireExclusive((struct _VIDMM_PRIMARIES_REFERENCES *)((char *)i + 136));
      }
      goto LABEL_53;
    }
    ++*((_DWORD *)this + 1791);
    v62 = VIDMM_SEGMENT::DriverId(v97);
    *v63 ^= (*v63 ^ (2 * v62)) & 0x3E;
    v30 = (struct _VIDMM_PRIMARIES_REFERENCES *)(*(_QWORD *)(v26 + 144) + *((_QWORD *)v97 + 3));
    *((_QWORD *)v100 + 2) = v30;
LABEL_53:
    v25 = v99;
LABEL_54:
    if ( !v31 )
      VIDMM_GLOBAL::AddDMAReferences(v25, a6);
    v43 = v99;
    if ( !*((_DWORD *)v25 + 38) && (*((_BYTE *)v99 + 25) & 1) == 0 )
    {
      if ( (*((_BYTE *)this + 40872) & 2) == 0
        || (i = (struct _VIDMM_PRIMARIES_REFERENCES *)*(unsigned int *)(*((_QWORD *)this + 3) + 300LL),
            ((unsigned __int8)i & 0x10) == 0) )
      {
        v74 = WdLogNewEntry5_WdAssertion(i, v30);
        *(_QWORD *)(v74 + 24) = v43;
        WdLogEvent5_WdAssertion(v74);
        v48 = -1073741823;
        v96 = -1073741823;
        VidSchiMarkDeviceAsError(*(_QWORD *)(*((_QWORD *)v43 + 1) + 32LL), 16);
        v49 = a6;
        if ( !v31 )
          VIDMM_GLOBAL::RemoveDMAReferences(v43, a6, v16);
        v20 = v95;
        v22 = QuadPart;
        goto LABEL_157;
      }
    }
    v21 = a3;
    v44 = (a3->Value >> 2) & 7;
    if ( v44 )
    {
      v75 = WdLogNewEntry5_WdAssertion(i, v30);
      *(_QWORD *)(v75 + 24) = v43;
      *(_QWORD *)(v75 + 32) = v44;
      WdLogEvent5_WdAssertion(v75);
    }
    v20 = v95;
    v22 = QuadPart;
    v23 = v100;
    v13 = v104;
    v19 = v106;
    v16 = v112;
LABEL_60:
    QuadPart = ++v22;
    a3 = ++v21;
    v23 = (VIDMM_SEGMENT *)((char *)v23 + 24);
    v100 = v23;
    v95 = ++v20;
  }
  *v116 = v19;
  if ( a2[8].QuadPart )
  {
    v97 = *(VIDMM_SEGMENT **)(a2[7].QuadPart + 136);
    if ( !v97 || (*((_DWORD *)this + 1616) & 0x40) != 0 )
    {
      ++*((_DWORD *)this + 1792);
      a2[3].HighPart &= ~4u;
      *v107 = 0;
      v78 = v108;
      v108->QuadPart = 0LL;
    }
    else
    {
      ++*((_DWORD *)this + 1791);
      if ( (*((_DWORD *)v97 + 20) & 0x1000) != 0 )
        v77 = 0;
      else
        v77 = *((_DWORD *)v97 + 4) + 1;
      *v107 = v77;
      v19 = (struct VIDMM_ALLOC *)(*((_QWORD *)v97 + 3) + *(_QWORD *)(a2[7].QuadPart + 144));
      v78 = v108;
      v108->QuadPart = (LONGLONG)v19;
    }
    v79 = a2[8];
    v80 = a6;
    if ( a6 + *(_DWORD *)(v79.QuadPart + 156) == 0x7FFFFFFF )
    {
      v83 = *(int *)(v79.QuadPart + 156);
      v84 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v78, v19, v16);
      v84[3] = 270LL;
      v84[4] = 41LL;
      v84[5] = v79.QuadPart;
      v84[6] = v83;
      v84[7] = 0LL;
      WdLogEvent5_WdCriticalError(v84);
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)(v79.QuadPart + 156), a6);
  }
  else
  {
    *v107 = 0;
    *v108 = a2[11];
    v80 = a6;
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)&a2[4], v80);
  if ( v80 > 1 )
    a2[3].HighPart |= 2u;
  v81 = v95;
  if ( !p_QuadPart )
    a2[18].LowPart = v95;
  a2[2].LowPart = v80;
  if ( (a2[3].HighPart & 4) != 0 )
  {
    v85 = *(_QWORD *)(*(_QWORD *)a2[17].QuadPart + 40LL);
    _InterlockedOr(v93, 0);
    v81 = v95;
    if ( a2[19].QuadPart == v85 )
      ++*((_DWORD *)this + 1793);
  }
  if ( (qword_1C0040010 & 4) != 0 )
  {
    v86 = a2[14];
    v87 = a2[13];
    v88 = *(_QWORD *)(a2[17].QuadPart + 24);
    for ( j = 0LL; (unsigned int)j < v81; j = (unsigned int)(j + 128) )
    {
      v90 = 128LL;
      if ( v81 - (unsigned int)j < 0x80 )
        v90 = v81 - (unsigned int)j;
      v91 = 0LL;
      if ( (_DWORD)v90 )
      {
        v92 = (int *)v125;
        do
        {
          *v92 = *(_DWORD *)(v86.QuadPart + 24LL * (unsigned int)(v91 + j) + 8) & 1;
          v91 = (unsigned int)(v91 + 1);
          ++v92;
        }
        while ( (unsigned int)v91 < (unsigned int)v90 );
      }
      if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      {
        LODWORD(v94) = v90;
        McTemplateK0ppqPR2TR2(v87.QuadPart + 8 * j, v90, v91, v88, a2, v94, v87.QuadPart + 8 * j, v125);
      }
    }
  }
  return 0LL;
}
