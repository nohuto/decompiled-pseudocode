/*
 * XREFs of ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B0B9C
 * Callers:
 *     ?VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017BE90 (-VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C00092DC (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C002486C (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00E8320 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0100890 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGA.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C010E944 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C010EEAC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z @ 0x1C01B1E10 (-MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::BltFromVm(
        DXGCONTEXT *this,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        struct DXGCONTEXT **a5,
        struct tagRECT *a6,
        struct tagRECT *a7,
        UINT a8,
        const struct tagRECT *a9,
        struct COREDEVICEACCESS *a10)
{
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // r13
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r9
  int v17; // edx
  struct _EX_RUNDOWN_REF *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  _QWORD *v21; // rcx
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
  int v32; // edx
  struct _EX_RUNDOWN_REF *v33; // rdx
  __int64 v34; // rcx
  _QWORD *v35; // rcx
  __int64 v36; // r14
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rbx
  _QWORD *v43; // rax
  struct DXGDEVICE *v44; // r14
  unsigned int v45; // edi
  struct ADAPTER_RENDER *v46; // rbx
  __int64 v47; // r8
  int v48; // eax
  __int64 right; // rcx
  LONG v50; // eax
  LONG left; // r9d
  int v52; // edx
  LONG top; // r10d
  LONG bottom; // r8d
  __int64 v55; // rcx
  LONG *v56; // rax
  int v57; // ebx
  LONG v58; // r11d
  LONG v59; // eax
  __int64 v60; // rcx
  unsigned int v61; // edx
  __int64 v62; // rax
  __int64 v63; // rax
  struct _D3DKMT_PRESENT *v64; // rbx
  int v65; // eax
  __int64 v66; // rcx
  const RECT *v67; // rax
  RECT v68; // xmm0
  RECT v69; // xmm1
  __int64 v70; // rax
  __int64 v71; // rcx
  struct VIDSCH_SUBMIT_DATA_BASE *v72; // r8
  __int64 v73; // rax
  int v74; // edx
  int v75; // eax
  int v76; // eax
  int v77; // eax
  __int64 v78; // rcx
  __int64 v79; // rbx
  __int64 v80; // rax
  struct DXGALLOCATION *v82; // [rsp+70h] [rbp-90h] BYREF
  struct DXGALLOCATION *v83; // [rsp+78h] [rbp-88h] BYREF
  struct _VIDMM_DMA_BUFFER *v84; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v85; // [rsp+88h] [rbp-78h]
  struct VIDSCH_SUBMIT_DATA_BASE *v86[2]; // [rsp+90h] [rbp-70h] BYREF
  struct COREDEVICEACCESS *v87; // [rsp+A0h] [rbp-60h]
  struct DXGCONTEXT **v88; // [rsp+A8h] [rbp-58h]
  struct _DXGKARG_DESCRIBEALLOCATION v89; // [rsp+B0h] [rbp-50h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v90; // [rsp+E0h] [rbp-20h] BYREF
  struct _DXGKARG_PRESENT v91; // [rsp+110h] [rbp+10h] BYREF

  v88 = a5;
  v86[0] = (struct VIDSCH_SUBMIT_DATA_BASE *)a9;
  v87 = a10;
  v11 = *((_QWORD *)this + 2);
  v12 = a2;
  v13 = a3;
  v85 = a2;
  v14 = *(_QWORD *)(v11 + 40);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v14 + 208));
  v15 = ((unsigned int)v12 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v15 < *(_DWORD *)(v14 + 248)
    && (v16 = *(_QWORD *)(v14 + 232),
        v17 = *(_DWORD *)(v16 + 16 * v15 + 8),
        (((unsigned int)v12 >> 25) & 0x60) == (*(_BYTE *)(v16 + 16 * v15 + 8) & 0x60))
    && (v17 & 0x2000) == 0
    && (v17 & 0x1F) == 5 )
  {
    v18 = *(struct _EX_RUNDOWN_REF **)(v16 + 16LL * (unsigned int)v15);
  }
  else
  {
    v18 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v83, v18);
  ExReleasePushLockSharedEx(v14 + 208, 0LL);
  KeLeaveCriticalRegion();
  LODWORD(v20) = -1073741811;
  if ( v83 )
  {
    v22 = *((_QWORD *)this + 2);
    v23 = *(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL);
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v83 + 1) + 16LL) + 16LL) != v23 )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdError(v23);
      v21[3] = *((_QWORD *)this + 2);
      v21[4] = v83;
      v21[5] = -1073741811LL;
      goto LABEL_11;
    }
    memset(&v90, 0, sizeof(v90));
    v90.hAllocation = *(HANDLE *)(*((_QWORD *)v83 + 6) + 16LL);
    v25 = ADAPTER_RENDER::DdiDescribeAllocation(
            *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL) + 2464LL),
            &v90,
            v24);
    v27 = v25;
    if ( v25 < 0 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdError(v26);
      v28[3] = v27;
      v28[4] = this;
      v28[5] = *((unsigned int *)v83 + 4);
      v28[6] = v83;
      v28[7] = (*(_DWORD *)(*((_QWORD *)v83 + 6) + 4LL) >> 6) & 0xF;
      WdLogEvent5_WdError(v28);
      LODWORD(v20) = v27;
      goto LABEL_78;
    }
    v29 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v29 + 208));
    v30 = ((unsigned int)v13 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v30 < *(_DWORD *)(v29 + 248)
      && (v31 = *(_QWORD *)(v29 + 232),
          v32 = *(_DWORD *)(v31 + 16 * v30 + 8),
          (((unsigned int)v13 >> 25) & 0x60) == (*(_BYTE *)(v31 + 16 * v30 + 8) & 0x60))
      && (v32 & 0x2000) == 0
      && (v32 & 0x1F) == 5 )
    {
      v33 = *(struct _EX_RUNDOWN_REF **)(v31 + 16LL * (unsigned int)v30);
    }
    else
    {
      v33 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v82, v33);
    ExReleasePushLockSharedEx(v29 + 208, 0LL);
    KeLeaveCriticalRegion();
    LODWORD(v20) = -1073741811;
    if ( v82 )
    {
      v36 = *((_QWORD *)this + 2);
      v37 = *(_QWORD *)(*(_QWORD *)(v36 + 16) + 16LL);
      if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v82 + 1) + 16LL) + 16LL) == v37 )
      {
        memset(&v89, 0, sizeof(v89));
        v89.hAllocation = *(HANDLE *)(*((_QWORD *)v82 + 6) + 16LL);
        v39 = ADAPTER_RENDER::DdiDescribeAllocation(
                *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v36 + 16) + 16LL) + 2464LL),
                &v89,
                v38);
        v42 = v39;
        if ( v39 < 0 )
        {
          v43 = (_QWORD *)WdLogNewEntry5_WdError(v40);
          v43[3] = v42;
          v43[4] = this;
          v43[5] = *((unsigned int *)v82 + 4);
          v43[6] = v82;
          v43[7] = (*(_DWORD *)(*((_QWORD *)v82 + 6) + 4LL) >> 6) & 0xF;
          WdLogEvent5_WdError(v43);
          LODWORD(v20) = v42;
          goto LABEL_77;
        }
        if ( *((_BYTE *)this + 398) )
        {
          if ( (v44 = (struct DXGDEVICE *)*((_QWORD *)this + 2),
                v45 = *((_DWORD *)this + 90),
                LOBYTE(v41) = *((_BYTE *)this + 399),
                v46 = (struct ADAPTER_RENDER *)*((_QWORD *)v44 + 2),
                !(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*((_QWORD *)v46 + 68) + 8LL)
                                                                            + 248LL))(
                   *((_QWORD *)v46 + 69),
                   *((_QWORD *)v82 + 3),
                   v41,
                   v45))
            && (v48 = MapGpuVaForAllocation(v46, v44, v45, v82), v48 < 0)
            || (LOBYTE(v47) = *((_BYTE *)this + 399),
                !(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL)
                                                                                        + 8LL)
                                                                            + 248LL))(
                   *((_QWORD *)v46 + 69),
                   *((_QWORD *)v83 + 3),
                   v47,
                   v45))
            && (v48 = MapGpuVaForAllocation(v46, v44, v45, v83), v48 < 0) )
          {
            LODWORD(v20) = v48;
            goto LABEL_77;
          }
        }
        right = (unsigned int)a6->right;
        if ( a6->left >= (int)right
          || a6->left < 0
          || (int)right > (int)v90.Width
          || (v50 = a6->top, right = (unsigned int)a6->bottom, v50 >= (int)right)
          || v50 < 0
          || (int)right > (int)v90.Height )
        {
          v63 = WdLogNewEntry5_WdError(right);
          *(_QWORD *)(v63 + 24) = 6818LL;
        }
        else
        {
          left = a7->left;
          v52 = a7->right;
          if ( a7->left >= v52
            || left < 0
            || v52 > (int)v89.Width
            || (top = a7->top, bottom = a7->bottom, top >= bottom)
            || top < 0
            || bottom > (int)v89.Height )
          {
            v63 = WdLogNewEntry5_WdError(right);
            *(_QWORD *)(v63 + 24) = 6828LL;
          }
          else
          {
            v55 = 0LL;
            if ( !a8 )
            {
LABEL_53:
              v84 = 0LL;
              v60 = *((_QWORD *)this + 41);
              if ( !v60 )
                goto LABEL_60;
              v61 = *((_DWORD *)this + 84);
              v62 = 0LL;
              if ( !v61 )
                goto LABEL_60;
              while ( !*(_QWORD *)(v60 + 8 * v62) )
              {
                v62 = (unsigned int)(v62 + 1);
                if ( (unsigned int)v62 >= v61 )
                  goto LABEL_60;
              }
              v84 = *(struct _VIDMM_DMA_BUFFER **)(v60 + 8 * v62);
              *(_QWORD *)(v60 + 8 * v62) = 0LL;
              if ( v84 )
              {
                v64 = (struct _D3DKMT_PRESENT *)v87;
              }
              else
              {
LABEL_60:
                v64 = (struct _D3DKMT_PRESENT *)v87;
                v65 = DXGCONTEXT::AcquireDmaBuffer(this, &v84, v87, 1);
                v20 = v65;
                if ( v65 < 0 )
                {
                  v35 = (_QWORD *)WdLogNewEntry5_WdError(v66);
                  v35[3] = v20;
                  goto LABEL_24;
                }
              }
              memset(&v91, 0, sizeof(v91));
              v67 = (const RECT *)v86[0];
              v68 = *a7;
              v69 = *a6;
              v91.Flags.Value |= 1u;
              v86[0] = 0LL;
              v91.pDstSubRects = v67;
              v70 = *((_QWORD *)this + 2);
              v91.DstRect = v68;
              v91.SubRectCnt = a8;
              v91.SrcRect = v69;
              v86[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v70 + 16);
              CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v86);
              v72 = v86[0];
              if ( v86[0] )
              {
                v74 = *(_DWORD *)v86[0] | 0x10000;
                *(_DWORD *)v86[0] = v74;
                v75 = *(_DWORD *)(*((_QWORD *)v82 + 6) + 4LL);
                if ( (v75 & 2) != 0
                  || (v75 & 1) != 0
                  || (v76 = *(_DWORD *)(*((_QWORD *)v83 + 6) + 4LL), (v76 & 2) != 0)
                  || (v76 & 1) != 0 )
                {
                  v74 |= 1u;
                  *(_DWORD *)v72 = v74;
                }
                *(_DWORD *)v72 = v74 | 0x120;
                v77 = DXGCONTEXT::SubmitPresent(
                        this,
                        0LL,
                        0LL,
                        0,
                        v88,
                        0LL,
                        v85,
                        v13,
                        &v91,
                        0LL,
                        v84,
                        v72,
                        v89.Format,
                        v64);
                v79 = v77;
                if ( v77 < 0 )
                {
                  v80 = WdLogNewEntry5_WdError(v78);
                  *(_QWORD *)(v80 + 24) = v79;
                  WdLogEvent5_WdError(v80);
                }
                LODWORD(v20) = v79;
              }
              else
              {
                v73 = WdLogNewEntry5_WdLowResource(v71);
                *(_QWORD *)(v73 + 24) = 6885LL;
                WdLogEvent5_WdLowResource(v73);
                LODWORD(v20) = -1073741801;
              }
              CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v86);
              goto LABEL_77;
            }
            while ( 1 )
            {
              v56 = (LONG *)((char *)v86[0] + 16 * (unsigned int)v55);
              v57 = v56[2];
              if ( *v56 >= v57 )
                break;
              if ( *v56 < left )
                break;
              if ( v57 > v52 )
                break;
              v58 = v56[1];
              v59 = v56[3];
              if ( v58 >= v59 || v58 < top || v59 > bottom )
                break;
              v55 = (unsigned int)(v55 + 1);
              if ( (unsigned int)v55 >= a8 )
                goto LABEL_53;
            }
            v63 = WdLogNewEntry5_WdError(v55);
            *(_QWORD *)(v63 + 24) = 6841LL;
          }
        }
        WdLogEvent5_WdError(v63);
        LODWORD(v20) = -1073741811;
        goto LABEL_77;
      }
      v35 = (_QWORD *)WdLogNewEntry5_WdError(v37);
      v35[3] = *((_QWORD *)this + 2);
      v35[4] = v82;
      v35[5] = -1073741811LL;
    }
    else
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdError(v34);
      v35[3] = v13;
    }
LABEL_24:
    WdLogEvent5_WdError(v35);
LABEL_77:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v82);
    goto LABEL_78;
  }
  v21 = (_QWORD *)WdLogNewEntry5_WdError(v19);
  v21[3] = v12;
LABEL_11:
  WdLogEvent5_WdError(v21);
LABEL_78:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v83);
  return (unsigned int)v20;
}
