/*
 * XREFs of ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x1C008725C
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6@Z @ 0x1C00C44B0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000153C (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0005D94 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C0006D0C (-CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C000706C (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z @ 0x1C000D9CC (-ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E120 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z @ 0x1C00145BC (-Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z.c)
 *     ??_GDXGRESOURCE@@QEAAPEAXI@Z @ 0x1C002021C (--_GDXGRESOURCE@@QEAAPEAXI@Z.c)
 *     ??0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ @ 0x1C0025700 (--0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ.c)
 *     _DXGDEVICE::OpenResourceObject_::_2_::ENSURE_LOCK_RELEASE::_ENSURE_LOCK_RELEASE @ 0x1C0087008 (_DXGDEVICE--OpenResourceObject_--_2_--ENSURE_LOCK_RELEASE--_ENSURE_LOCK_RELEASE.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0087220 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??0DXGRESOURCE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C009F018 (--0DXGRESOURCE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00AF918 (--_V@YAXPEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00CAD84 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00CADD0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00CEBC4 (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z @ 0x1C00FEAB0 (-CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z.c)
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
        struct DXGAUTOMUTEX *a9,
        struct DXGAUTOPUSHLOCK *a10)
{
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  D3DKMT_HANDLE hResource; // ebx
  __int64 v20; // rdi
  unsigned int v21; // ecx
  __int64 v22; // r8
  int v23; // edx
  struct DXGRESOURCE *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  DXGDEVICE **v29; // rbx
  _QWORD *v30; // rax
  __int64 v31; // rbx
  _QWORD *v32; // rax
  DXGDEVICE *v33; // rcx
  DXGDEVICE *v34; // rax
  DXGDEVICE *v35; // rcx
  struct DXGAUTOPUSHLOCK *v36; // rdi
  DXGPUSHLOCK *v37; // rcx
  __int64 v38; // rcx
  DXGDEVICE *v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rdi
  unsigned int v42; // esi
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  unsigned __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  void *v50; // r12
  DXGDEVICE *v51; // rax
  char *v52; // rcx
  UINT v53; // edi
  DXGADAPTERALLOCATION_VGPU *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  DXGADAPTERALLOCATION_VGPU *v58; // rax
  __int64 *v59; // rcx
  __int64 v60; // rax
  __int64 **v61; // rdx
  D3DKMT_CREATEALLOCATIONFLAGS Flags; // eax
  int v64; // r12d
  DXGRESOURCE *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  DXGRESOURCE *v70; // rsi
  DXGRESOURCE *v71; // rax
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rax
  __int64 v78; // rcx
  struct _EPROCESS *v79; // rdx
  __int64 NumAllocations; // r8
  __int64 v81; // r9
  struct _DXGSHAREDALLOCOBJECT *v82; // rbx
  _QWORD *v83; // rax
  __int64 v84; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v86; // r9
  __int64 ObjectA; // rax
  __int64 v88; // rax
  __int64 v89; // rcx
  _QWORD *v90; // rax
  __int64 PrivateDriverDataSize; // rcx
  __int64 v92; // rbx
  __int64 v93; // rdx
  __int64 v94; // r8
  _QWORD *v95; // rbx
  _QWORD *v96; // rcx
  __int64 v97; // rbx
  struct _D3DDDI_ALLOCATIONINFO2 *v98; // r15
  _QWORD *v99; // rax
  signed __int32 v100; // eax
  signed __int32 v101; // ett
  __int64 v102; // rcx
  char v103; // bl
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 *i; // rax
  _QWORD *v107; // rax
  __int64 v108; // rbx
  __int64 v109; // rax
  struct DXGSHAREDRESOURCE *SharedResource; // rax
  __int64 v111; // rdx
  DXGADAPTERALLOCATION_VGPU *v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  DXGADAPTERALLOCATION_VGPU *v116; // rax
  __int64 *v117; // rcx
  __int64 v118; // rax
  __int64 **v119; // rdx
  int v120; // r8d
  unsigned __int64 v121; // rax
  void *v122; // rax
  __int64 v123; // rcx
  _QWORD *v124; // rax
  _QWORD *v125; // rax
  char *v126; // rcx
  _QWORD *v127; // rdi
  _QWORD *v128; // rax
  __int64 v129; // rax
  void *v130; // r15
  __int64 v131; // rax
  char *v132; // rax
  __int64 v133; // rcx
  _QWORD *v134; // rdi
  _QWORD *v135; // rax
  __int64 v136; // rcx
  DXGDEVICE **v137; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v138[16]; // [rsp+28h] [rbp-38h] BYREF
  __int128 v139; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v140[24]; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int64 v141; // [rsp+A0h] [rbp+40h] BYREF
  struct DXGRESOURCE *v142; // [rsp+A8h] [rbp+48h] BYREF
  struct _D3DDDI_ALLOCATIONINFO2 *v143; // [rsp+B0h] [rbp+50h]

  v143 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
    *(_QWORD *)(v18 + 24) = 1883LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v137 = 0LL;
  v139 = 0LL;
  LOBYTE(v141) = *((_BYTE *)DXGPROCESS::GetCurrent() + 275);
  *a8 = 0;
  hResource = a2->hResource;
  if ( !hResource )
  {
    Flags = a2->Flags;
    if ( (*(_BYTE *)&Flags & 1) == 0 )
      goto LABEL_57;
    v64 = 0;
    if ( (*(_WORD *)&Flags & 0x1000) != 0 )
    {
      v65 = (DXGRESOURCE *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x80uLL);
      v70 = v65;
      if ( v65 )
      {
        DXGRESOURCE::DXGRESOURCE(v65, this);
        *((_QWORD *)v70 + 15) = 0LL;
        *((_DWORD *)v70 + 1) |= 4u;
        goto LABEL_70;
      }
    }
    else
    {
      v71 = (DXGRESOURCE *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x78uLL);
      if ( v71 )
      {
        v70 = DXGRESOURCE::DXGRESOURCE(v71, this);
        goto LABEL_70;
      }
    }
    v70 = 0LL;
LABEL_70:
    if ( !v70 )
    {
      v72 = WdLogNewEntry5_WdWarning(v67, v66, v68, v69);
      *(_QWORD *)(v72 + 24) = this;
      *(_QWORD *)(v72 + 32) = -1073741801LL;
      WdLogEvent5_WdWarning(v72);
      v64 = -1073741801;
LABEL_192:
      LODWORD(v31) = v64;
      goto LABEL_58;
    }
    DXGPROCESS::CreateResourceHandleSafe(*((DXGPROCESS **)this + 5), v70);
    if ( !*((_DWORD *)v70 + 4) )
    {
LABEL_73:
      v77 = WdLogNewEntry5_WdWarning(v74, v73, v75, v76);
      *(_QWORD *)(v77 + 24) = this;
      *(_QWORD *)(v77 + 32) = -1073741801LL;
      WdLogEvent5_WdWarning(v77);
      v64 = -1073741801;
      goto LABEL_190;
    }
    *((_QWORD *)v70 + 6) = a2->hPrivateRuntimeResourceHandle;
    if ( (*(_DWORD *)&a2->Flags & 2) == 0 && !a4 )
      goto LABEL_191;
    *((_DWORD *)v70 + 1) |= 1u;
    if ( a4 )
    {
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v138);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v138);
      if ( (*(_DWORD *)&a2->Flags & 0x40) != 0 )
      {
        v82 = a6;
        if ( !a6 )
        {
          v83 = (_QWORD *)WdLogNewEntry5_WdWarning(v78, v79, NumAllocations, v81);
          v83[3] = this;
          v83[4] = -1073741811LL;
LABEL_85:
          WdLogEvent5_WdWarning(v83);
          v64 = -1073741811;
LABEL_86:
          v88 = *((_QWORD *)v70 + 7);
          if ( !v88 )
            goto LABEL_118;
          *(_DWORD *)(v88 + 12) |= 0x100u;
          v89 = *((_QWORD *)v70 + 7);
          if ( *(_DWORD *)(v89 + 124) == a2->NumAllocations )
          {
            if ( *(_DWORD *)(v89 + 120) == a2->PrivateDriverDataSize || (v141 & 4) != 0 )
            {
              v92 = *((_QWORD *)v70 + 7);
              if ( *(_DWORD *)(v92 + 64) != (unsigned int)PsGetCurrentProcessSessionId()
                && (*(_DWORD *)(v92 + 12) & 8) == 0 )
              {
                v95 = (_QWORD *)WdLogNewEntry5_WdWarning(v78, v93, v94, v81);
                v95[3] = this;
                v95[4] = *((_QWORD *)v70 + 7);
                v95[5] = *(unsigned int *)(*((_QWORD *)v70 + 7) + 64LL);
                v95[6] = (unsigned int)PsGetCurrentProcessSessionId();
                v96 = v95;
                v95[7] = -1073741811LL;
LABEL_117:
                WdLogEvent5_WdWarning(v96);
                v64 = -1073741811;
                goto LABEL_118;
              }
              if ( *(_QWORD *)(v92 + 72) == *((_QWORD *)this + 2) )
              {
                if ( *(_QWORD *)(v92 + 88) == *((_QWORD *)this + 225) )
                {
                  if ( (*(_DWORD *)(v92 + 12) & 1) == 0
                    || (unsigned int)PsIsProtectedProcess(*(_QWORD *)(*((_QWORD *)this + 5) + 48LL), v93, v94, v81)
                    && !(unsigned int)PsIsProtectedProcessLight(*(_QWORD *)(*((_QWORD *)this + 5) + 48LL)) )
                  {
                    v97 = 0LL;
                    NumAllocations = a2->NumAllocations;
                    v79 = *(struct _EPROCESS **)(*((_QWORD *)v70 + 7) + 128LL);
                    if ( (_DWORD)NumAllocations )
                    {
                      v98 = v143;
                      while ( 1 )
                      {
                        v78 = 96 * v97;
                        if ( *((_DWORD *)v79 - 2) != v143[v97].PrivateDriverDataSize )
                          break;
                        v79 = *(struct _EPROCESS **)v79;
                        v97 = (unsigned int)(v97 + 1);
                        if ( (unsigned int)v97 >= (unsigned int)NumAllocations )
                          goto LABEL_110;
                      }
                      v99 = (_QWORD *)WdLogNewEntry5_WdWarning(v78, v79, NumAllocations, v81);
                      v99[3] = this;
                      v99[4] = *((_QWORD *)v70 + 7);
                      v99[5] = (unsigned int)v97;
                      v99[6] = v98[v97].PrivateDriverDataSize;
                      v99[7] = -1073741811LL;
                      WdLogEvent5_WdWarning(v99);
                      v64 = -1073741811;
                    }
LABEL_110:
                    if ( v64 < 0 )
                      goto LABEL_118;
                    v79 = (struct _EPROCESS *)*((_QWORD *)v70 + 7);
                    _m_prefetchw((char *)v79 + 60);
                    v100 = *((_DWORD *)v79 + 15);
                    while ( v100 )
                    {
                      v78 = (unsigned int)(v100 + 1);
                      v101 = v100;
                      v100 = _InterlockedCompareExchange((volatile signed __int32 *)v79 + 15, v78, v100);
                      if ( v101 == v100 )
                      {
                        v78 = *(_QWORD *)(*((_QWORD *)v70 + 7) + 144LL);
                        if ( v78 )
                        {
                          if ( *(DXGDEVICE **)(v78 + 72) == this )
                            ++*(_DWORD *)(v78 + 64);
                          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v138, (__int64)v79, NumAllocations, v81);
                          v103 = *(_BYTE *)(*((_QWORD *)this + 5) + 274LL);
                          DXGAUTOMUTEX::DXGAUTOMUTEX(
                            (DXGAUTOMUTEX *)v140,
                            (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)v70 + 7) + 144LL) + 8LL),
                            v104,
                            v105);
                          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v140);
                          v79 = a5;
                          if ( !a5 )
                            v79 = *(struct _EPROCESS **)(*((_QWORD *)this + 5) + 48LL);
                          v78 = *(_QWORD *)(*((_QWORD *)v70 + 7) + 144LL) + 48LL;
                          for ( i = *(__int64 **)v78; i != (__int64 *)v78; i = (__int64 *)*i )
                          {
                            if ( v103 && *((_BYTE *)i + 16) || !*((_BYTE *)i + 16) && v79 == (struct _EPROCESS *)i[3] )
                              goto LABEL_133;
                          }
                          v107 = (_QWORD *)WdLogNewEntry5_WdWarning(v78, v79, NumAllocations, v81);
                          v107[3] = this;
                          v107[4] = *((_QWORD *)v70 + 7);
                          v107[5] = -1073741811LL;
                          WdLogEvent5_WdWarning(v107);
                          v64 = -1073741811;
LABEL_133:
                          if ( v140[8] )
                            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v140, (__int64)v79, NumAllocations, v81);
                        }
                        if ( v64 >= 0 )
                        {
                          v78 = *((_QWORD *)v70 + 7);
                          v108 = *(_QWORD *)(v78 + 128);
                          if ( (*(_DWORD *)(v108 - 44) & 2) != 0 )
                          {
                            if ( *(_DWORD *)(v78 + 124) != 1 )
                            {
                              v78 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
                              if ( *(_DWORD *)(v78 + 248) <= 1u || !DXGADAPTER::IsDxgmms2((DXGADAPTER *)v78) )
                              {
                                v109 = WdLogNewEntry5_WdAssertion(v78, v79, NumAllocations, v81);
                                *(_QWORD *)(v109 + 24) = 2420LL;
                                WdLogEvent5_WdAssertion(v109);
                              }
                            }
                            *((_QWORD *)this + ((*(_DWORD *)(v108 - 44) >> 6) & 0xF) + 58) = v70;
                          }
                        }
LABEL_118:
                        if ( v138[8] )
                          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v138, (__int64)v79, NumAllocations, v81);
LABEL_189:
                        if ( v64 < 0 )
                        {
LABEL_190:
                          ADAPTER_RENDER::FreeResourceHandleAndWaitForZeroReferences((ADAPTER_RENDER *)v78, v70, 0LL);
                          DXGRESOURCE::`scalar deleting destructor'(v70);
                          goto LABEL_192;
                        }
LABEL_191:
                        *a8 = 1;
                        DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v142, v70);
                        DXGRESOURCEREFERENCE::MoveAssign(a7, &v142);
                        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v142);
                        goto LABEL_192;
                      }
                    }
                    *((_QWORD *)v70 + 7) = 0LL;
                  }
                  v90 = (_QWORD *)WdLogNewEntry5_WdWarning(v78, v79, NumAllocations, v81);
                  v90[3] = this;
                  v102 = *((_QWORD *)v70 + 7);
                  v90[5] = -1073741811LL;
                  v90[4] = v102;
                  goto LABEL_116;
                }
                v90 = (_QWORD *)WdLogNewEntry5_WdWarning(v78, v93, v94, v81);
                v90[3] = this;
                v90[4] = *((_QWORD *)v70 + 7);
                v90[5] = *(_QWORD *)(*((_QWORD *)v70 + 7) + 88LL);
LABEL_90:
                v90[6] = -1073741811LL;
LABEL_116:
                v96 = v90;
                goto LABEL_117;
              }
              v90 = (_QWORD *)WdLogNewEntry5_WdWarning(v78, v93, v94, v81);
              v90[3] = this;
              v90[4] = *((_QWORD *)v70 + 7);
              PrivateDriverDataSize = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v70 + 7) + 72LL) + 16LL);
            }
            else
            {
              v90 = (_QWORD *)WdLogNewEntry5_WdWarning(v89, v79, NumAllocations, v81);
              v90[3] = this;
              v90[4] = *((_QWORD *)v70 + 7);
              PrivateDriverDataSize = a2->PrivateDriverDataSize;
            }
          }
          else
          {
            v90 = (_QWORD *)WdLogNewEntry5_WdWarning(v89, v79, NumAllocations, v81);
            v90[3] = this;
            v90[4] = *((_QWORD *)v70 + 7);
            PrivateDriverDataSize = a2->NumAllocations;
          }
          v90[5] = PrivateDriverDataSize;
          goto LABEL_90;
        }
        v84 = *((_QWORD *)a6 + 2);
        *((_QWORD *)v70 + 7) = v84;
        if ( v84 )
          goto LABEL_86;
        v83 = (_QWORD *)WdLogNewEntry5_WdWarning(v78, v79, NumAllocations, v81);
        v83[3] = this;
        v83[4] = v82;
      }
      else
      {
        Global = DXGGLOBAL::GetGlobal();
        ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, a2->hGlobalShare, 2LL, v86);
        *((_QWORD *)v70 + 7) = ObjectA;
        if ( ObjectA )
          goto LABEL_86;
        v83 = (_QWORD *)WdLogNewEntry5_WdWarning(v78, v79, NumAllocations, v81);
        v83[3] = this;
        v83[4] = a2->hGlobalShare;
      }
      v83[5] = -1073741811LL;
      goto LABEL_85;
    }
    SharedResource = DXGSHAREDRESOURCE::CreateSharedResource(
                       *((struct ADAPTER_RENDER **)this + 2),
                       *((struct DXGADAPTER **)this + 225),
                       (*(_DWORD *)&a2->Flags & 0x800) != 0);
    v76 = 0LL;
    *((_QWORD *)v70 + 7) = SharedResource;
    if ( !SharedResource )
      goto LABEL_73;
    v111 = a2->NumAllocations;
    LODWORD(v142) = v111;
    LODWORD(v141) = 0;
    if ( (_DWORD)v111 )
    {
      do
      {
        if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 186LL) )
        {
          v112 = (DXGADAPTERALLOCATION_VGPU *)operator new(0x70uLL, 0x4B677844u, PagedPool);
          v76 = 0LL;
          if ( v112 )
          {
            v116 = DXGADAPTERALLOCATION_VGPU::DXGADAPTERALLOCATION_VGPU(v112);
            v76 = 0LL;
            goto LABEL_150;
          }
        }
        else
        {
          v116 = (DXGADAPTERALLOCATION_VGPU *)operator new(0x40uLL, 0x4B677844u, PagedPool);
          v76 = 0LL;
          if ( v116 )
          {
            *((_DWORD *)v116 + 1) = 0;
            *((_QWORD *)v116 + 1) = 0LL;
            *((_QWORD *)v116 + 2) = 0LL;
            *((_QWORD *)v116 + 4) = 0LL;
            *((_DWORD *)v116 + 10) = 0;
            *((_QWORD *)v116 + 7) = 0LL;
            *((_QWORD *)v116 + 6) = 0LL;
            goto LABEL_150;
          }
        }
        v116 = 0LL;
LABEL_150:
        if ( !v116 )
        {
          v128 = (_QWORD *)WdLogNewEntry5_WdWarning(v114, v113, v115, 0LL);
          v128[3] = this;
          v128[4] = a2->NumAllocations;
          v128[5] = -1073741801LL;
          WdLogEvent5_WdWarning(v128);
          v111 = (unsigned int)v142;
          v64 = -1073741801;
          goto LABEL_154;
        }
        v117 = (__int64 *)((char *)v116 + 48);
        v118 = *((_QWORD *)v70 + 7) + 128LL;
        v119 = *(__int64 ***)(*((_QWORD *)v70 + 7) + 136LL);
        if ( *v119 != (__int64 *)v118 )
          __fastfail(3u);
        v120 = v141;
        v117[1] = (__int64)v119;
        v75 = (unsigned int)(v120 + 1);
        *v117 = v118;
        *v119 = v117;
        v111 = (unsigned int)v142;
        *(_QWORD *)(v118 + 8) = v117;
        LODWORD(v141) = v75;
      }
      while ( (unsigned int)v75 < (unsigned int)v111 );
    }
    *(_DWORD *)(*((_QWORD *)v70 + 7) + 124LL) = v111;
    *((_DWORD *)v70 + 1) |= 2u;
LABEL_154:
    *(_DWORD *)(*((_QWORD *)v70 + 7) + 12LL) ^= (*(_DWORD *)(*((_QWORD *)v70 + 7) + 12LL) ^ (*(_DWORD *)&a2->Flags >> 3)) & 8;
    if ( v64 >= 0 && (unsigned int)v111 > 1 )
    {
      v121 = 8LL * (unsigned int)v111;
      v141 = (unsigned int)v111;
      if ( !is_mul_ok((unsigned int)v111, 8uLL) )
        v121 = -1LL;
      v122 = operator new(v121, 0x4B677844u, PagedPool);
      v123 = *((_QWORD *)v70 + 7);
      *(_QWORD *)(v123 + 160) = v122;
      if ( !*(_QWORD *)(*((_QWORD *)v70 + 7) + 160LL) )
      {
        v124 = (_QWORD *)WdLogNewEntry5_WdWarning(v123, v111, v75, v76);
        v124[4] = v141;
        v124[3] = this;
        v124[5] = -1073741801LL;
        WdLogEvent5_WdWarning(v124);
        v64 = -1073741801;
      }
    }
    if ( (*(_DWORD *)&a2->Flags & 4) == 0
      && (unsigned int)PsIsProtectedProcess(*(_QWORD *)(*((_QWORD *)this + 5) + 48LL), v111, v75, v76)
      && !(unsigned int)PsIsProtectedProcessLight(*(_QWORD *)(*((_QWORD *)this + 5) + 48LL)) )
    {
      *(_DWORD *)(*((_QWORD *)v70 + 7) + 12LL) |= 1u;
    }
    if ( (*(_DWORD *)&a2->Flags & 0x10) == 0 )
    {
LABEL_187:
      if ( v64 >= 0 )
        goto LABEL_191;
LABEL_188:
      DXGSHAREDRESOURCE::ReleaseReference(*((DXGSHAREDRESOURCE **)v70 + 7), 0LL, 0);
      *((_QWORD *)v70 + 7) = 0LL;
      goto LABEL_189;
    }
    if ( v64 < 0 )
      goto LABEL_188;
    v125 = operator new(0x50uLL, 0x4B677844u, (enum _POOL_TYPE)512);
    v127 = v125;
    if ( v125 )
    {
      v125[1] = 0LL;
      v126 = (char *)(v125 + 6);
      v125[2] = 0LL;
      *((_DWORD *)v125 + 8) = 0;
      v125[3] = 0LL;
      *((_DWORD *)v125 + 9) = 36;
      *((_DWORD *)v125 + 10) = 32;
      *((_DWORD *)v125 + 16) = 1;
      v125[9] = this;
      v125[7] = v125 + 6;
      v125[6] = v125 + 6;
    }
    else
    {
      v127 = 0LL;
    }
    if ( !v127 )
    {
      v129 = WdLogNewEntry5_WdLowResource(v126);
      *(_QWORD *)(v129 + 24) = this;
      *(_QWORD *)(v129 + 32) = -1073741801LL;
LABEL_173:
      WdLogEvent5_WdLowResource(v129);
      v64 = -1073741801;
      goto LABEL_188;
    }
    v130 = 0LL;
    *(_QWORD *)(*((_QWORD *)v70 + 7) + 144LL) = v127;
    v131 = *((_QWORD *)this + 5);
    if ( *(_BYTE *)(v131 + 274) )
    {
      v132 = (char *)operator new(0x28uLL, 0x4B677844u, PagedPool);
      if ( v132 )
      {
        v132[24] = 1;
        *((_QWORD *)v132 + 4) = 0LL;
LABEL_180:
        if ( !v132 )
        {
          if ( v130 )
            ObfDereferenceObject(v130);
          v129 = WdLogNewEntry5_WdLowResource(v133);
          *(_QWORD *)(v129 + 24) = -1073741801LL;
          goto LABEL_173;
        }
        v134 = v127 + 6;
        v135 = v132 + 8;
        v136 = *v134;
        if ( *(_QWORD **)(*v134 + 8LL) != v134 )
          __fastfail(3u);
        *v135 = v136;
        v135[1] = v134;
        *(_QWORD *)(v136 + 8) = v135;
        *v134 = v135;
        goto LABEL_187;
      }
    }
    else
    {
      v130 = *(void **)(v131 + 48);
      ObfReferenceObject(v130);
      v132 = (char *)operator new(0x28uLL, 0x4B677844u, PagedPool);
      if ( v132 )
      {
        v132[24] = 0;
        *((_QWORD *)v132 + 4) = v130;
        goto LABEL_180;
      }
    }
    v132 = 0LL;
    goto LABEL_180;
  }
  v20 = *((_QWORD *)this + 5);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v20 + 168));
  v21 = (hResource >> 6) & 0xFFFFFF;
  if ( v21 < *(_DWORD *)(v20 + 208)
    && (v22 = *(_QWORD *)(v20 + 192),
        v23 = *(_DWORD *)(v22 + 16LL * v21 + 8),
        ((hResource >> 26) & 0x30) == (*(_BYTE *)(v22 + 16LL * v21 + 8) & 0x30))
    && (v23 & 0x1000) == 0
    && (v23 & 0xF) != 0
    && (*(_BYTE *)(v22 + 16LL * v21 + 8) & 0xF) == 4 )
  {
    v24 = *(struct DXGRESOURCE **)(v22 + 16LL * v21);
  }
  else
  {
    v24 = 0LL;
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v141, v24);
  ExReleasePushLockSharedEx(v20 + 168, 0LL);
  KeLeaveCriticalRegion();
  DXGRESOURCEREFERENCE::MoveAssign((struct DXGRESOURCE **)&v137, (struct DXGRESOURCE **)&v141);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v141);
  v29 = v137;
  if ( !v137 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
    v31 = -1073741816LL;
    v30[3] = this;
    v30[4] = a2->hResource;
    goto LABEL_62;
  }
  if ( v137[1] != this )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
    v32[3] = this;
    v32[4] = a2->hResource;
    v33 = v29[1];
LABEL_24:
    v32[5] = v33;
LABEL_35:
    v32[6] = -1073741811LL;
    goto LABEL_36;
  }
  if ( (*(_DWORD *)&a2->Flags & 0x800) != 0 )
  {
    v34 = v137[7];
    if ( !v34 || (*((_DWORD *)v34 + 3) & 0x20) == 0 )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
      v32[3] = a2->hResource;
      v32[4] = -1073741811LL;
      goto LABEL_36;
    }
  }
  if ( (*((_DWORD *)v137 + 1) & 1) == 0 )
    goto LABEL_56;
  v35 = v137[7];
  if ( !v35 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v25, v27, v28);
    v32[3] = this;
    v32[4] = v29;
LABEL_31:
    v32[5] = -1073741811LL;
    goto LABEL_36;
  }
  if ( *((_DWORD *)v35 + 30) != a2->PrivateDriverDataSize )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v25, v27, v28);
    v32[3] = this;
    v32[4] = v29[7];
    v33 = (DXGDEVICE *)a2->PrivateDriverDataSize;
    goto LABEL_24;
  }
  v36 = a10;
  v37 = (DXGDEVICE *)((char *)v35 + 32);
  *((_QWORD *)a10 + 1) = v37;
  DXGPUSHLOCK::AcquireExclusive(v37);
  *((_DWORD *)v36 + 4) = 2;
  v39 = v29[7];
  v40 = a2->NumAllocations;
  *(_QWORD *)&v139 = v36;
  v41 = 0LL;
  if ( (_DWORD)v40 )
  {
    v28 = *(unsigned int *)(*((_QWORD *)v39 + 16) - 8LL);
    while ( 1 )
    {
      v38 = 96 * v41;
      if ( (_DWORD)v28 != a3[v41].PrivateDriverDataSize )
        break;
      v41 = (unsigned int)(v41 + 1);
      if ( (unsigned int)v41 >= (unsigned int)v40 )
        goto LABEL_29;
    }
    v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v39, v40, v28);
    v32[3] = this;
    v32[4] = v29[7];
    v32[5] = (unsigned int)v41;
    v32[6] = a3[v41].PrivateDriverDataSize;
    v32[7] = -1073741811LL;
LABEL_36:
    WdLogEvent5_WdWarning(v32);
    LODWORD(v31) = -1073741811;
    goto LABEL_58;
  }
LABEL_29:
  if ( (*((_DWORD *)v39 + 3) & 0x100) != 0 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v39, v40, v28);
    v32[3] = this;
    v32[4] = v29[7];
    goto LABEL_31;
  }
  v42 = v40 + *((_DWORD *)v39 + 31);
  if ( v42 > 0x100 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v39, v40, v28);
    v32[3] = this;
    v32[4] = v29[7];
    v32[5] = 256LL;
    goto LABEL_35;
  }
  *(_DWORD *)&a2->Flags |= 2u;
  if ( v42 > 1 )
  {
    v46 = 8LL * v42;
    if ( !is_mul_ok(v42, 8uLL) )
      v46 = -1LL;
    v50 = operator new(v46, 0x4B677844u, PagedPool);
    if ( !v50 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v48, v47, v49, v28);
      v30[3] = this;
      v30[4] = v42;
      goto LABEL_61;
    }
    v51 = v29[7];
    v52 = (char *)*((_QWORD *)v51 + 20);
    if ( v52 != (char *)v51 + 152 )
      operator delete[](v52);
    *((_QWORD *)v29[7] + 20) = v50;
  }
  v53 = 0;
  if ( !a2->NumAllocations )
  {
LABEL_55:
    *((_DWORD *)v29[7] + 31) = v42;
LABEL_56:
    DXGAUTOMUTEX::Initialize(a9, (struct DXGFASTMUTEX *const)(v29 + 10), 0LL, v28);
    DXGAUTOMUTEX::Acquire(a9);
LABEL_57:
    DXGRESOURCEREFERENCE::MoveAssign(a7, (struct DXGRESOURCE **)&v137);
    v139 = 0uLL;
    LODWORD(v31) = 0;
    goto LABEL_58;
  }
  while ( 1 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 186LL) )
    {
      v54 = (DXGADAPTERALLOCATION_VGPU *)operator new(0x70uLL, 0x4B677844u, PagedPool);
      if ( v54 )
      {
        v58 = DXGADAPTERALLOCATION_VGPU::DXGADAPTERALLOCATION_VGPU(v54);
        goto LABEL_52;
      }
    }
    else
    {
      v58 = (DXGADAPTERALLOCATION_VGPU *)operator new(0x40uLL, 0x4B677844u, PagedPool);
      if ( v58 )
      {
        *((_DWORD *)v58 + 1) = 0;
        *((_QWORD *)v58 + 1) = 0LL;
        *((_QWORD *)v58 + 2) = 0LL;
        *((_QWORD *)v58 + 4) = 0LL;
        *((_DWORD *)v58 + 10) = 0;
        *((_QWORD *)v58 + 7) = 0LL;
        *((_QWORD *)v58 + 6) = 0LL;
        goto LABEL_52;
      }
    }
    v58 = 0LL;
LABEL_52:
    if ( !v58 )
      break;
    v59 = (__int64 *)((char *)v58 + 48);
    v60 = (__int64)v29[7] + 128;
    v61 = (__int64 **)*((_QWORD *)v29[7] + 17);
    if ( *v61 != (__int64 *)v60 )
      __fastfail(3u);
    *v59 = v60;
    ++v53;
    v59[1] = (__int64)v61;
    *v61 = v59;
    *(_QWORD *)(v60 + 8) = v59;
    if ( v53 >= a2->NumAllocations )
      goto LABEL_55;
  }
  v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v56, v55, v57, v28);
  v30[3] = this;
  v30[4] = a2->NumAllocations;
LABEL_61:
  v31 = -1073741801LL;
LABEL_62:
  v30[5] = v31;
  WdLogEvent5_WdWarning(v30);
LABEL_58:
  DXGDEVICE::OpenResourceObject_::_2_::ENSURE_LOCK_RELEASE::_ENSURE_LOCK_RELEASE(
    (DXGAUTOPUSHLOCK **)&v139,
    v43,
    v44,
    v45);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v137);
  return (unsigned int)v31;
}
