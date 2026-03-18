/*
 * XREFs of ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00E9838
 * Callers:
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00D4A50 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C016E9D0 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C01CAA40 (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0007248 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00152B0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00E6124 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00E6170 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00E8320 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C00EBA10 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?VmBusSendOpenResource@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EIIIPEAI2@Z @ 0x1C0183C18 (-VmBusSendOpenResource@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EIIIPEAI2.c)
 */

__int64 __fastcall DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
        DXGDEVICE *this,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        PERESOURCE **a6,
        char a7,
        struct _EPROCESS *a8,
        unsigned int *a9,
        unsigned __int64 *a10)
{
  D3DDDI_ALLOCATIONINFO *v13; // r15
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct COREDEVICEACCESS *v17; // r12
  bool v18; // bl
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r14
  unsigned __int64 v23; // rcx
  unsigned int v24; // eax
  SIZE_T v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  D3DKMT_HANDLE v28; // eax
  D3DKMT_CREATESTANDARDALLOCATION *v29; // r9
  size_t v30; // rcx
  __int64 v31; // rdx
  struct _EX_RUNDOWN_REF *v32; // r9
  unsigned int v33; // r11d
  _QWORD *v34; // r15
  unsigned int v35; // r10d
  size_t v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rbx
  const void *v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  D3DKMT_HANDLE hResource; // r15d
  __int64 v49; // r9
  _DWORD *v50; // r8
  D3DDDI_ALLOCATIONINFO *pAllocationInfo; // r10
  __int64 v52; // rdx
  __int64 v54; // rax
  _QWORD *v55; // rax
  _QWORD *v56; // rax
  bool v57; // zf
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rax
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  bool v63; // zf
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  struct DXGPROCESS *Current; // r15
  SIZE_T v69; // rax
  unsigned int *v70; // r12
  unsigned int v71; // r8d
  __int64 v72; // rax
  __int64 v73; // r9
  int v74; // ecx
  struct _EX_RUNDOWN_REF *v75; // rdx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // rax
  __int64 v80; // rsi
  __int64 v81; // rax
  __int64 v82; // r9
  int v83; // ecx
  struct _EX_RUNDOWN_REF *v84; // rdx
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // rax
  _BYTE v89[8]; // [rsp+80h] [rbp-79h] BYREF
  char v90; // [rsp+88h] [rbp-71h]
  _BYTE v91[32]; // [rsp+90h] [rbp-69h] BYREF
  struct _D3DKMT_CREATEALLOCATION v92; // [rsp+B0h] [rbp-49h] BYREF
  D3DDDI_ALLOCATIONINFO *v93; // [rsp+140h] [rbp+47h]
  unsigned int v94; // [rsp+150h] [rbp+57h] BYREF
  struct _EX_RUNDOWN_REF *v95; // [rsp+158h] [rbp+5Fh] BYREF

  v94 = a3;
  v13 = 0LL;
  memset(&v92, 0, sizeof(v92));
  v14 = *((_QWORD *)this + 2);
  v94 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v14 + 16)) )
  {
    v54 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v54 + 24) = 7203LL;
    WdLogEvent5_WdAssertion(v54);
  }
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13));
  v17 = (struct COREDEVICEACCESS *)a6;
  if ( a6 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a6[3]);
  v18 = (*((_BYTE *)DXGPROCESS::GetCurrent(v16, v15) + 323) & 8) != 0;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v89);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v89);
  if ( a4 )
  {
    v22 = *(_QWORD *)(a4 + 16);
    if ( v22 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v22 + 128) - 44LL) & 2) != 0
        && !(*(unsigned int (**)(void))(*(_QWORD *)(*((_QWORD *)this + 5) + 104LL) + 208LL))() )
      {
        v60 = WdLogNewEntry5_WdEvent(v59, v19);
        LODWORD(v39) = -1073741790;
        *(_QWORD *)(v60 + 24) = -1073741790LL;
        WdLogEvent5_WdEvent(v60);
        goto LABEL_48;
      }
      v23 = *(unsigned int *)(a2 + 16);
      if ( *(_DWORD *)(v22 + 124) == (_DWORD)v23 )
      {
        if ( (*(_DWORD *)(v22 + 12) & 4) == 0 )
        {
          if ( v18 )
            goto LABEL_16;
          v24 = *(_DWORD *)(v22 + 104);
          if ( *(_DWORD *)(a2 + 32) == v24 )
          {
            if ( v24 )
            {
              memmove(*(void **)(a2 + 40), *(const void **)(v22 + 96), v24);
              v23 = *(unsigned int *)(a2 + 16);
            }
LABEL_16:
            v25 = 96 * v23;
            if ( !is_mul_ok(v23, 0x60uLL) )
              v25 = -1LL;
            v93 = (D3DDDI_ALLOCATIONINFO *)operator new[](v25, 0x4B677844u, PagedPool);
            if ( v93 )
            {
              v28 = *(_DWORD *)a2;
              v92.hGlobalShare = 0;
              v29 = *(D3DKMT_CREATESTANDARDALLOCATION **)(a2 + 56);
              v30 = *(unsigned int *)(a2 + 48);
              v31 = *(unsigned int *)(a2 + 16);
              v92.hDevice = v28;
              v92.pStandardAllocation = v29;
              v92.PrivateDriverDataSize = v30;
              v92.NumAllocations = v31;
              v92.pAllocationInfo = v93;
              v92.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v92.Flags ^ (*(_BYTE *)&v92.Flags ^ (unsigned __int8)(a7 << 7)) & 0x80 | 0x41);
              if ( v18 || (_DWORD)v30 == *(_DWORD *)(v22 + 120) )
              {
                if ( (_DWORD)v30 )
                {
                  memmove(v29, *(const void **)(v22 + 112), v30);
                  LODWORD(v31) = *(_DWORD *)(a2 + 16);
                }
                v32 = *(struct _EX_RUNDOWN_REF **)(a2 + 72);
                v33 = 0;
                v34 = *(_QWORD **)(v22 + 128);
                v95 = v32;
                LODWORD(a6) = 0;
                if ( !(_DWORD)v31 )
                {
LABEL_32:
                  if ( v90 )
                    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v89);
                  v44 = DXGDEVICE::CreateAllocation(
                          this,
                          &v92,
                          0,
                          1u,
                          (struct _DXGSHAREDALLOCOBJECT *)a4,
                          0LL,
                          v17,
                          a5,
                          a8,
                          a9,
                          a10,
                          0LL,
                          0LL,
                          0LL,
                          0);
                  v39 = v44;
                  if ( v44 < 0 )
                  {
                    v66 = WdLogNewEntry5_WdWarning(v46, v45, v47);
                    *(_QWORD *)(v66 + 24) = v39;
                    WdLogEvent5_WdWarning(v66);
                  }
                  else
                  {
                    hResource = v92.hResource;
                    if ( !v92.hResource )
                    {
                      v67 = WdLogNewEntry5_WdAssertion(v46);
                      *(_QWORD *)(v67 + 24) = 7410LL;
                      WdLogEvent5_WdAssertion(v67);
                    }
                    v49 = 0LL;
                    v50 = *(_DWORD **)(a2 + 24);
                    *(_DWORD *)(a2 + 64) = v94;
                    *(_DWORD *)(a2 + 80) = hResource;
                    if ( *(_DWORD *)(a2 + 16) )
                    {
                      pAllocationInfo = v92.pAllocationInfo;
                      do
                      {
                        v52 = 3 * v49;
                        v49 = (unsigned int)(v49 + 1);
                        v45 = 32 * v52;
                        *v50 = *(D3DKMT_HANDLE *)((char *)&pAllocationInfo->hAllocation + v45);
                        v50 += 20;
                        *((_QWORD *)v50 - 9) = *(_QWORD *)(a2 + 72)
                                             + (unsigned int)(*(_DWORD *)((char *)&pAllocationInfo->pPrivateDriverData
                                                                        + v45)
                                                            - *(_DWORD *)(a2 + 72));
                        *(v50 - 16) = *(UINT *)((char *)&pAllocationInfo->PrivateDriverDataSize + v45);
                      }
                      while ( (unsigned int)v49 < *(_DWORD *)(a2 + 16) );
                    }
                    if ( (*((_BYTE *)this + 1709) & 1) != 0 )
                    {
                      Current = DXGPROCESS::GetCurrent(v46, v45);
                      v69 = 4LL * *(unsigned int *)(a2 + 16);
                      if ( !is_mul_ok(*(unsigned int *)(a2 + 16), 4uLL) )
                        v69 = -1LL;
                      v70 = (unsigned int *)operator new[](v69, 0x4B677844u, PagedPool);
                      if ( v70 )
                      {
                        if ( (*(_DWORD *)(v22 + 12) & 8) != 0 )
                          v71 = *(_DWORD *)(a4 + 40);
                        else
                          v71 = *(_DWORD *)(v22 + 28);
                        LODWORD(v39) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenResource(
                                         (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                      + 4080LL),
                                         Current,
                                         this,
                                         (*(_DWORD *)(v22 + 12) & 8) != 0,
                                         v71,
                                         *(_DWORD *)(a2 + 16),
                                         *(_DWORD *)(a2 + 64),
                                         &v94,
                                         v70);
                        if ( (int)v39 >= 0 )
                        {
                          DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
                            (DXGHANDLETABLELOCKSHARED *)v91,
                            (struct _KTHREAD **)Current);
                          v72 = (*(_DWORD *)(a2 + 80) >> 6) & 0xFFFFFF;
                          if ( (unsigned int)v72 < *((_DWORD *)Current + 62)
                            && (v73 = *((_QWORD *)Current + 29),
                                v74 = *(_DWORD *)(v73 + 16 * v72 + 8),
                                ((*(_DWORD *)(a2 + 80) >> 25) & 0x60) == (*(_BYTE *)(v73 + 16 * v72 + 8) & 0x60))
                            && (v74 & 0x2000) == 0
                            && (v74 & 0x1F) == 4 )
                          {
                            v75 = *(struct _EX_RUNDOWN_REF **)(v73 + 16LL * (unsigned int)v72);
                          }
                          else
                          {
                            v75 = 0LL;
                          }
                          DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v95, v75);
                          if ( v95 )
                          {
                            v80 = 0LL;
                            HIDWORD(v95[2].Ptr) = v94;
                            if ( *(_DWORD *)(a2 + 16) )
                            {
                              while ( 1 )
                              {
                                v81 = (*(_DWORD *)(*(_QWORD *)(a2 + 24) + 80 * v80) >> 6) & 0xFFFFFF;
                                if ( (unsigned int)v81 < *((_DWORD *)Current + 62)
                                  && (v82 = *((_QWORD *)Current + 29),
                                      v83 = *(_DWORD *)(v82 + 16 * v81 + 8),
                                      ((*(_DWORD *)(*(_QWORD *)(a2 + 24) + 80 * v80) >> 25) & 0x60) == (*(_BYTE *)(v82 + 16 * v81 + 8) & 0x60))
                                  && (v83 & 0x2000) == 0
                                  && (v83 & 0x1F) == 5 )
                                {
                                  v84 = *(struct _EX_RUNDOWN_REF **)(v82 + 16LL * (unsigned int)v81);
                                }
                                else
                                {
                                  v84 = 0LL;
                                }
                                DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&a6, v84);
                                if ( !a6 )
                                  break;
                                *((_DWORD *)a6 + 24) = v70[v80];
                                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&a6);
                                v80 = (unsigned int)(v80 + 1);
                                if ( (unsigned int)v80 >= *(_DWORD *)(a2 + 16) )
                                  goto LABEL_91;
                              }
                              v88 = WdLogNewEntry5_WdWarning(v86, v85, v87);
                              *(_QWORD *)(v88 + 24) = 7468LL;
                              WdLogEvent5_WdWarning(v88);
                              LODWORD(v39) = -1073741811;
                              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&a6);
                            }
                          }
                          else
                          {
                            v79 = WdLogNewEntry5_WdWarning(v77, v76, v78);
                            *(_QWORD *)(v79 + 24) = 7457LL;
                            WdLogEvent5_WdWarning(v79);
                            LODWORD(v39) = -1073741811;
                          }
LABEL_91:
                          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v95);
                          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v91);
                        }
                        operator delete[](v70);
                      }
                      else
                      {
                        LODWORD(v39) = -1073741801;
                      }
                    }
                  }
                  goto LABEL_41;
                }
                v35 = 0;
                while ( 1 )
                {
                  v36 = *((unsigned int *)v34 - 2);
                  v37 = 0xFFFFFFFFLL;
                  v38 = (unsigned int)v36 + v35;
                  if ( (unsigned int)v38 >= v35 )
                    v37 = (unsigned int)v38;
                  v39 = (unsigned int)v38 < v35 ? (int)0xC0000095 : 0;
                  if ( (unsigned int)v38 < v35 )
                    break;
                  if ( (unsigned int)v37 > *(_DWORD *)(a2 + 64) )
                  {
                    v64 = WdLogNewEntry5_WdWarning(v38, v37, v36);
                    *(_QWORD *)(v64 + 24) = this;
                    *(_QWORD *)(v64 + 32) = -1073741801LL;
                    WdLogEvent5_WdWarning(v64);
                    LODWORD(v39) = -1073741801;
                    goto LABEL_59;
                  }
                  v40 = (const void *)*(v34 - 2);
                  if ( v40 )
                  {
                    memmove(v32, v40, v36);
                    v32 = v95;
                    v35 = v94;
                    v33 = (unsigned int)a6;
                  }
                  v41 = v33++;
                  LODWORD(a6) = v33;
                  v42 = 96 * v41;
                  *(D3DKMT_HANDLE *)((char *)&v93->hAllocation + v42) = 0;
                  *(const void **)((char *)&v93->pSystemMem + v42) = 0LL;
                  LODWORD(v41) = *((_DWORD *)v34 - 11);
                  *(UINT *)((char *)&v93->Flags.Value + v42) = 0;
                  *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v93->VidPnSourceId + v42) = ((unsigned int)v41 >> 6) & 0xF;
                  LODWORD(v41) = *((_DWORD *)v34 - 11);
                  *(void **)((char *)&v93->pPrivateDriverData + v42) = v32;
                  *(UINT *)((char *)&v93->Flags.Value + v42) = v41 & 1 | ((((unsigned int)v41 | ((unsigned int)v41 >> 12)) & 2) != 0);
                  *(UINT *)((char *)&v93->PrivateDriverDataSize + v42) = *((_DWORD *)v34 - 2);
                  v43 = *((unsigned int *)v34 - 2);
                  v34 = (_QWORD *)*v34;
                  v35 += v43;
                  v32 = (struct _EX_RUNDOWN_REF *)((char *)v32 + v43);
                  v94 = v35;
                  v95 = v32;
                  if ( v33 >= *(_DWORD *)(a2 + 16) )
                    goto LABEL_32;
                }
                v65 = WdLogNewEntry5_WdWarning(v38, v37, v36);
                *(_QWORD *)(v65 + 24) = this;
                *(_QWORD *)(v65 + 32) = v39;
                WdLogEvent5_WdWarning(v65);
