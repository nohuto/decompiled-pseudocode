/*
 * XREFs of ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C01C78F8
 * Callers:
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C01C75B0 (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C0003F38 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0086DD0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C008A3AC (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C008A3F0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C009554C (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0095C5C (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C00E75F0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C0196EA4 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C019706C (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 *     ?VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@@Z @ 0x1C0199190 (-VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::OpenSharedSurfForDevice(DXGDXGIKEYEDMUTEX *this, struct DXGDEVICE *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  int Resident; // ebx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 hAsyncEvent_high; // rbx
  struct _D3DDDI_WAITFORSYNCHRONIZATIONOBJECTFROMCPU_FLAGS::$F7AD40C7F43293C52D6341E48450DADD::$5E26B6FB14B4CB4C08E82C1CB39B605A Value; // r12d
  UINT v16; // r14d
  D3DKMT_HANDLE hAsyncEvent; // r13d
  UINT v18; // eax
  __int64 v19; // r15
  __int64 v20; // rcx
  __int64 v21; // rax
  _BYTE *PoolWithTag; // rcx
  __int64 v23; // r15
  unsigned int v24; // r8d
  PVOID v25; // rax
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  unsigned int Reserved1; // r14d
  __int64 v33; // r15
  __int64 v34; // rax
  __int64 v35; // r8
  int v36; // edx
  struct _EX_RUNDOWN_REF *v37; // rdx
  __int64 v38; // rcx
  struct _EX_RUNDOWN_REF *v39; // rax
  ULONG_PTR Count; // rcx
  char v41; // r15
  __int64 v42; // rdx
  _QWORD *v43; // rdi
  ULONG_PTR v44; // r13
  struct DXGPROCESS *Current; // rax
  char v46; // r14
  int *v47; // r12
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 v52; // rcx
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  struct D3DDDI_MAKERESIDENT_FLAGS v62; // [rsp+20h] [rbp-E0h]
  unsigned __int64 PagingFenceValue; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v64; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v65; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v66; // [rsp+68h] [rbp-98h]
  struct _EX_RUNDOWN_REF *v67; // [rsp+70h] [rbp-90h] BYREF
  __int64 v68; // [rsp+78h] [rbp-88h] BYREF
  struct _EX_RUNDOWN_REF *v69; // [rsp+80h] [rbp-80h] BYREF
  PVOID P; // [rsp+88h] [rbp-78h]
  struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU v71; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v72; // [rsp+B8h] [rbp-48h] BYREF
  struct D3DDDI_MAPGPUVIRTUALADDRESS v73; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE *v74; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v75[320]; // [rsp+138h] [rbp+38h] BYREF
  int v76; // [rsp+278h] [rbp+178h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 235LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v71.hDevice = 0;
  memset(&v71.ObjectHandleArray, 0, 0x20uLL);
  Resident = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>((__int64)a2, &v71, v6, *(_QWORD *)this);
  if ( Resident < 0 )
  {
    v12 = WdLogNewEntry5_WdEvent(v8, v7, v10, v11);
    *(_QWORD *)(v12 + 24) = a2;
    WdLogEvent5_WdEvent(v12);
    return (unsigned int)Resident;
  }
  hAsyncEvent_high = HIDWORD(v71.hAsyncEvent);
  Value = (struct _D3DDDI_WAITFORSYNCHRONIZATIONOBJECTFROMCPU_FLAGS::$F7AD40C7F43293C52D6341E48450DADD::$5E26B6FB14B4CB4C08E82C1CB39B605A)v71.Flags.Value;
  v16 = HIDWORD(v71.hAsyncEvent) + v71.Flags.Value;
  if ( HIDWORD(v71.hAsyncEvent) + v71.Flags.Value < HIDWORD(v71.hAsyncEvent) )
  {
    v61 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v61 + 24) = 251LL;
  }
  else
  {
    hAsyncEvent = (D3DKMT_HANDLE)v71.hAsyncEvent;
    v18 = v16 + LODWORD(v71.hAsyncEvent);
    if ( v16 + LODWORD(v71.hAsyncEvent) >= v16 )
    {
      v19 = v18;
      P = operator new(v18, 0x674D444Fu, PagedPool);
      if ( !P )
      {
        v21 = WdLogNewEntry5_WdLowResource(v20);
        *(_QWORD *)(v21 + 24) = this;
        *(_QWORD *)(v21 + 32) = v19;
        WdLogEvent5_WdLowResource(v21);
        return 3221225495LL;
      }
      v73.hPagingQueue = 0;
      memset(&v73.BaseAddress, 0, 0x60uLL);
      v74 = 0LL;
      v76 = 0;
      v23 = *((unsigned int *)&v71.Flags + 1);
      if ( *((_DWORD *)&v71.Flags + 1) <= 4u )
      {
        PoolWithTag = v75;
        v74 = v75;
      }
      else
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / *((unsigned int *)&v71.Flags + 1) < 0x50 )
          goto LABEL_60;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 80LL * *((unsigned int *)&v71.Flags + 1), 0x4B677844u);
        v74 = PoolWithTag;
      }
      v76 = v23;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 80 * v23);
        PoolWithTag = v74;
        if ( v74 )
        {
          v73.hPagingQueue = *((_DWORD *)a2 + 83);
          v25 = *(PVOID *)&v73.Reserved0;
          v73.MaximumAddress = (D3DGPU_VIRTUAL_ADDRESS)v74;
          if ( (_DWORD)hAsyncEvent_high )
            v25 = P;
          LODWORD(v73.MinimumAddress) = v23;
          *(_QWORD *)&v73.Reserved0 = v25;
          LODWORD(v73.DriverProtection) = hAsyncEvent_high;
          if ( Value )
            v73.Protection.Value = (UINT64)P + hAsyncEvent_high;
          LODWORD(v73.SizeInPages) = Value;
          if ( hAsyncEvent )
            v73.OffsetInPages = (D3DGPU_SIZE_T)P + v16;
          v26 = *(_QWORD *)this;
          v73.hAllocation = hAsyncEvent;
          Resident = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
                       a2,
                       (__int64)&v73,
                       v24,
                       v26,
                       0,
                       0LL,
                       0,
                       0LL,
                       0LL,
                       0LL);
          if ( Resident < 0 )
          {
            v59 = WdLogNewEntry5_WdEvent(v28, v27, v29, v30);
            *(_QWORD *)(v59 + 24) = this;
            *(_QWORD *)(v59 + 32) = *(_QWORD *)this;
            WdLogEvent5_WdEvent(v59);
          }
          else
          {
            v31 = *((_QWORD *)this + 1);
            Reserved1 = v73.Reserved1;
            *((_DWORD *)this + 22) = v73.Reserved1;
            v33 = *(_QWORD *)(v31 + 40);
            DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v33 + 200));
            v34 = (Reserved1 >> 6) & 0xFFFFFF;
            if ( (unsigned int)v34 < *(_DWORD *)(v33 + 240)
              && (v35 = *(_QWORD *)(v33 + 224),
                  v36 = *(_DWORD *)(v35 + 16 * v34 + 8),
                  ((Reserved1 >> 25) & 0x60) == (*(_BYTE *)(v35 + 16 * v34 + 8) & 0x60))
              && (v36 & 0x2000) == 0
              && (v36 & 0x1F) != 0
              && (*(_BYTE *)(v35 + 16LL * (unsigned int)v34 + 8) & 0x1F) == 4 )
            {
              v37 = *(struct _EX_RUNDOWN_REF **)(v35 + 16LL * (unsigned int)v34);
            }
            else
            {
              v37 = 0LL;
            }
            DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v69, v37);
            ExReleasePushLockSharedEx(v33 + 200, 0LL);
            KeLeaveCriticalRegion();
            v39 = v69;
            if ( v69 )
            {
              Count = v69[3].Count;
              v41 = 0;
              v42 = *(unsigned int *)(Count + 16);
              *((_DWORD *)this + 23) = v42;
              v43 = (_QWORD *)*((_QWORD *)a2 + 2);
              PagingFenceValue = 0LL;
              v65 = 0LL;
              v68 = 0LL;
              v44 = v39[3].Count;
              Current = DXGPROCESS::GetCurrent(Count, v42);
              v46 = *((_BYTE *)a2 + 1693);
              v47 = (int *)Current;
              v66 = v43[2];
              if ( !v46
                && (DXGDEVICE::UmdManagesResidency(a2)
                 || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 1700LL) & 0x40) != 0) )
              {
                (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(v43[66] + 8LL) + 960LL))(
                  *((_QWORD *)a2 + 74),
                  (*(_DWORD *)(v44 + 72) >> 12) & 0x3F,
                  &v65,
                  &v68);
              }
              if ( DXGDEVICE::UmdManagesResidency(a2) )
              {
                v64 = 0LL;
                if ( v46 )
                {
                  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE(
                    (DXGALLOCATIONREFERENCE *)&v67,
                    (struct _EX_RUNDOWN_REF *)v44);
                  Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                               (struct VMBCHANNEL__ **)(v66 + 3888),
                               v47[106],
                               *((_DWORD *)a2 + 84),
                               0,
                               (struct D3DDDI_MAKERESIDENT_FLAGS)(PagingFenceValue | 3),
                               1u,
                               (const struct DXGALLOCATIONREFERENCE *)&v67,
                               &v64,
                               &v72);
                  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v67);
                }
                else
                {
                  Resident = (*(__int64 (__fastcall **)(_QWORD, __int64, ULONG_PTR, __int64, int, unsigned __int64 *, unsigned __int64 *))(*(_QWORD *)(v43[66] + 8LL) + 768LL))(
                               v43[67],
                               v65,
                               v44 + 24,
                               1LL,
                               3,
                               &v64,
                               &v72);
                }
                if ( Resident >= 0 )
                {
                  if ( Resident == 259 )
                  {
                    v41 = 1;
                    PagingFenceValue = v64;
                    Resident = 0;
                  }
                }
                else
                {
                  v51 = WdLogNewEntry5_WdWarning(v49, v48, v50);
                  *(_QWORD *)(v51 + 24) = Resident;
                  WdLogEvent5_WdWarning(v51);
                }
              }
              if ( Resident >= 0 )
              {
                if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 1700LL) & 0x40) != 0 )
                {
                  memset(&v73, 0, sizeof(v73));
                  v73.Protection.Value |= 1uLL;
                  v52 = v43[2];
                  v73.MinimumAddress = *(_QWORD *)(v52 + 2184);
                  v73.MaximumAddress = *(_QWORD *)(v52 + 2192);
                  if ( v46 )
                  {
                    v53 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
                            (struct VMBCHANNEL__ **)(v66 + 3888),
                            v47[106],
                            a2,
                            0,
                            *(_DWORD *)(v44 + 16),
                            &v73);
                  }
                  else
                  {
                    *(_BYTE *)&v62.0 = 1;
                    v53 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, struct D3DDDI_MAPGPUVIRTUALADDRESS *, struct D3DDDI_MAKERESIDENT_FLAGS, int))(*(_QWORD *)(v43[66] + 8LL) + 792LL))(
                            v43[67],
                            v65,
                            *(_QWORD *)(v44 + 24),
                            &v73,
                            v62,
                            -2);
                  }
                  Resident = v53;
                  if ( v53 >= 0 )
                  {
                    if ( v53 == 259 )
                    {
                      v41 = 1;
                      PagingFenceValue = v73.PagingFenceValue;
                      Resident = 0;
                    }
                  }
                  else
                  {
                    v57 = WdLogNewEntry5_WdWarning(v55, v54, v56);
                    *(_QWORD *)(v57 + 24) = Resident;
                    WdLogEvent5_WdWarning(v57);
                  }
                }
                if ( v41 )
                {
                  if ( v46 )
                  {
                    memset(&v71, 0, sizeof(v71));
                    v71.hDevice = *((_DWORD *)a2 + 84);
                    v71.ObjectCount = 1;
                    v71.FenceValueArray = &PagingFenceValue;
                    Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromCpu(
                                 (DXG_GUEST_VIRTUALGPU_VMBUS *)(v66 + 3888),
                                 (struct DXGPROCESS *)v47,
                                 v71.hDevice,
                                 &v71);
                  }
                  else
                  {
                    (*(void (__fastcall **)(_QWORD, __int64 *, unsigned __int64 *, __int64))(*(_QWORD *)(v43[66] + 8LL)
                                                                                           + 968LL))(
                      v43[67],
                      &v68,
                      &PagingFenceValue,
                      1LL);
                  }
                }
              }
            }
            else
            {
              v58 = WdLogNewEntry5_WdError(v38);
              *(_QWORD *)(v58 + 24) = this;
              *(_QWORD *)(v58 + 32) = *((unsigned int *)this + 22);
              WdLogEvent5_WdError(v58);
              Resident = -1073741811;
            }
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v69);
          }
          ExFreePoolWithTag(P, 0);
          goto LABEL_61;
        }
      }
LABEL_60:
      v60 = WdLogNewEntry5_WdLowResource(PoolWithTag);
      *(_QWORD *)(v60 + 24) = 278LL;
      WdLogEvent5_WdLowResource(v60);
      Resident = -1073741801;
LABEL_61:
      PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>((PVOID *)&v74);
      return (unsigned int)Resident;
    }
    v61 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v61 + 24) = 257LL;
  }
  WdLogEvent5_WdError(v61);
  return 3221225621LL;
}
