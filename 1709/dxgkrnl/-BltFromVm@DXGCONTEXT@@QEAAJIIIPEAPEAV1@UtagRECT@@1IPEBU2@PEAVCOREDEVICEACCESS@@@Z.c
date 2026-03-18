/*
 * XREFs of ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B4D4C
 * Callers:
 *     ?VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01908C0 (-VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0008EE0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0008F30 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00833BC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0086DD0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C4D00 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C016F500 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z @ 0x1C01B5F78 (-MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z.c)
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
  int v17; // r8d
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
  int v32; // r8d
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
  LONG left; // eax
  int right; // edx
  LONG v51; // r8d
  LONG v52; // ebx
  int v53; // r11d
  LONG top; // r10d
  LONG bottom; // r9d
  __int64 v56; // rcx
  LONG *v57; // rax
  int v58; // r8d
  LONG v59; // edx
  LONG v60; // r8d
  __int64 v61; // rcx
  unsigned int v62; // r8d
  __int64 v63; // rax
  __int64 v64; // rax
  struct _D3DKMT_PRESENT *v65; // rbx
  int v66; // eax
  __int64 v67; // rcx
  const RECT *v68; // rax
  RECT v69; // xmm0
  RECT v70; // xmm1
  __int64 v71; // rax
  __int64 v72; // rcx
  struct VIDSCH_SUBMIT_DATA_BASE *v73; // rdx
  __int64 v74; // rax
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
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v14 + 200));
  v15 = ((unsigned int)v12 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v15 < *(_DWORD *)(v14 + 240)
    && (v16 = *(_QWORD *)(v14 + 224),
        v17 = *(_DWORD *)(v16 + 16 * v15 + 8),
        (((unsigned int)v12 >> 25) & 0x60) == (*(_BYTE *)(v16 + 16 * v15 + 8) & 0x60))
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
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v83, v18);
  ExReleasePushLockSharedEx(v14 + 200, 0LL);
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
      goto LABEL_12;
    }
    memset(&v90, 0, sizeof(v90));
    v90.hAllocation = *(HANDLE *)(*((_QWORD *)v83 + 6) + 16LL);
    v25 = ADAPTER_RENDER::DdiDescribeAllocation(
            *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL) + 2312LL),
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
      goto LABEL_83;
    }
    v29 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v29 + 200));
    v30 = ((unsigned int)v13 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v30 < *(_DWORD *)(v29 + 240)
      && (v31 = *(_QWORD *)(v29 + 224),
          v32 = *(_DWORD *)(v31 + 16 * v30 + 8),
          (((unsigned int)v13 >> 25) & 0x60) == (*(_BYTE *)(v31 + 16 * v30 + 8) & 0x60))
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
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v82, v33);
    ExReleasePushLockSharedEx(v29 + 200, 0LL);
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
                *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v36 + 16) + 16LL) + 2312LL),
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
          goto LABEL_82;
        }
        if ( *((_BYTE *)this + 398) )
        {
          if ( (v44 = (struct DXGDEVICE *)*((_QWORD *)this + 2),
                v45 = *((_DWORD *)this + 90),
                LOBYTE(v41) = *((_BYTE *)this + 399),
                v46 = (struct ADAPTER_RENDER *)*((_QWORD *)v44 + 2),
                !(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*((_QWORD *)v46 + 66) + 8LL)
                                                                            + 248LL))(
                   *((_QWORD *)v46 + 67),
                   *((_QWORD *)v82 + 3),
                   v41,
                   v45))
            && (v48 = MapGpuVaForAllocation(v46, v44, v45, v82), v48 < 0)
            || (LOBYTE(v47) = *((_BYTE *)this + 399),
                !(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 528LL)
                                                                                        + 8LL)
                                                                            + 248LL))(
                   *((_QWORD *)v46 + 67),
                   *((_QWORD *)v83 + 3),
                   v47,
                   v45))
            && (v48 = MapGpuVaForAllocation(v46, v44, v45, v83), v48 < 0) )
          {
            LODWORD(v20) = v48;
            goto LABEL_82;
          }
        }
        left = a6->left;
        right = a6->right;
        if ( a6->left >= right
          || left < 0
          || right > (int)v90.Width
          || (v51 = a6->top, v40 = (unsigned int)a6->bottom, v51 >= (int)v40)
          || v51 < 0
          || (int)v40 > (int)v90.Height )
        {
          v64 = WdLogNewEntry5_WdError(v40);
          *(_QWORD *)(v64 + 24) = 6733LL;
        }
        else
        {
          v52 = a7->left;
          v53 = a7->right;
          if ( a7->left >= v53
            || v52 < 0
            || v53 > (int)v89.Width
            || (top = a7->top, bottom = a7->bottom, top >= bottom)
            || top < 0
            || bottom > (int)v89.Height )
          {
            v64 = WdLogNewEntry5_WdError(v40);
            *(_QWORD *)(v64 + 24) = 6743LL;
          }
          else if ( v53 - v52 == right - left && (v40 = (unsigned int)(v40 - v51), bottom - top == (_DWORD)v40) )
          {
            v56 = 0LL;
            if ( !a8 )
            {
LABEL_57:
              v84 = 0LL;
              v61 = *((_QWORD *)this + 41);
              if ( !v61 )
                goto LABEL_64;
              v62 = *((_DWORD *)this + 84);
              v63 = 0LL;
              if ( !v62 )
                goto LABEL_64;
              while ( !*(_QWORD *)(v61 + 8 * v63) )
              {
                v63 = (unsigned int)(v63 + 1);
                if ( (unsigned int)v63 >= v62 )
                  goto LABEL_64;
              }
              v84 = *(struct _VIDMM_DMA_BUFFER **)(v61 + 8 * v63);
              *(_QWORD *)(v61 + 8LL * (unsigned int)v63) = 0LL;
              if ( v84 )
              {
                v65 = (struct _D3DKMT_PRESENT *)v87;
              }
              else
              {
LABEL_64:
                v65 = (struct _D3DKMT_PRESENT *)v87;
                v66 = DXGCONTEXT::AcquireDmaBuffer(this, &v84, v87, 1);
                v20 = v66;
                if ( v66 < 0 )
                {
                  v35 = (_QWORD *)WdLogNewEntry5_WdError(v67);
                  v35[3] = v20;
                  goto LABEL_26;
                }
              }
              memset(&v91, 0, sizeof(v91));
              v68 = (const RECT *)v86[0];
              v69 = *a7;
              v70 = *a6;
              v91.Flags.Value |= 1u;
              v86[0] = 0LL;
              v91.pDstSubRects = v68;
              v71 = *((_QWORD *)this + 2);
              v91.DstRect = v69;
              v91.SubRectCnt = a8;
              v91.SrcRect = v70;
              v86[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v71 + 16);
              CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v86);
              v73 = v86[0];
              if ( v86[0] )
              {
                *(_DWORD *)v86[0] |= 0x10000u;
                v75 = *(_DWORD *)(*((_QWORD *)v82 + 6) + 4LL);
                if ( (v75 & 2) != 0
                  || (v75 & 1) != 0
                  || (v76 = *(_DWORD *)(*((_QWORD *)v83 + 6) + 4LL), (v76 & 2) != 0)
                  || (v76 & 1) != 0 )
                {
                  *(_DWORD *)v73 |= 1u;
                }
                *(_DWORD *)v73 |= 0x120u;
                v77 = DXGCONTEXT::SubmitPresent(this, 0LL, 0, v88, 0LL, v85, v13, &v91, 0LL, v84, v73, v89.Format, v65);
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
                v74 = WdLogNewEntry5_WdLowResource(v72);
                *(_QWORD *)(v74 + 24) = 6806LL;
                WdLogEvent5_WdLowResource(v74);
                LODWORD(v20) = -1073741801;
              }
              CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v86);
              goto LABEL_82;
            }
            while ( 1 )
            {
              v57 = (LONG *)((char *)v86[0] + 16 * (unsigned int)v56);
              v58 = v57[2];
              if ( *v57 >= v58 )
                break;
              if ( *v57 < v52 )
                break;
              if ( v58 > v53 )
                break;
              v59 = v57[1];
              v60 = v57[3];
              if ( v59 >= v60 || v59 < top || v60 > bottom )
                break;
              v56 = (unsigned int)(v56 + 1);
              if ( (unsigned int)v56 >= a8 )
                goto LABEL_57;
            }
            v64 = WdLogNewEntry5_WdError(v56);
            *(_QWORD *)(v64 + 24) = 6762LL;
          }
          else
          {
            v64 = WdLogNewEntry5_WdError(v40);
            *(_QWORD *)(v64 + 24) = 6749LL;
          }
        }
        WdLogEvent5_WdError(v64);
        LODWORD(v20) = -1073741811;
        goto LABEL_82;
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
LABEL_26:
    WdLogEvent5_WdError(v35);
LABEL_82:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v82);
    goto LABEL_83;
  }
  v21 = (_QWORD *)WdLogNewEntry5_WdError(v19);
  v21[3] = v12;
LABEL_12:
  WdLogEvent5_WdError(v21);
LABEL_83:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v83);
  return (unsigned int)v20;
}
