/*
 * XREFs of ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C01CAA40
 * Callers:
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C01CA6D4 (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C0015164 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00D4248 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00E6124 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00E6170 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00E8320 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00E9838 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C00E9F40 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C01837E8 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C01839B0 (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 *     ?VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@@Z @ 0x1C0185DF0 (-VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::OpenSharedSurfForDevice(DXGDXGIKEYEDMUTEX *this, struct DXGDEVICE *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  int Resident; // ebx
  __int64 v10; // rax
  __int64 hAsyncEvent_high; // r14
  struct _D3DDDI_WAITFORSYNCHRONIZATIONOBJECTFROMCPU_FLAGS::$F7AD40C7F43293C52D6341E48450DADD::$5E26B6FB14B4CB4C08E82C1CB39B605A Value; // r12d
  UINT v14; // ebx
  D3DKMT_HANDLE hAsyncEvent; // r13d
  UINT v16; // r15d
  __int64 v17; // rax
  PVOID v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  _BYTE *PoolWithTag; // rcx
  __int64 v22; // r15
  unsigned int v23; // r8d
  void *v24; // rax
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned int Reserved1; // r14d
  __int64 v30; // r15
  __int64 v31; // rax
  __int64 v32; // r8
  int v33; // ecx
  struct _EX_RUNDOWN_REF *v34; // rdx
  __int64 v35; // rcx
  struct _EX_RUNDOWN_REF *v36; // rax
  ULONG_PTR Count; // rcx
  char v38; // r15
  __int64 v39; // rdx
  _QWORD *v40; // rdi
  ULONG_PTR v41; // r13
  struct DXGPROCESS *Current; // rax
  char v43; // r14
  int *v44; // r12
  char v45; // r14
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // rcx
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  struct D3DDDI_MAKERESIDENT_FLAGS v60; // [rsp+20h] [rbp-E0h]
  unsigned __int64 PagingFenceValue; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v62; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v63; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v64; // [rsp+68h] [rbp-98h]
  struct _EX_RUNDOWN_REF *v65; // [rsp+70h] [rbp-90h] BYREF
  __int64 v66; // [rsp+78h] [rbp-88h] BYREF
  struct _EX_RUNDOWN_REF *v67; // [rsp+80h] [rbp-80h] BYREF
  void *v68; // [rsp+88h] [rbp-78h]
  struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU v69; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v70; // [rsp+B8h] [rbp-48h] BYREF
  struct D3DDDI_MAPGPUVIRTUALADDRESS v71; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE *v72; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v73[320]; // [rsp+138h] [rbp+38h] BYREF
  int v74; // [rsp+278h] [rbp+178h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 235LL;
    WdLogEvent5_WdAssertion(v5);
  }
  memset(&v69, 0, sizeof(v69));
  Resident = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>((__int64)a2, &v69, v6, *(_QWORD *)this);
  if ( Resident < 0 )
  {
    v10 = WdLogNewEntry5_WdEvent(v8, v7);
    *(_QWORD *)(v10 + 24) = a2;
    WdLogEvent5_WdEvent(v10);
    return (unsigned int)Resident;
  }
  hAsyncEvent_high = HIDWORD(v69.hAsyncEvent);
  Value = (struct _D3DDDI_WAITFORSYNCHRONIZATIONOBJECTFROMCPU_FLAGS::$F7AD40C7F43293C52D6341E48450DADD::$5E26B6FB14B4CB4C08E82C1CB39B605A)v69.Flags.Value;
  v14 = HIDWORD(v69.hAsyncEvent) + v69.Flags.Value;
  if ( HIDWORD(v69.hAsyncEvent) + v69.Flags.Value >= HIDWORD(v69.hAsyncEvent) )
  {
    hAsyncEvent = (D3DKMT_HANDLE)v69.hAsyncEvent;
    v16 = v14 + LODWORD(v69.hAsyncEvent);
    if ( v14 + LODWORD(v69.hAsyncEvent) < v14 )
    {
      v17 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v17 + 24) = 257LL;
      WdLogEvent5_WdError(v17);
      return v16 < v14 ? 0xC0000095 : 0;
    }
    v18 = operator new[](v16, 0x674D444Fu, PagedPool);
    v68 = v18;
    if ( !v18 )
    {
      v20 = WdLogNewEntry5_WdLowResource(v19);
      *(_QWORD *)(v20 + 24) = this;
      *(_QWORD *)(v20 + 32) = v16;
      WdLogEvent5_WdLowResource(v20);
      return 3221225495LL;
    }
    memset(&v71, 0, sizeof(v71));
    v72 = 0LL;
    v74 = 0;
    v22 = *((unsigned int *)&v69.Flags + 1);
    if ( *((_DWORD *)&v69.Flags + 1) <= 4u )
    {
      PoolWithTag = v73;
      v72 = v73;
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / *((unsigned int *)&v69.Flags + 1) < 0x50 )
        goto LABEL_61;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 80LL * *((unsigned int *)&v69.Flags + 1), 0x4B677844u);
      v72 = PoolWithTag;
    }
    v74 = v22;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 80 * v22);
      PoolWithTag = v72;
      if ( v72 )
      {
        v71.hPagingQueue = *((_DWORD *)a2 + 83);
        v24 = *(void **)&v71.Reserved0;
        v71.MaximumAddress = (D3DGPU_VIRTUAL_ADDRESS)v72;
        if ( (_DWORD)hAsyncEvent_high )
          v24 = v68;
        LODWORD(v71.MinimumAddress) = v22;
        *(_QWORD *)&v71.Reserved0 = v24;
        LODWORD(v71.DriverProtection) = hAsyncEvent_high;
        if ( Value )
          v71.Protection.Value = (UINT64)v68 + hAsyncEvent_high;
        LODWORD(v71.SizeInPages) = Value;
        if ( hAsyncEvent )
          v71.OffsetInPages = (D3DGPU_SIZE_T)v68 + v14;
        v25 = *(_QWORD *)this;
        v71.hAllocation = hAsyncEvent;
        Resident = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
                     a2,
                     (__int64)&v71,
                     v23,
                     v25,
                     0,
                     0LL,
                     0,
                     0LL,
                     0LL,
                     0LL);
        if ( Resident < 0 )
        {
          v57 = WdLogNewEntry5_WdEvent(v27, v26);
          *(_QWORD *)(v57 + 24) = this;
          *(_QWORD *)(v57 + 32) = *(_QWORD *)this;
          WdLogEvent5_WdEvent(v57);
        }
        else
        {
          v28 = *((_QWORD *)this + 1);
          Reserved1 = v71.Reserved1;
          *((_DWORD *)this + 22) = v71.Reserved1;
          v30 = *(_QWORD *)(v28 + 40);
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v30 + 208));
          v31 = (Reserved1 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v31 < *(_DWORD *)(v30 + 248)
            && (v32 = *(_QWORD *)(v30 + 232),
                v33 = *(_DWORD *)(v32 + 16 * v31 + 8),
                ((Reserved1 >> 25) & 0x60) == (*(_BYTE *)(v32 + 16 * v31 + 8) & 0x60))
            && (v33 & 0x2000) == 0
            && (v33 & 0x1F) == 4 )
          {
            v34 = *(struct _EX_RUNDOWN_REF **)(v32 + 16LL * (unsigned int)v31);
          }
          else
          {
            v34 = 0LL;
          }
          DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v67, v34);
          ExReleasePushLockSharedEx(v30 + 208, 0LL);
          KeLeaveCriticalRegion();
          v36 = v67;
          if ( v67 )
          {
            Count = v67[3].Count;
            v38 = 0;
            v39 = *(unsigned int *)(Count + 16);
            *((_DWORD *)this + 23) = v39;
            v40 = (_QWORD *)*((_QWORD *)a2 + 2);
            PagingFenceValue = 0LL;
            v63 = 0LL;
            v66 = 0LL;
            v41 = v36[3].Count;
            Current = DXGPROCESS::GetCurrent(Count, v39);
            v43 = *((_BYTE *)a2 + 1709);
            v44 = (int *)Current;
            v64 = v40[2];
            v45 = v43 & 1;
            if ( !v45
              && (DXGDEVICE::UmdManagesResidency(a2)
               || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 1836LL) & 0x40) != 0) )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(v40[68] + 8LL) + 976LL))(
                *((_QWORD *)a2 + 76),
                (*(_DWORD *)(v41 + 72) >> 12) & 0x3F,
                &v63,
                &v66);
            }
            if ( DXGDEVICE::UmdManagesResidency(a2) )
            {
              v62 = 0LL;
              if ( v45 )
              {
                DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE(
                  (DXGALLOCATIONREFERENCE *)&v65,
                  (struct _EX_RUNDOWN_REF *)v41);
                Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                             (struct VMBCHANNEL__ **)(v64 + 4080),
                             v44[98],
                             *((_DWORD *)a2 + 84),
                             0,
                             (struct D3DDDI_MAKERESIDENT_FLAGS)(PagingFenceValue | 3),
                             1u,
                             (const struct DXGALLOCATIONREFERENCE *)&v65,
                             &v62,
                             &v70);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v65);
              }
              else
              {
                Resident = (*(__int64 (__fastcall **)(_QWORD, __int64, ULONG_PTR, __int64, int, unsigned __int64 *, unsigned __int64 *))(*(_QWORD *)(v40[68] + 8LL) + 768LL))(
                             v40[69],
                             v63,
                             v41 + 24,
                             1LL,
                             3,
                             &v62,
                             &v70);
              }
              if ( Resident >= 0 )
              {
                if ( Resident == 259 )
                {
                  v38 = 1;
                  PagingFenceValue = v62;
                  Resident = 0;
                }
              }
              else
              {
                v49 = WdLogNewEntry5_WdWarning(v47, v46, v48);
                *(_QWORD *)(v49 + 24) = Resident;
                WdLogEvent5_WdWarning(v49);
              }
            }
            if ( Resident >= 0 )
            {
              if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 1836LL) & 0x40) != 0 )
              {
                memset(&v71, 0, sizeof(v71));
                v50 = v40[2];
                v71.Protection.Value = 1LL;
                v71.MinimumAddress = *(_QWORD *)(v50 + 2320);
                v71.MaximumAddress = *(_QWORD *)(v50 + 2328);
                if ( v45 )
                {
                  v51 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
                          (struct VMBCHANNEL__ **)(v64 + 4080),
                          v44[98],
                          a2,
                          0,
                          *(_DWORD *)(v41 + 16),
                          &v71);
                }
                else
                {
                  *(_BYTE *)&v60.0 = 1;
                  v51 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, struct D3DDDI_MAPGPUVIRTUALADDRESS *, struct D3DDDI_MAKERESIDENT_FLAGS, int))(*(_QWORD *)(v40[68] + 8LL) + 792LL))(
                          v40[69],
                          v63,
                          *(_QWORD *)(v41 + 24),
                          &v71,
                          v60,
                          -2);
                }
                Resident = v51;
                if ( v51 >= 0 )
                {
                  if ( v51 == 259 )
                  {
                    v38 = 1;
                    PagingFenceValue = v71.PagingFenceValue;
                    Resident = 0;
                  }
                }
                else
                {
                  v55 = WdLogNewEntry5_WdWarning(v53, v52, v54);
                  *(_QWORD *)(v55 + 24) = Resident;
                  WdLogEvent5_WdWarning(v55);
                }
              }
              if ( v38 )
              {
                if ( v45 )
                {
                  memset(&v69, 0, sizeof(v69));
                  v69.hDevice = *((_DWORD *)a2 + 84);
                  v69.ObjectCount = 1;
                  v69.FenceValueArray = &PagingFenceValue;
                  Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromCpu(
                               (DXG_GUEST_VIRTUALGPU_VMBUS *)(v64 + 4080),
                               (struct DXGPROCESS *)v44,
                               v69.hDevice,
                               &v69);
                }
                else
                {
                  (*(void (__fastcall **)(_QWORD, __int64 *, unsigned __int64 *, __int64))(*(_QWORD *)(v40[68] + 8LL)
                                                                                         + 984LL))(
                    v40[69],
                    &v66,
                    &PagingFenceValue,
                    1LL);
                }
              }
            }
          }
          else
          {
            v56 = WdLogNewEntry5_WdError(v35);
            *(_QWORD *)(v56 + 24) = this;
            *(_QWORD *)(v56 + 32) = *((unsigned int *)this + 22);
            WdLogEvent5_WdError(v56);
            Resident = -1073741811;
          }
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v67);
        }
        operator delete[](v68);
        goto LABEL_62;
      }
    }
LABEL_61:
    v58 = WdLogNewEntry5_WdLowResource(PoolWithTag);
    *(_QWORD *)(v58 + 24) = 278LL;
    WdLogEvent5_WdLowResource(v58);
    Resident = -1073741801;
LABEL_62:
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)&v72);
    return (unsigned int)Resident;
  }
  v59 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v59 + 24) = 251LL;
  WdLogEvent5_WdError(v59);
  return 3221225621LL;
}
