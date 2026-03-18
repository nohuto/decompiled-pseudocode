/*
 * XREFs of ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x1C00E4A90
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E3B00 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014EF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0015020 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C001A44C (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C001A474 (-ReleaseExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?DxgkTryReferenceDxgResource@@YAEPEAVDXGRESOURCE@@@Z @ 0x1C00962C4 (-DxgkTryReferenceDxgResource@@YAEPEAVDXGRESOURCE@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00962E0 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C009631C (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00D1F10 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C00E2790 (-DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00E6124 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00E6170 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00E8320 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00E84D0 (-DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall ValidateDestroyAllocation(
        struct _KTHREAD **a1,
        struct DXGDEVICE *a2,
        unsigned int a3,
        struct DXGRESOURCE *a4,
        unsigned int a5,
        struct DXGALLOCATION **a6,
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
  int v20; // edx
  struct DXGRESOURCE *v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  struct _EX_RUNDOWN_REF *v25; // rdi
  _QWORD *v26; // rax
  unsigned int v27; // ebx
  _QWORD *v28; // rax
  struct DXGALLOCATION **v29; // r15
  struct _KTHREAD *v30; // r8
  int v31; // edx
  ULONG_PTR i; // r8
  unsigned int v33; // edx
  __int64 v34; // rax
  struct _KTHREAD *v35; // r10
  int v36; // r9d
  unsigned int v37; // ebx
  struct DXGRESOURCE *v38; // rax
  struct DXGALLOCATION **v39; // r14
  __int64 v40; // rdi
  unsigned int v41; // ebx
  struct _KTHREAD *v42; // r9
  int v43; // edx
  struct DXGALLOCATION *v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  struct DXGALLOCATION *v48; // rax
  unsigned int *v49; // rcx
  struct _KTHREAD *v50; // r9
  int v51; // r8d
  __int64 v52; // rsi
  struct DXGALLOCATION *v53; // rdx
  struct _EX_RUNDOWN_REF *v54; // rdi
  _QWORD *v56; // rax
  struct DXGRESOURCE *v57; // rbx
  __int64 v58; // r14
  unsigned int v59; // r8d
  struct DXGALLOCATION *v60; // rdi
  __int64 v61; // rax
  struct _KTHREAD *v62; // rdx
  __int64 v63; // rbx
  __int64 v64; // rax
  struct DXGRESOURCE *v65; // [rsp+20h] [rbp-61h] BYREF
  struct DXGALLOCATION *v66; // [rsp+28h] [rbp-59h] BYREF
  struct DXGRESOURCE *v67; // [rsp+30h] [rbp-51h] BYREF
  struct DXGRESOURCE *v68; // [rsp+38h] [rbp-49h] BYREF
  struct DXGRESOURCE *v69; // [rsp+40h] [rbp-41h] BYREF
  struct DXGRESOURCE *v70; // [rsp+48h] [rbp-39h] BYREF
  struct DXGALLOCATION *v71; // [rsp+50h] [rbp-31h] BYREF
  struct DXGALLOCATION *v72; // [rsp+58h] [rbp-29h] BYREF
  struct DXGALLOCATION *v73; // [rsp+60h] [rbp-21h] BYREF
  DXGPUSHLOCK *v74[2]; // [rsp+68h] [rbp-19h] BYREF
  int v75; // [rsp+78h] [rbp-9h]
  __int64 v76; // [rsp+D0h] [rbp+4Fh] BYREF
  struct DXGDEVICE *v77; // [rsp+D8h] [rbp+57h]
  char v78; // [rsp+E0h] [rbp+5Fh]
  struct DXGRESOURCE *v79; // [rsp+E8h] [rbp+67h]

  v79 = a4;
  v77 = a2;
  v8 = a3;
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v65, 0LL);
  v12 = 0;
  v74[1] = (DXGPUSHLOCK *)(a1 + 26);
  v13 = 0;
  if ( a1 != (struct _KTHREAD **)-208LL && a1[27] == KeGetCurrentThread() )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v14 + 24) = 1306LL;
    WdLogEvent5_WdAssertion(v14);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(a1 + 26, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v17 = *((_DWORD *)a1 + 56);
      if ( v17 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v15, &EventBlockThread, v16, v17);
    }
    ExAcquirePushLockExclusiveEx(a1 + 26, 0LL);
  }
  a1[27] = KeGetCurrentThread();
  v75 = 2;
  if ( !(_DWORD)v8 )
  {
    v37 = a5;
    v29 = a6;
    v78 = 0;
    v68 = 0LL;
    if ( a5 )
    {
      v38 = a4;
      v39 = a6;
      v67 = a4;
      while ( 1 )
      {
        v40 = *(unsigned int *)v38;
        v41 = (*(_DWORD *)v38 >> 6) & 0xFFFFFF;
        if ( v41 < *((_DWORD *)a1 + 62)
          && (v42 = a1[29],
              v43 = *((_DWORD *)v42 + 4 * v41 + 2),
              (((unsigned int)v40 >> 25) & 0x60) == (*((_BYTE *)v42 + 16 * v41 + 8) & 0x60))
          && (v43 & 0x2000) == 0
          && (v43 & 0x1F) == 5 )
        {
          v44 = (struct DXGALLOCATION *)*((_QWORD *)v42 + 2 * v41);
        }
        else
        {
          v44 = 0LL;
        }
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v76, v44);
        v48 = (struct DXGALLOCATION *)v76;
        if ( !v76 )
          break;
        if ( *(struct DXGDEVICE **)(v76 + 8) != v77 )
        {
          v56 = (_QWORD *)WdLogNewEntry5_WdWarning(v77, v45, v47);
          v27 = -1073741811;
          v56[3] = v77;
          v56[4] = v76;
          v56[5] = *(_QWORD *)(v76 + 8);
          v56[6] = -1073741811LL;
          goto LABEL_68;
        }
        if ( !v78 )
        {
          v68 = *(struct DXGRESOURCE **)(v76 + 40);
          v78 = 1;
        }
        v49 = *(unsigned int **)(v76 + 40);
        if ( v49 != (unsigned int *)v68 )
        {
LABEL_63:
          v56 = (_QWORD *)WdLogNewEntry5_WdWarning(v49, v45, v47);
          v27 = -1073741811;
          v56[4] = -1073741811LL;
          goto LABEL_67;
        }
        if ( v49 )
        {
          v45 = v49[1];
          if ( (v45 & 1) != 0 )
            goto LABEL_63;
          if ( !DxgkTryReferenceDxgResource((struct _EX_RUNDOWN_REF *)v49) )
          {
            LOBYTE(v12) = 1;
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v76);
            v27 = -1073741811;
            goto LABEL_69;
          }
          *(_DWORD *)(v76 + 72) |= 0x100000u;
          v48 = (struct DXGALLOCATION *)v76;
        }
        if ( v41 < *((_DWORD *)a1 + 62) )
        {
          v50 = a1[29];
          v51 = *((_DWORD *)v50 + 4 * v41 + 2);
          if ( (((unsigned int)v40 >> 25) & 0x60) == (*((_BYTE *)v50 + 16 * v41 + 8) & 0x60)
            && (v51 & 0x2000) == 0
            && (v51 & 0x1F) != 0 )
          {
            *((_DWORD *)v50 + 4 * (((unsigned int)v40 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
            v48 = (struct DXGALLOCATION *)v76;
          }
        }
        *v39 = v48;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v76);
        ++v13;
        v37 = a5;
        v38 = (struct DXGRESOURCE *)((char *)v67 + 4);
        ++v39;
        v67 = (struct DXGRESOURCE *)((char *)v67 + 4);
        if ( v13 >= a5 )
          goto LABEL_58;
      }
      v56 = (_QWORD *)WdLogNewEntry5_WdWarning(v46, v45, v47);
      v27 = -1073741811;
      v56[4] = v40;
      v56[5] = -1073741811LL;
LABEL_67:
      v56[3] = v77;
LABEL_68:
      WdLogEvent5_WdWarning(v56);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v76);
      goto LABEL_69;
    }
LABEL_58:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v74);
    if ( v37 )
    {
      v52 = v37;
      do
      {
        v53 = *v29;
        v66 = 0LL;
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v71, v53);
        DXGALLOCATIONREFERENCE::MoveAssign(&v66, &v71);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v71);
        v54 = (struct _EX_RUNDOWN_REF *)v66;
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v72, 0LL);
        DXGALLOCATIONREFERENCE::MoveAssign(&v66, &v72);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v72);
        DxgkUnreferenceDxgAllocation((struct DXGALLOCATION *)v54);
        ExWaitForRundownProtectionRelease(v54 + 11);
        ExInitializeRundownProtection(v54 + 11);
        DxgkReferenceDxgAllocation(v54);
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v73, (struct DXGALLOCATION *)v54);
        DXGALLOCATIONREFERENCE::MoveAssign(&v66, &v73);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v73);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v66);
        ++v29;
        --v52;
      }
      while ( v52 );
    }
LABEL_61:
    v27 = v12;
    goto LABEL_62;
  }
  v18 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
  if ( v18 < *((_DWORD *)a1 + 62)
    && (v19 = a1[29],
        v20 = *((_DWORD *)v19 + 4 * v18 + 2),
        (((unsigned int)v8 >> 25) & 0x60) == (*((_BYTE *)v19 + 16 * v18 + 8) & 0x60))
    && (v20 & 0x2000) == 0
    && (v20 & 0x1F) == 4 )
  {
    v21 = (struct DXGRESOURCE *)*((_QWORD *)v19 + 2 * v18);
  }
  else
  {
    v21 = 0LL;
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v69, v21);
  DXGRESOURCEREFERENCE::MoveAssign(&v65, &v69);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v69);
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
      DXGRESOURCEREFERENCE::MoveAssign(&v65, &v70);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v70);
      v29 = a6;
LABEL_69:
      if ( v65 )
        goto LABEL_62;
      if ( v13 )
      {
        v57 = v79;
        v58 = v13;
        do
        {
          v59 = *(_DWORD *)v57;
          v60 = *v29;
          v61 = (*(_DWORD *)v57 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v61 < *((_DWORD *)a1 + 62) )
          {
            v62 = a1[29];
            if ( ((v59 >> 25) & 0x60) == (*((_BYTE *)v62 + 16 * v61 + 8) & 0x60)
              && (*((_DWORD *)v62 + 4 * v61 + 2) & 0x1F) != 0 )
            {
              v63 = 2LL * ((v59 >> 6) & 0xFFFFFF);
              if ( (*((_DWORD *)v62 + 4 * ((v59 >> 6) & 0xFFFFFF) + 2) & 0x2000) == 0 )
              {
                v64 = WdLogNewEntry5_WdAssertion((v59 >> 25) & 0x60);
                *(_QWORD *)(v64 + 24) = 215LL;
                WdLogEvent5_WdAssertion(v64);
                v62 = a1[29];
              }
              *((_DWORD *)v62 + 2 * v63 + 2) &= ~0x2000u;
              v57 = v79;
            }
          }
          if ( (*((_DWORD *)v60 + 18) & 0x100000) != 0 )
          {
            DxgkUnreferenceDxgResource(*((struct _EX_RUNDOWN_REF **)v60 + 5));
            *((_DWORD *)v60 + 18) &= ~0x100000u;
          }
          v57 = (struct DXGRESOURCE *)((char *)v57 + 4);
          ++v29;
          v79 = v57;
          --v58;
        }
        while ( v58 );
      }
      if ( !(_BYTE)v12 )
      {
        v27 = -1073741811;
        goto LABEL_62;
      }
      v12 = 255;
      goto LABEL_61;
    }
    if ( v18 < *((_DWORD *)a1 + 62) )
    {
      v30 = a1[29];
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
    DXGRESOURCEREFERENCE::MoveAssign(&v65, &v67);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v67);
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
        if ( (unsigned int)v34 < *((_DWORD *)a1 + 62) )
        {
          v35 = a1[29];
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
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v68, (struct DXGRESOURCE *)v25);
    DXGRESOURCEREFERENCE::MoveAssign(&v65, &v68);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v68);
    DXGAUTOPUSHLOCK::ReleaseExclusive((DXGAUTOPUSHLOCK *)v74);
    DXGFASTMUTEX::Release((struct _KTHREAD **)&v25[10]);
    *a7 = v65;
    goto LABEL_61;
  }
  v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
  v27 = -1073741811;
  v26[3] = a2;
  v26[4] = v8;
  v26[5] = -1073741811LL;
  WdLogEvent5_WdWarning(v26);
LABEL_62:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v74);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v65);
  return v27;
}
