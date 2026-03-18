/*
 * XREFs of ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x1C00DC860
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00DB900 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B960 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00136D0 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00136F8 (-ReleaseExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?DxgkTryReferenceDxgResource@@YAEPEAVDXGRESOURCE@@@Z @ 0x1C00871D0 (-DxgkTryReferenceDxgResource@@YAEPEAVDXGRESOURCE@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00871E4 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0087220 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C0095DE0 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C009F570 (-DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00CAD84 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00CADD0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00CCDB0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00CCF10 (-DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall ValidateDestroyAllocation(
        struct _KTHREAD **a1,
        struct DXGDEVICE *a2,
        unsigned int a3,
        struct _EX_RUNDOWN_REF *a4,
        unsigned int a5,
        struct _EX_RUNDOWN_REF **a6,
        struct DXGRESOURCE **a7)
{
  __int64 v8; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // r12d
  unsigned int v15; // r13d
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r9d
  unsigned int v20; // ebx
  struct _KTHREAD *v21; // r8
  int v22; // edx
  struct _EX_RUNDOWN_REF *v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  struct _EX_RUNDOWN_REF *v28; // r14
  _QWORD *v29; // rax
  unsigned int v30; // ebx
  _QWORD *v31; // rax
  struct _EX_RUNDOWN_REF **v32; // r15
  struct _KTHREAD *v33; // r8
  int v34; // edx
  ULONG_PTR i; // r8
  unsigned int v36; // edx
  __int64 v37; // rax
  struct _KTHREAD *v38; // r10
  int v39; // r9d
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned int v43; // ebx
  struct _EX_RUNDOWN_REF *v44; // rax
  struct DXGALLOCATION **v45; // r14
  ULONG_PTR Count_low; // rdi
  unsigned int v47; // ebx
  struct _KTHREAD *v48; // r8
  int v49; // edx
  struct _EX_RUNDOWN_REF *v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  struct _EX_RUNDOWN_REF *v55; // rax
  ULONG_PTR v56; // rcx
  __int64 v57; // rsi
  struct _EX_RUNDOWN_REF *v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  struct _EX_RUNDOWN_REF *v62; // rdi
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  struct _EX_RUNDOWN_REF *v73; // rax
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  struct _EX_RUNDOWN_REF *v77; // rbx
  __int64 v78; // r14
  __int64 v79; // rdx
  struct _EX_RUNDOWN_REF *v80; // rdi
  __int64 v81; // rax
  struct _KTHREAD *v82; // r9
  __int64 v83; // r8
  __int64 v84; // rbx
  __int64 v85; // rax
  struct DXGRESOURCE *v86; // [rsp+20h] [rbp-61h] BYREF
  struct DXGALLOCATION *v87; // [rsp+28h] [rbp-59h] BYREF
  struct _EX_RUNDOWN_REF *v88; // [rsp+30h] [rbp-51h] BYREF
  struct _EX_RUNDOWN_REF *Count; // [rsp+38h] [rbp-49h] BYREF
  struct _EX_RUNDOWN_REF *v90; // [rsp+40h] [rbp-41h] BYREF
  struct _EX_RUNDOWN_REF *v91; // [rsp+48h] [rbp-39h] BYREF
  struct _EX_RUNDOWN_REF *v92; // [rsp+50h] [rbp-31h] BYREF
  struct _EX_RUNDOWN_REF *v93; // [rsp+58h] [rbp-29h] BYREF
  struct _EX_RUNDOWN_REF *v94; // [rsp+60h] [rbp-21h] BYREF
  DXGPUSHLOCK *v95[2]; // [rsp+68h] [rbp-19h] BYREF
  int v96; // [rsp+78h] [rbp-9h]
  struct _EX_RUNDOWN_REF *v97; // [rsp+D0h] [rbp+4Fh] BYREF
  struct DXGDEVICE *v98; // [rsp+D8h] [rbp+57h]
  char v99; // [rsp+E0h] [rbp+5Fh]
  struct _EX_RUNDOWN_REF *v100; // [rsp+E8h] [rbp+67h]

  v100 = a4;
  v98 = a2;
  v8 = a3;
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v86, 0LL);
  v14 = 0;
  v95[1] = (DXGPUSHLOCK *)(a1 + 21);
  v15 = 0;
  if ( a1 != (struct _KTHREAD **)-168LL && a1[22] == KeGetCurrentThread() )
  {
    v16 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    *(_QWORD *)(v16 + 24) = 1167LL;
    WdLogEvent5_WdAssertion(v16);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(a1 + 21, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v19 = *((_DWORD *)a1 + 46);
      if ( v19 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v17, &EventBlockThread, v18, v19);
    }
    ExAcquirePushLockExclusiveEx(a1 + 21, 0LL);
  }
  a1[22] = KeGetCurrentThread();
  v96 = 2;
  if ( !(_DWORD)v8 )
  {
    v43 = a5;
    v32 = a6;
    v99 = 0;
    Count = 0LL;
    if ( a5 )
    {
      v44 = v100;
      v45 = (struct DXGALLOCATION **)a6;
      v88 = v100;
      while ( 1 )
      {
        Count_low = LODWORD(v44->Count);
        v47 = (LODWORD(v44->Count) >> 6) & 0xFFFFFF;
        if ( v47 < *((_DWORD *)a1 + 52)
          && (v48 = a1[24],
              v49 = *((_DWORD *)v48 + 4 * v47 + 2),
              (((unsigned int)Count_low >> 26) & 0x30) == (*((_BYTE *)v48 + 16 * v47 + 8) & 0x30))
          && (v49 & 0x1000) == 0
          && (v49 & 0xF) != 0
          && (*((_BYTE *)v48 + 16 * v47 + 8) & 0xF) == 5 )
        {
          v50 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v48 + 2 * v47);
        }
        else
        {
          v50 = 0LL;
        }
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v97, v50);
        v55 = v97;
        if ( !v97 )
          break;
        if ( (struct DXGDEVICE *)v97[1].Count != v98 )
        {
          v73 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdWarning(v98, v51, v53, v54);
          v30 = -1073741811;
          v73[3].Count = (ULONG_PTR)v98;
          v73[4].Count = (ULONG_PTR)v97;
          v73[5].Count = v97[1].Count;
          v73[6].Count = -1073741811LL;
          goto LABEL_70;
        }
        if ( !v99 )
        {
          Count = (struct _EX_RUNDOWN_REF *)v97[5].Count;
          v99 = 1;
        }
        v56 = v97[5].Count;
        if ( (struct _EX_RUNDOWN_REF *)v56 != Count )
        {
LABEL_65:
          v73 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdWarning(v56, v51, v53, v54);
          v30 = -1073741811;
          v73[4].Count = -1073741811LL;
          goto LABEL_69;
        }
        if ( v56 )
        {
          v51 = *(unsigned int *)(v56 + 4);
          if ( (v51 & 1) != 0 )
            goto LABEL_65;
          if ( !DxgkTryReferenceDxgResource((struct _EX_RUNDOWN_REF *)v56) )
          {
            LOBYTE(v14) = 1;
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v97, v51, v53, v54);
            v30 = -1073741811;
            goto LABEL_71;
          }
          LODWORD(v97[9].Count) |= 0x100000u;
          v55 = v97;
        }
        if ( v47 < *((_DWORD *)a1 + 52) )
        {
          v54 = (__int64)a1[24];
          v51 = ((unsigned int)Count_low >> 26) & 0x30;
          v53 = *(unsigned int *)(v54 + 16LL * v47 + 8);
          if ( (((unsigned int)Count_low >> 26) & 0x30) == (*(_BYTE *)(v54 + 16LL * v47 + 8) & 0x30)
            && (v53 & 0x1000) == 0
            && (v53 & 0xF) != 0 )
          {
            *(_DWORD *)(v54 + 16LL * (((unsigned int)Count_low >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
            v55 = v97;
          }
        }
        *v45 = (struct DXGALLOCATION *)v55;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v97, v51, v53, v54);
        ++v15;
        v43 = a5;
        v44 = (struct _EX_RUNDOWN_REF *)((char *)&v88->Ptr + 4);
        ++v45;
        v88 = (struct _EX_RUNDOWN_REF *)((char *)v88 + 4);
        if ( v15 >= a5 )
          goto LABEL_60;
      }
      v73 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdWarning(v52, v51, v53, v54);
      v30 = -1073741811;
      v73[4].Count = Count_low;
      v73[5].Count = -1073741811LL;
LABEL_69:
      v73[3].Count = (ULONG_PTR)v98;
LABEL_70:
      WdLogEvent5_WdWarning(v73);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v97, v74, v75, v76);
      goto LABEL_71;
    }
LABEL_60:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v95);
    if ( v43 )
    {
      v57 = v43;
      do
      {
        v58 = *v32;
        v87 = 0LL;
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v92, v58);
        DXGALLOCATIONREFERENCE::MoveAssign(&v87, (struct DXGALLOCATION **)&v92);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v92, v59, v60, v61);
        v62 = (struct _EX_RUNDOWN_REF *)v87;
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v93, 0LL);
        DXGALLOCATIONREFERENCE::MoveAssign(&v87, (struct DXGALLOCATION **)&v93);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v93, v63, v64, v65);
        DxgkUnreferenceDxgAllocation(v62);
        ExWaitForRundownProtectionRelease(v62 + 11);
        ExInitializeRundownProtection(v62 + 11);
        DxgkReferenceDxgAllocation(v62);
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v94, v62);
        DXGALLOCATIONREFERENCE::MoveAssign(&v87, (struct DXGALLOCATION **)&v94);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v94, v66, v67, v68);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v87, v69, v70, v71);
        ++v32;
        --v57;
      }
      while ( v57 );
    }
LABEL_63:
    v30 = v14;
    goto LABEL_64;
  }
  v20 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
  if ( v20 < *((_DWORD *)a1 + 52)
    && (v21 = a1[24],
        v22 = *((_DWORD *)v21 + 4 * v20 + 2),
        (((unsigned int)v8 >> 26) & 0x30) == (*((_BYTE *)v21 + 16 * v20 + 8) & 0x30))
    && (v22 & 0x1000) == 0
    && (v22 & 0xF) != 0
    && (*((_BYTE *)v21 + 16 * v20 + 8) & 0xF) == 4 )
  {
    v23 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v21 + 2 * v20);
  }
  else
  {
    v23 = 0LL;
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v90, v23);
  DXGRESOURCEREFERENCE::MoveAssign(&v86, (struct DXGRESOURCE **)&v90);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v90);
  v28 = (struct _EX_RUNDOWN_REF *)v86;
  if ( v86 )
  {
    if ( *((struct DXGDEVICE **)v86 + 1) != a2 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
      v30 = -1073741811;
      v31[3] = a2;
      v31[4] = v28;
      v31[5] = v28[1].Count;
      v31[6] = -1073741811LL;
      WdLogEvent5_WdWarning(v31);
      DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v91, 0LL);
      DXGRESOURCEREFERENCE::MoveAssign(&v86, (struct DXGRESOURCE **)&v91);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v91);
      v32 = a6;
LABEL_71:
      if ( v86 )
        goto LABEL_64;
      if ( v15 )
      {
        v77 = v100;
        v78 = v15;
        do
        {
          v79 = LODWORD(v77->Count);
          v80 = *v32;
          v81 = (LODWORD(v77->Count) >> 6) & 0xFFFFFF;
          if ( (unsigned int)v81 < *((_DWORD *)a1 + 52) )
          {
            v82 = a1[24];
            v83 = *((unsigned int *)v82 + 4 * v81 + 2);
            if ( (((unsigned int)v79 >> 26) & 0x30) == (*((_BYTE *)v82 + 16 * v81 + 8) & 0x30) && (v83 & 0xF) != 0 )
            {
              v84 = 2LL * (((unsigned int)v79 >> 6) & 0xFFFFFF);
              if ( (*((_DWORD *)v82 + 4 * (((unsigned int)v79 >> 6) & 0xFFFFFF) + 2) & 0x1000) == 0 )
              {
                v85 = WdLogNewEntry5_WdAssertion(((unsigned int)v79 >> 26) & 0x30, v79, v83, v82);
                *(_QWORD *)(v85 + 24) = 190LL;
                WdLogEvent5_WdAssertion(v85);
              }
              *((_DWORD *)a1[24] + 2 * v84 + 2) &= ~0x1000u;
              v77 = v100;
            }
          }
          if ( (v80[9].Count & 0x100000) != 0 )
          {
            DxgkUnreferenceDxgResource((struct _EX_RUNDOWN_REF *)v80[5].Count);
            LODWORD(v80[9].Count) &= ~0x100000u;
          }
          v77 = (struct _EX_RUNDOWN_REF *)((char *)v77 + 4);
          ++v32;
          v100 = v77;
          --v78;
        }
        while ( v78 );
      }
      if ( !(_BYTE)v14 )
      {
        v30 = -1073741811;
        goto LABEL_64;
      }
      v14 = 255;
      goto LABEL_63;
    }
    if ( v20 < *((_DWORD *)a1 + 52) )
    {
      v33 = a1[24];
      v34 = *((_DWORD *)v33 + 4 * v20 + 2);
      if ( (((unsigned int)v8 >> 26) & 0x30) == (*((_BYTE *)v33 + 16 * v20 + 8) & 0x30)
        && (v34 & 0x1000) == 0
        && (v34 & 0xF) != 0 )
      {
        *((_DWORD *)v33 + 4 * (((unsigned int)v8 >> 6) & 0xFFFFFF) + 2) |= 0x1000u;
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v95);
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v88, 0LL);
    DXGRESOURCEREFERENCE::MoveAssign(&v86, (struct DXGRESOURCE **)&v88);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v88);
    DxgkUnreferenceDxgResource(v28);
    ExWaitForRundownProtectionRelease(v28 + 9);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)&v28[10]);
    DXGAUTOPUSHLOCK::AcquireExclusive(v95);
    for ( i = v28[3].Count; i; i = *(_QWORD *)(i + 64) )
    {
      v36 = *(_DWORD *)(i + 16);
      if ( v36 )
      {
        v37 = (v36 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v37 < *((_DWORD *)a1 + 52) )
        {
          v38 = a1[24];
          v39 = *((_DWORD *)v38 + 4 * v37 + 2);
          if ( ((v36 >> 26) & 0x30) == (*((_BYTE *)v38 + 16 * v37 + 8) & 0x30)
            && (v39 & 0x1000) == 0
            && (v39 & 0xF) != 0 )
          {
            *((_DWORD *)v38 + 4 * ((v36 >> 6) & 0xFFFFFF) + 2) |= 0x1000u;
          }
        }
      }
    }
    ExInitializeRundownProtection(v28 + 9);
    DxgkTryReferenceDxgResource(v28);
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&Count, v28);
    DXGRESOURCEREFERENCE::MoveAssign(&v86, (struct DXGRESOURCE **)&Count);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&Count);
    DXGAUTOPUSHLOCK::ReleaseExclusive((DXGAUTOPUSHLOCK *)v95);
    DXGFASTMUTEX::Release((struct _KTHREAD **)&v28[10], v40, v41, v42);
    *a7 = v86;
    goto LABEL_63;
  }
  v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
  v30 = -1073741811;
  v29[3] = a2;
  v29[4] = v8;
  v29[5] = -1073741811LL;
  WdLogEvent5_WdWarning(v29);
LABEL_64:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v95);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v86);
  return v30;
}
