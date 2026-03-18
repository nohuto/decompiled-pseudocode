/*
 * XREFs of ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x1C008C690
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C008CDD0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002D7C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007D10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0014464 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C001448C (-ReleaseExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?DxgkTryReferenceDxgResource@@YAEPEAVDXGRESOURCE@@@Z @ 0x1C00799BC (-DxgkTryReferenceDxgResource@@YAEPEAVDXGRESOURCE@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00799D8 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0079A14 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C007FDC0 (-DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0086DD0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C0086F80 (-DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C008A3AC (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C008A3F0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00EEED0 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
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
  __int64 v8; // r14
  __int64 v11; // rcx
  int v12; // r12d
  unsigned int v13; // r13d
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // r9d
  unsigned int v18; // ebx
  struct _KTHREAD *v19; // r9
  int v20; // r8d
  struct _EX_RUNDOWN_REF *v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  struct _EX_RUNDOWN_REF *v25; // rdi
  _QWORD *v26; // rax
  unsigned int v27; // ebx
  _QWORD *v28; // rax
  struct _EX_RUNDOWN_REF **v29; // r15
  struct _KTHREAD *v30; // r8
  int v31; // edx
  ULONG_PTR i; // r8
  unsigned int v33; // edx
  __int64 v34; // rax
  struct _KTHREAD *v35; // r10
  int v36; // r9d
  unsigned int v37; // ebx
  struct _EX_RUNDOWN_REF *v38; // rax
  struct DXGALLOCATION **v39; // r14
  ULONG_PTR Count_low; // rdi
  unsigned int v41; // ebx
  struct _KTHREAD *v42; // r9
  int v43; // r8d
  struct _EX_RUNDOWN_REF *v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  struct _EX_RUNDOWN_REF *v48; // rax
  ULONG_PTR v49; // rcx
  struct _KTHREAD *v50; // r9
  int v51; // r8d
  __int64 v52; // rsi
  struct _EX_RUNDOWN_REF *v53; // rdx
  struct _EX_RUNDOWN_REF *v54; // rdi
  struct _EX_RUNDOWN_REF *v56; // rax
  struct _EX_RUNDOWN_REF *v57; // rbx
  __int64 v58; // r14
  unsigned int v59; // edx
  struct _EX_RUNDOWN_REF *v60; // rdi
  __int64 v61; // rax
  struct _KTHREAD *v62; // r9
  __int64 v63; // rbx
  __int64 v64; // rax
  struct DXGRESOURCE *v65; // [rsp+20h] [rbp-61h] BYREF
  struct DXGALLOCATION *v66; // [rsp+28h] [rbp-59h] BYREF
  struct _EX_RUNDOWN_REF *v67; // [rsp+30h] [rbp-51h] BYREF
  struct _EX_RUNDOWN_REF *Count; // [rsp+38h] [rbp-49h] BYREF
  struct _EX_RUNDOWN_REF *v69; // [rsp+40h] [rbp-41h] BYREF
  struct _EX_RUNDOWN_REF *v70; // [rsp+48h] [rbp-39h] BYREF
  struct _EX_RUNDOWN_REF *v71; // [rsp+50h] [rbp-31h] BYREF
  struct _EX_RUNDOWN_REF *v72; // [rsp+58h] [rbp-29h] BYREF
  struct _EX_RUNDOWN_REF *v73; // [rsp+60h] [rbp-21h] BYREF
  DXGPUSHLOCK *v74[2]; // [rsp+68h] [rbp-19h] BYREF
  int v75; // [rsp+78h] [rbp-9h]
  struct _EX_RUNDOWN_REF *v76; // [rsp+D0h] [rbp+4Fh] BYREF
  struct DXGDEVICE *v77; // [rsp+D8h] [rbp+57h]
  char v78; // [rsp+E0h] [rbp+5Fh]
  struct _EX_RUNDOWN_REF *v79; // [rsp+E8h] [rbp+67h]

  v79 = a4;
  v77 = a2;
  v8 = a3;
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v65, 0LL);
  v12 = 0;
  v74[1] = (DXGPUSHLOCK *)(a1 + 25);
  v13 = 0;
  if ( a1 != (struct _KTHREAD **)-200LL && a1[26] == KeGetCurrentThread() )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v14 + 24) = 1214LL;
    WdLogEvent5_WdAssertion(v14);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(a1 + 25, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v17 = *((_DWORD *)a1 + 54);
      if ( v17 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v15, &EventBlockThread, v16, v17);
    }
    ExAcquirePushLockExclusiveEx(a1 + 25, 0LL);
  }
  a1[26] = KeGetCurrentThread();
  v75 = 2;
  if ( !(_DWORD)v8 )
  {
    v37 = a5;
    v29 = a6;
    v78 = 0;
    Count = 0LL;
    if ( a5 )
    {
      v38 = a4;
      v39 = (struct DXGALLOCATION **)a6;
      v67 = a4;
      while ( 1 )
      {
        Count_low = LODWORD(v38->Count);
        v41 = (LODWORD(v38->Count) >> 6) & 0xFFFFFF;
        if ( v41 < *((_DWORD *)a1 + 60)
          && (v42 = a1[28],
              v43 = *((_DWORD *)v42 + 4 * v41 + 2),
              (((unsigned int)Count_low >> 25) & 0x60) == (*((_BYTE *)v42 + 16 * v41 + 8) & 0x60))
          && (v43 & 0x2000) == 0
          && (v43 & 0x1F) != 0
          && (*((_BYTE *)v42 + 16 * v41 + 8) & 0x1F) == 5 )
        {
          v44 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v42 + 2 * v41);
        }
        else
        {
          v44 = 0LL;
        }
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v76, v44);
        v48 = v76;
        if ( !v76 )
          break;
        if ( (struct DXGDEVICE *)v76[1].Count != v77 )
        {
          v56 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdWarning(v77, v45, v47);
          v27 = -1073741811;
          v56[3].Count = (ULONG_PTR)v77;
          v56[4].Count = (ULONG_PTR)v76;
          v56[5].Count = v76[1].Count;
          v56[6].Count = -1073741811LL;
          goto LABEL_70;
        }
        if ( !v78 )
        {
          Count = (struct _EX_RUNDOWN_REF *)v76[5].Count;
          v78 = 1;
        }
        v49 = v76[5].Count;
        if ( (struct _EX_RUNDOWN_REF *)v49 != Count )
        {
LABEL_65:
          v56 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdWarning(v49, v45, v47);
          v27 = -1073741811;
          v56[4].Count = -1073741811LL;
          goto LABEL_69;
        }
        if ( v49 )
        {
          v45 = *(unsigned int *)(v49 + 4);
          if ( (v45 & 1) != 0 )
            goto LABEL_65;
          if ( !DxgkTryReferenceDxgResource((struct _EX_RUNDOWN_REF *)v49) )
          {
            LOBYTE(v12) = 1;
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v76);
            v27 = -1073741811;
            goto LABEL_71;
          }
          LODWORD(v76[9].Count) |= 0x100000u;
          v48 = v76;
        }
        if ( v41 < *((_DWORD *)a1 + 60) )
        {
          v50 = a1[28];
          v51 = *((_DWORD *)v50 + 4 * v41 + 2);
          if ( (((unsigned int)Count_low >> 25) & 0x60) == (*((_BYTE *)v50 + 16 * v41 + 8) & 0x60)
            && (v51 & 0x2000) == 0
            && (v51 & 0x1F) != 0 )
          {
            *((_DWORD *)v50 + 4 * (((unsigned int)Count_low >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
            v48 = v76;
          }
        }
        *v39 = (struct DXGALLOCATION *)v48;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v76);
        ++v13;
        v37 = a5;
        v38 = (struct _EX_RUNDOWN_REF *)((char *)&v67->Ptr + 4);
        ++v39;
        v67 = (struct _EX_RUNDOWN_REF *)((char *)v67 + 4);
        if ( v13 >= a5 )
          goto LABEL_60;
      }
      v56 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdWarning(v46, v45, v47);
      v27 = -1073741811;
      v56[4].Count = Count_low;
      v56[5].Count = -1073741811LL;
LABEL_69:
      v56[3].Count = (ULONG_PTR)v77;
LABEL_70:
      WdLogEvent5_WdWarning(v56);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v76);
      goto LABEL_71;
    }
LABEL_60:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v74);
    if ( v37 )
    {
      v52 = v37;
      do
      {
        v53 = *v29;
        v66 = 0LL;
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v71, v53);
        DXGALLOCATIONREFERENCE::MoveAssign(&v66, (struct DXGALLOCATION **)&v71);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v71);
        v54 = (struct _EX_RUNDOWN_REF *)v66;
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v72, 0LL);
        DXGALLOCATIONREFERENCE::MoveAssign(&v66, (struct DXGALLOCATION **)&v72);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v72);
        DxgkUnreferenceDxgAllocation(v54);
        ExWaitForRundownProtectionRelease(v54 + 11);
        ExInitializeRundownProtection(v54 + 11);
        DxgkReferenceDxgAllocation((struct DXGALLOCATION *)v54);
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v73, v54);
        DXGALLOCATIONREFERENCE::MoveAssign(&v66, (struct DXGALLOCATION **)&v73);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v73);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v66);
        ++v29;
        --v52;
      }
      while ( v52 );
    }
LABEL_63:
    v27 = v12;
    goto LABEL_64;
  }
  v18 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
  if ( v18 < *((_DWORD *)a1 + 60)
    && (v19 = a1[28],
        v20 = *((_DWORD *)v19 + 4 * v18 + 2),
        (((unsigned int)v8 >> 25) & 0x60) == (*((_BYTE *)v19 + 16 * v18 + 8) & 0x60))
    && (v20 & 0x2000) == 0
    && (v20 & 0x1F) != 0
    && (*((_BYTE *)v19 + 16 * v18 + 8) & 0x1F) == 4 )
  {
    v21 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v19 + 2 * v18);
  }
  else
  {
    v21 = 0LL;
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v69, v21);
  DXGRESOURCEREFERENCE::MoveAssign(&v65, (struct DXGRESOURCE **)&v69);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v69);
  v25 = (struct _EX_RUNDOWN_REF *)v65;
  if ( v65 )
  {
    if ( *((struct DXGDEVICE **)v65 + 1) != a2 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
      v27 = -1073741811;
      v28[3] = a2;
      v28[4] = v25;
      v28[5] = v25[1].Count;
      v28[6] = -1073741811LL;
      WdLogEvent5_WdWarning(v28);
      DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v70, 0LL);
      DXGRESOURCEREFERENCE::MoveAssign(&v65, (struct DXGRESOURCE **)&v70);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v70);
      v29 = a6;
LABEL_71:
      if ( v65 )
        goto LABEL_64;
      if ( v13 )
      {
        v57 = v79;
        v58 = v13;
        do
        {
          v59 = v57->Count;
          v60 = *v29;
          v61 = (LODWORD(v57->Count) >> 6) & 0xFFFFFF;
          if ( (unsigned int)v61 < *((_DWORD *)a1 + 60) )
          {
            v62 = a1[28];
            if ( ((v59 >> 25) & 0x60) == (*((_BYTE *)v62 + 16 * v61 + 8) & 0x60)
              && (*((_DWORD *)v62 + 4 * v61 + 2) & 0x1F) != 0 )
            {
              v63 = 2LL * ((v59 >> 6) & 0xFFFFFF);
              if ( (*((_DWORD *)v62 + 4 * ((v59 >> 6) & 0xFFFFFF) + 2) & 0x2000) == 0 )
              {
                v64 = WdLogNewEntry5_WdAssertion((v59 >> 25) & 0x60);
                *(_QWORD *)(v64 + 24) = 191LL;
                WdLogEvent5_WdAssertion(v64);
              }
              *((_DWORD *)a1[28] + 2 * v63 + 2) &= ~0x2000u;
              v57 = v79;
            }
          }
          if ( (v60[9].Count & 0x100000) != 0 )
          {
            DxgkUnreferenceDxgResource((struct _EX_RUNDOWN_REF *)v60[5].Count);
            LODWORD(v60[9].Count) &= ~0x100000u;
          }
          v57 = (struct _EX_RUNDOWN_REF *)((char *)v57 + 4);
          ++v29;
          v79 = v57;
          --v58;
        }
        while ( v58 );
      }
      if ( !(_BYTE)v12 )
      {
        v27 = -1073741811;
        goto LABEL_64;
      }
      v12 = 255;
      goto LABEL_63;
    }
    if ( v18 < *((_DWORD *)a1 + 60) )
    {
      v30 = a1[28];
      v31 = *((_DWORD *)v30 + 4 * v18 + 2);
      if ( (((unsigned int)v8 >> 25) & 0x60) == (*((_BYTE *)v30 + 16 * v18 + 8) & 0x60)
        && (v31 & 0x2000) == 0
        && (v31 & 0x1F) != 0 )
      {
        *((_DWORD *)v30 + 4 * (((unsigned int)v8 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v74);
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v67, 0LL);
    DXGRESOURCEREFERENCE::MoveAssign(&v65, (struct DXGRESOURCE **)&v67);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v67);
    DxgkUnreferenceDxgResource(v25);
    ExWaitForRundownProtectionRelease(v25 + 9);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)&v25[10]);
    DXGAUTOPUSHLOCK::AcquireExclusive(v74);
    for ( i = v25[3].Count; i; i = *(_QWORD *)(i + 64) )
    {
      v33 = *(_DWORD *)(i + 16);
      if ( v33 )
      {
        v34 = (v33 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v34 < *((_DWORD *)a1 + 60) )
        {
          v35 = a1[28];
          v36 = *((_DWORD *)v35 + 4 * v34 + 2);
          if ( ((v33 >> 25) & 0x60) == (*((_BYTE *)v35 + 16 * v34 + 8) & 0x60)
            && (v36 & 0x2000) == 0
            && (v36 & 0x1F) != 0 )
          {
            *((_DWORD *)v35 + 4 * ((v33 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
          }
        }
      }
    }
    ExInitializeRundownProtection(v25 + 9);
    DxgkTryReferenceDxgResource(v25);
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&Count, v25);
    DXGRESOURCEREFERENCE::MoveAssign(&v65, (struct DXGRESOURCE **)&Count);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&Count);
    DXGAUTOPUSHLOCK::ReleaseExclusive((DXGAUTOPUSHLOCK *)v74);
    DXGFASTMUTEX::Release((struct _KTHREAD **)&v25[10]);
    *a7 = v65;
    goto LABEL_63;
  }
  v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
  v27 = -1073741811;
  v26[3] = a2;
  v26[4] = v8;
  v26[5] = -1073741811LL;
  WdLogEvent5_WdWarning(v26);
LABEL_64:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v74);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v65);
  return v27;
}
