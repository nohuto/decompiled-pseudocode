/*
 * XREFs of ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00E9BB8
 * Callers:
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C009AE40 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00C0868 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C01B1F48 (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 *     ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x1C01B241C (-OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0007248 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00152B0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1C001694C (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
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

__int64 __fastcall DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
        DXGDEVICE *this,
        __int64 a2,
        unsigned int a3,
        struct _EX_RUNDOWN_REF *a4,
        unsigned int a5,
        PERESOURCE **a6,
        unsigned int a7,
        struct _EPROCESS *a8,
        unsigned int *a9,
        unsigned __int64 *a10)
{
  __int64 v10; // r15
  struct COREDEVICEACCESS *v13; // r12
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct COREDEVICEACCESS *v17; // r13
  bool v18; // bl
  __int64 v19; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r14
  unsigned __int64 v26; // rcx
  unsigned int v27; // eax
  SIZE_T v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  D3DKMT_CREATESTANDARDALLOCATION *v31; // r9
  size_t v32; // rcx
  __int64 v33; // rdx
  char *v34; // r12
  unsigned int v35; // r10d
  _QWORD *v36; // r15
  unsigned int v37; // r9d
  size_t v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rbx
  const void *v42; // rdx
  PERESOURCE **v43; // r8
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  D3DKMT_HANDLE hResource; // r15d
  unsigned int v52; // r9d
  _DWORD *v53; // r8
  D3DDDI_ALLOCATIONINFO *pAllocationInfo; // r10
  __int64 v55; // rax
  __int64 v57; // rax
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  bool v60; // zf
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  bool v66; // zf
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  struct DXGPROCESS *Current; // r15
  SIZE_T v72; // rax
  __int64 v73; // rcx
  unsigned int *v74; // r12
  unsigned int v75; // edx
  __int64 v76; // rax
  unsigned int v77; // edx
  unsigned int v78; // r8d
  __int64 v79; // rax
  __int64 v80; // r9
  int v81; // ecx
  struct _EX_RUNDOWN_REF *v82; // rdx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // rax
  unsigned int v87; // esi
  __int64 v88; // rax
  __int64 v89; // r9
  int v90; // ecx
  struct _EX_RUNDOWN_REF *v91; // rdx
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // rax
  _BYTE v96[8]; // [rsp+80h] [rbp-79h] BYREF
  char v97; // [rsp+88h] [rbp-71h]
  _BYTE v98[32]; // [rsp+90h] [rbp-69h] BYREF
  struct _D3DKMT_CREATEALLOCATION v99; // [rsp+B0h] [rbp-49h] BYREF
  struct _EX_RUNDOWN_REF *v100; // [rsp+140h] [rbp+47h] BYREF
  struct _EX_RUNDOWN_REF *v101; // [rsp+158h] [rbp+5Fh] BYREF

  v101 = a4;
  v10 = a3;
  v13 = 0LL;
  memset(&v99, 0, sizeof(v99));
  v14 = *((_QWORD *)this + 2);
  a7 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v14 + 16)) )
  {
    v57 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v57 + 24) = 7203LL;
    WdLogEvent5_WdAssertion(v57);
  }
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13));
  v17 = (struct COREDEVICEACCESS *)a6;
  if ( a6 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a6[3]);
  v18 = (*((_BYTE *)DXGPROCESS::GetCurrent(v16, v15) + 323) & 8) != 0;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v96);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v96);
  if ( (_DWORD)v10 )
  {
    Global = DXGGLOBAL::GetGlobal(v19);
    ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, v10, 2);
    v25 = ObjectA;
    if ( ObjectA )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(ObjectA + 128) - 44LL) & 2) != 0
        && !(*(unsigned int (**)(void))(*(_QWORD *)(*((_QWORD *)this + 5) + 104LL) + 208LL))() )
      {
        v63 = WdLogNewEntry5_WdEvent(v62, v22);
        LODWORD(v41) = -1073741790;
        *(_QWORD *)(v63 + 24) = -1073741790LL;
        WdLogEvent5_WdEvent(v63);
        goto LABEL_48;
      }
      v26 = *(unsigned int *)(a2 + 8);
      if ( *(_DWORD *)(v25 + 124) == (_DWORD)v26 )
      {
        if ( (*(_DWORD *)(v25 + 12) & 4) == 0 )
        {
          if ( v18 )
            goto LABEL_16;
          v27 = *(_DWORD *)(v25 + 104);
          if ( *(_DWORD *)(a2 + 32) == v27 )
          {
            if ( v27 )
            {
              memmove(*(void **)(a2 + 24), *(const void **)(v25 + 96), v27);
              v26 = *(unsigned int *)(a2 + 8);
            }
LABEL_16:
            v28 = 96 * v26;
            if ( !is_mul_ok(v26, 0x60uLL) )
              v28 = -1LL;
            a6 = (PERESOURCE **)operator new[](v28, 0x4B677844u, PagedPool);
            if ( a6 )
            {
              v31 = *(D3DKMT_CREATESTANDARDALLOCATION **)(a2 + 40);
              v32 = *(unsigned int *)(a2 + 48);
              v33 = *(unsigned int *)(a2 + 8);
              v99.hDevice = *(_DWORD *)a2;
              v99.hGlobalShare = v10;
              v99.pStandardAllocation = v31;
              v99.PrivateDriverDataSize = v32;
              v99.NumAllocations = v33;
              v99.pAllocationInfo = (D3DDDI_ALLOCATIONINFO *)a6;
              v99.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v99.Flags & 0xFFFFFF3E | 1);
              if ( v18 || (_DWORD)v32 == *(_DWORD *)(v25 + 120) )
              {
                if ( (_DWORD)v32 )
                {
                  memmove(v31, *(const void **)(v25 + 112), v32);
                  LODWORD(v33) = *(_DWORD *)(a2 + 8);
                }
                v34 = *(char **)(a2 + 56);
                v35 = 0;
                v36 = *(_QWORD **)(v25 + 128);
                LODWORD(v101) = 0;
                if ( !(_DWORD)v33 )
                {
LABEL_32:
                  if ( v97 )
                    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v96);
                  v47 = DXGDEVICE::CreateAllocation(this, &v99, 0, 1u, 0LL, 0LL, v17, a5, a8, a9, a10, 0LL, 0LL, 0LL, 0);
                  v41 = v47;
                  if ( v47 < 0 )
                  {
                    v69 = WdLogNewEntry5_WdWarning(v49, v48, v50);
                    *(_QWORD *)(v69 + 24) = v41;
                    WdLogEvent5_WdWarning(v69);
                  }
                  else
                  {
                    hResource = v99.hResource;
                    if ( !v99.hResource )
                    {
                      v70 = WdLogNewEntry5_WdAssertion(v49);
                      *(_QWORD *)(v70 + 24) = 7410LL;
                      WdLogEvent5_WdAssertion(v70);
                    }
                    v52 = 0;
                    v53 = *(_DWORD **)(a2 + 16);
                    *(_DWORD *)(a2 + 64) = a7;
                    *(_DWORD *)(a2 + 68) = hResource;
                    if ( *(_DWORD *)(a2 + 8) )
                    {
                      pAllocationInfo = v99.pAllocationInfo;
                      do
                      {
                        v55 = v52++;
                        v48 = 96 * v55;
                        *v53 = *(&pAllocationInfo->hAllocation + 24 * v55);
                        v53 += 20;
                        *((_QWORD *)v53 - 9) = *(_QWORD *)(a2 + 56)
                                             + (unsigned int)(*((_DWORD *)&pAllocationInfo->pPrivateDriverData + 24 * v55)
                                                            - *(_DWORD *)(a2 + 56));
                        *(v53 - 16) = *(&pAllocationInfo->PrivateDriverDataSize + 24 * v55);
                      }
                      while ( v52 < *(_DWORD *)(a2 + 8) );
                    }
                    if ( (*((_BYTE *)this + 1709) & 1) != 0 )
                    {
                      Current = DXGPROCESS::GetCurrent(v49, v48);
                      v72 = 4LL * *(unsigned int *)(a2 + 8);
                      if ( !is_mul_ok(*(unsigned int *)(a2 + 8), 4uLL) )
                        v72 = -1LL;
                      v74 = (unsigned int *)operator new[](v72, 0x4B677844u, PagedPool);
                      if ( v74 )
                      {
                        v75 = *(_DWORD *)(v25 + 12);
                        if ( (v75 & 8) != 0 )
                        {
                          v76 = WdLogNewEntry5_WdAssertion(v73);
                          *(_QWORD *)(v76 + 24) = 7440LL;
                          WdLogEvent5_WdAssertion(v76);
                          v75 = *(_DWORD *)(v25 + 12);
                        }
                        v77 = v75 >> 3;
                        if ( (v77 & 1) != 0 )
                          v78 = MEMORY[0x28];
                        else
                          v78 = *(_DWORD *)(v25 + 28);
                        LODWORD(v41) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenResource(
                                         (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                      + 4080LL),
                                         Current,
                                         this,
                                         v77 & 1,
                                         v78,
                                         *(_DWORD *)(a2 + 8),
                                         *(_DWORD *)(a2 + 64),
                                         &a7,
                                         v74);
                        if ( (int)v41 >= 0 )
                        {
                          DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
                            (DXGHANDLETABLELOCKSHARED *)v98,
                            (struct _KTHREAD **)Current);
                          v79 = (*(_DWORD *)(a2 + 68) >> 6) & 0xFFFFFF;
                          if ( (unsigned int)v79 < *((_DWORD *)Current + 62)
                            && (v80 = *((_QWORD *)Current + 29),
                                v81 = *(_DWORD *)(v80 + 16 * v79 + 8),
                                ((*(_DWORD *)(a2 + 68) >> 25) & 0x60) == (*(_BYTE *)(v80 + 16 * v79 + 8) & 0x60))
                            && (v81 & 0x2000) == 0
                            && (v81 & 0x1F) == 4 )
                          {
                            v82 = *(struct _EX_RUNDOWN_REF **)(v80 + 16LL * (unsigned int)v79);
                          }
                          else
                          {
                            v82 = 0LL;
                          }
                          DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v100, v82);
                          if ( v100 )
                          {
                            v87 = 0;
                            HIDWORD(v100[2].Ptr) = a7;
                            if ( *(_DWORD *)(a2 + 8) )
                            {
                              while ( 1 )
                              {
                                v88 = (*(_DWORD *)(*(_QWORD *)(a2 + 16) + 80LL * v87) >> 6) & 0xFFFFFF;
                                if ( (unsigned int)v88 < *((_DWORD *)Current + 62)
                                  && (v89 = *((_QWORD *)Current + 29),
                                      v90 = *(_DWORD *)(v89 + 16 * v88 + 8),
                                      ((*(_DWORD *)(*(_QWORD *)(a2 + 16) + 80LL * v87) >> 25) & 0x60) == (*(_BYTE *)(v89 + 16 * v88 + 8) & 0x60))
                                  && (v90 & 0x2000) == 0
                                  && (v90 & 0x1F) == 5 )
                                {
                                  v91 = *(struct _EX_RUNDOWN_REF **)(v89 + 16LL * (unsigned int)v88);
                                }
                                else
                                {
                                  v91 = 0LL;
                                }
                                DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v101, v91);
                                if ( !v101 )
                                  break;
                                LODWORD(v101[12].Count) = v74[v87];
                                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v101);
                                if ( ++v87 >= *(_DWORD *)(a2 + 8) )
                                  goto LABEL_93;
                              }
                              v95 = WdLogNewEntry5_WdWarning(v93, v92, v94);
                              *(_QWORD *)(v95 + 24) = 7468LL;
                              WdLogEvent5_WdWarning(v95);
                              LODWORD(v41) = -1073741811;
                              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v101);
                            }
                          }
                          else
                          {
                            v86 = WdLogNewEntry5_WdWarning(v84, v83, v85);
                            *(_QWORD *)(v86 + 24) = 7457LL;
                            WdLogEvent5_WdWarning(v86);
                            LODWORD(v41) = -1073741811;
                          }
LABEL_93:
                          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v100);
                          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v98);
                        }
                        operator delete[](v74);
                      }
                      else
                      {
                        LODWORD(v41) = -1073741801;
                      }
                    }
                  }
                  goto LABEL_41;
                }
                v37 = 0;
                while ( 1 )
                {
                  v38 = *((unsigned int *)v36 - 2);
                  v39 = 0xFFFFFFFFLL;
                  v40 = (unsigned int)v38 + v37;
                  if ( (unsigned int)v40 >= v37 )
                    v39 = (unsigned int)v40;
                  v41 = (unsigned int)v40 < v37 ? (int)0xC0000095 : 0;
                  if ( (unsigned int)v40 < v37 )
                    break;
                  if ( (unsigned int)v39 > *(_DWORD *)(a2 + 64) )
                  {
                    v67 = WdLogNewEntry5_WdWarning(v40, v39, v38);
                    *(_QWORD *)(v67 + 24) = this;
                    *(_QWORD *)(v67 + 32) = -1073741801LL;
                    WdLogEvent5_WdWarning(v67);
                    LODWORD(v41) = -1073741801;
                    goto LABEL_59;
                  }
                  v42 = (const void *)*(v36 - 2);
                  if ( v42 )
                  {
                    memmove(v34, v42, v38);
                    v37 = a7;
                    v35 = (unsigned int)v101;
                  }
                  v43 = a6;
                  v44 = v35++;
                  LODWORD(v101) = v35;
                  v45 = 12 * v44;
                  LODWORD(a6[v45]) = 0;
                  v43[v45 + 1] = 0LL;
                  LODWORD(v44) = *((_DWORD *)v36 - 11);
                  LODWORD(v43[v45 + 4]) = 0;
                  HIDWORD(v43[v45 + 3]) = ((unsigned int)v44 >> 6) & 0xF;
                  LODWORD(v44) = *((_DWORD *)v36 - 11);
                  v43[v45 + 2] = (PERESOURCE *)v34;
                  LODWORD(v43[v45 + 4]) = v44 & 1 | ((((unsigned int)v44 | ((unsigned int)v44 >> 12)) & 2) != 0);
                  LODWORD(v43[v45 + 3]) = *((_DWORD *)v36 - 2);
                  v46 = *((unsigned int *)v36 - 2);
                  v36 = (_QWORD *)*v36;
                  v37 += v46;
                  v34 += v46;
                  a7 = v37;
                  if ( v35 >= *(_DWORD *)(a2 + 8) )
                    goto LABEL_32;
                }
                v68 = WdLogNewEntry5_WdWarning(v40, v39, v38);
                *(_QWORD *)(v68 + 24) = this;
                *(_QWORD *)(v68 + 32) = v41;
                WdLogEvent5_WdWarning(v68);
LABEL_59:
                v66 = v97 == 0;
LABEL_60:
                if ( !v66 )
                  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v96);
LABEL_41:
                v13 = (struct COREDEVICEACCESS *)a6;
                goto LABEL_42;
              }
              v65 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v33, a6);
              LODWORD(v41) = -1073741811;
              v65[3] = this;
              v65[4] = *(unsigned int *)(a2 + 48);
              v65[5] = *(unsigned int *)(v25 + 120);
              v65[6] = -1073741811LL;
              WdLogEvent5_WdWarning(v65);
            }
            else
            {
              v64 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v29, 0LL);
              v64[3] = this;
              v64[4] = *(unsigned int *)(a2 + 8);
              v64[5] = -1073741801LL;
              WdLogEvent5_WdWarning(v64);
              LODWORD(v41) = -1073741801;
            }
            v66 = v97 == 0;
            goto LABEL_60;
          }
          v58 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v22, v24);
          LODWORD(v41) = -1073741811;
          v58[3] = this;
          v58[4] = *(unsigned int *)(a2 + 32);
          v58[5] = *(unsigned int *)(v25 + 104);
          v58[6] = -1073741811LL;
          goto LABEL_45;
        }
        v59 = (_QWORD *)WdLogNewEntry5_WdError(v26);
        LODWORD(v41) = -1073741811;
        v59[3] = this;
        v59[4] = -1073741811LL;
      }
      else
      {
        v59 = (_QWORD *)WdLogNewEntry5_WdError(v26);
        LODWORD(v41) = -1073741811;
        v59[3] = this;
        v59[4] = *(unsigned int *)(v25 + 124);
        v59[5] = *(unsigned int *)(a2 + 8);
        v59[6] = -1073741811LL;
      }
      WdLogEvent5_WdError(v59);
      goto LABEL_48;
    }
    v58 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
    LODWORD(v41) = -1073741811;
    v58[3] = this;
    v58[4] = v10;
    v58[5] = -1073741811LL;
LABEL_45:
    WdLogEvent5_WdWarning(v58);
LABEL_48:
    v60 = v97 == 0;
    goto LABEL_50;
  }
  v61 = WdLogNewEntry5_WdError(v19);
  LODWORD(v41) = -1073741811;
  *(_QWORD *)(v61 + 24) = this;
  *(_QWORD *)(v61 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v61);
  v60 = v97 == 0;
LABEL_50:
  if ( !v60 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v96);
LABEL_42:
  operator delete[](v13);
  return (unsigned int)v41;
}
