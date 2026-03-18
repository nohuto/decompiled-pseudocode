/*
 * XREFs of ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x1C0079A50
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@@Z @ 0x1C0097830 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002160 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C0002AD0 (-CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002ED4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C00030B4 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z @ 0x1C00033AC (-ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C00088FC (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000DDE8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z @ 0x1C00156A8 (-Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z.c)
 *     ??_GDXGRESOURCE@@QEAAPEAXI@Z @ 0x1C001D4AC (--_GDXGRESOURCE@@QEAAPEAXI@Z.c)
 *     ??0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ @ 0x1C0023E40 (--0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ.c)
 *     _DXGDEVICE::OpenResourceObject_::_2_::ENSURE_LOCK_RELEASE::_ENSURE_LOCK_RELEASE @ 0x1C00797FC (_DXGDEVICE--OpenResourceObject_--_2_--ENSURE_LOCK_RELEASE--_ENSURE_LOCK_RELEASE.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0079A14 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0082398 (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C008A3AC (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C008A3F0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z @ 0x1C00912C8 (-CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGRESOURCE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00F2F5C (--0DXGRESOURCE@@QEAA@PEAVDXGDEVICE@@@Z.c)
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
  int v21; // edx
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
  void *v44; // r13
  DXGDEVICE *v45; // rax
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
  _QWORD *v89; // rcx
  __int64 v90; // rdx
  unsigned __int64 v91; // rcx
  __int64 v92; // r13
  __int64 NumAllocations; // rdx
  _QWORD *v94; // rax
  struct _D3DDDI_ALLOCATIONINFO2 *v95; // rdx
  signed __int32 v96; // eax
  signed __int32 v97; // ett
  __int64 v98; // rcx
  __int64 v99; // rcx
  char v100; // r15
  __int64 v101; // r8
  struct _EPROCESS *v102; // rdx
  __int64 **v103; // rcx
  __int64 *i; // rax
  _QWORD *v105; // rax
  __int64 v106; // rcx
  __int64 v107; // rdi
  DXGADAPTER *v108; // rcx
  __int64 v109; // rax
  struct DXGSHAREDRESOURCE *SharedResource; // rax
  UINT v111; // edx
  DXGADAPTERALLOCATION_VGPU *v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  DXGADAPTERALLOCATION_VGPU *v116; // rax
  __int64 *v117; // rcx
  __int64 v118; // rax
  __int64 **v119; // rdx
  int v120; // r8d
  SIZE_T v121; // rax
  void *v122; // rax
  __int64 v123; // rdx
  __int64 v124; // r8
  __int64 v125; // rcx
  _QWORD *v126; // rax
  __int64 v127; // rdx
  _QWORD *v128; // rax
  char *v129; // rcx
  _QWORD *v130; // r15
  _QWORD *v131; // rax
  __int64 v132; // rax
  void *v133; // r13
  __int64 v134; // rax
  char *v135; // rax
  __int64 v136; // rcx
  _QWORD *v137; // r15
  _QWORD *v138; // rax
  __int64 v139; // rcx
  DXGDEVICE **v140; // [rsp+20h] [rbp-40h] BYREF
  __int128 v141; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v142[16]; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v143[24]; // [rsp+48h] [rbp-18h] BYREF
  struct DXGRESOURCE *v144; // [rsp+A0h] [rbp+40h] BYREF
  struct DXGRESOURCE *v145; // [rsp+A8h] [rbp+48h] BYREF
  struct _D3DDDI_ALLOCATIONINFO2 *v146; // [rsp+B0h] [rbp+50h]

  v146 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v16 + 24) = 1956LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v140 = 0LL;
  v141 = 0LL;
  LOBYTE(v144) = *((_BYTE *)DXGPROCESS::GetCurrent() + 307);
  *a8 = 0;
  hResource = a2->hResource;
  if ( !hResource )
  {
    Flags = a2->Flags;
    if ( (*(_BYTE *)&Flags & 1) == 0 )
      goto LABEL_59;
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
LABEL_73:
        if ( !v63 )
        {
          v65 = WdLogNewEntry5_WdWarning(v61, v60, v62);
          *(_QWORD *)(v65 + 24) = this;
          *(_QWORD *)(v65 + 32) = -1073741801LL;
          WdLogEvent5_WdWarning(v65);
          v58 = -1073741801;
LABEL_195:
          LODWORD(v28) = v58;
          goto LABEL_60;
        }
        DXGPROCESS::CreateResourceHandleSafe(*((DXGPROCESS **)this + 5), v63);
        if ( !*((_DWORD *)v63 + 4) )
        {
LABEL_76:
          v69 = WdLogNewEntry5_WdWarning(v67, v66, v68);
          *(_QWORD *)(v69 + 24) = this;
          *(_QWORD *)(v69 + 32) = -1073741801LL;
          WdLogEvent5_WdWarning(v69);
          v58 = -1073741801;
          goto LABEL_193;
        }
        *((_QWORD *)v63 + 6) = a2->hPrivateRuntimeResourceHandle;
        if ( (*(_DWORD *)&a2->Flags & 2) == 0 && !a4 )
          goto LABEL_194;
        *((_DWORD *)v63 + 1) |= 1u;
        if ( a4 )
        {
          DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v142);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v142);
          if ( (*(_DWORD *)&a2->Flags & 0x40) != 0 )
          {
            v74 = a6;
            if ( !a6 )
            {
              v75 = (_QWORD *)WdLogNewEntry5_WdWarning(v72, v71, v73);
              v75[3] = this;
              v75[4] = -1073741811LL;
LABEL_88:
              WdLogEvent5_WdWarning(v75);
              v58 = -1073741811;
LABEL_89:
              v80 = *((_QWORD *)v63 + 7);
              if ( !v80 )
                goto LABEL_121;
              *(_DWORD *)(v80 + 12) |= 0x100u;
              v81 = *((_QWORD *)v63 + 7);
              if ( *(_DWORD *)(v81 + 124) == a2->NumAllocations )
              {
                if ( *(_DWORD *)(v81 + 120) == a2->PrivateDriverDataSize || ((unsigned __int8)v144 & 8) != 0 )
                {
                  v84 = *((_QWORD *)v63 + 7);
                  if ( *(_DWORD *)(v84 + 64) != (unsigned int)PsGetCurrentProcessSessionId()
                    && (*(_DWORD *)(v84 + 12) & 8) == 0 )
                  {
                    v88 = (_QWORD *)WdLogNewEntry5_WdWarning(v86, v85, v87);
                    v88[3] = this;
                    v88[4] = *((_QWORD *)v63 + 7);
                    v88[5] = *(unsigned int *)(*((_QWORD *)v63 + 7) + 64LL);
                    v88[6] = (unsigned int)PsGetCurrentProcessSessionId();
                    v89 = v88;
                    v88[7] = -1073741811LL;
LABEL_120:
                    WdLogEvent5_WdWarning(v89);
                    v58 = -1073741811;
                    goto LABEL_121;
                  }
                  if ( *(_QWORD *)(v84 + 72) == *((_QWORD *)this + 2) )
                  {
                    if ( *(_QWORD *)(v84 + 88) == *((_QWORD *)this + 209) )
                    {
                      if ( (*(_DWORD *)(v84 + 12) & 1) == 0
                        || (unsigned int)PsIsProtectedProcess(*(_QWORD *)(*((_QWORD *)this + 5) + 48LL))
                        && !(unsigned int)PsIsProtectedProcessLight(*(_QWORD *)(*((_QWORD *)this + 5) + 48LL)) )
                      {
                        v92 = 0LL;
                        NumAllocations = a2->NumAllocations;
                        v91 = *(_QWORD *)(*((_QWORD *)v63 + 7) + 128LL);
                        if ( (_DWORD)NumAllocations )
                        {
                          v87 = v146;
                          while ( *(_DWORD *)(v91 - 8) == v146[v92].PrivateDriverDataSize )
                          {
                            v91 = *(_QWORD *)v91;
                            v92 = (unsigned int)(v92 + 1);
                            if ( (unsigned int)v92 >= (unsigned int)NumAllocations )
                              goto LABEL_113;
                          }
                          v94 = (_QWORD *)WdLogNewEntry5_WdWarning(v91, NumAllocations, v146);
                          v95 = v146;
                          v94[3] = this;
                          v94[4] = *((_QWORD *)v63 + 7);
                          v94[5] = (unsigned int)v92;
                          v94[6] = v95[v92].PrivateDriverDataSize;
                          v94[7] = -1073741811LL;
                          WdLogEvent5_WdWarning(v94);
                          v58 = -1073741811;
                        }
LABEL_113:
                        if ( v58 < 0 )
                          goto LABEL_121;
                        v90 = *((_QWORD *)v63 + 7);
                        _m_prefetchw((const void *)(v90 + 60));
                        v96 = *(_DWORD *)(v90 + 60);
                        while ( v96 )
                        {
                          v91 = (unsigned int)(v96 + 1);
                          v97 = v96;
                          v96 = _InterlockedCompareExchange((volatile signed __int32 *)(v90 + 60), v91, v96);
                          if ( v97 == v96 )
                          {
                            v99 = *(_QWORD *)(*((_QWORD *)v63 + 7) + 144LL);
                            if ( v99 )
                            {
                              if ( *(DXGDEVICE **)(v99 + 72) == this )
                                ++*(_DWORD *)(v99 + 64);
                              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v142);
                              v100 = *(_BYTE *)(*((_QWORD *)this + 5) + 306LL);
                              DXGAUTOMUTEX::DXGAUTOMUTEX(
                                (DXGAUTOMUTEX *)v143,
                                (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)v63 + 7) + 144LL) + 8LL));
                              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v143);
                              v102 = a5;
                              if ( !a5 )
                                v102 = *(struct _EPROCESS **)(*((_QWORD *)this + 5) + 48LL);
                              v103 = (__int64 **)(*(_QWORD *)(*((_QWORD *)v63 + 7) + 144LL) + 48LL);
                              for ( i = *v103; i != (__int64 *)v103; i = (__int64 *)*i )
                              {
                                if ( v100 && *((_BYTE *)i + 16)
                                  || !*((_BYTE *)i + 16) && v102 == (struct _EPROCESS *)i[3] )
                                {
                                  goto LABEL_135;
                                }
                              }
                              v105 = (_QWORD *)WdLogNewEntry5_WdWarning(v103, v102, v101);
                              v105[3] = this;
                              v105[4] = *((_QWORD *)v63 + 7);
                              v105[5] = -1073741811LL;
                              WdLogEvent5_WdWarning(v105);
                              v58 = -1073741811;
LABEL_135:
                              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v143);
                            }
                            if ( v58 >= 0 )
                            {
                              v106 = *((_QWORD *)v63 + 7);
                              v107 = *(_QWORD *)(v106 + 128);
                              if ( (*(_DWORD *)(v107 - 44) & 2) != 0 )
                              {
                                if ( *(_DWORD *)(v106 + 124) != 1 )
                                {
                                  v108 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL);
                                  if ( *((_DWORD *)v108 + 62) <= 1u || !DXGADAPTER::IsDxgmms2(v108) )
                                  {
                                    v109 = WdLogNewEntry5_WdAssertion(v108);
                                    *(_QWORD *)(v109 + 24) = 2502LL;
                                    WdLogEvent5_WdAssertion(v109);
                                  }
                                }
                                *((_QWORD *)this + ((*(_DWORD *)(v107 - 44) >> 6) & 0xF) + 58) = v63;
                              }
                            }
LABEL_121:
                            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v142);
LABEL_192:
                            if ( v58 < 0 )
                            {
LABEL_193:
                              ADAPTER_RENDER::FreeResourceHandleAndWaitForZeroReferences(v70, v63, 0LL);
                              DXGRESOURCE::`scalar deleting destructor'(v63);
                              goto LABEL_195;
                            }
LABEL_194:
                            *a8 = 1;
                            DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v145, v63);
                            DXGRESOURCEREFERENCE::MoveAssign(a7, &v145);
                            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v145);
                            goto LABEL_195;
                          }
                        }
                        *((_QWORD *)v63 + 7) = 0LL;
                      }
                      v82 = (_QWORD *)WdLogNewEntry5_WdWarning(v91, v90, v87);
                      v82[3] = this;
                      v98 = *((_QWORD *)v63 + 7);
                      v82[5] = -1073741811LL;
                      v82[4] = v98;
                      goto LABEL_119;
                    }
                    v82 = (_QWORD *)WdLogNewEntry5_WdWarning(v86, v85, v87);
                    v82[3] = this;
                    v82[4] = *((_QWORD *)v63 + 7);
                    v82[5] = *(_QWORD *)(*((_QWORD *)v63 + 7) + 88LL);
LABEL_93:
                    v82[6] = -1073741811LL;
LABEL_119:
                    v89 = v82;
                    goto LABEL_120;
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
              goto LABEL_93;
            }
            v76 = *((_QWORD *)a6 + 2);
            *((_QWORD *)v63 + 7) = v76;
            if ( v76 )
              goto LABEL_89;
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
              goto LABEL_89;
            v75 = (_QWORD *)WdLogNewEntry5_WdWarning(v79, v71, v73);
            v75[3] = this;
            v75[4] = a2->hGlobalShare;
          }
          v75[5] = -1073741811LL;
          goto LABEL_88;
        }
        SharedResource = DXGSHAREDRESOURCE::CreateSharedResource(
                           *((struct ADAPTER_RENDER **)this + 2),
                           *((struct DXGADAPTER **)this + 209),
                           (*(_DWORD *)&a2->Flags & 0x800) != 0);
        *((_QWORD *)v63 + 7) = SharedResource;
        if ( !SharedResource )
          goto LABEL_76;
        v111 = a2->NumAllocations;
        LODWORD(v145) = 0;
        LODWORD(v144) = v111;
        if ( !v111 )
        {
LABEL_154:
          *(_DWORD *)(*((_QWORD *)v63 + 7) + 124LL) = v111;
          *((_DWORD *)v63 + 1) |= 2u;
          goto LABEL_155;
        }
        while ( 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 185LL) )
          {
            v112 = (DXGADAPTERALLOCATION_VGPU *)operator new(0x70uLL, 0x4B677844u, PagedPool);
            if ( v112 )
            {
              v116 = DXGADAPTERALLOCATION_VGPU::DXGADAPTERALLOCATION_VGPU(v112);
              goto LABEL_151;
            }
          }
          else
          {
            v116 = (DXGADAPTERALLOCATION_VGPU *)operator new(0x40uLL, 0x4B677844u, PagedPool);
            if ( v116 )
            {
              *((_DWORD *)v116 + 1) = 0;
              *((_QWORD *)v116 + 1) = 0LL;
              *((_QWORD *)v116 + 2) = 0LL;
              *((_QWORD *)v116 + 4) = 0LL;
              *((_DWORD *)v116 + 10) = 0;
              *((_QWORD *)v116 + 7) = 0LL;
              *((_QWORD *)v116 + 6) = 0LL;
              goto LABEL_151;
            }
          }
          v116 = 0LL;
LABEL_151:
          if ( !v116 )
          {
            v131 = (_QWORD *)WdLogNewEntry5_WdWarning(v114, v113, v115);
            v131[3] = this;
            v131[4] = a2->NumAllocations;
            v131[5] = -1073741801LL;
            WdLogEvent5_WdWarning(v131);
            v111 = (unsigned int)v144;
            v58 = -1073741801;
LABEL_155:
            if ( a9 )
              *(_QWORD *)(*((_QWORD *)v63 + 7) + 176LL) = *((_QWORD *)a9 + 51);
            *(_DWORD *)(*((_QWORD *)v63 + 7) + 12LL) ^= (*(_DWORD *)(*((_QWORD *)v63 + 7) + 12LL) ^ (*(_DWORD *)&a2->Flags >> 3)) & 8;
            if ( v58 >= 0 && v111 > 1 )
            {
              v121 = 8LL * v111;
              if ( !is_mul_ok(v111, 8uLL) )
                v121 = -1LL;
              v122 = operator new(v121, 0x4B677844u, PagedPool);
              v125 = *((_QWORD *)v63 + 7);
              *(_QWORD *)(v125 + 160) = v122;
              if ( !*(_QWORD *)(*((_QWORD *)v63 + 7) + 160LL) )
              {
                v126 = (_QWORD *)WdLogNewEntry5_WdWarning(v125, v123, v124);
                v127 = (unsigned int)v144;
                v126[3] = this;
                v126[4] = v127;
                v126[5] = -1073741801LL;
                WdLogEvent5_WdWarning(v126);
                v58 = -1073741801;
              }
            }
            if ( (*(_DWORD *)&a2->Flags & 4) == 0
              && (unsigned int)PsIsProtectedProcess(*(_QWORD *)(*((_QWORD *)this + 5) + 48LL))
              && !(unsigned int)PsIsProtectedProcessLight(*(_QWORD *)(*((_QWORD *)this + 5) + 48LL)) )
            {
              *(_DWORD *)(*((_QWORD *)v63 + 7) + 12LL) |= 1u;
            }
            if ( (*(_DWORD *)&a2->Flags & 0x10) != 0 )
            {
              if ( v58 < 0 )
                goto LABEL_191;
              v128 = operator new(0x50uLL, 0x4B677844u, (POOL_TYPE)512);
              v130 = v128;
              if ( v128 )
              {
                v128[1] = 0LL;
                v129 = (char *)(v128 + 6);
                v128[2] = 0LL;
                *((_DWORD *)v128 + 8) = 0;
                v128[3] = 0LL;
                *((_DWORD *)v128 + 9) = 36;
                *((_DWORD *)v128 + 10) = 32;
                *((_DWORD *)v128 + 16) = 1;
                v128[9] = this;
                v128[7] = v128 + 6;
                v128[6] = v128 + 6;
              }
              else
              {
                v130 = 0LL;
              }
              if ( !v130 )
              {
                v132 = WdLogNewEntry5_WdLowResource(v129);
                *(_QWORD *)(v132 + 24) = this;
                *(_QWORD *)(v132 + 32) = -1073741801LL;
                goto LABEL_176;
              }
              v133 = 0LL;
              *(_QWORD *)(*((_QWORD *)v63 + 7) + 144LL) = v130;
              v134 = *((_QWORD *)this + 5);
              if ( *(_BYTE *)(v134 + 306) )
              {
                v135 = (char *)operator new(0x28uLL, 0x4B677844u, PagedPool);
                if ( v135 )
                {
                  v135[24] = 1;
                  *((_QWORD *)v135 + 4) = 0LL;
                  goto LABEL_183;
                }
LABEL_182:
                v135 = 0LL;
              }
              else
              {
                v133 = *(void **)(v134 + 48);
                ObfReferenceObject(v133);
                v135 = (char *)operator new(0x28uLL, 0x4B677844u, PagedPool);
                if ( !v135 )
                  goto LABEL_182;
                v135[24] = 0;
                *((_QWORD *)v135 + 4) = v133;
              }
LABEL_183:
              if ( !v135 )
              {
                if ( v133 )
                  ObfDereferenceObject(v133);
                v132 = WdLogNewEntry5_WdLowResource(v136);
                *(_QWORD *)(v132 + 24) = -1073741801LL;
LABEL_176:
                WdLogEvent5_WdLowResource(v132);
                v58 = -1073741801;
LABEL_191:
                DXGSHAREDRESOURCE::ReleaseReference(*((DXGSHAREDRESOURCE **)v63 + 7), 0LL, 0);
                *((_QWORD *)v63 + 7) = 0LL;
                goto LABEL_192;
              }
              v137 = v130 + 6;
              v138 = v135 + 8;
              v139 = *v137;
              if ( *(_QWORD **)(*v137 + 8LL) != v137 )
                __fastfail(3u);
              *v138 = v139;
              v138[1] = v137;
              *(_QWORD *)(v139 + 8) = v138;
              *v137 = v138;
            }
            if ( v58 >= 0 )
              goto LABEL_194;
            goto LABEL_191;
          }
          v117 = (__int64 *)((char *)v116 + 48);
          v118 = *((_QWORD *)v63 + 7) + 128LL;
          v119 = *(__int64 ***)(*((_QWORD *)v63 + 7) + 136LL);
          if ( *v119 != (__int64 *)v118 )
            __fastfail(3u);
          v120 = (int)v145;
          v117[1] = (__int64)v119;
          *v117 = v118;
          *v119 = v117;
          v111 = (unsigned int)v144;
          *(_QWORD *)(v118 + 8) = v117;
          LODWORD(v145) = v120 + 1;
          if ( v120 + 1 >= v111 )
            goto LABEL_154;
        }
      }
    }
    else
    {
      v64 = (DXGRESOURCE *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x78uLL);
      if ( v64 )
      {
        v63 = DXGRESOURCE::DXGRESOURCE(v64, this);
        goto LABEL_73;
      }
    }
    v63 = 0LL;
    goto LABEL_73;
  }
  v18 = *((_QWORD *)this + 5);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v18 + 200));
  v19 = (hResource >> 6) & 0xFFFFFF;
  if ( (unsigned int)v19 < *(_DWORD *)(v18 + 240)
    && (v20 = *(_QWORD *)(v18 + 224),
        v21 = *(_DWORD *)(v20 + 16 * v19 + 8),
        ((hResource >> 25) & 0x60) == (*(_BYTE *)(v20 + 16 * v19 + 8) & 0x60))
    && (v21 & 0x2000) == 0
    && (v21 & 0x1F) != 0
    && (*(_BYTE *)(v20 + 16LL * (unsigned int)v19 + 8) & 0x1F) == 4 )
  {
    v22 = *(struct DXGRESOURCE **)(v20 + 16LL * (unsigned int)v19);
  }
  else
  {
    v22 = 0LL;
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v144, v22);
  ExReleasePushLockSharedEx(v18 + 200, 0LL);
  KeLeaveCriticalRegion();
  DXGRESOURCEREFERENCE::MoveAssign((struct DXGRESOURCE **)&v140, &v144);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v144);
  v26 = v140;
  if ( !v140 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25);
    v28 = -1073741816LL;
    v27[3] = this;
    v27[4] = a2->hResource;
    goto LABEL_13;
  }
  v29 = a2->Flags;
  if ( (*(_DWORD *)&v29 & 0x20020) != 0 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25);
    v27[3] = this;
    goto LABEL_64;
  }
  if ( v140[1] != this )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25);
    v27[3] = this;
    v27[4] = a2->hResource;
    v30 = v26[1];
LABEL_17:
    v27[5] = v30;
LABEL_18:
    LODWORD(v28) = -1073741811;
    v27[6] = -1073741811LL;
    goto LABEL_65;
  }
  if ( (*(_WORD *)&v29 & 0x800) != 0 )
  {
    v31 = v140[7];
    if ( !v31 || (*((_DWORD *)v31 + 3) & 0x20) == 0 )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25);
      v27[3] = a2->hResource;
LABEL_64:
      LODWORD(v28) = -1073741811;
      v27[4] = -1073741811LL;
      goto LABEL_65;
    }
  }
  if ( (*((_DWORD *)v140 + 1) & 1) == 0 )
    goto LABEL_58;
  v32 = v140[7];
  if ( !v32 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v23, v25);
    v27[3] = this;
    v27[4] = v26;
LABEL_26:
    v28 = -1073741811LL;
    goto LABEL_13;
  }
  if ( *((_DWORD *)v32 + 30) != a2->PrivateDriverDataSize )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v23, v25);
    v27[3] = this;
    v27[4] = v26[7];
    v30 = (DXGDEVICE *)a2->PrivateDriverDataSize;
    goto LABEL_17;
  }
  v33 = a11;
  v34 = (DXGDEVICE *)((char *)v32 + 32);
  *((_QWORD *)a11 + 1) = v34;
  DXGPUSHLOCK::AcquireExclusive(v34);
  *((_DWORD *)v33 + 4) = 2;
  v36 = v26[7];
  v37 = a2->NumAllocations;
  *(_QWORD *)&v141 = v33;
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
        goto LABEL_65;
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
    goto LABEL_26;
  }
  v39 = v37 + *((_DWORD *)v36 + 31);
  if ( v39 > 0x100 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v37, v35);
    v27[3] = this;
    v27[4] = v26[7];
    v27[5] = 256LL;
    goto LABEL_18;
  }
  *(_DWORD *)&a2->Flags |= 2u;
  if ( v39 > 1 )
  {
    v40 = 8LL * v39;
    if ( !is_mul_ok(v39, 8uLL) )
      v40 = -1LL;
    v44 = operator new(v40, 0x4B677844u, PagedPool);
    if ( !v44 )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v41, v43);
      v27[3] = this;
      v27[4] = v39;
      goto LABEL_43;
    }
    v45 = v26[7];
    v46 = (char *)*((_QWORD *)v45 + 20);
    if ( v46 != (char *)v45 + 152 )
      operator delete(v46);
    *((_QWORD *)v26[7] + 20) = v44;
  }
  v47 = 0;
  if ( !a2->NumAllocations )
  {
LABEL_57:
    *((_DWORD *)v26[7] + 31) = v39;
LABEL_58:
    DXGAUTOMUTEX::Initialize(a10, (struct DXGFASTMUTEX *const)(v26 + 10), 0);
    DXGAUTOMUTEX::Acquire(a10);
LABEL_59:
    DXGRESOURCEREFERENCE::MoveAssign(a7, (struct DXGRESOURCE **)&v140);
    v141 = 0uLL;
    LODWORD(v28) = 0;
    goto LABEL_60;
  }
  while ( 1 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 185LL) )
    {
      v48 = (DXGADAPTERALLOCATION_VGPU *)operator new(0x70uLL, 0x4B677844u, PagedPool);
      if ( v48 )
      {
        v52 = DXGADAPTERALLOCATION_VGPU::DXGADAPTERALLOCATION_VGPU(v48);
        goto LABEL_54;
      }
    }
    else
    {
      v52 = (DXGADAPTERALLOCATION_VGPU *)operator new(0x40uLL, 0x4B677844u, PagedPool);
      if ( v52 )
      {
        *((_DWORD *)v52 + 1) = 0;
        *((_QWORD *)v52 + 1) = 0LL;
        *((_QWORD *)v52 + 2) = 0LL;
        *((_QWORD *)v52 + 4) = 0LL;
        *((_DWORD *)v52 + 10) = 0;
        *((_QWORD *)v52 + 7) = 0LL;
        *((_QWORD *)v52 + 6) = 0LL;
        goto LABEL_54;
      }
    }
    v52 = 0LL;
LABEL_54:
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
      goto LABEL_57;
  }
  v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v50, v49, v51);
  v27[3] = this;
  v27[4] = a2->NumAllocations;
LABEL_43:
  v28 = -1073741801LL;
LABEL_13:
  v27[5] = v28;
LABEL_65:
  WdLogEvent5_WdWarning(v27);
LABEL_60:
  DXGDEVICE::OpenResourceObject_::_2_::ENSURE_LOCK_RELEASE::_ENSURE_LOCK_RELEASE((DXGAUTOPUSHLOCK **)&v141);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v140);
  return (unsigned int)v28;
}
