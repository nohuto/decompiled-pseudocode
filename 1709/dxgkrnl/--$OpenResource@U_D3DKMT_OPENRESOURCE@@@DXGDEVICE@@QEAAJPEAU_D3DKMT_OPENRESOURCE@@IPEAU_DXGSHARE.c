/*
 * XREFs of ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00958D4
 * Callers:
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C007D090 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00EA91C (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C01B60AC (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 *     ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x1C01B6578 (-OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C00030B4 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
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

__int64 __fastcall DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
        DXGDEVICE *this,
        __int64 a2,
        unsigned int a3,
        struct _EX_RUNDOWN_REF *a4,
        unsigned int a5,
        PERESOURCE **P,
        unsigned int a7,
        struct _EPROCESS *a8,
        unsigned int *a9,
        unsigned __int64 *a10)
{
  __int64 v10; // r15
  PERESOURCE **v13; // r14
  __int64 v14; // rax
  __int64 v15; // rcx
  struct COREDEVICEACCESS *v16; // r13
  bool v17; // bl
  __int64 v18; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r14
  __int64 v25; // rcx
  unsigned int v26; // eax
  SIZE_T v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  PERESOURCE **v30; // r8
  D3DKMT_CREATESTANDARDALLOCATION *v31; // r9
  size_t v32; // rcx
  char *v33; // r12
  unsigned int v34; // r11d
  _QWORD *v35; // r15
  unsigned int v36; // r9d
  unsigned int v37; // r10d
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rbx
  const void *v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  D3DKMT_HANDLE hResource; // r15d
  unsigned int v50; // r9d
  _DWORD *v51; // r8
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
  struct _EX_RUNDOWN_REF *v90; // [rsp+130h] [rbp+47h] BYREF
  struct _EX_RUNDOWN_REF *v91; // [rsp+148h] [rbp+5Fh] BYREF

  v91 = a4;
  v10 = a3;
  v13 = 0LL;
  memset(&v89, 0, sizeof(v89));
  v14 = *((_QWORD *)this + 2);
  a7 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v14 + 16)) )
  {
    v55 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v55 + 24) = 7064LL;
    WdLogEvent5_WdAssertion(v55);
  }
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13));
  v16 = (struct COREDEVICEACCESS *)P;
  if ( P )
    DXGADAPTER::IsCoreResourceExclusiveOwner(P[3]);
  v17 = (*((_BYTE *)DXGPROCESS::GetCurrent() + 307) & 8) != 0;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v86);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v86);
  if ( !(_DWORD)v10 )
  {
    v85 = WdLogNewEntry5_WdError(v18);
    LODWORD(v40) = -1073741811;
    *(_QWORD *)(v85 + 24) = this;
    *(_QWORD *)(v85 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v85);
    if ( !v87 )
      return (unsigned int)v40;
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v86);
    goto LABEL_42;
  }
  Global = DXGGLOBAL::GetGlobal(v18);
  ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, v10, 2);
  v24 = ObjectA;
  if ( !ObjectA )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23);
    LODWORD(v40) = -1073741811;
    v56[3] = this;
    v56[4] = v10;
    v56[5] = -1073741811LL;
LABEL_47:
    WdLogEvent5_WdWarning(v56);
    goto LABEL_49;
  }
  v25 = *(unsigned int *)(*(_QWORD *)(ObjectA + 128) - 44LL);
  if ( (v25 & 2) != 0 && !(*(unsigned int (**)(void))(*(_QWORD *)(*((_QWORD *)this + 5) + 96LL) + 208LL))() )
  {
    v58 = WdLogNewEntry5_WdEvent();
    LODWORD(v40) = -1073741790;
    *(_QWORD *)(v58 + 24) = -1073741790LL;
    WdLogEvent5_WdEvent(v58);
    goto LABEL_49;
  }
  if ( *(_DWORD *)(v24 + 124) != *(_DWORD *)(a2 + 8) )
  {
    v59 = (_QWORD *)WdLogNewEntry5_WdError(v25);
    LODWORD(v40) = -1073741811;
    v59[3] = this;
    v59[4] = *(unsigned int *)(v24 + 124);
    v59[5] = *(unsigned int *)(a2 + 8);
    v59[6] = -1073741811LL;
LABEL_55:
    WdLogEvent5_WdError(v59);
LABEL_49:
    if ( v87 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v86);
    return (unsigned int)v40;
  }
  if ( (*(_DWORD *)(v24 + 12) & 4) != 0 )
  {
    v59 = (_QWORD *)WdLogNewEntry5_WdError(v25);
    LODWORD(v40) = -1073741811;
    v59[3] = this;
    v59[4] = -1073741811LL;
    goto LABEL_55;
  }
  if ( v17 )
    goto LABEL_16;
  v26 = *(_DWORD *)(v24 + 104);
  if ( *(_DWORD *)(a2 + 32) != v26 )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v21, v23);
    LODWORD(v40) = -1073741811;
    v56[3] = this;
    v56[4] = *(unsigned int *)(a2 + 32);
    v56[5] = *(unsigned int *)(v24 + 104);
    v56[6] = -1073741811LL;
    goto LABEL_47;
  }
  if ( v26 )
    memmove(*(void **)(a2 + 24), *(const void **)(v24 + 96), v26);
LABEL_16:
  v27 = 96LL * *(unsigned int *)(a2 + 8);
  if ( !is_mul_ok(*(unsigned int *)(a2 + 8), 0x60uLL) )
    v27 = -1LL;
  P = (PERESOURCE **)operator new(v27, 0x4B677844u, PagedPool);
  v30 = P;
  if ( !P )
  {
    v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, 0LL);
    v57[3] = this;
    v57[4] = *(unsigned int *)(a2 + 8);
    v57[5] = -1073741801LL;
    WdLogEvent5_WdWarning(v57);
    LODWORD(v40) = -1073741801;
    goto LABEL_49;
  }
  v31 = *(D3DKMT_CREATESTANDARDALLOCATION **)(a2 + 40);
  v32 = *(unsigned int *)(a2 + 48);
  v89.hDevice = *(_DWORD *)a2;
  v89.NumAllocations = *(_DWORD *)(a2 + 8);
  v89.hGlobalShare = v10;
  v89.pStandardAllocation = v31;
  v89.PrivateDriverDataSize = v32;
  v89.pAllocationInfo = (D3DDDI_ALLOCATIONINFO *)P;
  v89.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v89.Flags & 0xFFFFFF3E | 1);
  if ( v17 || (_DWORD)v32 == *(_DWORD *)(v24 + 120) )
  {
    if ( (_DWORD)v32 )
    {
      memmove(v31, *(const void **)(v24 + 112), v32);
      v30 = P;
    }
    v33 = *(char **)(a2 + 56);
    v34 = 0;
    v35 = *(_QWORD **)(v24 + 128);
    LODWORD(v91) = 0;
    if ( !*(_DWORD *)(a2 + 8) )
    {
LABEL_32:
      if ( v87 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v86);
      v45 = DXGDEVICE::CreateAllocation(this, &v89, 0, 1u, 0LL, 0LL, v16, a5, a8, a9, a10, 0LL, 0LL);
      v40 = v45;
      if ( v45 < 0 )
      {
        v63 = WdLogNewEntry5_WdWarning(v47, v46, v48);
        *(_QWORD *)(v63 + 24) = v40;
        WdLogEvent5_WdWarning(v63);
      }
      else
      {
        hResource = v89.hResource;
        if ( !v89.hResource )
        {
          v64 = WdLogNewEntry5_WdAssertion(v47);
          *(_QWORD *)(v64 + 24) = 7271LL;
          WdLogEvent5_WdAssertion(v64);
        }
        v50 = 0;
        v51 = *(_DWORD **)(a2 + 16);
        *(_DWORD *)(a2 + 64) = a7;
        *(_DWORD *)(a2 + 68) = hResource;
        if ( *(_DWORD *)(a2 + 8) )
        {
          pAllocationInfo = v89.pAllocationInfo;
          do
          {
            v53 = v50++;
            *v51 = *(&pAllocationInfo->hAllocation + 24 * v53);
            v51 += 20;
            *((_QWORD *)v51 - 9) = *(_QWORD *)(a2 + 56)
                                 + (unsigned int)(*((_DWORD *)&pAllocationInfo->pPrivateDriverData + 24 * v53)
                                                - *(_DWORD *)(a2 + 56));
            *(v51 - 16) = *(&pAllocationInfo->PrivateDriverDataSize + 24 * v53);
          }
          while ( v50 < *(_DWORD *)(a2 + 8) );
        }
        if ( *((_BYTE *)this + 1693) )
        {
          Current = DXGPROCESS::GetCurrent();
          v66 = 4LL * *(unsigned int *)(a2 + 8);
          if ( !is_mul_ok(*(unsigned int *)(a2 + 8), 4uLL) )
            v66 = -1LL;
          v67 = (unsigned int *)operator new(v66, 0x4B677844u, PagedPool);
          if ( v67 )
          {
            LODWORD(v40) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenResource(
                             (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3888LL),
                             Current,
                             this,
                             *(_DWORD *)(v24 + 28),
                             *(_DWORD *)(a2 + 8),
                             *(_DWORD *)(a2 + 64),
                             &a7,
                             v67);
            if ( (int)v40 >= 0 )
            {
              DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v88, Current);
              v68 = (*(_DWORD *)(a2 + 68) >> 6) & 0xFFFFFF;
              if ( (unsigned int)v68 < *((_DWORD *)Current + 60)
                && (v69 = *((_QWORD *)Current + 28),
                    v70 = *(_DWORD *)(v69 + 16 * v68 + 8),
                    ((*(_DWORD *)(a2 + 68) >> 25) & 0x60) == (*(_BYTE *)(v69 + 16 * v68 + 8) & 0x60))
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
              DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v90, v71);
              if ( v90 )
              {
                v76 = 0LL;
                HIDWORD(v90[2].Ptr) = a7;
                if ( *(_DWORD *)(a2 + 8) )
                {
                  while ( 1 )
                  {
                    v77 = (*(_DWORD *)(*(_QWORD *)(a2 + 16) + 80 * v76) >> 6) & 0xFFFFFF;
                    if ( (unsigned int)v77 < *((_DWORD *)Current + 60)
                      && (v78 = *((_QWORD *)Current + 28),
                          v79 = *(_DWORD *)(v78 + 16 * v77 + 8),
                          ((*(_DWORD *)(*(_QWORD *)(a2 + 16) + 80 * v76) >> 25) & 0x60) == (*(_BYTE *)(v78 + 16 * v77 + 8) & 0x60))
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
                    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v91, v80);
                    if ( !v91 )
                      break;
                    LODWORD(v91[12].Count) = v67[v76];
                    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v91);
                    v76 = (unsigned int)(v76 + 1);
                    if ( (unsigned int)v76 >= *(_DWORD *)(a2 + 8) )
                      goto LABEL_88;
                  }
                  v84 = WdLogNewEntry5_WdWarning(v82, v81, v83);
                  *(_QWORD *)(v84 + 24) = 7324LL;
                  WdLogEvent5_WdWarning(v84);
                  LODWORD(v40) = -1073741811;
                  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v91);
                }
              }
              else
              {
                v75 = WdLogNewEntry5_WdWarning(v73, v72, v74);
                *(_QWORD *)(v75 + 24) = 7313LL;
                WdLogEvent5_WdWarning(v75);
                LODWORD(v40) = -1073741811;
              }
LABEL_88:
              DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v90);
              DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v88);
            }
            ExFreePoolWithTag(v67, 0);
          }
          else
          {
            LODWORD(v40) = -1073741801;
          }
        }
      }
      goto LABEL_41;
    }
    v36 = 0;
    while ( 1 )
    {
      v37 = *((_DWORD *)v35 - 2);
      v38 = 0xFFFFFFFFLL;
      v39 = v37 + v36;
      if ( (unsigned int)v39 >= v36 )
        v38 = (unsigned int)v39;
      v40 = (unsigned int)v39 < v36 ? (int)0xC0000095 : 0;
      if ( (unsigned int)v39 < v36 )
        break;
      if ( (unsigned int)v38 > *(_DWORD *)(a2 + 64) )
      {
        v61 = WdLogNewEntry5_WdWarning(v39, v38, v30);
        *(_QWORD *)(v61 + 24) = this;
        *(_QWORD *)(v61 + 32) = -1073741801LL;
        WdLogEvent5_WdWarning(v61);
        LODWORD(v40) = -1073741801;
        goto LABEL_58;
      }
      v41 = (const void *)*(v35 - 2);
      if ( v41 )
      {
        memmove(v33, v41, v37);
        v30 = P;
        v36 = a7;
        v34 = (unsigned int)v91;
      }
      v42 = v34++;
      LODWORD(v91) = v34;
      v43 = 12 * v42;
      LODWORD(v30[v43]) = 0;
      v30[v43 + 1] = 0LL;
      LODWORD(v42) = *((_DWORD *)v35 - 11);
      LODWORD(v30[v43 + 4]) = 0;
      HIDWORD(v30[v43 + 3]) = ((unsigned int)v42 >> 6) & 0xF;
      LODWORD(v42) = *((_DWORD *)v35 - 11);
      v30[v43 + 2] = (PERESOURCE *)v33;
      LODWORD(v30[v43 + 4]) = v42 & 1 | ((((unsigned int)v42 | ((unsigned int)v42 >> 12)) & 2) != 0);
      LODWORD(v30[v43 + 3]) = *((_DWORD *)v35 - 2);
      v44 = *((unsigned int *)v35 - 2);
      v35 = (_QWORD *)*v35;
      v36 += v44;
      v33 += v44;
      a7 = v36;
      if ( v34 >= *(_DWORD *)(a2 + 8) )
        goto LABEL_32;
    }
    v62 = WdLogNewEntry5_WdWarning(v39, v38, v30);
    *(_QWORD *)(v62 + 24) = this;
    *(_QWORD *)(v62 + 32) = v40;
    WdLogEvent5_WdWarning(v62);
  }
  else
  {
    v60 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v28, P);
    LODWORD(v40) = -1073741811;
    v60[3] = this;
    v60[4] = *(unsigned int *)(a2 + 48);
    v60[5] = *(unsigned int *)(v24 + 120);
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
  return (unsigned int)v40;
}
