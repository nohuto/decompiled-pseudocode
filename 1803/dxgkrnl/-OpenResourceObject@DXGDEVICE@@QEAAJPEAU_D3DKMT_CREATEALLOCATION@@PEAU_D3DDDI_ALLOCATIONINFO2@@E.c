/*
 * XREFs of ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x1C0096358
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C00EBA10 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z @ 0x1C0006A7C (-ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000722C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0007248 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROCESSACCESSLISTMUTEX@@QEAA@PEAVDXGSHAREDRESOURCEACCESS@@@Z @ 0x1C000B284 (--0DXGPROCESSACCESSLISTMUTEX@@QEAA@PEAVDXGSHAREDRESOURCEACCESS@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0015AA8 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C00163C8 (-CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1C001694C (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C0019E50 (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ?Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z @ 0x1C001B61C (-Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z.c)
 *     ??_GDXGRESOURCE@@QEAAPEAXI@Z @ 0x1C0023A54 (--_GDXGRESOURCE@@QEAAPEAXI@Z.c)
 *     ??0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ @ 0x1C002BFC8 (--0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ.c)
 *     _DXGDEVICE::OpenResourceObject_::_2_::ENSURE_LOCK_RELEASE::_ENSURE_LOCK_RELEASE @ 0x1C0096108 (_DXGDEVICE--OpenResourceObject_--_2_--ENSURE_LOCK_RELEASE--_ENSURE_LOCK_RELEASE.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C009631C (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A5534 (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ?CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z @ 0x1C00BF5E0 (-CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z.c)
 *     ??0DXGRESOURCE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00D35FC (--0DXGRESOURCE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00E6124 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00E6170 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDEVICE::OpenResourceObject(
        DXGDEVICE *this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        struct _D3DDDI_ALLOCATIONINFO2 *a3,
        char a4,
        struct _EPROCESS *a5,
        struct _DXGSHAREDALLOCOBJECT *a6,
        struct DXGRESOURCE **a7,
        unsigned __int8 *a8,
        const struct _D3DKM_CREATESTANDARDALLOCATION *a9,
        struct DXGAUTOMUTEX *a10,
        struct DXGAUTOPUSHLOCK *a11)
{
  __int64 v15; // rcx
  __int64 v16; // rax
  D3DKMT_HANDLE hResource; // ebx
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // r8
  int v21; // ecx
  struct DXGRESOURCE *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  DXGDEVICE **v26; // rbx
  _QWORD *v27; // rax
  __int64 v28; // rdi
  D3DKMT_CREATEALLOCATIONFLAGS v29; // eax
  DXGDEVICE *v30; // rcx
  DXGDEVICE *v31; // rax
  DXGDEVICE *v32; // rcx
  struct DXGAUTOPUSHLOCK *v33; // rdi
  DXGPUSHLOCK *v34; // rcx
  __int64 v35; // r8
  DXGDEVICE *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned int v39; // edi
  SIZE_T v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  PVOID v44; // r13
  DXGDEVICE *v45; // rdx
  char *v46; // rcx
  UINT v47; // esi
  DXGADAPTERALLOCATION_VGPU *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  DXGADAPTERALLOCATION_VGPU *v52; // rax
  __int64 *v53; // rcx
  __int64 v54; // rax
  __int64 **v55; // rdx
  D3DKMT_CREATEALLOCATIONFLAGS Flags; // eax
  int v58; // ebx
  DXGRESOURCE *v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  DXGRESOURCE *v63; // rsi
  DXGRESOURCE *v64; // rax
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rax
  ADAPTER_RENDER *v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  struct _DXGSHAREDALLOCOBJECT *v74; // r13
  _QWORD *v75; // rax
  __int64 v76; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rcx
  _QWORD *v82; // rax
  __int64 PrivateDriverDataSize; // rcx
  __int64 v84; // r13
  __int64 v85; // rdx
  __int64 v86; // rcx
  struct _D3DDDI_ALLOCATIONINFO2 *v87; // r8
  _QWORD *v88; // rbx
  __int64 v89; // rcx
  _QWORD *v90; // rcx
  __int64 v91; // rdx
  unsigned __int64 v92; // rcx
  __int64 v93; // r13
  __int64 NumAllocations; // rdx
  _QWORD *v95; // rax
  struct _D3DDDI_ALLOCATIONINFO2 *v96; // rdx
  signed __int32 v97; // eax
  signed __int32 v98; // ett
  __int64 v99; // rcx
  __int64 v100; // rcx
  char v101; // r15
  __int64 v102; // r8
  struct _EPROCESS *v103; // rdx
  __int64 **v104; // rcx
  __int64 *i; // rax
  _QWORD *v106; // rax
  __int64 v107; // rax
  __int64 v108; // rdi
  unsigned int v109; // edx
  DXGADAPTER *v110; // rcx
  __int64 v111; // rax
  struct DXGSHAREDRESOURCE *SharedResource; // rax
  UINT v113; // edx
  DXGADAPTERALLOCATION_VGPU *v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  DXGADAPTERALLOCATION_VGPU *v118; // rax
  __int64 *v119; // rcx
  __int64 v120; // rax
  __int64 **v121; // rdx
  int v122; // r8d
  SIZE_T v123; // rax
  PVOID v124; // rax
  __int64 v125; // rdx
  __int64 v126; // r8
  __int64 v127; // rcx
  _QWORD *v128; // rax
  __int64 v129; // rdx
  _QWORD *v130; // rax
  char *v131; // rcx
  _QWORD *v132; // r15
  _QWORD *v133; // rax
  __int64 v134; // rax
  void *v135; // r13
  __int64 v136; // rax
  char *v137; // rax
  __int64 v138; // rcx
  _QWORD *v139; // r15
  _QWORD *v140; // rax
  __int64 v141; // rcx
  DXGDEVICE **v142; // [rsp+20h] [rbp-40h] BYREF
  __int128 v143; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v144[16]; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v145[24]; // [rsp+48h] [rbp-18h] BYREF
  struct DXGRESOURCE *v146; // [rsp+A0h] [rbp+40h] BYREF
  struct DXGRESOURCE *v147; // [rsp+A8h] [rbp+48h] BYREF
  struct _D3DDDI_ALLOCATIONINFO2 *v148; // [rsp+B0h] [rbp+50h]

  v148 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v16 + 24) = 2016LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v142 = 0LL;
  v143 = 0LL;
  LOBYTE(v146) = *((_BYTE *)DXGPROCESS::GetCurrent() + 323);
  *a8 = 0;
  hResource = a2->hResource;
  if ( !hResource )
  {
    Flags = a2->Flags;
    if ( (*(_BYTE *)&Flags & 1) == 0 )
      goto LABEL_58;
    v58 = 0;
    if ( (*(_WORD *)&Flags & 0x1000) != 0 )
    {
      v59 = (DXGRESOURCE *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x80uLL);
      v63 = v59;
      if ( v59 )
      {
        DXGRESOURCE::DXGRESOURCE(v59, this);
        *((_QWORD *)v63 + 15) = 0LL;
        *((_DWORD *)v63 + 1) |= 4u;
LABEL_72:
        if ( !v63 )
        {
          v65 = WdLogNewEntry5_WdWarning(v61, v60, v62);
          *(_QWORD *)(v65 + 24) = this;
          *(_QWORD *)(v65 + 32) = -1073741801LL;
          WdLogEvent5_WdWarning(v65);
          v58 = -1073741801;
LABEL_194:
          LODWORD(v28) = v58;
          goto LABEL_59;
        }
        DXGPROCESS::CreateResourceHandleSafe(*((DXGPROCESS **)this + 5), v63);
        if ( !*((_DWORD *)v63 + 4) )
        {
LABEL_75:
          v69 = WdLogNewEntry5_WdWarning(v67, v66, v68);
          *(_QWORD *)(v69 + 24) = this;
          *(_QWORD *)(v69 + 32) = -1073741801LL;
          WdLogEvent5_WdWarning(v69);
          v58 = -1073741801;
          goto LABEL_192;
        }
        *((_QWORD *)v63 + 6) = a2->hPrivateRuntimeResourceHandle;
        if ( (*(_DWORD *)&a2->Flags & 2) == 0 && !a4 )
          goto LABEL_193;
        *((_DWORD *)v63 + 1) |= 1u;
        if ( a4 )
        {
          DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v144);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v144);
          if ( (*(_DWORD *)&a2->Flags & 0x40) != 0 )
          {
            v74 = a6;
            if ( !a6 )
            {
              v75 = (_QWORD *)WdLogNewEntry5_WdWarning(v72, v71, v73);
              v75[3] = this;
              v75[4] = -1073741811LL;
LABEL_87:
              WdLogEvent5_WdWarning(v75);
              v58 = -1073741811;
LABEL_88:
              v80 = *((_QWORD *)v63 + 7);
              if ( !v80 )
                goto LABEL_120;
              *(_DWORD *)(v80 + 12) |= 0x100u;
              v81 = *((_QWORD *)v63 + 7);
              if ( *(_DWORD *)(v81 + 124) == a2->NumAllocations )
              {
                if ( *(_DWORD *)(v81 + 120) == a2->PrivateDriverDataSize || ((unsigned __int8)v146 & 8) != 0 )
                {
                  v84 = *((_QWORD *)v63 + 7);
                  if ( *(_DWORD *)(v84 + 64) != (unsigned int)PsGetCurrentProcessSessionId(v81)
                    && (*(_DWORD *)(v84 + 12) & 8) == 0 )
                  {
                    v88 = (_QWORD *)WdLogNewEntry5_WdWarning(v86, v85, v87);
                    v88[3] = this;
                    v88[4] = *((_QWORD *)v63 + 7);
                    v89 = *((_QWORD *)v63 + 7);
                    v88[5] = *(unsigned int *)(v89 + 64);
                    v88[6] = (unsigned int)PsGetCurrentProcessSessionId(v89);
                    v90 = v88;
                    v88[7] = -1073741811LL;
LABEL_119:
                    WdLogEvent5_WdWarning(v90);
                    v58 = -1073741811;
                    goto LABEL_120;
                  }
                  if ( *(_QWORD *)(v84 + 72) == *((_QWORD *)this + 2) )
                  {
                    if ( *(_QWORD *)(v84 + 88) == *((_QWORD *)this + 211) )
                    {
                      if ( (*(_DWORD *)(v84 + 12) & 1) == 0
                        || (unsigned int)PsIsProtectedProcess(*(_QWORD *)(*((_QWORD *)this + 5) + 56LL))
                        && !(unsigned int)PsIsProtectedProcessLight(*(_QWORD *)(*((_QWORD *)this + 5) + 56LL)) )
                      {
                        v93 = 0LL;
                        NumAllocations = a2->NumAllocations;
                        v92 = *(_QWORD *)(*((_QWORD *)v63 + 7) + 128LL);
                        if ( (_DWORD)NumAllocations )
                        {
                          v87 = v148;
                          while ( *(_DWORD *)(v92 - 8) == v148[v93].PrivateDriverDataSize )
                          {
                            v92 = *(_QWORD *)v92;
                            v93 = (unsigned int)(v93 + 1);
                            if ( (unsigned int)v93 >= (unsigned int)NumAllocations )
                              goto LABEL_112;
                          }
                          v95 = (_QWORD *)WdLogNewEntry5_WdWarning(v92, NumAllocations, v148);
                          v96 = v148;
                          v95[3] = this;
                          v95[4] = *((_QWORD *)v63 + 7);
                          v95[5] = (unsigned int)v93;
                          v95[6] = v96[v93].PrivateDriverDataSize;
                          v95[7] = -1073741811LL;
                          WdLogEvent5_WdWarning(v95);
                          v58 = -1073741811;
                        }
LABEL_112:
                        if ( v58 < 0 )
                          goto LABEL_120;
                        v91 = *((_QWORD *)v63 + 7);
                        _m_prefetchw((const void *)(v91 + 60));
                        v97 = *(_DWORD *)(v91 + 60);
                        while ( v97 )
                        {
                          v92 = (unsigned int)(v97 + 1);
                          v98 = v97;
                          v97 = _InterlockedCompareExchange((volatile signed __int32 *)(v91 + 60), v92, v97);
                          if ( v98 == v97 )
                          {
                            v100 = *(_QWORD *)(*((_QWORD *)v63 + 7) + 144LL);
                            if ( v100 )
                            {
                              if ( *(DXGDEVICE **)(v100 + 72) == this )
                                ++*(_DWORD *)(v100 + 64);
                              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v144);
                              v101 = *(_BYTE *)(*((_QWORD *)this + 5) + 322LL);
                              DXGPROCESSACCESSLISTMUTEX::DXGPROCESSACCESSLISTMUTEX(
                                (DXGPROCESSACCESSLISTMUTEX *)v145,
                                *(struct DXGSHAREDRESOURCEACCESS **)(*((_QWORD *)v63 + 7) + 144LL));
                              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v145);
                              v103 = a5;
                              if ( !a5 )
                                v103 = *(struct _EPROCESS **)(*((_QWORD *)this + 5) + 56LL);
                              v104 = (__int64 **)(*(_QWORD *)(*((_QWORD *)v63 + 7) + 144LL) + 48LL);
                              for ( i = *v104; i != (__int64 *)v104; i = (__int64 *)*i )
                              {
                                if ( v101 && *((_BYTE *)i + 16)
                                  || !*((_BYTE *)i + 16) && v103 == (struct _EPROCESS *)i[3] )
                                {
                                  goto LABEL_134;
                                }
                              }
                              v106 = (_QWORD *)WdLogNewEntry5_WdWarning(v104, v103, v102);
                              v106[3] = this;
                              v106[4] = *((_QWORD *)v63 + 7);
                              v106[5] = -1073741811LL;
                              WdLogEvent5_WdWarning(v106);
                              v58 = -1073741811;
LABEL_134:
                              DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v145);
                            }
                            if ( v58 >= 0 )
                            {
                              v107 = *((_QWORD *)v63 + 7);
                              v108 = *(_QWORD *)(v107 + 128);
                              v109 = *(_DWORD *)(v108 - 44);
                              if ( (v109 & 2) != 0 )
                              {
                                if ( *(_DWORD *)(v107 + 124) != 1 )
                                {
                                  v110 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL);
                                  if ( *((_DWORD *)v110 + 62) <= 1u || !DXGADAPTER::IsDxgmms2(v110) )
                                  {
                                    v111 = WdLogNewEntry5_WdAssertion(v110);
                                    *(_QWORD *)(v111 + 24) = 2562LL;
                                    WdLogEvent5_WdAssertion(v111);
                                    v109 = *(_DWORD *)(v108 - 44);
                                  }
                                }
                                *((_QWORD *)this + ((v109 >> 6) & 0xF) + 60) = v63;
                              }
                            }
LABEL_120:
                            DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v144);
LABEL_191:
                            if ( v58 < 0 )
                            {
LABEL_192:
                              ADAPTER_RENDER::FreeResourceHandleAndWaitForZeroReferences(v70, v63, 0LL);
                              DXGRESOURCE::`scalar deleting destructor'(v63);
                              goto LABEL_194;
                            }
LABEL_193:
                            *a8 = 1;
                            DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v147, v63);
                            DXGRESOURCEREFERENCE::MoveAssign(a7, &v147);
                            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v147);
                            goto LABEL_194;
                          }
                        }
                        *((_QWORD *)v63 + 7) = 0LL;
                      }
                      v82 = (_QWORD *)WdLogNewEntry5_WdWarning(v92, v91, v87);
                      v82[3] = this;
                      v99 = *((_QWORD *)v63 + 7);
                      v82[5] = -1073741811LL;
                      v82[4] = v99;
                      goto LABEL_118;
                    }
                    v82 = (_QWORD *)WdLogNewEntry5_WdWarning(v86, v85, v87);
                    v82[3] = this;
                    v82[4] = *((_QWORD *)v63 + 7);
                    v82[5] = *(_QWORD *)(*((_QWORD *)v63 + 7) + 88LL);
LABEL_92:
                    v82[6] = -1073741811LL;
LABEL_118:
                    v90 = v82;
                    goto LABEL_119;
                  }
                  v82 = (_QWORD *)WdLogNewEntry5_WdWarning(v86, v85, v87);
                  v82[3] = this;
                  v82[4] = *((_QWORD *)v63 + 7);
                  PrivateDriverDataSize = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v63 + 7) + 72LL) + 16LL);
                }
                else
                {
                  v82 = (_QWORD *)WdLogNewEntry5_WdWarning(v81, v71, v73);
                  v82[3] = this;
                  v82[4] = *((_QWORD *)v63 + 7);
                  PrivateDriverDataSize = a2->PrivateDriverDataSize;
                }
              }
              else
              {
                v82 = (_QWORD *)WdLogNewEntry5_WdWarning(v81, v71, v73);
                v82[3] = this;
                v82[4] = *((_QWORD *)v63 + 7);
                PrivateDriverDataSize = a2->NumAllocations;
              }
              v82[5] = PrivateDriverDataSize;
              goto LABEL_92;
            }
            v76 = *((_QWORD *)a6 + 2);
            *((_QWORD *)v63 + 7) = v76;
            if ( v76 )
              goto LABEL_88;
            v75 = (_QWORD *)WdLogNewEntry5_WdWarning(v72, v71, v73);
            v75[3] = this;
            v75[4] = v74;
          }
          else
          {
            Global = DXGGLOBAL::GetGlobal(v72);
            ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, a2->hGlobalShare, 2);
            *((_QWORD *)v63 + 7) = ObjectA;
            if ( ObjectA )
              goto LABEL_88;
            v75 = (_QWORD *)WdLogNewEntry5_WdWarning(v79, v71, v73);
            v75[3] = this;
            v75[4] = a2->hGlobalShare;
          }
          v75[5] = -1073741811LL;
          goto LABEL_87;
        }
        SharedResource = DXGSHAREDRESOURCE::CreateSharedResource(
                           *((struct ADAPTER_RENDER **)this + 2),
                           *((struct DXGADAPTER **)this + 211),
                           (*(_DWORD *)&a2->Flags & 0x800) != 0);
        *((_QWORD *)v63 + 7) = SharedResource;
        if ( !SharedResource )
          goto LABEL_75;
        v113 = a2->NumAllocations;
        LODWORD(v147) = 0;
        LODWORD(v146) = v113;
        if ( !v113 )
        {
LABEL_153:
          *(_DWORD *)(*((_QWORD *)v63 + 7) + 124LL) = v113;
          *((_DWORD *)v63 + 1) |= 2u;
          goto LABEL_154;
        }
        while ( 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 185LL) )
          {
            v114 = (DXGADAPTERALLOCATION_VGPU *)operator new[](0x70uLL, 0x4B677844u, PagedPool);
            if ( v114 )
            {
              v118 = DXGADAPTERALLOCATION_VGPU::DXGADAPTERALLOCATION_VGPU(v114);
              goto LABEL_150;
            }
          }
          else
          {
            v118 = (DXGADAPTERALLOCATION_VGPU *)operator new[](0x40uLL, 0x4B677844u, PagedPool);
            if ( v118 )
            {
              *((_DWORD *)v118 + 1) = 0;
              *((_QWORD *)v118 + 1) = 0LL;
              *((_QWORD *)v118 + 2) = 0LL;
              *((_QWORD *)v118 + 4) = 0LL;
              *((_DWORD *)v118 + 10) = 0;
              *((_QWORD *)v118 + 7) = 0LL;
              *((_QWORD *)v118 + 6) = 0LL;
              goto LABEL_150;
            }
          }
          v118 = 0LL;
LABEL_150:
          if ( !v118 )
          {
            v133 = (_QWORD *)WdLogNewEntry5_WdWarning(v116, v115, v117);
            v133[3] = this;
            v133[4] = a2->NumAllocations;
            v133[5] = -1073741801LL;
            WdLogEvent5_WdWarning(v133);
            v113 = (unsigned int)v146;
            v58 = -1073741801;
LABEL_154:
            if ( a9 )
              *(_QWORD *)(*((_QWORD *)v63 + 7) + 176LL) = *((_QWORD *)a9 + 51);
            *(_DWORD *)(*((_QWORD *)v63 + 7) + 12LL) ^= (*(_DWORD *)(*((_QWORD *)v63 + 7) + 12LL) ^ (*(_DWORD *)&a2->Flags >> 3)) & 8;
            if ( v58 >= 0 && v113 > 1 )
            {
              v123 = 8LL * v113;
              if ( !is_mul_ok(v113, 8uLL) )
                v123 = -1LL;
              v124 = operator new[](v123, 0x4B677844u, PagedPool);
              v127 = *((_QWORD *)v63 + 7);
              *(_QWORD *)(v127 + 160) = v124;
              if ( !*(_QWORD *)(*((_QWORD *)v63 + 7) + 160LL) )
              {
                v128 = (_QWORD *)WdLogNewEntry5_WdWarning(v127, v125, v126);
                v129 = (unsigned int)v146;
                v128[3] = this;
                v128[4] = v129;
                v128[5] = -1073741801LL;
                WdLogEvent5_WdWarning(v128);
                v58 = -1073741801;
              }
            }
            if ( (*(_DWORD *)&a2->Flags & 4) == 0
              && (unsigned int)PsIsProtectedProcess(*(_QWORD *)(*((_QWORD *)this + 5) + 56LL))
              && !(unsigned int)PsIsProtectedProcessLight(*(_QWORD *)(*((_QWORD *)this + 5) + 56LL)) )
            {
              *(_DWORD *)(*((_QWORD *)v63 + 7) + 12LL) |= 1u;
            }
            if ( (*(_DWORD *)&a2->Flags & 0x10) != 0 )
            {
              if ( v58 < 0 )
                goto LABEL_190;
              v130 = operator new[](0x50uLL, 0x4B677844u, (POOL_TYPE)512);
              v132 = v130;
              if ( v130 )
              {
                v130[1] = 0LL;
                v131 = (char *)(v130 + 6);
                v130[2] = 0LL;
                *((_DWORD *)v130 + 8) = 0;
                v130[3] = 0LL;
                *((_DWORD *)v130 + 9) = 36;
                *((_DWORD *)v130 + 10) = 32;
                *((_DWORD *)v130 + 16) = 1;
                v130[9] = this;
                v130[7] = v130 + 6;
                v130[6] = v130 + 6;
              }
              else
              {
                v132 = 0LL;
              }
              if ( !v132 )
              {
                v134 = WdLogNewEntry5_WdLowResource(v131);
                *(_QWORD *)(v134 + 24) = this;
                *(_QWORD *)(v134 + 32) = -1073741801LL;
                goto LABEL_175;
              }
              v135 = 0LL;
              *(_QWORD *)(*((_QWORD *)v63 + 7) + 144LL) = v132;
              v136 = *((_QWORD *)this + 5);
              if ( *(_BYTE *)(v136 + 322) )
              {
                v137 = (char *)operator new[](0x28uLL, 0x4B677844u, PagedPool);
                if ( v137 )
                {
                  v137[24] = 1;
                  *((_QWORD *)v137 + 4) = 0LL;
                  goto LABEL_182;
                }
LABEL_181:
                v137 = 0LL;
              }
              else
              {
                v135 = *(void **)(v136 + 56);
                ObfReferenceObject(v135);
                v137 = (char *)operator new[](0x28uLL, 0x4B677844u, PagedPool);
                if ( !v137 )
                  goto LABEL_181;
                v137[24] = 0;
                *((_QWORD *)v137 + 4) = v135;
              }
LABEL_182:
              if ( !v137 )
              {
                if ( v135 )
                  ObfDereferenceObject(v135);
                v134 = WdLogNewEntry5_WdLowResource(v138);
                *(_QWORD *)(v134 + 24) = -1073741801LL;
LABEL_175:
                WdLogEvent5_WdLowResource(v134);
                v58 = -1073741801;
LABEL_190:
                DXGSHAREDRESOURCE::ReleaseReference(*((DXGSHAREDRESOURCE **)v63 + 7), 0LL, 0);
                *((_QWORD *)v63 + 7) = 0LL;
                goto LABEL_191;
              }
              v139 = v132 + 6;
              v140 = v137 + 8;
              v141 = *v139;
              if ( *(_QWORD **)(*v139 + 8LL) != v139 )
                __fastfail(3u);
              *v140 = v141;
              v140[1] = v139;
              *(_QWORD *)(v141 + 8) = v140;
              *v139 = v140;
            }
            if ( v58 >= 0 )
              goto LABEL_193;
            goto LABEL_190;
          }
          v119 = (__int64 *)((char *)v118 + 48);
          v120 = *((_QWORD *)v63 + 7) + 128LL;
          v121 = *(__int64 ***)(*((_QWORD *)v63 + 7) + 136LL);
          if ( *v121 != (__int64 *)v120 )
            __fastfail(3u);
          v122 = (int)v147;
          v119[1] = (__int64)v121;
          *v119 = v120;
          *v121 = v119;
          v113 = (unsigned int)v146;
          *(_QWORD *)(v120 + 8) = v119;
          LODWORD(v147) = v122 + 1;
          if ( v122 + 1 >= v113 )
            goto LABEL_153;
        }
      }
    }
    else
    {
      v64 = (DXGRESOURCE *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x78uLL);
      if ( v64 )
      {
        v63 = DXGRESOURCE::DXGRESOURCE(v64, this);
        goto LABEL_72;
      }
    }
    v63 = 0LL;
    goto LABEL_72;
  }
  v18 = *((_QWORD *)this + 5);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v18 + 208));
  v19 = (hResource >> 6) & 0xFFFFFF;
  if ( (unsigned int)v19 < *(_DWORD *)(v18 + 248)
    && (v20 = *(_QWORD *)(v18 + 232),
        v21 = *(_DWORD *)(v20 + 16 * v19 + 8),
        ((hResource >> 25) & 0x60) == (*(_BYTE *)(v20 + 16 * v19 + 8) & 0x60))
    && (v21 & 0x2000) == 0
    && (v21 & 0x1F) == 4 )
  {
    v22 = *(struct DXGRESOURCE **)(v20 + 16LL * (unsigned int)v19);
  }
  else
  {
    v22 = 0LL;
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v146, v22);
  ExReleasePushLockSharedEx(v18 + 208, 0LL);
  KeLeaveCriticalRegion();
  DXGRESOURCEREFERENCE::MoveAssign((struct DXGRESOURCE **)&v142, &v146);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v146);
  v26 = v142;
  if ( !v142 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25);
    v28 = -1073741816LL;
    v27[3] = this;
    v27[4] = a2->hResource;
    goto LABEL_12;
  }
  v29 = a2->Flags;
  if ( (*(_DWORD *)&v29 & 0x20020) != 0 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25);
    v27[3] = this;
    goto LABEL_63;
  }
  if ( v142[1] != this )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25);
    v27[3] = this;
    v27[4] = a2->hResource;
    v30 = v26[1];
LABEL_16:
    v27[5] = v30;
LABEL_17:
    LODWORD(v28) = -1073741811;
    v27[6] = -1073741811LL;
    goto LABEL_64;
  }
  if ( (*(_WORD *)&v29 & 0x800) != 0 )
  {
    v31 = v142[7];
    if ( !v31 || (*((_DWORD *)v31 + 3) & 0x20) == 0 )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25);
      v27[3] = a2->hResource;
LABEL_63:
      LODWORD(v28) = -1073741811;
      v27[4] = -1073741811LL;
      goto LABEL_64;
    }
  }
  if ( (*((_DWORD *)v142 + 1) & 1) == 0 )
    goto LABEL_57;
  v32 = v142[7];
  if ( !v32 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v23, v25);
    v27[3] = this;
    v27[4] = v26;
LABEL_25:
    v28 = -1073741811LL;
    goto LABEL_12;
  }
  if ( *((_DWORD *)v32 + 30) != a2->PrivateDriverDataSize )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v23, v25);
    v27[3] = this;
    v27[4] = v26[7];
    v30 = (DXGDEVICE *)a2->PrivateDriverDataSize;
    goto LABEL_16;
  }
  v33 = a11;
  v34 = (DXGDEVICE *)((char *)v32 + 32);
  *((_QWORD *)a11 + 1) = v34;
  DXGPUSHLOCK::AcquireExclusive(v34);
  *((_DWORD *)v33 + 4) = 2;
  v36 = v26[7];
  v37 = a2->NumAllocations;
  *(_QWORD *)&v143 = v33;
  v28 = 0LL;
  if ( (_DWORD)v37 )
  {
    v35 = *(unsigned int *)(*((_QWORD *)v36 + 16) - 8LL);
    do
    {
      if ( (_DWORD)v35 != a3[v28].PrivateDriverDataSize )
      {
        v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v37, v35);
        v27[3] = this;
        v27[4] = v26[7];
        v27[5] = (unsigned int)v28;
        v38 = v28;
        LODWORD(v28) = -1073741811;
        v27[6] = a3[v38].PrivateDriverDataSize;
        v27[7] = -1073741811LL;
        goto LABEL_64;
      }
      v28 = (unsigned int)(v28 + 1);
    }
    while ( (unsigned int)v28 < (unsigned int)v37 );
  }
  if ( (*((_DWORD *)v36 + 3) & 0x100) != 0 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v37, v35);
    v27[3] = this;
    v27[4] = v26[7];
    goto LABEL_25;
  }
  v39 = v37 + *((_DWORD *)v36 + 31);
  if ( v39 > 0x100 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v37, v35);
    v27[3] = this;
    v27[4] = v26[7];
    v27[5] = 256LL;
    goto LABEL_17;
  }
  *(_DWORD *)&a2->Flags |= 2u;
  if ( v39 > 1 )
  {
    v40 = 8LL * v39;
    if ( !is_mul_ok(v39, 8uLL) )
      v40 = -1LL;
    v44 = operator new[](v40, 0x4B677844u, PagedPool);
    if ( !v44 )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v41, v43);
      v27[3] = this;
      v27[4] = v39;
      goto LABEL_42;
    }
    v45 = v26[7];
    v46 = (char *)*((_QWORD *)v45 + 20);
    if ( v46 != (char *)v45 + 152 )
    {
      operator delete[](v46);
      v45 = v26[7];
    }
    *((_QWORD *)v45 + 20) = v44;
  }
  v47 = 0;
  if ( !a2->NumAllocations )
  {
LABEL_56:
    *((_DWORD *)v26[7] + 31) = v39;
LABEL_57:
    DXGAUTOMUTEX::Initialize(a10, (struct DXGFASTMUTEX *const)(v26 + 10), 0);
    DXGAUTOMUTEX::Acquire(a10);
LABEL_58:
    DXGRESOURCEREFERENCE::MoveAssign(a7, (struct DXGRESOURCE **)&v142);
    v143 = 0uLL;
    LODWORD(v28) = 0;
    goto LABEL_59;
  }
  while ( 1 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 185LL) )
    {
      v48 = (DXGADAPTERALLOCATION_VGPU *)operator new[](0x70uLL, 0x4B677844u, PagedPool);
      if ( v48 )
      {
        v52 = DXGADAPTERALLOCATION_VGPU::DXGADAPTERALLOCATION_VGPU(v48);
        goto LABEL_53;
      }
    }
    else
    {
      v52 = (DXGADAPTERALLOCATION_VGPU *)operator new[](0x40uLL, 0x4B677844u, PagedPool);
      if ( v52 )
      {
        *((_DWORD *)v52 + 1) = 0;
        *((_QWORD *)v52 + 1) = 0LL;
        *((_QWORD *)v52 + 2) = 0LL;
        *((_QWORD *)v52 + 4) = 0LL;
        *((_DWORD *)v52 + 10) = 0;
        *((_QWORD *)v52 + 7) = 0LL;
        *((_QWORD *)v52 + 6) = 0LL;
        goto LABEL_53;
      }
    }
    v52 = 0LL;
LABEL_53:
    if ( !v52 )
      break;
    v53 = (__int64 *)((char *)v52 + 48);
    v54 = (__int64)v26[7] + 128;
    v55 = (__int64 **)*((_QWORD *)v26[7] + 17);
    if ( *v55 != (__int64 *)v54 )
      __fastfail(3u);
    *v53 = v54;
    ++v47;
    v53[1] = (__int64)v55;
    *v55 = v53;
    *(_QWORD *)(v54 + 8) = v53;
    if ( v47 >= a2->NumAllocations )
      goto LABEL_56;
  }
  v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v50, v49, v51);
  v27[3] = this;
  v27[4] = a2->NumAllocations;
LABEL_42:
  v28 = -1073741801LL;
LABEL_12:
  v27[5] = v28;
LABEL_64:
  WdLogEvent5_WdWarning(v27);
LABEL_59:
  DXGDEVICE::OpenResourceObject_::_2_::ENSURE_LOCK_RELEASE::_ENSURE_LOCK_RELEASE((DXGAUTOPUSHLOCK **)&v143);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v142);
  return (unsigned int)v28;
}
