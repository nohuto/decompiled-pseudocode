/*
 * XREFs of ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B040C
 * Callers:
 *     ?SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C01D3D8C (-SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT.c)
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1C01EA670 (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C00092DC (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C002486C (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00E8320 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0100890 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGA.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C010E944 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C010EEAC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2IPEBU4@IPEAE@Z @ 0x1C0181650 (-VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2I.c)
 *     ?MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z @ 0x1C01B1E10 (-MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::Blt(
        DXGCONTEXT *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        struct DXGCONTEXT **a5,
        struct tagRECT *a6,
        UINT a7,
        struct tagRECT *a8,
        struct COREDEVICEACCESS *a9)
{
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r9
  int v18; // edx
  struct _EX_RUNDOWN_REF *v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // edi
  _QWORD *v22; // rax
  __int64 v23; // r14
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rbx
  _QWORD *v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // r9
  int v33; // edx
  struct _EX_RUNDOWN_REF *v34; // rdx
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // r14
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rbx
  _QWORD *v43; // rax
  UINT bottom; // edx
  UINT right; // r8d
  __int64 top; // rcx
  LONG left; // eax
  signed int Width; // edi
  __int64 v49; // r8
  signed int Height; // r14d
  struct tagRECT *v51; // rbx
  __int64 v52; // rdx
  unsigned int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // rbx
  struct DXGPROCESS *Current; // rax
  int v57; // eax
  _QWORD *v58; // rax
  __int64 v59; // rcx
  struct DXGDEVICE *v60; // r14
  unsigned int v61; // edi
  struct ADAPTER_RENDER *v62; // rbx
  __int64 v63; // r8
  __int64 v64; // rcx
  unsigned int v65; // edx
  unsigned int v66; // eax
  struct _D3DKMT_PRESENT *v67; // rdi
  int v68; // eax
  __int64 v69; // rcx
  struct tagRECT v70; // xmm0
  __int64 v71; // rax
  __int64 v72; // rcx
  struct VIDSCH_SUBMIT_DATA_BASE *v73; // r8
  __int64 v74; // rax
  int v75; // edx
  int v76; // eax
  int v77; // eax
  unsigned int v78; // r9d
  int v79; // eax
  __int64 v80; // rcx
  __int64 v81; // rbx
  __int64 v82; // rax
  size_t v84; // [rsp+48h] [rbp-B8h]
  struct DXGALLOCATION *v85; // [rsp+70h] [rbp-90h] BYREF
  struct DXGALLOCATION *v86; // [rsp+78h] [rbp-88h] BYREF
  struct tagRECT v87; // [rsp+80h] [rbp-80h] BYREF
  struct tagRECT v88; // [rsp+90h] [rbp-70h] BYREF
  struct _VIDMM_DMA_BUFFER *v89; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v90; // [rsp+A8h] [rbp-58h]
  struct tagRECT *Src; // [rsp+B0h] [rbp-50h]
  struct COREDEVICEACCESS *v92; // [rsp+B8h] [rbp-48h]
  struct DXGCONTEXT **v93; // [rsp+C0h] [rbp-40h]
  struct _DXGKARG_DESCRIBEALLOCATION v94; // [rsp+C8h] [rbp-38h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v95; // [rsp+F8h] [rbp-8h] BYREF
  struct _DXGKARG_PRESENT v96; // [rsp+130h] [rbp+30h] BYREF

  v93 = a5;
  Src = a8;
  v92 = a9;
  v10 = *((_QWORD *)this + 2);
  v90 = a4;
  v11 = a3;
  v12 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v10 + 16) + 16LL)) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v14 + 24) = 6464LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v15 + 208));
  v16 = ((unsigned int)v12 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v16 < *(_DWORD *)(v15 + 248)
    && (v17 = *(_QWORD *)(v15 + 232),
        v18 = *(_DWORD *)(v17 + 16 * v16 + 8),
        (((unsigned int)v12 >> 25) & 0x60) == (*(_BYTE *)(v17 + 16 * v16 + 8) & 0x60))
    && (v18 & 0x2000) == 0
    && (v18 & 0x1F) == 5 )
  {
    v19 = *(struct _EX_RUNDOWN_REF **)(v17 + 16LL * (unsigned int)v16);
  }
  else
  {
    v19 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v86, v19);
  ExReleasePushLockSharedEx(v15 + 208, 0LL);
  KeLeaveCriticalRegion();
  v21 = -1073741811;
  if ( v86 )
  {
    v23 = *((_QWORD *)this + 2);
    v24 = *(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL);
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v86 + 1) + 16LL) + 16LL) != v24 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdError(v24);
      v22[3] = *((_QWORD *)this + 2);
      v22[4] = v86;
      v22[5] = -1073741811LL;
      goto LABEL_13;
    }
    memset(&v95, 0, sizeof(v95));
    v95.hAllocation = *(HANDLE *)(*((_QWORD *)v86 + 6) + 16LL);
    v26 = ADAPTER_RENDER::DdiDescribeAllocation(
            *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) + 2464LL),
            &v95,
            v25);
    v28 = v26;
    if ( v26 < 0 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v27);
      v29[3] = v28;
      v29[4] = this;
      v29[5] = *((unsigned int *)v86 + 4);
      v29[6] = v86;
      v29[7] = (*(_DWORD *)(*((_QWORD *)v86 + 6) + 4LL) >> 6) & 0xF;
      WdLogEvent5_WdError(v29);
      v21 = v28;
      goto LABEL_75;
    }
    v30 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v30 + 208));
    v31 = ((unsigned int)v11 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v31 < *(_DWORD *)(v30 + 248)
      && (v32 = *(_QWORD *)(v30 + 232),
          v33 = *(_DWORD *)(v32 + 16 * v31 + 8),
          (((unsigned int)v11 >> 25) & 0x60) == (*(_BYTE *)(v32 + 16 * v31 + 8) & 0x60))
      && (v33 & 0x2000) == 0
      && (v33 & 0x1F) == 5 )
    {
      v34 = *(struct _EX_RUNDOWN_REF **)(v32 + 16LL * (unsigned int)v31);
    }
    else
    {
      v34 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v85, v34);
    ExReleasePushLockSharedEx(v30 + 208, 0LL);
    KeLeaveCriticalRegion();
    v21 = -1073741811;
    if ( !v85 )
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdError(v35);
      v36[3] = v11;
LABEL_26:
      WdLogEvent5_WdError(v36);
LABEL_74:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v85);
      goto LABEL_75;
    }
    v37 = *((_QWORD *)this + 2);
    v38 = *(_QWORD *)(*(_QWORD *)(v37 + 16) + 16LL);
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v85 + 1) + 16LL) + 16LL) != v38 )
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdError(v38);
      v36[3] = *((_QWORD *)this + 2);
      v36[4] = v85;
      v36[5] = -1073741811LL;
      goto LABEL_26;
    }
    memset(&v94, 0, sizeof(v94));
    v94.hAllocation = *(HANDLE *)(*((_QWORD *)v85 + 6) + 16LL);
    v40 = ADAPTER_RENDER::DdiDescribeAllocation(
            *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v37 + 16) + 16LL) + 2464LL),
            &v94,
            v39);
    v42 = v40;
    if ( v40 < 0 )
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdError(v41);
      v43[3] = v42;
      v43[4] = this;
      v43[5] = *((unsigned int *)v85 + 4);
      v43[6] = v85;
      v43[7] = (*(_DWORD *)(*((_QWORD *)v85 + 6) + 4LL) >> 6) & 0xF;
LABEL_61:
      WdLogEvent5_WdError(v43);
      v21 = v42;
      goto LABEL_74;
    }
    *(_QWORD *)&v88.left = 0LL;
    if ( a6 )
    {
      v87 = *a6;
      bottom = v87.bottom;
      right = v87.right;
      top = (unsigned int)v87.top;
      left = v87.left;
    }
    else
    {
      right = v95.Width;
      left = 0;
      bottom = v95.Height;
      top = 0LL;
      v87.left = 0;
      v87.top = 0;
    }
    Width = v94.Width;
    v49 = right - left;
    Height = v94.Height;
    v51 = Src;
    if ( (int)v49 < (int)v94.Width )
      Width = v49;
    v52 = bottom - (unsigned int)top;
    v88.right = Width;
    if ( (int)v52 < (int)v94.Height )
      Height = v52;
    v87.right = Width + left;
    v88.bottom = Height;
    v87.bottom = Height + top;
    v53 = 0;
    if ( a7 )
    {
      while ( v51->left >= 0 && v51->top >= 0 )
      {
        if ( v51->right > Width || v51->bottom > Height )
        {
          v58 = (_QWORD *)WdLogNewEntry5_WdError(top);
          v58[3] = v51->right;
          v58[4] = v51->bottom;
          v58[5] = Width;
          v58[6] = Height;
          goto LABEL_46;
        }
        ++v53;
        ++v51;
        if ( v53 >= a7 )
          goto LABEL_42;
      }
      v58 = (_QWORD *)WdLogNewEntry5_WdError(top);
      v58[3] = v51->left;
      v59 = v51->top;
      v58[5] = 0LL;
      v58[6] = 0LL;
      v58[4] = v59;
LABEL_46:
      WdLogEvent5_WdError(v58);
      v21 = -1073741811;
      goto LABEL_74;
    }
LABEL_42:
    if ( *((_BYTE *)this + 401) )
    {
      v54 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v55 = *(_QWORD *)(v54 + 16);
      Current = DXGPROCESS::GetCurrent(v54, v52);
      LODWORD(v84) = 0;
      v57 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
              (struct VMBCHANNEL__ **)(v55 + 4080),
              Current,
              this,
              *((_DWORD *)v86 + 24),
              *((_DWORD *)v85 + 24),
              &v87,
              &v88,
              a7,
              Src,
              v84,
              0LL);
    }
    else if ( !*((_BYTE *)this + 398)
           || ((v60 = (struct DXGDEVICE *)*((_QWORD *)this + 2),
                v61 = *((_DWORD *)this + 90),
                LOBYTE(v49) = *((_BYTE *)this + 399),
                v62 = (struct ADAPTER_RENDER *)*((_QWORD *)v60 + 2),
                (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*((_QWORD *)v62 + 68) + 8LL)
                                                                           + 248LL))(
                  *((_QWORD *)v62 + 69),
                  *((_QWORD *)v85 + 3),
                  v49,
                  v61))
            || (v57 = MapGpuVaForAllocation(v62, v60, v61, v85), v57 >= 0))
           && ((LOBYTE(v63) = *((_BYTE *)this + 399),
                (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL)
                                                                                       + 8LL)
                                                                           + 248LL))(
                  *((_QWORD *)v62 + 69),
                  *((_QWORD *)v86 + 3),
                  v63,
                  v61))
            || (v57 = MapGpuVaForAllocation(v62, v60, v61, v86), v57 >= 0)) )
    {
      v64 = *((_QWORD *)this + 41);
      v89 = 0LL;
      if ( !v64 )
        goto LABEL_59;
      v65 = *((_DWORD *)this + 84);
      v66 = 0;
      if ( !v65 )
        goto LABEL_59;
      while ( !*(_QWORD *)(v64 + 8LL * v66) )
      {
        if ( ++v66 >= v65 )
          goto LABEL_59;
      }
      v89 = *(struct _VIDMM_DMA_BUFFER **)(v64 + 8LL * v66);
      *(_QWORD *)(v64 + 8LL * v66) = 0LL;
      if ( v89 )
      {
        v67 = (struct _D3DKMT_PRESENT *)v92;
      }
      else
      {
LABEL_59:
        v67 = (struct _D3DKMT_PRESENT *)v92;
        v68 = DXGCONTEXT::AcquireDmaBuffer(this, &v89, v92, 1);
        v42 = v68;
        if ( v68 < 0 )
        {
          v43 = (_QWORD *)WdLogNewEntry5_WdError(v69);
          v43[3] = v42;
          goto LABEL_61;
        }
      }
      memset(&v96, 0, sizeof(v96));
      v70 = v88;
      v96.Flags.Value |= 1u;
      *(_QWORD *)&v88.left = 0LL;
      v96.pDstSubRects = Src;
      v71 = *((_QWORD *)this + 2);
      v96.DstRect = v70;
      v96.SubRectCnt = a7;
      v96.SrcRect = v87;
      *(_QWORD *)&v88.right = *(_QWORD *)(v71 + 16);
      CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)&v88);
      v73 = *(struct VIDSCH_SUBMIT_DATA_BASE **)&v88.left;
      if ( *(_QWORD *)&v88.left )
      {
        v75 = **(_DWORD **)&v88.left | 0x10000;
        **(_DWORD **)&v88.left = v75;
        v76 = *(_DWORD *)(*((_QWORD *)v85 + 6) + 4LL);
        if ( (v76 & 2) != 0
          || (v76 & 1) != 0
          || (v77 = *(_DWORD *)(*((_QWORD *)v86 + 6) + 4LL), (v77 & 2) != 0)
          || (v77 & 1) != 0 )
        {
          v75 |= 1u;
          *(_DWORD *)v73 = v75;
        }
        v78 = v90;
        *(_DWORD *)v73 = v75 | 0x100;
        v79 = DXGCONTEXT::SubmitPresent(this, 0LL, 0LL, v78, v93, 0LL, v12, v11, &v96, 0LL, v89, v73, v94.Format, v67);
        v81 = v79;
        if ( v79 < 0 )
        {
          v82 = WdLogNewEntry5_WdError(v80);
          *(_QWORD *)(v82 + 24) = v81;
          WdLogEvent5_WdError(v82);
        }
        v21 = v81;
      }
      else
      {
        v74 = WdLogNewEntry5_WdLowResource(v72);
        *(_QWORD *)(v74 + 24) = 6660LL;
        WdLogEvent5_WdLowResource(v74);
        v21 = -1073741801;
      }
      CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)&v88);
      goto LABEL_74;
    }
    v21 = v57;
    goto LABEL_74;
  }
  v22 = (_QWORD *)WdLogNewEntry5_WdError(v20);
  v22[3] = v12;
LABEL_13:
  WdLogEvent5_WdError(v22);
LABEL_75:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v86);
  return v21;
}
