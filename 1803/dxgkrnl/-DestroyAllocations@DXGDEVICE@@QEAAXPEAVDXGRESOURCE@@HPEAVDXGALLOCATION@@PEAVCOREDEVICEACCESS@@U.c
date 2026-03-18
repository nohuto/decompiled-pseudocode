/*
 * XREFs of ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00EF2DC
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C00EBA10 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00EF240 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00EFB40 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?DrainAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C00F27B8 (-DrainAllocations@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     ?VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C0006AE8 (-VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0015700 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C001576C (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0015AA8 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C0019A3C (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C002C3D4 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z @ 0x1C00A3570 (-DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z @ 0x1C00A4FC8 (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A55E4 (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C00BF75C (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ??1DXGALLOCATION@@QEAA@XZ @ 0x1C00D3598 (--1DXGALLOCATION@@QEAA@XZ.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x1C00E318C (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00F263C (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C010B0CC (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 *     ?VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0182B40 (-VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDIC.c)
 *     ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z @ 0x1C018BB4C (-RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z.c)
 *     ?Destroy@DXGOVERLAY@@QEAAXXZ @ 0x1C01AC4AC (-Destroy@DXGOVERLAY@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::DestroyAllocations(
        DXGDEVICE *this,
        unsigned __int64 a2,
        int a3,
        struct DXGALLOCATION *a4,
        struct COREDEVICEACCESS *a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6)
{
  struct DXGALLOCATION *v7; // r13
  __int64 v8; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  const HANDLE *v16; // r12
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned int v19; // edi
  struct DXGPROCESS *Current; // rax
  struct DXGALLOCATION *v21; // r14
  __int64 v22; // rcx
  unsigned int v23; // edi
  struct DXGPROCESS *v24; // rax
  __int64 v25; // rax
  struct DXGALLOCATION *v26; // r9
  unsigned int v27; // ecx
  __int64 v28; // rcx
  __int64 v29; // rax
  ADAPTER_RENDER *v30; // rcx
  DXGOVERLAY *i; // rdi
  __int64 v32; // rax
  unsigned int v33; // edx
  unsigned int v34; // edx
  struct _VIDMM_MULTI_ALLOC *v35; // r8
  PERESOURCE **v36; // rdi
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  void *v41; // rdx
  ADAPTER_RENDER *v42; // rcx
  COREDEVICEACCESS *v43; // r12
  char v44; // di
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v48; // rax
  __int64 v49; // rbx
  unsigned int v50; // edx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  struct DXGALLOCATION *v55; // rbx
  int v56; // eax
  struct DXGALLOCATION *v57; // r14
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  struct _VIDMM_MULTI_GLOBAL_ALLOC *v61; // r9
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  void **v65; // rbx
  __int64 v66; // rcx
  __int64 v67; // rax
  DXGALLOCATION *v68; // rbx
  char v69; // [rsp+40h] [rbp-C0h]
  void **v71; // [rsp+48h] [rbp-B8h]
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  COREDEVICEACCESS *v73; // [rsp+58h] [rbp-A8h]
  _DXGKARG_CLOSEALLOCATION v74; // [rsp+60h] [rbp-A0h] BYREF
  struct _DXGKARG_DESTROYALLOCATION v75; // [rsp+70h] [rbp-90h] BYREF
  struct DXGALLOCATION *v76; // [rsp+90h] [rbp-70h] BYREF
  struct DXGALLOCATION *v77; // [rsp+98h] [rbp-68h]
  struct DXGALLOCATION *v78; // [rsp+A0h] [rbp-60h] BYREF
  char v79; // [rsp+A8h] [rbp-58h]
  _BYTE v80[16]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v81[128]; // [rsp+C0h] [rbp-40h] BYREF

  v73 = a5;
  v7 = a4;
  v8 = *((_QWORD *)this + 2);
  v77 = a4;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v8 + 16)) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v15 + 24) = 1257LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13));
  if ( (a2 & -(__int64)(a3 != 0)) == 0
    || (v16 = *(const HANDLE **)((a2 & -(__int64)(a3 != 0)) + 0x40), (v71 = (void **)v16) == 0LL) )
  {
    v16 = (const HANDLE *)v81;
    v71 = (void **)v81;
  }
  v74.NumAllocations = 0;
  if ( a2 && a3 )
  {
    v17 = WdLogNewEntry5_WdTrace(a2 & -(__int64)(a3 != 0), v11, v13, v14);
    *(_QWORD *)(v17 + 24) = a2;
    v11 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 40LL);
    *(_QWORD *)(v17 + 32) = v11;
  }
  v69 = 0;
  v18 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( *(_BYTE *)(v18 + 185) && a3 && a2 && *(_DWORD *)(a2 + 20) )
  {
    v19 = *((_DWORD *)this + 84);
    Current = DXGPROCESS::GetCurrent(v18, v11);
    DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
      (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4080LL),
      *((_DWORD *)Current + 98),
      v19,
      *(_DWORD *)(a2 + 20),
      0,
      0LL,
      a6);
    *(_DWORD *)(a2 + 20) = 0;
    v69 = 1;
  }
  v76 = v7;
  v21 = v7;
  if ( v7 )
  {
    do
    {
      v78 = (struct DXGALLOCATION *)*((_QWORD *)v21 + 8);
      v22 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( *(_BYTE *)(v22 + 185) )
      {
        if ( !v69 && *((_DWORD *)v21 + 24) )
        {
          v23 = *((_DWORD *)this + 84);
          v24 = DXGPROCESS::GetCurrent(v22, v11);
          DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4080LL),
            *((_DWORD *)v24 + 98),
            v23,
            0,
            1u,
            &v76,
            a6);
        }
        *((_DWORD *)v21 + 24) = 0;
      }
      v25 = WdLogNewEntry5_WdTrace(v22, v11, v13, v14);
      *(_QWORD *)(v25 + 24) = v21;
      *(_QWORD *)(v25 + 32) = *(_QWORD *)(*((_QWORD *)v21 + 1) + 40LL);
      v27 = *(_DWORD *)(*((_QWORD *)v21 + 6) + 4LL);
      if ( (v27 & 1) != 0 )
      {
        v28 = (v27 >> 6) & 0xF;
        if ( (unsigned int)v28 >= *((_DWORD *)this + 424) )
        {
          v29 = WdLogNewEntry5_WdAssertion(v28);
          *(_QWORD *)(v29 + 24) = 1353LL;
          WdLogEvent5_WdAssertion(v29);
        }
        DXGDEVICE::RemovePrimaryAllocation(this, v21);
      }
      v30 = (ADAPTER_RENDER *)*(unsigned int *)(*((_QWORD *)v21 + 6) + 4LL);
      if ( ((unsigned __int8)v30 & 8) != 0 )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v80, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2) + 632LL), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v80);
        for ( i = (DXGOVERLAY *)*((_QWORD *)this + 47); i != (DXGDEVICE *)((char *)this + 376) && i; i = *(DXGOVERLAY **)i )
        {
          if ( *((struct DXGALLOCATION **)i + 6) == v21 )
            DXGOVERLAY::Destroy(i);
        }
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v80);
        if ( v80[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v80);
      }
      v32 = *((_QWORD *)v21 + 6);
      v33 = *(_DWORD *)(v32 + 4);
      if ( (v33 & 0x2000) != 0 && *((_QWORD *)v21 + 3) )
      {
        DXGDEVICE::RemoveDirectFlipAllocationFromList(this, (v33 >> 6) & 0xF, v21);
        v32 = *((_QWORD *)v21 + 6);
      }
      v34 = *(_DWORD *)(v32 + 4);
      if ( (v34 & 0x2000) != 0 || (v34 & 2) != 0 || (v34 & 8) != 0 )
        DXGDEVICE::TestAndSetDisplayedPrimary((struct _KTHREAD **)this, (v34 >> 6) & 0xF, v21, v26);
      v35 = (struct _VIDMM_MULTI_ALLOC *)*((_QWORD *)v21 + 3);
      if ( v35 && (*((_DWORD *)v21 + 18) & 0x800) != 0 )
      {
        VIDMM_EXPORT::VidMmUnpinAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 544LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 552LL),
          v35);
        *((_DWORD *)v21 + 18) &= ~0x800u;
      }
      v36 = (PERESOURCE **)v73;
      ADAPTER_RENDER::FreeAllocationHandleAndWaitForZeroReferences(v30, v21, (PERESOURCE **)v73);
      v11 = *((_QWORD *)v21 + 3);
      if ( v11 )
      {
        Object = 0LL;
        v37 = (*(__int64 (__fastcall **)(_QWORD, __int64, PVOID *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                  + 544LL)
                                                                                      + 8LL)
                                                                          + 168LL))(
                *(_QWORD *)(*((_QWORD *)this + 2) + 552LL),
                v11,
                &Object,
                a6.Value);
        if ( v37 < 0 )
        {
          if ( v37 != -1071775486 )
          {
            v39 = WdLogNewEntry5_WdAssertion(v38);
            *(_QWORD *)(v39 + 24) = 1431LL;
            WdLogEvent5_WdAssertion(v39);
          }
          v40 = WdLogNewEntry5_WdTrace(v38, v11, v13, v14);
          *(_QWORD *)(v40 + 24) = *((_QWORD *)this + 76);
          *(_QWORD *)(v40 + 32) = *((_QWORD *)v21 + 3);
          if ( v36 && !DXGADAPTER::IsCoreResourceExclusiveOwner(v36[3]) )
          {
            COREDEVICEACCESS::Release((COREDEVICEACCESS *)v36);
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
                                                                                              + 544LL)
                                                                                  + 8LL)
                                                                      + 608LL))(
                *(_QWORD *)(*((_QWORD *)this + 2) + 552LL),
                *((_QWORD *)v21 + 3),
                0LL,
                4LL);
            }
            COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v36);
          }
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 544LL)
                                                                             + 8LL)
                                                                 + 160LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 552LL),
            *((_QWORD *)v21 + 3),
            0LL,
            a6.Value);
        }
        *((_QWORD *)v21 + 3) = 0LL;
      }
      v18 = *((_QWORD *)v21 + 4);
      v16 = v71;
      if ( v18 )
      {
        v71[v74.NumAllocations++] = (void *)v18;
        *((_QWORD *)v21 + 4) = 0LL;
      }
      v76 = v78;
      v21 = v78;
    }
    while ( v78 );
    v7 = v77;
  }
  if ( v74.NumAllocations )
  {
    v41 = (void *)*((_QWORD *)this + 54);
    v42 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
    v74.pOpenHandleList = v16;
    ADAPTER_RENDER::DdiCloseAllocation(v42, v41, &v74);
  }
  v43 = 0LL;
  v73 = 0LL;
  v44 = 1;
  if ( a2 )
  {
    if ( (*(_DWORD *)(a2 + 4) & 1) != 0 )
    {
      v45 = *(_QWORD *)(a2 + 56);
      if ( v45 )
      {
        v46 = *(_QWORD *)(v45 + 144);
        if ( v46 )
        {
          if ( *(DXGDEVICE **)(v46 + 72) == this && (*(_DWORD *)(v46 + 64))-- == 1 )
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX(
              (DXGAUTOMUTEX *)&v78,
              (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 144LL) + 8LL),
              0);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v78);
            v18 = *(_QWORD *)(*(_QWORD *)(a2 + 56) + 144LL);
            *(_QWORD *)(v18 + 72) = 0LL;
            if ( v79 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v78);
          }
        }
        v48 = *(_QWORD *)(a2 + 56);
        v49 = *(_QWORD *)(v48 + 128);
        v50 = *(_DWORD *)(v49 - 44);
        if ( (v50 & 2) != 0 )
        {
          if ( *(_DWORD *)(v48 + 124) != 1 )
          {
            v18 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
            if ( *(_DWORD *)(v18 + 248) <= 1u || !DXGADAPTER::IsDxgmms2((DXGADAPTER *)v18) )
            {
              v51 = WdLogNewEntry5_WdAssertion(v18);
              *(_QWORD *)(v51 + 24) = 1547LL;
              WdLogEvent5_WdAssertion(v51);
              v50 = *(_DWORD *)(v49 - 44);
            }
          }
          if ( ((v50 >> 6) & 0xF) >= *((_DWORD *)this + 424) )
          {
            v52 = WdLogNewEntry5_WdAssertion(v18);
            *(_QWORD *)(v52 + 24) = 1548LL;
            WdLogEvent5_WdAssertion(v52);
            v50 = *(_DWORD *)(v49 - 44);
          }
          v53 = (v50 >> 6) & 0xF;
          if ( *((_QWORD *)this + v53 + 60) == a2 )
            *((_QWORD *)this + v53 + 60) = 0LL;
        }
        v54 = *(_QWORD *)(a2 + 24);
        v13 = 0LL;
        while ( v54 )
        {
          v54 = *(_QWORD *)(v54 + 64);
          v13 = (unsigned int)(v13 + 1);
        }
        v18 = *(_QWORD *)(a2 + 56);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 60), 0xFFFFFFFF) == 1 )
          DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v18, v71, v13);
        *(_QWORD *)(a2 + 56) = 0LL;
      }
      v44 = 0;
    }
    else
    {
      v43 = *(COREDEVICEACCESS **)(a2 + 56);
      v73 = v43;
    }
  }
  v75.NumAllocations = 0;
  v55 = v7;
  if ( v7 )
  {
    while ( 1 )
    {
      v56 = *((_DWORD *)v55 + 18);
      v57 = (struct DXGALLOCATION *)*((_QWORD *)v55 + 8);
      if ( (v56 & 0x800) != 0 )
      {
        v58 = WdLogNewEntry5_WdAssertion(v18);
        *(_QWORD *)(v58 + 24) = 1600LL;
        WdLogEvent5_WdAssertion(v58);
        v56 = *((_DWORD *)v55 + 18);
      }
      if ( (v56 & 0x7FE) != 0 )
      {
        v59 = WdLogNewEntry5_WdAssertion(v18);
        *(_QWORD *)(v59 + 24) = 1601LL;
        WdLogEvent5_WdAssertion(v59);
      }
      v60 = *((_QWORD *)v55 + 6);
      if ( v60 )
      {
        if ( !v44 )
          goto LABEL_101;
        v61 = *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(v60 + 8);
        if ( v61 )
        {
          VIDMM_EXPORT::VidMmDestroyAllocation(
            *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 544LL),
            *((struct VIDMM_DEVICE **)this + 76),
            0LL,
            v61);
          *(_QWORD *)(*((_QWORD *)v55 + 6) + 8LL) = 0LL;
          v60 = *((_QWORD *)v55 + 6);
        }
        v18 = *(_QWORD *)(v60 + 16);
        if ( v18 )
        {
          v71[v75.NumAllocations++] = (void *)v18;
          *(_QWORD *)(*((_QWORD *)v55 + 6) + 16LL) = 0LL;
        }
      }
      else if ( !v44 )
      {
LABEL_101:
        if ( !a2 )
        {
          v62 = WdLogNewEntry5_WdAssertion(v18);
          *(_QWORD *)(v62 + 24) = 1629LL;
          WdLogEvent5_WdAssertion(v62);
        }
        if ( (*(_DWORD *)(a2 + 4) & 1) == 0 )
        {
          v63 = WdLogNewEntry5_WdAssertion(v18);
          *(_QWORD *)(v63 + 24) = 1630LL;
          WdLogEvent5_WdAssertion(v63);
        }
        if ( !a3 )
        {
          v64 = WdLogNewEntry5_WdAssertion(v18);
          *(_QWORD *)(v64 + 24) = 1631LL;
          WdLogEvent5_WdAssertion(v64);
        }
      }
      v65 = (void **)*((_QWORD *)v55 + 6);
      if ( (!a2 || (*(_DWORD *)(a2 + 4) & 1) == 0) && v65 )
      {
        DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION(v65);
        operator delete(v65);
      }
      v55 = v57;
      if ( !v57 )
      {
        v7 = v77;
        v43 = v73;
        break;
      }
    }
  }
  if ( v44 )
  {
    v75.Flags.Value = 0;
    if ( a2 )
      v75.Flags.Value = a3 != 0;
    v75.hResource = v43;
    if ( v75.NumAllocations )
    {
      v75.pAllocationList = v71;
    }
    else
    {
      v75.pAllocationList = 0LL;
      if ( !a3 || !v43 )
        goto LABEL_126;
    }
    ADAPTER_RENDER::DdiDestroyAllocation(*((ADAPTER_RENDER **)this + 2), &v75, v13);
    if ( a2 && !a3 )
    {
      if ( (*(_DWORD *)(a2 + 4) & 1) != 0 )
      {
        v67 = WdLogNewEntry5_WdAssertion(v66);
        *(_QWORD *)(v67 + 24) = 1679LL;
        WdLogEvent5_WdAssertion(v67);
      }
      *(_QWORD *)(a2 + 56) = v75.hResource;
    }
  }
LABEL_126:
  if ( v7 )
  {
    v68 = v7;
    do
    {
      v7 = (struct DXGALLOCATION *)*((_QWORD *)v7 + 8);
      if ( v68 )
      {
        DXGALLOCATION::~DXGALLOCATION(v68);
        ExFreePoolWithTag(v68, 0);
      }
      v68 = v7;
    }
    while ( v7 );
  }
}
