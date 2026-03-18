/*
 * XREFs of ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@IPEBUtagRECT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B4654
 * Callers:
 *     ?SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C01CDB50 (-SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0008EE0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0008F30 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00833BC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0086DD0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C4D00 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C016F500 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2IPEBU4@IPEAE@Z @ 0x1C0195038 (-VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2I.c)
 *     ?MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z @ 0x1C01B5F78 (-MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::Blt(
        DXGCONTEXT *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        struct DXGCONTEXT **a5,
        UINT a6,
        struct tagRECT *a7)
{
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r9
  int v17; // r8d
  struct _EX_RUNDOWN_REF *v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // edi
  _QWORD *v21; // rax
  __int64 v22; // r14
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rbx
  _QWORD *v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // r9
  int v32; // r8d
  struct _EX_RUNDOWN_REF *v33; // rdx
  __int64 v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // r14
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rbx
  _QWORD *v43; // rax
  signed int Width; // edi
  struct tagRECT *v45; // rbx
  unsigned int v46; // eax
  signed int Height; // r14d
  __int64 v48; // rcx
  __int64 v49; // rbx
  struct DXGPROCESS *Current; // rax
  int v51; // eax
  _QWORD *v52; // rax
  struct DXGDEVICE *v53; // r14
  unsigned int v54; // edi
  struct ADAPTER_RENDER *v55; // rbx
  __int64 v56; // r8
  __int64 v57; // rcx
  unsigned int v58; // r8d
  unsigned int v59; // eax
  int v60; // eax
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rcx
  struct VIDSCH_SUBMIT_DATA_BASE *v64; // rdx
  __int64 v65; // rax
  int v66; // eax
  int v67; // eax
  int v68; // eax
  __int64 v69; // rcx
  __int64 v70; // rbx
  __int64 v71; // rax
  size_t Size; // [rsp+48h] [rbp-B8h]
  struct DXGALLOCATION *v74; // [rsp+70h] [rbp-90h] BYREF
  struct DXGALLOCATION *v75; // [rsp+78h] [rbp-88h] BYREF
  struct tagRECT v76; // [rsp+80h] [rbp-80h] BYREF
  struct _VIDMM_DMA_BUFFER *v77; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v78; // [rsp+98h] [rbp-68h]
  struct tagRECT *Src; // [rsp+A0h] [rbp-60h]
  struct DXGCONTEXT **v80; // [rsp+A8h] [rbp-58h]
  struct _DXGKARG_DESCRIBEALLOCATION v81; // [rsp+B0h] [rbp-50h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v82; // [rsp+E0h] [rbp-20h] BYREF
  struct _DXGKARG_PRESENT v83; // [rsp+110h] [rbp+10h] BYREF

  v80 = a5;
  v8 = *((_QWORD *)this + 2);
  v78 = a4;
  v9 = a3;
  v10 = a2;
  v11 = *(_QWORD *)(v8 + 16);
  Src = a7;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v11 + 16)) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v13 + 24) = 6406LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v14 + 200));
  v15 = ((unsigned int)v10 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v15 < *(_DWORD *)(v14 + 240)
    && (v16 = *(_QWORD *)(v14 + 224),
        v17 = *(_DWORD *)(v16 + 16 * v15 + 8),
        (((unsigned int)v10 >> 25) & 0x60) == (*(_BYTE *)(v16 + 16 * v15 + 8) & 0x60))
    && (v17 & 0x2000) == 0
    && (v17 & 0x1F) != 0
    && (*(_BYTE *)(v16 + 16LL * (unsigned int)v15 + 8) & 0x1F) == 5 )
  {
    v18 = *(struct _EX_RUNDOWN_REF **)(v16 + 16LL * (unsigned int)v15);
  }
  else
  {
    v18 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v75, v18);
  ExReleasePushLockSharedEx(v14 + 200, 0LL);
  KeLeaveCriticalRegion();
  v20 = -1073741811;
  if ( v75 )
  {
    v22 = *((_QWORD *)this + 2);
    v23 = *(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL);
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v75 + 1) + 16LL) + 16LL) != v23 )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdError(v23);
      v21[3] = *((_QWORD *)this + 2);
      v21[4] = v75;
      v21[5] = -1073741811LL;
      goto LABEL_14;
    }
    memset(&v82, 0, sizeof(v82));
    v82.hAllocation = *(HANDLE *)(*((_QWORD *)v75 + 6) + 16LL);
    v25 = ADAPTER_RENDER::DdiDescribeAllocation(
            *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL) + 2312LL),
            &v82,
            v24);
    v27 = v25;
    if ( v25 < 0 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdError(v26);
      v28[3] = v27;
      v28[4] = this;
      v28[5] = *((unsigned int *)v75 + 4);
      v28[6] = v75;
      v28[7] = (*(_DWORD *)(*((_QWORD *)v75 + 6) + 4LL) >> 6) & 0xF;
      WdLogEvent5_WdError(v28);
      v20 = v27;
      goto LABEL_71;
    }
    v29 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v29 + 200));
    v30 = ((unsigned int)v9 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v30 < *(_DWORD *)(v29 + 240)
      && (v31 = *(_QWORD *)(v29 + 224),
          v32 = *(_DWORD *)(v31 + 16 * v30 + 8),
          (((unsigned int)v9 >> 25) & 0x60) == (*(_BYTE *)(v31 + 16 * v30 + 8) & 0x60))
      && (v32 & 0x2000) == 0
      && (v32 & 0x1F) != 0
      && (*(_BYTE *)(v31 + 16LL * (unsigned int)v30 + 8) & 0x1F) == 5 )
    {
      v33 = *(struct _EX_RUNDOWN_REF **)(v31 + 16LL * (unsigned int)v30);
    }
    else
    {
      v33 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v74, v33);
    ExReleasePushLockSharedEx(v29 + 200, 0LL);
    KeLeaveCriticalRegion();
    v20 = -1073741811;
    if ( !v74 )
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdError(v34);
      v35[3] = v9;
LABEL_28:
      WdLogEvent5_WdError(v35);
LABEL_70:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v74);
      goto LABEL_71;
    }
    v36 = *((_QWORD *)this + 2);
    v37 = *(_QWORD *)(*(_QWORD *)(v36 + 16) + 16LL);
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v74 + 1) + 16LL) + 16LL) != v37 )
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdError(v37);
      v35[3] = *((_QWORD *)this + 2);
      v35[4] = v74;
      v35[5] = -1073741811LL;
      goto LABEL_28;
    }
    memset(&v81, 0, sizeof(v81));
    v81.hAllocation = *(HANDLE *)(*((_QWORD *)v74 + 6) + 16LL);
    v39 = ADAPTER_RENDER::DdiDescribeAllocation(
            *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v36 + 16) + 16LL) + 2312LL),
            &v81,
            v38);
    v42 = v39;
    if ( v39 < 0 )
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdError(0LL);
      v43[3] = v42;
      v43[4] = this;
      v43[5] = *((unsigned int *)v74 + 4);
      v43[6] = v74;
      v43[7] = (*(_DWORD *)(*((_QWORD *)v74 + 6) + 4LL) >> 6) & 0xF;
LABEL_58:
      WdLogEvent5_WdError(v43);
      v20 = v42;
      goto LABEL_70;
    }
    Width = v82.Width;
    v45 = a7;
    v46 = 0;
    Height = v82.Height;
    if ( v81.Width < v82.Width )
      Width = v81.Width;
    if ( v81.Height < v82.Height )
      Height = v81.Height;
    v76.bottom = Height;
    *(_QWORD *)&v76.left = 0LL;
    v76.right = Width;
    if ( a6 )
    {
      while ( v45->right <= Width && v45->bottom <= Height && v45->top >= 0 && v45->left >= 0 )
      {
        ++v46;
        ++v45;
        if ( v46 >= a6 )
          goto LABEL_41;
      }
      v52 = (_QWORD *)WdLogNewEntry5_WdError(0LL);
      v52[3] = Width;
      v52[4] = Height;
      v52[5] = v45->right;
      v52[6] = v45->bottom;
      WdLogEvent5_WdError(v52);
      v20 = -1073741811;
      goto LABEL_70;
    }
LABEL_41:
    if ( *((_BYTE *)this + 401) )
    {
      v48 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v49 = *(_QWORD *)(v48 + 16);
      Current = DXGPROCESS::GetCurrent(v48, v40);
      LODWORD(Size) = 0;
      v51 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
              (struct VMBCHANNEL__ **)(v49 + 3888),
              Current,
              this,
              *((_DWORD *)v75 + 24),
              *((_DWORD *)v74 + 24),
              &v76,
              &v76,
              a6,
              Src,
              Size,
              0LL);
    }
    else if ( !*((_BYTE *)this + 398)
           || ((v53 = (struct DXGDEVICE *)*((_QWORD *)this + 2),
                v54 = *((_DWORD *)this + 90),
                LOBYTE(v41) = *((_BYTE *)this + 399),
                v55 = (struct ADAPTER_RENDER *)*((_QWORD *)v53 + 2),
                (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*((_QWORD *)v55 + 66) + 8LL)
                                                                           + 248LL))(
                  *((_QWORD *)v55 + 67),
                  *((_QWORD *)v74 + 3),
                  v41,
                  v54))
            || (v51 = MapGpuVaForAllocation(v55, v53, v54, v74), v51 >= 0))
           && ((LOBYTE(v56) = *((_BYTE *)this + 399),
                (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 528LL)
                                                                                       + 8LL)
                                                                           + 248LL))(
                  *((_QWORD *)v55 + 67),
                  *((_QWORD *)v75 + 3),
                  v56,
                  v54))
            || (v51 = MapGpuVaForAllocation(v55, v53, v54, v75), v51 >= 0)) )
    {
      v57 = *((_QWORD *)this + 41);
      v77 = 0LL;
      if ( !v57 )
        goto LABEL_56;
      v58 = *((_DWORD *)this + 84);
      v59 = 0;
      if ( !v58 )
        goto LABEL_56;
      while ( !*(_QWORD *)(v57 + 8LL * v59) )
      {
        if ( ++v59 >= v58 )
          goto LABEL_56;
      }
      v77 = *(struct _VIDMM_DMA_BUFFER **)(v57 + 8LL * v59);
      *(_QWORD *)(v57 + 8LL * v59) = 0LL;
      if ( !v77 )
      {
LABEL_56:
        v60 = DXGCONTEXT::AcquireDmaBuffer(this, &v77, 0LL, 1);
        v42 = v60;
        if ( v60 < 0 )
        {
          v43 = (_QWORD *)WdLogNewEntry5_WdError(v61);
          v43[3] = v42;
          goto LABEL_58;
        }
      }
      memset(&v83, 0, sizeof(v83));
      v83.Flags.Value |= 1u;
      v83.pDstSubRects = Src;
      v62 = *((_QWORD *)this + 2);
      v83.DstRect = v76;
      v83.SubRectCnt = a6;
      v83.SrcRect = v76;
      *(_QWORD *)&v76.right = *(_QWORD *)(v62 + 16);
      *(_QWORD *)&v76.left = 0LL;
      CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)&v76);
      v64 = *(struct VIDSCH_SUBMIT_DATA_BASE **)&v76.left;
      if ( *(_QWORD *)&v76.left )
      {
        **(_DWORD **)&v76.left |= 0x10000u;
        v66 = *(_DWORD *)(*((_QWORD *)v74 + 6) + 4LL);
        if ( (v66 & 2) != 0
          || (v66 & 1) != 0
          || (v67 = *(_DWORD *)(*((_QWORD *)v75 + 6) + 4LL), (v67 & 2) != 0)
          || (v67 & 1) != 0 )
        {
          *(_DWORD *)v64 |= 1u;
        }
        *(_DWORD *)v64 |= 0x100u;
        v68 = DXGCONTEXT::SubmitPresent(this, 0LL, v78, v80, 0LL, v10, v9, &v83, 0LL, v77, v64, v81.Format, 0LL);
        v70 = v68;
        if ( v68 < 0 )
        {
          v71 = WdLogNewEntry5_WdError(v69);
          *(_QWORD *)(v71 + 24) = v70;
          WdLogEvent5_WdError(v71);
        }
        v20 = v70;
      }
      else
      {
        v65 = WdLogNewEntry5_WdLowResource(v63);
        *(_QWORD *)(v65 + 24) = 6575LL;
        WdLogEvent5_WdLowResource(v65);
        v20 = -1073741801;
      }
      CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)&v76);
      goto LABEL_70;
    }
    v20 = v51;
    goto LABEL_70;
  }
  v21 = (_QWORD *)WdLogNewEntry5_WdError(v19);
  v21[3] = v10;
LABEL_14:
  WdLogEvent5_WdError(v21);
LABEL_71:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v75);
  return v20;
}