LABEL_59:
                v63 = v90 == 0;
LABEL_60:
                if ( !v63 )
                  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v89);
LABEL_41:
                v13 = v93;
                goto LABEL_42;
              }
              v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v31, v93);
              LODWORD(v39) = -1073741811;
              v62[3] = this;
              v62[4] = *(unsigned int *)(a2 + 48);
              v62[5] = *(unsigned int *)(v22 + 120);
              v62[6] = -1073741811LL;
              WdLogEvent5_WdWarning(v62);
            }
            else
            {
              v61 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, 0LL);
              v61[3] = this;
              v61[4] = *(unsigned int *)(a2 + 16);
              v61[5] = -1073741801LL;
              WdLogEvent5_WdWarning(v61);
              LODWORD(v39) = -1073741801;
            }
            v63 = v90 == 0;
            goto LABEL_60;
          }
          v55 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v19, v21);
          LODWORD(v39) = -1073741811;
          v55[3] = this;
          v55[4] = *(unsigned int *)(a2 + 32);
          v55[5] = *(unsigned int *)(v22 + 104);
          v55[6] = -1073741811LL;
          goto LABEL_45;
        }
        v56 = (_QWORD *)WdLogNewEntry5_WdError(v23);
        LODWORD(v39) = -1073741811;
        v56[3] = this;
        v56[4] = -1073741811LL;
      }
      else
      {
        v56 = (_QWORD *)WdLogNewEntry5_WdError(v23);
        LODWORD(v39) = -1073741811;
        v56[3] = this;
        v56[4] = *(unsigned int *)(v22 + 124);
        v56[5] = *(unsigned int *)(a2 + 16);
        v56[6] = -1073741811LL;
      }
      WdLogEvent5_WdError(v56);
      goto LABEL_48;
    }
    v55 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21);
    LODWORD(v39) = -1073741811;
    v55[3] = this;
    v55[4] = a4;
    v55[5] = -1073741811LL;
LABEL_45:
    WdLogEvent5_WdWarning(v55);
LABEL_48:
    v57 = v90 == 0;
    goto LABEL_50;
  }
  v58 = WdLogNewEntry5_WdError(v20);
  LODWORD(v39) = -1073741811;
  *(_QWORD *)(v58 + 24) = this;
  *(_QWORD *)(v58 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v58);
  v57 = v90 == 0;
LABEL_50:
  if ( !v57 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v89);
LABEL_42:
  operator delete[](v13);
  return (unsigned int)v39;
}
