/*
 * XREFs of ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C009554C
 * Callers:
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00F0FE4 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C0186AD0 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C01C78F8 (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008B68 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000DDE8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0086DD0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C008A3AC (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C008A3F0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@@Z @ 0x1C0097830 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?VmBusSendOpenResource@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IIIPEAI2@Z @ 0x1C0197208 (-VmBusSendOpenResource@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IIIPEAI2@.c)
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
  D3DDDI_ALLOCATIONINFO *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rcx
  struct COREDEVICEACCESS *v16; // r12
  bool v17; // bl
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r14
  __int64 v22; // rcx
  unsigned int v23; // eax
  SIZE_T v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  D3DDDI_ALLOCATIONINFO *v27; // r8
  D3DKMT_CREATESTANDARDALLOCATION *v28; // r9
  size_t v29; // rcx
  bool v30; // zf
  struct _EX_RUNDOWN_REF *v31; // r10
  _QWORD *v32; // r15
  unsigned int v33; // r9d
  unsigned int v34; // r11d
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rbx
  const void *v38; // rdx
  unsigned int v39; // r11d
  __int64 v40; // rdx
  unsigned int v41; // eax
  unsigned int v42; // eax
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  D3DKMT_HANDLE hResource; // r15d
  unsigned int v49; // eax
  _DWORD *v50; // r8
  unsigned int v51; // r9d
  D3DDDI_ALLOCATIONINFO *pAllocationInfo; // r10
  __int64 v53; // rax
  __int64 v55; // rax
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rax
  _QWORD *v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  struct DXGPROCESS *Current; // r15
  SIZE_T v66; // rax
  unsigned int *v67; // r12
  __int64 v68; // rax
  __int64 v69; // r9
  int v70; // r8d
  struct _EX_RUNDOWN_REF *v71; // rdx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // rax
  __int64 v76; // rsi
  __int64 v77; // rax
  __int64 v78; // r9
  int v79; // r8d
  struct _EX_RUNDOWN_REF *v80; // rdx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // rax
  __int64 v85; // rax
  _BYTE v86[8]; // [rsp+70h] [rbp-79h] BYREF
  char v87; // [rsp+78h] [rbp-71h]
  _BYTE v88[32]; // [rsp+80h] [rbp-69h] BYREF
  struct _D3DKMT_CREATEALLOCATION v89; // [rsp+A0h] [rbp-49h] BYREF
  D3DDDI_ALLOCATIONINFO *P; // [rsp+130h] [rbp+47h]
  unsigned int v91; // [rsp+140h] [rbp+57h] BYREF
  struct _EX_RUNDOWN_REF *v92; // [rsp+148h] [rbp+5Fh] BYREF

  v91 = a3;
  v13 = 0LL;
  memset(&v89, 0, sizeof(v89));
  v14 = *((_QWORD *)this + 2);
  v91 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v14 + 16)) )
  {
    v55 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v55 + 24) = 7064LL;
    WdLogEvent5_WdAssertion(v55);
  }
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13));
  v16 = (struct COREDEVICEACCESS *)a6;
  if ( a6 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a6[3]);
  v17 = (*((_BYTE *)DXGPROCESS::GetCurrent() + 307) & 8) != 0;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v86);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v86);
  if ( !a4 )
  {
    v85 = WdLogNewEntry5_WdError(v19);
    LODWORD(v37) = -1073741811;
    *(_QWORD *)(v85 + 24) = this;
    *(_QWORD *)(v85 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v85);
    if ( !v87 )
      return (unsigned int)v37;
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v86);
    goto LABEL_42;
  }
  v21 = *(_QWORD *)(a4 + 16);
  if ( !v21 )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20);
    LODWORD(v37) = -1073741811;
    v56[3] = this;
    v56[4] = a4;
    v56[5] = -1073741811LL;
LABEL_47:
    WdLogEvent5_WdWarning(v56);
    goto LABEL_49;
  }
  v22 = *(unsigned int *)(*(_QWORD *)(v21 + 128) - 44LL);
  if ( (v22 & 2) != 0 && !(*(unsigned int (**)(void))(*(_QWORD *)(*((_QWORD *)this + 5) + 96LL) + 208LL))() )
  {
    v58 = WdLogNewEntry5_WdEvent();
    LODWORD(v37) = -1073741790;
    *(_QWORD *)(v58 + 24) = -1073741790LL;
    WdLogEvent5_WdEvent(v58);
    goto LABEL_49;
  }
  if ( *(_DWORD *)(v21 + 124) != *(_DWORD *)(a2 + 16) )
  {
    v59 = (_QWORD *)WdLogNewEntry5_WdError(v22);
    LODWORD(v37) = -1073741811;
    v59[3] = this;
    v59[4] = *(unsigned int *)(v21 + 124);
    v59[5] = *(unsigned int *)(a2 + 16);
    v59[6] = -1073741811LL;
LABEL_55:
    WdLogEvent5_WdError(v59);
LABEL_49:
    if ( v87 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v86);
    return (unsigned int)v37;
  }
  if ( (*(_DWORD *)(v21 + 12) & 4) != 0 )
  {
    v59 = (_QWORD *)WdLogNewEntry5_WdError(v22);
    LODWORD(v37) = -1073741811;
    v59[3] = this;
    v59[4] = -1073741811LL;
    goto LABEL_55;
  }
  if ( v17 )
    goto LABEL_16;
  v23 = *(_DWORD *)(v21 + 104);
  if ( *(_DWORD *)(a2 + 32) != v23 )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v18, v20);
    LODWORD(v37) = -1073741811;
    v56[3] = this;
    v56[4] = *(unsigned int *)(a2 + 32);
    v56[5] = *(unsigned int *)(v21 + 104);
    v56[6] = -1073741811LL;
    goto LABEL_47;
  }
  if ( v23 )
    memmove(*(void **)(a2 + 40), *(const void **)(v21 + 96), v23);
LABEL_16:
  v24 = 96LL * *(unsigned int *)(a2 + 16);
  if ( !is_mul_ok(*(unsigned int *)(a2 + 16), 0x60uLL) )
    v24 = -1LL;
  P = (D3DDDI_ALLOCATIONINFO *)operator new(v24, 0x4B677844u, PagedPool);
  v27 = P;
  if ( !P )
  {
    v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, 0LL);
    v57[3] = this;
    v57[4] = *(unsigned int *)(a2 + 16);
    v57[5] = -1073741801LL;
    WdLogEvent5_WdWarning(v57);
    LODWORD(v37) = -1073741801;
    goto LABEL_49;
  }
  v28 = *(D3DKMT_CREATESTANDARDALLOCATION **)(a2 + 56);
  v29 = *(unsigned int *)(a2 + 48);
  v89.hDevice = *(_DWORD *)a2;
  v89.NumAllocations = *(_DWORD *)(a2 + 16);
  v89.hGlobalShare = 0;
  v89.pStandardAllocation = v28;
  v89.PrivateDriverDataSize = v29;
  v89.pAllocationInfo = P;
  v89.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v89.Flags ^ (*(_BYTE *)&v89.Flags ^ (unsigned __int8)(a7 << 7)) & 0x80 | 0x41);
  if ( v17 || (_DWORD)v29 == *(_DWORD *)(v21 + 120) )
  {
    if ( (_DWORD)v29 )
    {
      memmove(v28, *(const void **)(v21 + 112), v29);
      v27 = P;
    }
    LODWORD(a6) = 0;
    v30 = *(_DWORD *)(a2 + 16) == 0;
    v31 = *(struct _EX_RUNDOWN_REF **)(a2 + 72);
    v32 = *(_QWORD **)(v21 + 128);
    v92 = v31;
    if ( v30 )
    {
LABEL_32:
      if ( v87 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v86);
      v44 = DXGDEVICE::CreateAllocation(
              this,
              &v89,
              0,
              1u,
              (struct _DXGSHAREDALLOCOBJECT *)a4,
              0LL,
              v16,
              a5,
              a8,
              a9,
              a10,
              0LL,
              0LL);
      v37 = v44;
      if ( v44 < 0 )
      {
        v63 = WdLogNewEntry5_WdWarning(v46, v45, v47);
        *(_QWORD *)(v63 + 24) = v37;
        WdLogEvent5_WdWarning(v63);
      }
      else
      {
        hResource = v89.hResource;
        if ( !v89.hResource )
        {
          v64 = WdLogNewEntry5_WdAssertion(v46);
          *(_QWORD *)(v64 + 24) = 7271LL;
          WdLogEvent5_WdAssertion(v64);
        }
        v49 = v91;
        v50 = *(_DWORD **)(a2 + 24);
        *(_DWORD *)(a2 + 80) = hResource;
        v51 = 0;
        *(_DWORD *)(a2 + 64) = v49;
        if ( *(_DWORD *)(a2 + 16) )
        {
          pAllocationInfo = v89.pAllocationInfo;
          do
          {
            v53 = v51++;
            *v50 = *(&pAllocationInfo->hAllocation + 24 * v53);
            v50 += 20;
            *((_QWORD *)v50 - 9) = *(_QWORD *)(a2 + 72)
                                 + (unsigned int)(*((_DWORD *)&pAllocationInfo->pPrivateDriverData + 24 * v53)
                                                - *(_DWORD *)(a2 + 72));
            *(v50 - 16) = *(&pAllocationInfo->PrivateDriverDataSize + 24 * v53);
          }
          while ( v51 < *(_DWORD *)(a2 + 16) );
        }
        if ( *((_BYTE *)this + 1693) )
        {
          Current = DXGPROCESS::GetCurrent();
          v66 = 4LL * *(unsigned int *)(a2 + 16);
          if ( !is_mul_ok(*(unsigned int *)(a2 + 16), 4uLL) )
            v66 = -1LL;
          v67 = (unsigned int *)operator new(v66, 0x4B677844u, PagedPool);
          if ( v67 )
          {
            LODWORD(v37) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenResource(
                             (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3888LL),
                             Current,
                             this,
                             *(_DWORD *)(v21 + 28),
                             *(_DWORD *)(a2 + 16),
                             *(_DWORD *)(a2 + 64),
                             &v91,
                             v67);
            if ( (int)v37 >= 0 )
            {
              DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v88, Current);
              v68 = (*(_DWORD *)(a2 + 80) >> 6) & 0xFFFFFF;
              if ( (unsigned int)v68 < *((_DWORD *)Current + 60)
                && (v69 = *((_QWORD *)Current + 28),
                    v70 = *(_DWORD *)(v69 + 16 * v68 + 8),
                    ((*(_DWORD *)(a2 + 80) >> 25) & 0x60) == (*(_BYTE *)(v69 + 16 * v68 + 8) & 0x60))
                && (v70 & 0x2000) == 0
                && (v70 & 0x1F) != 0
                && (*(_BYTE *)(v69 + 16LL * (unsigned int)v68 + 8) & 0x1F) == 4 )
              {
                v71 = *(struct _EX_RUNDOWN_REF **)(v69 + 16LL * (unsigned int)v68);
              }
              else
              {
                v71 = 0LL;
              }
              DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v92, v71);
              if ( v92 )
              {
                v76 = 0LL;
                HIDWORD(v92[2].Ptr) = v91;
                if ( *(_DWORD *)(a2 + 16) )
                {
                  while ( 1 )
                  {
                    v77 = (*(_DWORD *)(*(_QWORD *)(a2 + 24) + 80 * v76) >> 6) & 0xFFFFFF;
                    if ( (unsigned int)v77 < *((_DWORD *)Current + 60)
                      && (v78 = *((_QWORD *)Current + 28),
                          v79 = *(_DWORD *)(v78 + 16 * v77 + 8),
                          ((*(_DWORD *)(*(_QWORD *)(a2 + 24) + 80 * v76) >> 25) & 0x60) == (*(_BYTE *)(v78 + 16 * v77 + 8) & 0x60))
                      && (v79 & 0x2000) == 0
                      && (v79 & 0x1F) != 0
                      && (*(_BYTE *)(v78 + 16LL * (unsigned int)v77 + 8) & 0x1F) == 5 )
                    {
                      v80 = *(struct _EX_RUNDOWN_REF **)(v78 + 16LL * (unsigned int)v77);
                    }
                    else
                    {
                      v80 = 0LL;
                    }
                    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&a6, v80);
                    if ( !a6 )
                      break;
                    *((_DWORD *)a6 + 24) = v67[v76];
                    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&a6);
                    v76 = (unsigned int)(v76 + 1);
                    if ( (unsigned int)v76 >= *(_DWORD *)(a2 + 16) )
                      goto LABEL_88;
                  }
                  v84 = WdLogNewEntry5_WdWarning(v82, v81, v83);
                  *(_QWORD *)(v84 + 24) = 7324LL;
                  WdLogEvent5_WdWarning(v84);
                  LODWORD(v37) = -1073741811;
                  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&a6);
                }
              }
              else
              {
                v75 = WdLogNewEntry5_WdWarning(v73, v72, v74);
                *(_QWORD *)(v75 + 24) = 7313LL;
                WdLogEvent5_WdWarning(v75);
                LODWORD(v37) = -1073741811;
              }
LABEL_88:
              DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v92);
              DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v88);
            }
            ExFreePoolWithTag(v67, 0);
          }
          else
          {
            LODWORD(v37) = -1073741801;
          }
        }
      }
      goto LABEL_41;
    }
    v33 = v91;
    while ( 1 )
    {
      v34 = *((_DWORD *)v32 - 2);
      v35 = 0xFFFFFFFFLL;
      v36 = v34 + v33;
      if ( (unsigned int)v36 >= v33 )
        v35 = (unsigned int)v36;
      v37 = (unsigned int)v36 < v33 ? (int)0xC0000095 : 0;
      if ( (unsigned int)v36 < v33 )
        break;
      if ( (unsigned int)v35 > *(_DWORD *)(a2 + 64) )
      {
        v61 = WdLogNewEntry5_WdWarning(v36, v35, v27);
        *(_QWORD *)(v61 + 24) = this;
        *(_QWORD *)(v61 + 32) = -1073741801LL;
        WdLogEvent5_WdWarning(v61);
        LODWORD(v37) = -1073741801;
        goto LABEL_58;
      }
      v38 = (const void *)*(v32 - 2);
      if ( v38 )
      {
        memmove(v31, v38, v34);
        v27 = P;
        v33 = v91;
        v31 = v92;
      }
      v40 = 96LL * (unsigned int)a6;
      LODWORD(a6) = (_DWORD)a6 + 1;
      v39 = (unsigned int)a6;
      *(D3DKMT_HANDLE *)((char *)&v27->hAllocation + v40) = 0;
      *(const void **)((char *)&v27->pSystemMem + v40) = 0LL;
      v41 = *((_DWORD *)v32 - 11);
      *(UINT *)((char *)&v27->Flags.Value + v40) = 0;
      *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v27->VidPnSourceId + v40) = (v41 >> 6) & 0xF;
      v42 = *((_DWORD *)v32 - 11);
      *(void **)((char *)&v27->pPrivateDriverData + v40) = v31;
      *(UINT *)((char *)&v27->Flags.Value + v40) = v42 & 1 | (((v42 | (v42 >> 12)) & 2) != 0);
      *(UINT *)((char *)&v27->PrivateDriverDataSize + v40) = *((_DWORD *)v32 - 2);
      v43 = *((unsigned int *)v32 - 2);
      v32 = (_QWORD *)*v32;
      v33 += v43;
      v31 = (struct _EX_RUNDOWN_REF *)((char *)v31 + v43);
      v91 = v33;
      v92 = v31;
      if ( v39 >= *(_DWORD *)(a2 + 16) )
        goto LABEL_32;
    }
    v62 = WdLogNewEntry5_WdWarning(v36, v35, v27);
    *(_QWORD *)(v62 + 24) = this;
    *(_QWORD *)(v62 + 32) = v37;
    WdLogEvent5_WdWarning(v62);
  }
  else
  {
    v60 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v25, P);
    LODWORD(v37) = -1073741811;
    v60[3] = this;
    v60[4] = *(unsigned int *)(a2 + 48);
    v60[5] = *(unsigned int *)(v21 + 120);
    v60[6] = -1073741811LL;
    WdLogEvent5_WdWarning(v60);
  }
LABEL_58:
  if ( v87 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v86);
LABEL_41:
  v13 = P;
LABEL_42:
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  return (unsigned int)v37;
}
