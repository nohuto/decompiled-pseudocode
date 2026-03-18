/*
 * XREFs of ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C019E3EC
 * Callers:
 *     ?VmBusBlt@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002B310 (-VmBusBlt@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0004AD0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0004B20 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
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
  unsigned int v15; // r8d
  __int64 v16; // r9
  int v17; // edx
  struct _EX_RUNDOWN_REF *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  _QWORD *v22; // rcx
  __int64 v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r8
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rbx
  _QWORD *v34; // rax
  __int64 v35; // rbx
  unsigned int v36; // edx
  __int64 v37; // r9
  int v38; // r8d
  struct _EX_RUNDOWN_REF *v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  _QWORD *v42; // rcx
  __int64 v43; // r14
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // r8
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rbx
  _QWORD *v55; // rax
  struct DXGDEVICE *v56; // r14
  unsigned int v57; // edi
  struct ADAPTER_RENDER *v58; // rbx
  int v59; // eax
  LONG left; // eax
  __int64 right; // rdx
  LONG v62; // r8d
  LONG v63; // ebx
  int v64; // r11d
  LONG top; // r10d
  LONG bottom; // r9d
  __int64 v67; // rdx
  __int64 v68; // rcx
  unsigned int *v69; // rax
  __int64 v70; // rdx
  int v71; // r8d
  int v72; // r8d
  __int64 v73; // rdx
  unsigned int v74; // r8d
  __int64 v75; // rcx
  __int64 v76; // rax
  struct _D3DKMT_PRESENT *v77; // rbx
  int v78; // eax
  __int64 v79; // rdx
  __int64 v80; // rcx
  const RECT *v81; // rax
  RECT v82; // xmm0
  RECT v83; // xmm1
  __int64 v84; // rax
  __int64 v85; // rcx
  struct VIDSCH_SUBMIT_DATA_BASE *v86; // rdx
  __int64 v87; // rax
  int v88; // eax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rbx
  __int64 v92; // rax
  struct DXGALLOCATION *v94; // [rsp+70h] [rbp-90h] BYREF
  struct DXGALLOCATION *v95; // [rsp+78h] [rbp-88h] BYREF
  struct _VIDMM_DMA_BUFFER *v96; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v97; // [rsp+88h] [rbp-78h]
  struct VIDSCH_SUBMIT_DATA_BASE *v98[2]; // [rsp+90h] [rbp-70h] BYREF
  struct COREDEVICEACCESS *v99; // [rsp+A0h] [rbp-60h]
  struct DXGCONTEXT **v100; // [rsp+A8h] [rbp-58h]
  struct _DXGKARG_DESCRIBEALLOCATION v101; // [rsp+B0h] [rbp-50h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v102; // [rsp+E0h] [rbp-20h] BYREF
  struct _DXGKARG_PRESENT v103; // [rsp+110h] [rbp+10h] BYREF

  v100 = a5;
  v98[0] = (struct VIDSCH_SUBMIT_DATA_BASE *)a9;
  v99 = a10;
  v11 = *((_QWORD *)this + 2);
  v12 = a2;
  v13 = a3;
  v97 = a2;
  v14 = *(_QWORD *)(v11 + 40);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v14 + 168));
  v15 = ((unsigned int)v12 >> 6) & 0xFFFFFF;
  if ( v15 < *(_DWORD *)(v14 + 208)
    && (v16 = *(_QWORD *)(v14 + 192),
        v17 = *(_DWORD *)(v16 + 16LL * v15 + 8),
        (((unsigned int)v12 >> 26) & 0x30) == (*(_BYTE *)(v16 + 16LL * v15 + 8) & 0x30))
    && (v17 & 0x1000) == 0
    && (v17 & 0xF) != 0
    && (*(_BYTE *)(v16 + 16LL * v15 + 8) & 0xF) == 5 )
  {
    v18 = *(struct _EX_RUNDOWN_REF **)(v16 + 16LL * v15);
  }
  else
  {
    v18 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v95, v18);
  ExReleasePushLockSharedEx(v14 + 168, 0LL);
  KeLeaveCriticalRegion();
  LODWORD(v21) = -1073741811;
  if ( v95 )
  {
    v23 = *((_QWORD *)this + 2);
    v24 = *(_QWORD *)(*((_QWORD *)v95 + 1) + 16LL);
    v25 = *(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL);
    if ( *(_QWORD *)(v24 + 16) != v25 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24);
      v22[3] = *((_QWORD *)this + 2);
      v22[4] = v95;
      v22[5] = -1073741811LL;
      goto LABEL_12;
    }
    memset(&v102, 0, sizeof(v102));
    v102.hAllocation = *(HANDLE *)(*((_QWORD *)v95 + 6) + 16LL);
    v30 = ADAPTER_RENDER::DdiDescribeAllocation(
            *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) + 2288LL),
            &v102,
            v29);
    v33 = v30;
    if ( v30 < 0 )
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdError(v32, v31);
      v34[3] = v33;
      v34[4] = this;
      v34[5] = *((unsigned int *)v95 + 4);
      v34[6] = v95;
      v34[7] = (*(_DWORD *)(*((_QWORD *)v95 + 6) + 4LL) >> 6) & 0xF;
      WdLogEvent5_WdError(v34);
      LODWORD(v21) = v33;
      goto LABEL_81;
    }
    v35 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v35 + 168));
    v36 = ((unsigned int)v13 >> 6) & 0xFFFFFF;
    if ( v36 < *(_DWORD *)(v35 + 208)
      && (v37 = *(_QWORD *)(v35 + 192),
          v38 = *(_DWORD *)(v37 + 16LL * v36 + 8),
          (((unsigned int)v13 >> 26) & 0x30) == (*(_BYTE *)(v37 + 16LL * v36 + 8) & 0x30))
      && (v38 & 0x1000) == 0
      && (v38 & 0xF) != 0
      && (*(_BYTE *)(v37 + 16LL * v36 + 8) & 0xF) == 5 )
    {
      v39 = *(struct _EX_RUNDOWN_REF **)(v37 + 16LL * v36);
    }
    else
    {
      v39 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v94, v39);
    ExReleasePushLockSharedEx(v35 + 168, 0LL);
    KeLeaveCriticalRegion();
    LODWORD(v21) = -1073741811;
    if ( v94 )
    {
      v43 = *((_QWORD *)this + 2);
      v44 = *(_QWORD *)(*((_QWORD *)v94 + 1) + 16LL);
      v45 = *(_QWORD *)(*(_QWORD *)(v43 + 16) + 16LL);
      if ( *(_QWORD *)(v44 + 16) == v45 )
      {
        memset(&v101, 0, sizeof(v101));
        v101.hAllocation = *(HANDLE *)(*((_QWORD *)v94 + 6) + 16LL);
        v50 = ADAPTER_RENDER::DdiDescribeAllocation(
                *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v43 + 16) + 16LL) + 2288LL),
                &v101,
                v49);
        v54 = v50;
        if ( v50 < 0 )
        {
          v55 = (_QWORD *)WdLogNewEntry5_WdError(v52, v51);
          v55[3] = v54;
          v55[4] = this;
          v55[5] = *((unsigned int *)v94 + 4);
          v55[6] = v94;
          v55[7] = (*(_DWORD *)(*((_QWORD *)v94 + 6) + 4LL) >> 6) & 0xF;
          WdLogEvent5_WdError(v55);
          LODWORD(v21) = v54;
          goto LABEL_80;
        }
        if ( *((_BYTE *)this + 366) )
        {
          if ( (v56 = (struct DXGDEVICE *)*((_QWORD *)this + 2),
                v57 = *((_DWORD *)this + 86),
                LOBYTE(v53) = *((_BYTE *)this + 367),
                v58 = (struct ADAPTER_RENDER *)*((_QWORD *)v56 + 2),
                !(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*((_QWORD *)v58 + 54) + 8LL)
                                                                            + 248LL))(
                   *((_QWORD *)v58 + 55),
                   *((_QWORD *)v94 + 3),
                   v53,
                   v57))
            && (v59 = MapGpuVaForAllocation(v58, v56, v57, v94), v59 < 0)
            || (LOBYTE(v47) = *((_BYTE *)this + 367),
                !(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL)
                                                                                        + 8LL)
                                                                            + 248LL))(
                   *((_QWORD *)v58 + 55),
                   *((_QWORD *)v95 + 3),
                   v47,
                   v57))
            && (v59 = MapGpuVaForAllocation(v58, v56, v57, v95), v59 < 0) )
          {
            LODWORD(v21) = v59;
            goto LABEL_80;
          }
        }
        left = a6->left;
        right = (unsigned int)a6->right;
        if ( a6->left >= (int)right
          || left < 0
          || (int)right > (int)v102.Width
          || (v62 = a6->top, v52 = (unsigned int)a6->bottom, v62 >= (int)v52)
          || v62 < 0
          || (int)v52 > (int)v102.Height )
        {
          v76 = WdLogNewEntry5_WdError(v52, right);
          *(_QWORD *)(v76 + 24) = 6068LL;
        }
        else
        {
          v63 = a7->left;
          v64 = a7->right;
          if ( a7->left >= v64
            || v63 < 0
            || v64 > (int)v101.Width
            || (top = a7->top, bottom = a7->bottom, top >= bottom)
            || top < 0
            || bottom > (int)v101.Height )
          {
            v76 = WdLogNewEntry5_WdError(v52, right);
            *(_QWORD *)(v76 + 24) = 6078LL;
          }
          else
          {
            v67 = (unsigned int)(right - left);
            if ( v64 - v63 == (_DWORD)v67 && (v52 = (unsigned int)(v52 - v62), bottom - top == (_DWORD)v52) )
            {
              v68 = 0LL;
              if ( !a8 )
              {
LABEL_57:
                v96 = 0LL;
                v73 = *((_QWORD *)this + 39);
                if ( !v73 )
                  goto LABEL_64;
                v74 = *((_DWORD *)this + 80);
                v75 = 0LL;
                if ( !v74 )
                  goto LABEL_64;
                while ( !*(_QWORD *)(v73 + 8 * v75) )
                {
                  v75 = (unsigned int)(v75 + 1);
                  if ( (unsigned int)v75 >= v74 )
                    goto LABEL_64;
                }
                v96 = *(struct _VIDMM_DMA_BUFFER **)(v73 + 8 * v75);
                *(_QWORD *)(v73 + 8 * v75) = 0LL;
                if ( v96 )
                {
                  v77 = (struct _D3DKMT_PRESENT *)v99;
                }
                else
                {
LABEL_64:
                  v77 = (struct _D3DKMT_PRESENT *)v99;
                  v78 = DXGCONTEXT::AcquireDmaBuffer(this, &v96, v99, 1);
                  v21 = v78;
                  if ( v78 < 0 )
                  {
                    v42 = (_QWORD *)WdLogNewEntry5_WdError(v80, v79);
                    v42[3] = v21;
                    goto LABEL_26;
                  }
                }
                memset(&v103, 0, sizeof(v103));
                v81 = (const RECT *)v98[0];
                v82 = *a7;
                v83 = *a6;
                v103.Flags.Value |= 1u;
                v98[0] = 0LL;
                v103.pDstSubRects = v81;
                v84 = *((_QWORD *)this + 2);
                v103.DstRect = v82;
                v103.SubRectCnt = a8;
                v103.SrcRect = v83;
                v98[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v84 + 16);
                CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v98);
                v86 = v98[0];
                if ( v98[0] )
                {
                  *(_DWORD *)v98[0] |= 0x10000u;
                  if ( (*(_DWORD *)(*((_QWORD *)v94 + 6) + 4LL) & 3) != 0
                    || (*(_DWORD *)(*((_QWORD *)v95 + 6) + 4LL) & 3) != 0 )
                  {
                    *(_DWORD *)v86 |= 1u;
                  }
                  *(_DWORD *)v86 |= 0x100u;
                  v88 = DXGCONTEXT::SubmitPresent(
                          this,
                          0LL,
                          0,
                          v100,
                          0LL,
                          v97,
                          v13,
                          &v103,
                          0LL,
                          v96,
                          v86,
                          v101.Format,
                          v77);
                  v91 = v88;
                  if ( v88 < 0 )
                  {
                    v92 = WdLogNewEntry5_WdError(v90, v89);
                    *(_QWORD *)(v92 + 24) = v91;
                    WdLogEvent5_WdError(v92);
                  }
                  LODWORD(v21) = v91;
                }
                else
                {
                  v87 = WdLogNewEntry5_WdLowResource(v85);
                  *(_QWORD *)(v87 + 24) = 6141LL;
                  WdLogEvent5_WdLowResource(v87);
                  LODWORD(v21) = -1073741801;
                }
                CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v98);
                goto LABEL_80;
              }
              while ( 1 )
              {
                v69 = (unsigned int *)((char *)v98[0] + 16 * (unsigned int)v68);
                v70 = *v69;
                v71 = v69[2];
                if ( (int)v70 >= v71 )
                  break;
                if ( (int)v70 < v63 )
                  break;
                if ( v71 > v64 )
                  break;
                v70 = v69[1];
                v72 = v69[3];
                if ( (int)v70 >= v72 || (int)v70 < top || v72 > bottom )
                  break;
                v68 = (unsigned int)(v68 + 1);
                if ( (unsigned int)v68 >= a8 )
                  goto LABEL_57;
              }
              v76 = WdLogNewEntry5_WdError(v68, v70);
              *(_QWORD *)(v76 + 24) = 6097LL;
            }
            else
            {
              v76 = WdLogNewEntry5_WdError(v52, v67);
              *(_QWORD *)(v76 + 24) = 6084LL;
            }
          }
        }
        WdLogEvent5_WdError(v76);
        LODWORD(v21) = -1073741811;
        goto LABEL_80;
      }
      v42 = (_QWORD *)WdLogNewEntry5_WdError(v45, v44);
      v42[3] = *((_QWORD *)this + 2);
      v42[4] = v94;
      v42[5] = -1073741811LL;
    }
    else
    {
      v42 = (_QWORD *)WdLogNewEntry5_WdError(v41, v40);
      v42[3] = v13;
    }
LABEL_26:
    WdLogEvent5_WdError(v42);
LABEL_80:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v94, v46, v47, v48);
    goto LABEL_81;
  }
  v22 = (_QWORD *)WdLogNewEntry5_WdError(v20, v19);
  v22[3] = v12;
LABEL_12:
  WdLogEvent5_WdError(v22);
LABEL_81:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v95, v26, v27, v28);
  return (unsigned int)v21;
}
