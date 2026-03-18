/*
 * XREFs of ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@IPEBUtagRECT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C019DD80
 * Callers:
 *     ?SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C01B3D98 (-SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT.c)
 * Callees:
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0004AD0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0004B20 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B2DA0 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C00B9EE0 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00CCDB0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00CFC9C (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z @ 0x1C019F368 (-MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::Blt(
        DXGCONTEXT *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        struct DXGCONTEXT **a5,
        UINT a6,
        const struct tagRECT *a7)
{
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rbx
  unsigned int v18; // edx
  __int64 v19; // r9
  int v20; // r8d
  struct _EX_RUNDOWN_REF *v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // edi
  _QWORD *v25; // rax
  __int64 v26; // r14
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r8
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rbx
  _QWORD *v37; // rax
  __int64 v38; // rbx
  unsigned int v39; // edx
  __int64 v40; // r9
  int v41; // r8d
  struct _EX_RUNDOWN_REF *v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rcx
  _QWORD *v45; // rax
  __int64 v46; // r14
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // r8
  int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rbx
  _QWORD *v57; // rax
  struct DXGDEVICE *v58; // r14
  unsigned int v59; // edi
  struct ADAPTER_RENDER *v60; // rbx
  int v61; // eax
  const struct tagRECT *v62; // rbx
  signed int Width; // edi
  signed int Height; // r14d
  UINT v65; // eax
  __int64 v66; // rdx
  unsigned int v67; // r8d
  __int64 v68; // rcx
  _QWORD *v69; // rax
  int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rcx
  struct VIDSCH_SUBMIT_DATA_BASE *v75; // rdx
  __int64 v76; // rax
  int v77; // eax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rbx
  __int64 v81; // rax
  struct DXGALLOCATION *v83; // [rsp+70h] [rbp-90h] BYREF
  struct DXGALLOCATION *v84; // [rsp+78h] [rbp-88h] BYREF
  struct _VIDMM_DMA_BUFFER *v85; // [rsp+80h] [rbp-80h] BYREF
  struct VIDSCH_SUBMIT_DATA_BASE *v86[2]; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v87; // [rsp+98h] [rbp-68h]
  const RECT *v88; // [rsp+A0h] [rbp-60h]
  struct DXGCONTEXT **v89; // [rsp+A8h] [rbp-58h]
  struct _DXGKARG_DESCRIBEALLOCATION v90; // [rsp+B0h] [rbp-50h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v91; // [rsp+E0h] [rbp-20h] BYREF
  struct _DXGKARG_PRESENT v92; // [rsp+110h] [rbp+10h] BYREF

  v89 = a5;
  v8 = *((_QWORD *)this + 2);
  v87 = a4;
  v9 = a3;
  v10 = a2;
  v11 = *(_QWORD *)(v8 + 16);
  v88 = a7;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v11 + 16)) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    *(_QWORD *)(v16 + 24) = 5755LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v17 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v17 + 168));
  v18 = ((unsigned int)v10 >> 6) & 0xFFFFFF;
  if ( v18 < *(_DWORD *)(v17 + 208)
    && (v19 = *(_QWORD *)(v17 + 192),
        v20 = *(_DWORD *)(v19 + 16LL * v18 + 8),
        (((unsigned int)v10 >> 26) & 0x30) == (*(_BYTE *)(v19 + 16LL * v18 + 8) & 0x30))
    && (v20 & 0x1000) == 0
    && (v20 & 0xF) != 0
    && (*(_BYTE *)(v19 + 16LL * v18 + 8) & 0xF) == 5 )
  {
    v21 = *(struct _EX_RUNDOWN_REF **)(v19 + 16LL * v18);
  }
  else
  {
    v21 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v84, v21);
  ExReleasePushLockSharedEx(v17 + 168, 0LL);
  KeLeaveCriticalRegion();
  v24 = -1073741811;
  if ( v84 )
  {
    v26 = *((_QWORD *)this + 2);
    v27 = *(_QWORD *)(*((_QWORD *)v84 + 1) + 16LL);
    v28 = *(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL);
    if ( *(_QWORD *)(v27 + 16) != v28 )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27);
      v25[3] = *((_QWORD *)this + 2);
      v25[4] = v84;
      v25[5] = -1073741811LL;
      goto LABEL_14;
    }
    memset(&v91, 0, sizeof(v91));
    v91.hAllocation = *(HANDLE *)(*((_QWORD *)v84 + 6) + 16LL);
    v33 = ADAPTER_RENDER::DdiDescribeAllocation(
            *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL) + 2288LL),
            &v91,
            v32);
    v36 = v33;
    if ( v33 < 0 )
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdError(v35, v34);
      v37[3] = v36;
      v37[4] = this;
      v37[5] = *((unsigned int *)v84 + 4);
      v37[6] = v84;
      v37[7] = (*(_DWORD *)(*((_QWORD *)v84 + 6) + 4LL) >> 6) & 0xF;
      WdLogEvent5_WdError(v37);
      v24 = v36;
      goto LABEL_67;
    }
    v38 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v38 + 168));
    v39 = ((unsigned int)v9 >> 6) & 0xFFFFFF;
    if ( v39 < *(_DWORD *)(v38 + 208)
      && (v40 = *(_QWORD *)(v38 + 192),
          v41 = *(_DWORD *)(v40 + 16LL * v39 + 8),
          (((unsigned int)v9 >> 26) & 0x30) == (*(_BYTE *)(v40 + 16LL * v39 + 8) & 0x30))
      && (v41 & 0x1000) == 0
      && (v41 & 0xF) != 0
      && (*(_BYTE *)(v40 + 16LL * v39 + 8) & 0xF) == 5 )
    {
      v42 = *(struct _EX_RUNDOWN_REF **)(v40 + 16LL * v39);
    }
    else
    {
      v42 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v83, v42);
    ExReleasePushLockSharedEx(v38 + 168, 0LL);
    KeLeaveCriticalRegion();
    v24 = -1073741811;
    if ( !v83 )
    {
      v45 = (_QWORD *)WdLogNewEntry5_WdError(v44, v43);
      v45[3] = v9;
LABEL_28:
      WdLogEvent5_WdError(v45);
LABEL_66:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v83, v49, v50, v51);
      goto LABEL_67;
    }
    v46 = *((_QWORD *)this + 2);
    v47 = *(_QWORD *)(*((_QWORD *)v83 + 1) + 16LL);
    v48 = *(_QWORD *)(*(_QWORD *)(v46 + 16) + 16LL);
    if ( *(_QWORD *)(v47 + 16) != v48 )
    {
      v45 = (_QWORD *)WdLogNewEntry5_WdError(v48, v47);
      v45[3] = *((_QWORD *)this + 2);
      v45[4] = v83;
      v45[5] = -1073741811LL;
      goto LABEL_28;
    }
    memset(&v90, 0, sizeof(v90));
    v90.hAllocation = *(HANDLE *)(*((_QWORD *)v83 + 6) + 16LL);
    v53 = ADAPTER_RENDER::DdiDescribeAllocation(
            *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v46 + 16) + 16LL) + 2288LL),
            &v90,
            v52);
    v56 = v53;
    if ( v53 < 0 )
    {
      v57 = (_QWORD *)WdLogNewEntry5_WdError(v54, v49);
      v57[3] = v56;
      v57[4] = this;
      v57[5] = *((unsigned int *)v83 + 4);
      v57[6] = v83;
      v57[7] = (*(_DWORD *)(*((_QWORD *)v83 + 6) + 4LL) >> 6) & 0xF;
LABEL_56:
      WdLogEvent5_WdError(v57);
      v24 = v56;
      goto LABEL_66;
    }
    if ( *((_BYTE *)this + 366) )
    {
      if ( (v58 = (struct DXGDEVICE *)*((_QWORD *)this + 2),
            v59 = *((_DWORD *)this + 86),
            LOBYTE(v55) = *((_BYTE *)this + 367),
            v60 = (struct ADAPTER_RENDER *)*((_QWORD *)v58 + 2),
            !(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*((_QWORD *)v60 + 54) + 8LL)
                                                                        + 248LL))(
               *((_QWORD *)v60 + 55),
               *((_QWORD *)v83 + 3),
               v55,
               v59))
        && (v61 = MapGpuVaForAllocation(v60, v58, v59, v83), v61 < 0)
        || (LOBYTE(v50) = *((_BYTE *)this + 367),
            !(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 432LL)
                                                                                    + 8LL)
                                                                        + 248LL))(
               *((_QWORD *)v60 + 55),
               *((_QWORD *)v84 + 3),
               v50,
               v59))
        && (v61 = MapGpuVaForAllocation(v60, v58, v59, v84), v61 < 0) )
      {
        v24 = v61;
        goto LABEL_66;
      }
    }
    v62 = a7;
    v86[0] = 0LL;
    Width = v91.Width;
    Height = v91.Height;
    if ( v90.Width < v91.Width )
      Width = v90.Width;
    if ( v90.Height < v91.Height )
      Height = v90.Height;
    v65 = 0;
    v86[1] = (struct VIDSCH_SUBMIT_DATA_BASE *)__PAIR64__(Height, Width);
    if ( a6 )
    {
      while ( v62->right <= Width && v62->bottom <= Height && v62->top >= 0 && v62->left >= 0 )
      {
        ++v65;
        ++v62;
        if ( v65 >= a6 )
          goto LABEL_47;
      }
      v69 = (_QWORD *)WdLogNewEntry5_WdError(v54, v49);
      v69[3] = Width;
      v69[4] = Height;
      v69[5] = v62->right;
      v69[6] = v62->bottom;
      WdLogEvent5_WdError(v69);
      v24 = -1073741811;
      goto LABEL_66;
    }
LABEL_47:
    v66 = *((_QWORD *)this + 39);
    v85 = 0LL;
    if ( !v66 )
      goto LABEL_54;
    v67 = *((_DWORD *)this + 80);
    v68 = 0LL;
    if ( !v67 )
      goto LABEL_54;
    while ( !*(_QWORD *)(v66 + 8 * v68) )
    {
      v68 = (unsigned int)(v68 + 1);
      if ( (unsigned int)v68 >= v67 )
        goto LABEL_54;
    }
    v85 = *(struct _VIDMM_DMA_BUFFER **)(v66 + 8 * v68);
    *(_QWORD *)(v66 + 8 * v68) = 0LL;
    if ( !v85 )
    {
LABEL_54:
      v70 = DXGCONTEXT::AcquireDmaBuffer(this, &v85, 0LL, 1);
      v56 = v70;
      if ( v70 < 0 )
      {
        v57 = (_QWORD *)WdLogNewEntry5_WdError(v72, v71);
        v57[3] = v56;
        goto LABEL_56;
      }
    }
    memset(&v92, 0, sizeof(v92));
    v92.Flags.Value |= 1u;
    v92.pDstSubRects = v88;
    v73 = *((_QWORD *)this + 2);
    v92.DstRect = *(RECT *)v86;
    v92.SubRectCnt = a6;
    v92.SrcRect = *(RECT *)v86;
    v86[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v73 + 16);
    v86[0] = 0LL;
    CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v86);
    v75 = v86[0];
    if ( v86[0] )
    {
      *(_DWORD *)v86[0] |= 0x10000u;
      if ( (*(_DWORD *)(*((_QWORD *)v83 + 6) + 4LL) & 3) != 0 || (*(_DWORD *)(*((_QWORD *)v84 + 6) + 4LL) & 3) != 0 )
        *(_DWORD *)v75 |= 1u;
      *(_DWORD *)v75 |= 0x100u;
      v77 = DXGCONTEXT::SubmitPresent(this, 0LL, v87, v89, 0LL, v10, v9, &v92, 0LL, v85, v75, v90.Format, 0LL);
      v80 = v77;
      if ( v77 < 0 )
      {
        v81 = WdLogNewEntry5_WdError(v79, v78);
        *(_QWORD *)(v81 + 24) = v80;
        WdLogEvent5_WdError(v81);
      }
      v24 = v80;
    }
    else
    {
      v76 = WdLogNewEntry5_WdLowResource(v74);
      *(_QWORD *)(v76 + 24) = 5910LL;
      WdLogEvent5_WdLowResource(v76);
      v24 = -1073741801;
    }
    CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v86);
    goto LABEL_66;
  }
  v25 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
  v25[3] = v10;
LABEL_14:
  WdLogEvent5_WdError(v25);
LABEL_67:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v84, v29, v30, v31);
  return v24;
}
