/*
 * XREFs of ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009AEB0
 * Callers:
 *     ?DrainAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C0092B64 (-DrainAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@@Z @ 0x1C0097830 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009AE14 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009B620 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 * Callees:
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001D2C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001DA0 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002160 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C0003628 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00036A4 (-VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_.c)
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C0003DEC (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z @ 0x1C0080524 (-DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z @ 0x1C0081E2C (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0082468 (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x1C009127C (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C0091444 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z @ 0x1C0095094 (-RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C009DF28 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 *     ??1DXGALLOCATION@@QEAA@XZ @ 0x1C00F1E74 (--1DXGALLOCATION@@QEAA@XZ.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C00FF96C (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 *     ?Destroy@DXGOVERLAY@@QEAAXXZ @ 0x1C01B080C (-Destroy@DXGOVERLAY@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::DestroyAllocations(
        DXGDEVICE *this,
        unsigned __int64 a2,
        int a3,
        struct DXGALLOCATION *a4,
        PERESOURCE **a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6)
{
  __int64 v6; // rax
  struct DXGALLOCATION *v9; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  HANDLE *v16; // r12
  __int64 v17; // rax
  struct DXGALLOCATION *v18; // rbx
  struct DXGALLOCATION *v19; // r14
  __int64 v20; // rax
  struct DXGALLOCATION *v21; // r9
  unsigned int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // rax
  ADAPTER_RENDER *v25; // rcx
  DXGOVERLAY *i; // r14
  unsigned int v27; // edx
  unsigned int v28; // edx
  struct _VIDMM_MULTI_ALLOC *v29; // r8
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  void *v34; // rdx
  ADAPTER_RENDER *v35; // rcx
  void *v36; // r13
  char v37; // r14
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  struct DXGALLOCATION *v47; // rbx
  struct DXGALLOCATION *v48; // r12
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  struct _VIDMM_MULTI_GLOBAL_ALLOC *v52; // r9
  void *v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  DXGADAPTERALLOCATION *v57; // rbx
  __int64 v58; // rcx
  __int64 v59; // rax
  struct DXGALLOCATION *v60; // rbx
  const HANDLE *v62; // [rsp+38h] [rbp-C8h]
  struct DXGALLOCATION *v63; // [rsp+40h] [rbp-C0h]
  void *v64; // [rsp+40h] [rbp-C0h]
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  _DXGKARG_CLOSEALLOCATION v66; // [rsp+50h] [rbp-B0h] BYREF
  struct _DXGKARG_DESTROYALLOCATION v67; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v68[16]; // [rsp+80h] [rbp-80h] BYREF
  struct DXGALLOCATION *v69; // [rsp+90h] [rbp-70h]
  _BYTE v70[24]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v71[128]; // [rsp+B0h] [rbp-50h] BYREF

  v6 = *((_QWORD *)this + 2);
  v9 = a4;
  v69 = a4;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v6 + 16)) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v14 + 24) = 1227LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13));
  v15 = a2 & -(__int64)(a3 != 0);
  if ( !v15 || (v16 = *(HANDLE **)((a2 & -(__int64)(a3 != 0)) + 0x40), (v62 = v16) == 0LL) )
  {
    v16 = (HANDLE *)v71;
    v62 = (const HANDLE *)v71;
  }
  v66.NumAllocations = 0;
  if ( a2 && a3 )
  {
    v17 = WdLogNewEntry5_WdTrace(v15, v11);
    *(_QWORD *)(v17 + 24) = a2;
    v15 = *(_QWORD *)(a2 + 8);
    v11 = *(_QWORD *)(v15 + 40);
    *(_QWORD *)(v17 + 32) = v11;
  }
  v18 = v9;
  if ( v9 )
  {
    do
    {
      v19 = (struct DXGALLOCATION *)*((_QWORD *)v18 + 8);
      v63 = v19;
      v20 = WdLogNewEntry5_WdTrace(v15, v11);
      *(_QWORD *)(v20 + 24) = v18;
      *(_QWORD *)(v20 + 32) = *(_QWORD *)(*((_QWORD *)v18 + 1) + 40LL);
      v22 = *(_DWORD *)(*((_QWORD *)v18 + 6) + 4LL);
      if ( (v22 & 1) != 0 )
      {
        v23 = (v22 >> 6) & 0xF;
        if ( (unsigned int)v23 >= *((_DWORD *)this + 420) )
        {
          v24 = WdLogNewEntry5_WdAssertion(v23);
          *(_QWORD *)(v24 + 24) = 1293LL;
          WdLogEvent5_WdAssertion(v24);
        }
        DXGDEVICE::RemovePrimaryAllocation((DXGADAPTER **)this, v18);
      }
      v25 = (ADAPTER_RENDER *)*(unsigned int *)(*((_QWORD *)v18 + 6) + 4LL);
      if ( ((unsigned __int8)v25 & 8) != 0 )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v68, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2) + 616LL));
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v68);
        for ( i = (DXGOVERLAY *)*((_QWORD *)this + 45); i != (DXGDEVICE *)((char *)this + 360) && i; i = *(DXGOVERLAY **)i )
        {
          if ( *((struct DXGALLOCATION **)i + 6) == v18 )
            DXGOVERLAY::Destroy(i);
        }
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v68);
        if ( v68[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v68);
        v19 = v63;
      }
      v27 = *(_DWORD *)(*((_QWORD *)v18 + 6) + 4LL);
      if ( (v27 & 0x2000) != 0 && *((_QWORD *)v18 + 3) )
        DXGDEVICE::RemoveDirectFlipAllocationFromList(this, (v27 >> 6) & 0xF, v18);
      v28 = *(_DWORD *)(*((_QWORD *)v18 + 6) + 4LL);
      if ( (v28 & 0x200A) != 0 )
        DXGDEVICE::TestAndSetDisplayedPrimary((struct _KTHREAD **)this, (v28 >> 6) & 0xF, v18, v21);
      v29 = (struct _VIDMM_MULTI_ALLOC *)*((_QWORD *)v18 + 3);
      if ( v29 && (*((_DWORD *)v18 + 18) & 0x800) != 0 )
      {
        VIDMM_EXPORT::VidMmUnpinAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 528LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 536LL),
          v29);
        *((_DWORD *)v18 + 18) &= ~0x800u;
      }
      ADAPTER_RENDER::FreeAllocationHandleAndWaitForZeroReferences(v25, v18, a5);
      v11 = *((_QWORD *)v18 + 3);
      if ( v11 )
      {
        Object = 0LL;
        v30 = (*(__int64 (__fastcall **)(_QWORD, __int64, PVOID *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                  + 528LL)
                                                                                      + 8LL)
                                                                          + 168LL))(
                *(_QWORD *)(*((_QWORD *)this + 2) + 536LL),
                v11,
                &Object,
                a6.Value);
        if ( v30 < 0 )
        {
          if ( v30 != -1071775486 )
          {
            v32 = WdLogNewEntry5_WdAssertion(v31);
            *(_QWORD *)(v32 + 24) = 1371LL;
            WdLogEvent5_WdAssertion(v32);
          }
          v33 = WdLogNewEntry5_WdTrace(v31, v11);
          *(_QWORD *)(v33 + 24) = *((_QWORD *)this + 74);
          *(_QWORD *)(v33 + 32) = *((_QWORD *)v18 + 3);
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
                                                                                              + 528LL)
                                                                                  + 8LL)
                                                                      + 608LL))(
                *(_QWORD *)(*((_QWORD *)this + 2) + 536LL),
                *((_QWORD *)v18 + 3),
                0LL,
                4LL);
            }
            COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a5);
          }
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 528LL)
                                                                             + 8LL)
                                                                 + 160LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 536LL),
            *((_QWORD *)v18 + 3),
            0LL,
            a6.Value);
        }
        *((_QWORD *)v18 + 3) = 0LL;
      }
      v15 = *((_QWORD *)v18 + 4);
      v16 = (HANDLE *)v62;
      if ( v15 )
      {
        v62[v66.NumAllocations++] = (const HANDLE)v15;
        *((_QWORD *)v18 + 4) = 0LL;
      }
      v18 = v19;
    }
    while ( v19 );
  }
  if ( v66.NumAllocations )
  {
    v34 = (void *)*((_QWORD *)this + 52);
    v35 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
    v66.pOpenHandleList = v16;
    ADAPTER_RENDER::DdiCloseAllocation(v35, v34, &v66);
  }
  v36 = 0LL;
  v64 = 0LL;
  v37 = 1;
  if ( a2 )
  {
    if ( (*(_DWORD *)(a2 + 4) & 1) != 0 )
    {
      v38 = *(_QWORD *)(a2 + 56);
      if ( v38 )
      {
        v39 = *(_QWORD *)(v38 + 144);
        if ( v39 )
        {
          if ( *(DXGDEVICE **)(v39 + 72) == this && (*(_DWORD *)(v39 + 64))-- == 1 )
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX(
              (DXGAUTOMUTEX *)v70,
              (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 144LL) + 8LL));
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v70);
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 144LL) + 72LL) = 0LL;
            if ( v70[8] )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v70);
          }
        }
        v41 = *(_QWORD *)(a2 + 56);
        v42 = *(_QWORD *)(v41 + 128);
        if ( (*(_DWORD *)(v42 - 44) & 2) != 0 )
        {
          if ( *(_DWORD *)(v41 + 124) != 1 )
          {
            v41 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
            if ( *(_DWORD *)(v41 + 248) <= 1u || !DXGADAPTER::IsDxgmms2((DXGADAPTER *)v41) )
            {
              v43 = WdLogNewEntry5_WdAssertion(v41);
              *(_QWORD *)(v43 + 24) = 1487LL;
              WdLogEvent5_WdAssertion(v43);
            }
          }
          if ( ((*(_DWORD *)(v42 - 44) >> 6) & 0xFu) >= *((_DWORD *)this + 420) )
          {
            v44 = WdLogNewEntry5_WdAssertion(v41);
            *(_QWORD *)(v44 + 24) = 1488LL;
            WdLogEvent5_WdAssertion(v44);
          }
          v45 = (*(_DWORD *)(v42 - 44) >> 6) & 0xF;
          if ( *((_QWORD *)this + v45 + 58) == a2 )
            *((_QWORD *)this + v45 + 58) = 0LL;
        }
        v46 = *(_QWORD *)(a2 + 24);
        v13 = 0LL;
        while ( v46 )
        {
          v46 = *(_QWORD *)(v46 + 64);
          v13 = (unsigned int)(v13 + 1);
        }
        v15 = *(_QWORD *)(a2 + 56);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 60), 0xFFFFFFFF) == 1 )
          DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v15, v16, v13);
        *(_QWORD *)(a2 + 56) = 0LL;
      }
      v37 = 0;
    }
    else
    {
      v36 = *(void **)(a2 + 56);
      v64 = v36;
    }
  }
  v67.NumAllocations = 0;
  v47 = v9;
  if ( v9 )
  {
    while ( 1 )
    {
      v48 = (struct DXGALLOCATION *)*((_QWORD *)v47 + 8);
      if ( (*((_DWORD *)v47 + 18) & 0x800) != 0 )
      {
        v49 = WdLogNewEntry5_WdAssertion(v15);
        *(_QWORD *)(v49 + 24) = 1540LL;
        WdLogEvent5_WdAssertion(v49);
      }
      if ( (*((_DWORD *)v47 + 18) & 0x7FE) != 0 )
      {
        v50 = WdLogNewEntry5_WdAssertion(v15);
        *(_QWORD *)(v50 + 24) = 1541LL;
        WdLogEvent5_WdAssertion(v50);
      }
      v51 = *((_QWORD *)v47 + 6);
      if ( !v51 )
        break;
      if ( !v37 )
        goto LABEL_89;
      v52 = *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(v51 + 8);
      if ( v52 )
      {
        VIDMM_EXPORT::VidMmDestroyAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 528LL),
          *((struct VIDMM_DEVICE **)this + 74),
          0LL,
          v52);
        *(_QWORD *)(*((_QWORD *)v47 + 6) + 8LL) = 0LL;
      }
      v53 = *(void **)(*((_QWORD *)v47 + 6) + 16LL);
      if ( !v53 )
        goto LABEL_95;
      v62[v67.NumAllocations] = v53;
      v15 = 1LL;
      ++v67.NumAllocations;
      *(_QWORD *)(*((_QWORD *)v47 + 6) + 16LL) = 0LL;
LABEL_96:
      if ( !a2 || (*(_DWORD *)(a2 + 4) & 1) == 0 )
      {
        v57 = (DXGADAPTERALLOCATION *)*((_QWORD *)v47 + 6);
        if ( v57 )
        {
          DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION(v57);
          operator delete(v57);
        }
      }
      v47 = v48;
      if ( !v48 )
      {
        v9 = v69;
        v36 = v64;
        goto LABEL_102;
      }
    }
    if ( !v37 )
    {
LABEL_89:
      if ( !a2 )
      {
        v54 = WdLogNewEntry5_WdAssertion(v15);
        *(_QWORD *)(v54 + 24) = 1569LL;
        WdLogEvent5_WdAssertion(v54);
      }
      v15 = 1LL;
      if ( (*(_DWORD *)(a2 + 4) & 1) == 0 )
      {
        v55 = WdLogNewEntry5_WdAssertion(1LL);
        *(_QWORD *)(v55 + 24) = 1570LL;
        WdLogEvent5_WdAssertion(v55);
        v15 = 1LL;
      }
      if ( a3 )
        goto LABEL_96;
      v56 = WdLogNewEntry5_WdAssertion(1LL);
      *(_QWORD *)(v56 + 24) = 1571LL;
      WdLogEvent5_WdAssertion(v56);
    }
LABEL_95:
    v15 = 1LL;
    goto LABEL_96;
  }
LABEL_102:
  if ( v37 )
  {
    v67.Flags.Value = 0;
    if ( a2 )
      v67.Flags.Value = a3 != 0;
    v67.hResource = v36;
    if ( v67.NumAllocations )
    {
      v67.pAllocationList = v62;
    }
    else
    {
      v67.pAllocationList = 0LL;
      if ( !a3 || !v36 )
        goto LABEL_115;
    }
    ADAPTER_RENDER::DdiDestroyAllocation(*((ADAPTER_RENDER **)this + 2), &v67, v13);
    if ( a2 && !a3 )
    {
      if ( (*(_DWORD *)(a2 + 4) & 1) != 0 )
      {
        v59 = WdLogNewEntry5_WdAssertion(v58);
        *(_QWORD *)(v59 + 24) = 1619LL;
        WdLogEvent5_WdAssertion(v59);
      }
      *(_QWORD *)(a2 + 56) = v67.hResource;
    }
  }
LABEL_115:
  if ( v9 )
  {
    do
    {
      v60 = (struct DXGALLOCATION *)*((_QWORD *)v9 + 8);
      DXGALLOCATION::~DXGALLOCATION(v9);
      ExFreePoolWithTag(v9, 0);
      v9 = v60;
    }
    while ( v60 );
  }
}
