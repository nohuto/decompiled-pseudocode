/*
 * XREFs of ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00C755C
 * Callers:
 *     ?DrainAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C00BFD10 (-DrainAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6@Z @ 0x1C00C44B0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00C74C0 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00C7DC0 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 * Callees:
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C0005180 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0005890 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0005B1C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0005D94 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C000DD94 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000E010 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGALLOCATION@@QEAA@XZ @ 0x1C009D83C (--1DXGALLOCATION@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z @ 0x1C00C196C (-RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00CA330 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z @ 0x1C00CD764 (-DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z @ 0x1C00CE7A8 (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00CEC74 (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C00FEC20 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x1C00FF010 (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C01888D0 (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 *     ?Destroy@DXGOVERLAY@@QEAAXXZ @ 0x1C0199D9C (-Destroy@DXGOVERLAY@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::DestroyAllocations(
        DXGDEVICE *this,
        struct DXGRESOURCE *a2,
        int a3,
        struct DXGALLOCATION *a4,
        PERESOURCE **a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6)
{
  __int64 v8; // rax
  struct DXGALLOCATION *v9; // r13
  struct DXGRESOURCE *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rcx
  HANDLE *v17; // r15
  __int64 v18; // rax
  struct DXGALLOCATION *v19; // rdi
  COREDEVICEACCESS *v20; // r12
  __int64 v21; // rax
  __int64 v22; // r8
  struct DXGALLOCATION *v23; // r9
  __int64 v24; // rdx
  unsigned int v25; // ecx
  __int64 v26; // rcx
  __int64 v27; // rax
  ADAPTER_RENDER *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  DXGOVERLAY *i; // rbx
  __int64 v33; // rdx
  __int64 v34; // r8
  unsigned int v35; // ebx
  unsigned int v36; // ebx
  struct DXGALLOCATION *v37; // r9
  unsigned int v38; // edx
  struct _VIDMM_MULTI_ALLOC *v39; // r8
  __int64 v40; // rcx
  __int64 v41; // r15
  __int64 v42; // rax
  __int64 v43; // r12
  __int64 v44; // r13
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v46; // rbx
  __int64 v47; // rcx
  int v48; // r15d
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // r12
  __int64 v54; // r15
  __int64 v55; // r13
  struct DXGPROCESS *v56; // rax
  struct DXGPROCESS *v57; // rbx
  void *v58; // rdx
  ADAPTER_RENDER *v59; // rcx
  COREDEVICEACCESS *v60; // rcx
  char v61; // r12
  __int64 v62; // rax
  __int64 v63; // rax
  bool v64; // zf
  __int64 v65; // rcx
  __int64 v66; // rbx
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  volatile signed __int32 *v71; // rcx
  struct DXGALLOCATION *v72; // r15
  struct DXGRESOURCE *v73; // rdi
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // r13
  __int64 v78; // rdi
  __int64 v79; // rbx
  struct _KTHREAD **v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  void *v85; // rbx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rax
  struct DXGALLOCATION *v91; // rbx
  COREDEVICEACCESS *v93; // [rsp+38h] [rbp-C8h]
  COREDEVICEACCESS *v94; // [rsp+38h] [rbp-C8h]
  const HANDLE *v95; // [rsp+40h] [rbp-C0h]
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  struct DXGRESOURCE *v97; // [rsp+50h] [rbp-B0h]
  _DXGKARG_CLOSEALLOCATION v98; // [rsp+58h] [rbp-A8h] BYREF
  _DXGKARG_DESTROYALLOCATION v99; // [rsp+68h] [rbp-98h] BYREF
  struct DXGALLOCATION *v100; // [rsp+88h] [rbp-78h]
  _BYTE v101[16]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v102; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v103[24]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v104[128]; // [rsp+C0h] [rbp-40h] BYREF

  v8 = *((_QWORD *)this + 2);
  v9 = a4;
  v100 = a4;
  v10 = a2;
  v97 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v8 + 16)) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    *(_QWORD *)(v15 + 24) = 1160LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13));
  v16 = (unsigned __int64)v10 & -(__int64)(a3 != 0);
  if ( !v16 || (v17 = *(HANDLE **)(((unsigned __int64)v10 & -(__int64)(a3 != 0)) + 0x40), (v95 = v17) == 0LL) )
  {
    v17 = (HANDLE *)v104;
    v95 = (const HANDLE *)v104;
  }
  v98.NumAllocations = 0;
  if ( v10 && a3 )
  {
    v18 = WdLogNewEntry5_WdTrace(v16, v11, v13, v14);
    *(_QWORD *)(v18 + 24) = v10;
    v16 = *((_QWORD *)v10 + 1);
    v11 = *(_QWORD *)(v16 + 40);
    *(_QWORD *)(v18 + 32) = v11;
  }
  v19 = v9;
  if ( v9 )
  {
    do
    {
      v20 = (COREDEVICEACCESS *)*((_QWORD *)v19 + 8);
      v93 = v20;
      v21 = WdLogNewEntry5_WdTrace(v16, v11, v13, v14);
      *(_QWORD *)(v21 + 24) = v19;
      v24 = *(_QWORD *)(*((_QWORD *)v19 + 1) + 40LL);
      *(_QWORD *)(v21 + 32) = v24;
      v25 = *(_DWORD *)(*((_QWORD *)v19 + 6) + 4LL);
      if ( (v25 & 1) != 0 )
      {
        v26 = (v25 >> 6) & 0xF;
        if ( (unsigned int)v26 >= *((_DWORD *)this + 452) )
        {
          v27 = WdLogNewEntry5_WdAssertion(v26, v24, v22, v23);
          *(_QWORD *)(v27 + 24) = 1226LL;
          WdLogEvent5_WdAssertion(v27);
        }
        DXGDEVICE::RemovePrimaryAllocation((DXGADAPTER **)this, v19, v22, (__int64)v23);
      }
      v28 = (ADAPTER_RENDER *)*(unsigned int *)(*((_QWORD *)v19 + 6) + 4LL);
      if ( ((unsigned __int8)v28 & 8) != 0 )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX(
          (DXGAUTOMUTEX *)v101,
          (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2) + 520LL),
          v22,
          (__int64)v23);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v101);
        for ( i = (DXGOVERLAY *)*((_QWORD *)this + 45); i != (DXGDEVICE *)((char *)this + 360) && i; i = *(DXGOVERLAY **)i )
        {
          if ( *((struct DXGALLOCATION **)i + 6) == v19 )
            DXGOVERLAY::Destroy(i);
        }
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v101, v29, v30, v31);
        if ( v101[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v101, v33, v34, (__int64)v23);
      }
      v35 = *(_DWORD *)(*((_QWORD *)v19 + 6) + 4LL);
      if ( (v35 & 0x2000) != 0 && *((_QWORD *)v19 + 3) )
      {
        v36 = (v35 >> 6) & 0xF;
        DXGDEVICE::RemoveDirectFlipAllocationFromList(this, v36, v19);
        DXGDEVICE::TestAndSetDisplayedPrimary(this, v36, v19, v37);
      }
      v38 = *(_DWORD *)(*((_QWORD *)v19 + 6) + 4LL);
      if ( (v38 & 2) != 0 )
        DXGDEVICE::TestAndSetDisplayedPrimary(this, (v38 >> 6) & 0xF, v19, v23);
      v39 = (struct _VIDMM_MULTI_ALLOC *)*((_QWORD *)v19 + 3);
      if ( v39 && (*((_DWORD *)v19 + 18) & 0x800) != 0 )
      {
        VIDMM_EXPORT::VidMmUnpinAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 432LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 440LL),
          v39);
        *((_DWORD *)v19 + 18) &= ~0x800u;
      }
      ADAPTER_RENDER::FreeAllocationHandleAndWaitForZeroReferences(v28, v19, (struct COREDEVICEACCESS *)a5);
      v41 = *((_QWORD *)v19 + 3);
      if ( v41 )
      {
        v42 = *((_QWORD *)this + 2);
        Object = 0LL;
        v43 = *(_QWORD *)(v42 + 440);
        v44 = *(_QWORD *)(v42 + 432);
        Current = DXGPROCESS::GetCurrent(v40);
        v46 = Current;
        if ( Current )
        {
          if ( *((struct _KTHREAD **)Current + 15) == KeGetCurrentThread() )
            v46 = 0LL;
          else
            DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 112));
        }
        v48 = (*(__int64 (__fastcall **)(__int64, __int64, PVOID *, _QWORD))(*(_QWORD *)(v44 + 8) + 168LL))(
                v43,
                v41,
                &Object,
                a6.Value);
        if ( v46 )
        {
          *((_QWORD *)v46 + 15) = 0LL;
          ExReleasePushLockExclusiveEx((char *)v46 + 112, 0LL);
          KeLeaveCriticalRegion();
        }
        if ( v48 < 0 )
        {
          if ( v48 != -1071775486 )
          {
            v49 = WdLogNewEntry5_WdAssertion(v47, v11, v13, v14);
            *(_QWORD *)(v49 + 24) = 1302LL;
            WdLogEvent5_WdAssertion(v49);
          }
          v50 = WdLogNewEntry5_WdTrace(v47, v11, v13, v14);
          *(_QWORD *)(v50 + 24) = *((_QWORD *)this + 74);
          v51 = *((_QWORD *)v19 + 3);
          *(_QWORD *)(v50 + 32) = v51;
          if ( a5 && !DXGADAPTER::IsCoreResourceExclusiveOwner(a5[3]) )
          {
            COREDEVICEACCESS::Release((COREDEVICEACCESS *)a5);
            if ( Object )
            {
              if ( KeWaitForSingleObject(Object, Executive, 0, 1u, 0LL) == 257 )
              {
                DXGDEVICE::FlushScheduler(this, 3LL);
                KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
              }
            }
            else
            {
              (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                              + 432LL)
                                                                                  + 8LL)
                                                                      + 608LL))(
                *(_QWORD *)(*((_QWORD *)this + 2) + 440LL),
                *((_QWORD *)v19 + 3),
                0LL,
                4LL);
            }
            COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a5);
          }
          v52 = *((_QWORD *)this + 2);
          v53 = *((_QWORD *)v19 + 3);
          v54 = *(_QWORD *)(v52 + 440);
          v55 = *(_QWORD *)(v52 + 432);
          v56 = DXGPROCESS::GetCurrent(v51);
          v57 = v56;
          if ( v56 )
          {
            if ( *((struct _KTHREAD **)v56 + 15) == KeGetCurrentThread() )
              v57 = 0LL;
            else
              DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v56 + 112));
          }
          (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)(v55 + 8) + 160LL))(
            v54,
            v53,
            0LL,
            a6.Value);
          if ( v57 )
          {
            *((_QWORD *)v57 + 15) = 0LL;
            ExReleasePushLockExclusiveEx((char *)v57 + 112, 0LL);
            KeLeaveCriticalRegion();
          }
        }
        *((_QWORD *)v19 + 3) = 0LL;
        v20 = v93;
      }
      v16 = *((_QWORD *)v19 + 4);
      v17 = (HANDLE *)v95;
      if ( v16 )
      {
        v95[v98.NumAllocations++] = (const HANDLE)v16;
        *((_QWORD *)v19 + 4) = 0LL;
      }
      v19 = v20;
    }
    while ( v20 );
    v10 = v97;
    v9 = v100;
  }
  if ( v98.NumAllocations )
  {
    v58 = (void *)*((_QWORD *)this + 52);
    v59 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
    v98.pOpenHandleList = v17;
    ADAPTER_RENDER::DdiCloseAllocation(v59, v58, &v98);
  }
  v60 = 0LL;
  v94 = 0LL;
  v61 = 1;
  if ( v10 )
  {
    if ( (*((_DWORD *)v10 + 1) & 1) != 0 )
    {
      v62 = *((_QWORD *)v10 + 7);
      if ( v62 )
      {
        v63 = *(_QWORD *)(v62 + 144);
        if ( v63 )
        {
          if ( *(DXGDEVICE **)(v63 + 72) == this )
          {
            v64 = (*(_DWORD *)(v63 + 64))-- == 1;
            if ( v64 )
            {
              DXGAUTOMUTEX::DXGAUTOMUTEX(
                (DXGAUTOMUTEX *)v103,
                (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)v10 + 7) + 144LL) + 8LL),
                v13,
                v14);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v103);
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 7) + 144LL) + 72LL) = 0LL;
              if ( v103[8] )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v103, v11, v13, v14);
            }
          }
        }
        v65 = *((_QWORD *)v10 + 7);
        v66 = *(_QWORD *)(v65 + 128);
        if ( (*(_DWORD *)(v66 - 44) & 2) != 0 )
        {
          if ( *(_DWORD *)(v65 + 124) != 1 )
          {
            v65 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
            if ( *(_DWORD *)(v65 + 248) <= 1u || !DXGADAPTER::IsDxgmms2((DXGADAPTER *)v65) )
            {
              v67 = WdLogNewEntry5_WdAssertion(v65, v11, v13, v14);
              *(_QWORD *)(v67 + 24) = 1418LL;
              WdLogEvent5_WdAssertion(v67);
            }
          }
          if ( ((*(_DWORD *)(v66 - 44) >> 6) & 0xFu) >= *((_DWORD *)this + 452) )
          {
            v68 = WdLogNewEntry5_WdAssertion(v65, v11, v13, v14);
            *(_QWORD *)(v68 + 24) = 1419LL;
            WdLogEvent5_WdAssertion(v68);
          }
          v69 = (*(_DWORD *)(v66 - 44) >> 6) & 0xF;
          if ( *((struct DXGRESOURCE **)this + v69 + 58) == v10 )
            *((_QWORD *)this + v69 + 58) = 0LL;
        }
        v70 = *((_QWORD *)v10 + 3);
        v13 = 0LL;
        while ( v70 )
        {
          v70 = *(_QWORD *)(v70 + 64);
          v13 = (unsigned int)(v13 + 1);
        }
        v71 = (volatile signed __int32 *)*((_QWORD *)v10 + 7);
        if ( _InterlockedExchangeAdd(v71 + 15, 0xFFFFFFFF) == 1 )
          DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v71, v17, v13);
        *((_QWORD *)v10 + 7) = 0LL;
        v60 = 0LL;
      }
      v61 = 0;
    }
    else
    {
      v60 = (COREDEVICEACCESS *)*((_QWORD *)v10 + 7);
      v94 = v60;
    }
  }
  v99.NumAllocations = 0;
  v72 = v9;
  if ( v9 )
  {
    while ( 1 )
    {
      v64 = (*((_DWORD *)v72 + 18) & 0x800) == 0;
      v73 = (struct DXGRESOURCE *)*((_QWORD *)v72 + 8);
      v97 = v73;
      if ( !v64 )
      {
        v74 = WdLogNewEntry5_WdAssertion(v60, v11, v13, v14);
        *(_QWORD *)(v74 + 24) = 1471LL;
        WdLogEvent5_WdAssertion(v74);
      }
      if ( (*((_DWORD *)v72 + 18) & 0x7FE) != 0 )
      {
        v75 = WdLogNewEntry5_WdAssertion(v60, v11, v13, v14);
        *(_QWORD *)(v75 + 24) = 1472LL;
        WdLogEvent5_WdAssertion(v75);
      }
      v76 = *((_QWORD *)v72 + 6);
      if ( v76 )
      {
        if ( !v61 )
          goto LABEL_102;
        v77 = *(_QWORD *)(v76 + 8);
        if ( v77 )
        {
          v78 = *((_QWORD *)this + 74);
          v79 = *(_QWORD *)(*((_QWORD *)this + 2) + 432LL);
          v80 = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)v60);
          DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v102, v80);
          (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(v79 + 8) + 128LL))(v78, 0LL, v77);
          if ( v102 )
          {
            v81 = v102 + 112;
            *(_QWORD *)(v102 + 120) = 0LL;
            ExReleasePushLockExclusiveEx(v81, 0LL);
            KeLeaveCriticalRegion();
          }
          v73 = v97;
          *(_QWORD *)(*((_QWORD *)v72 + 6) + 8LL) = 0LL;
        }
        v60 = *(COREDEVICEACCESS **)(*((_QWORD *)v72 + 6) + 16LL);
        if ( v60 )
        {
          v11 = (__int64)v95;
          v95[v99.NumAllocations++] = v60;
          *(_QWORD *)(*((_QWORD *)v72 + 6) + 16LL) = 0LL;
        }
      }
      else if ( !v61 )
      {
LABEL_102:
        if ( !v10 )
        {
          v82 = WdLogNewEntry5_WdAssertion(v60, v11, v13, v14);
          *(_QWORD *)(v82 + 24) = 1500LL;
          WdLogEvent5_WdAssertion(v82);
        }
        if ( (*((_DWORD *)v10 + 1) & 1) == 0 )
        {
          v83 = WdLogNewEntry5_WdAssertion(v60, v11, v13, v14);
          *(_QWORD *)(v83 + 24) = 1501LL;
          WdLogEvent5_WdAssertion(v83);
        }
        if ( !a3 )
        {
          v84 = WdLogNewEntry5_WdAssertion(v60, v11, v13, v14);
          *(_QWORD *)(v84 + 24) = 1502LL;
          WdLogEvent5_WdAssertion(v84);
        }
      }
      v85 = (void *)*((_QWORD *)v72 + 6);
      if ( (!v10 || (*((_DWORD *)v10 + 1) & 1) == 0) && v85 )
      {
        DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION(*((DXGADAPTERALLOCATION **)v72 + 6));
        operator delete(v85);
      }
      v72 = v73;
      if ( !v73 )
      {
        v60 = v94;
        v9 = v100;
        break;
      }
    }
  }
  if ( v61 )
  {
    v99.Flags.Value = 0;
    if ( v10 )
      v99.Flags.Value = a3 != 0;
    v99.hResource = v60;
    if ( v99.NumAllocations )
    {
      v99.pAllocationList = v95;
    }
    else
    {
      v99.pAllocationList = 0LL;
      if ( !a3 || !v60 )
        goto LABEL_127;
    }
    ADAPTER_RENDER::DdiDestroyAllocation(*((ADAPTER_RENDER **)this + 2), &v99);
    if ( v10 && !a3 )
    {
      if ( (*((_DWORD *)v10 + 1) & 1) != 0 )
      {
        v90 = WdLogNewEntry5_WdAssertion(v87, v86, v88, v89);
        *(_QWORD *)(v90 + 24) = 1550LL;
        WdLogEvent5_WdAssertion(v90);
      }
      *((_QWORD *)v10 + 7) = v99.hResource;
    }
  }
LABEL_127:
  if ( v9 )
  {
    do
    {
      v91 = (struct DXGALLOCATION *)*((_QWORD *)v9 + 8);
      DXGALLOCATION::~DXGALLOCATION(v9);
      ExFreePoolWithTag(v9, 0);
      v9 = v91;
    }
    while ( v91 );
  }
}
