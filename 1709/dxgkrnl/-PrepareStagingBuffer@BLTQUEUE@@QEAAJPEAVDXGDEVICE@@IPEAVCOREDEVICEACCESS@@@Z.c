/*
 * XREFs of ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01CE448
 * Callers:
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C007F8B4 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C007A948 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ @ 0x1C007E954 (-DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00833BC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0086DD0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009D810 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C0196A80 (-VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C0196EA4 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 */

__int64 __fastcall BLTQUEUE::PrepareStagingBuffer(
        BLTQUEUE *this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        PERESOURCE **a4)
{
  __int64 v4; // rax
  PERESOURCE **v6; // r13
  __int64 v7; // r15
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r9
  int v15; // r8d
  struct _EX_RUNDOWN_REF *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rdi
  int v24; // eax
  __int64 v25; // rcx
  _QWORD *v26; // rax
  D3DKMT_HANDLE v27; // eax
  DXGADAPTER **v28; // r8
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // r15
  D3DKMT_HANDLE hSyncObject; // r12d
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // eax
  unsigned int v41; // edi
  struct DXGPROCESS *Current; // r15
  __int64 v43; // rcx
  __int64 v44; // rdx
  int v45; // r8d
  __int64 v46; // rcx
  struct _EX_RUNDOWN_REF *v47; // rdx
  __int64 v48; // rcx
  PERESOURCE **v49; // rax
  __int64 v50; // rax
  int Resident; // eax
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rax
  int v56; // eax
  __int64 v57; // rax
  UINT Width; // ecx
  UINT Height; // eax
  unsigned int v61[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct _EX_RUNDOWN_REF *v62; // [rsp+58h] [rbp-A8h] BYREF
  struct _D3DKMT_LOCK2 v63; // [rsp+60h] [rbp-A0h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v64; // [rsp+78h] [rbp-88h] BYREF
  struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 v65; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v66[54]; // [rsp+110h] [rbp+10h] BYREF
  struct DXGSYNCOBJECT *v67; // [rsp+2C0h] [rbp+1C0h] BYREF
  int v68; // [rsp+2C8h] [rbp+1C8h]

  v4 = *((_QWORD *)a2 + 2);
  v6 = a4;
  *(_QWORD *)v61 = a4;
  v7 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v4 + 16)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 3686LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( v6 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(v6[3]);
  v11 = *((_QWORD *)a2 + 5);
  LODWORD(v12) = 0;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v11 + 200));
  v13 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v13 < *(_DWORD *)(v11 + 240)
    && (v14 = *(_QWORD *)(v11 + 224),
        v15 = *(_DWORD *)(v14 + 16 * v13 + 8),
        (((unsigned int)v7 >> 25) & 0x60) == (*(_BYTE *)(v14 + 16 * v13 + 8) & 0x60))
    && (v15 & 0x2000) == 0
    && (v15 & 0x1F) != 0
    && (*(_BYTE *)(v14 + 16LL * (unsigned int)v13 + 8) & 0x1F) == 5 )
  {
    v16 = *(struct _EX_RUNDOWN_REF **)(v14 + 16LL * (unsigned int)v13);
  }
  else
  {
    v16 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v62, v16);
  ExReleasePushLockSharedEx(v11 + 200, 0LL);
  KeLeaveCriticalRegion();
  memset(&v64, 0, sizeof(v64));
  if ( !v62 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
    v26[3] = -1073741811LL;
    v26[4] = this;
    v26[5] = v7;
    WdLogEvent5_WdWarning(v26);
    goto LABEL_19;
  }
  v20 = *((_QWORD *)a2 + 2);
  v21 = *(_QWORD *)(v20 + 16);
  if ( *(_QWORD *)(*(_QWORD *)(v62[1].Count + 16) + 16LL) == v21 )
  {
    v64.hAllocation = *(HANDLE *)(v62[6].Count + 16);
    v24 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*(_QWORD *)(v20 + 16) + 2312LL), &v64, v20);
    v23 = v24;
    if ( v24 < 0 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdError(v25);
      v22[3] = v23;
      goto LABEL_17;
    }
LABEL_19:
    if ( !*((_DWORD *)this + 666) )
    {
      *((_QWORD *)this + 335) = 0LL;
      memset(&v65, 0, sizeof(v65));
      v27 = *((_DWORD *)a2 + 83);
      v28 = (DXGADAPTER **)*((_QWORD *)a2 + 2);
      v65.Info.Flags.Value |= 0x80u;
      v65.hDevice = v27;
      v65.Info.Type = D3DDDI_MONITORED_FENCE;
      v29 = CreateSynchronizationObjectInternal(a2, 0, v28, &v65, &v67, (struct DXGDEVICESYNCOBJECT **)this + 334, 0LL);
      v12 = v29;
      if ( v29 < 0 )
      {
        v31 = WdLogNewEntry5_WdError(v30);
        *(_QWORD *)(v31 + 24) = v12;
        *(_QWORD *)(v31 + 32) = 3743LL;
        WdLogEvent5_WdError(v31);
LABEL_53:
        LODWORD(v23) = v12;
        goto LABEL_54;
      }
      v32 = *((_QWORD *)a2 + 5);
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v32 + 200));
      hSyncObject = v65.hSyncObject;
      v34 = (v65.hSyncObject >> 6) & 0xFFFFFF;
      if ( (unsigned int)v34 < *(_DWORD *)(v32 + 240) )
      {
        v35 = *(_QWORD *)(v32 + 224);
        if ( ((v65.hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v35 + 16 * v34 + 8) & 0x60)
          && (*(_DWORD *)(v35 + 16 * v34 + 8) & 0x1F) != 0 )
        {
          v36 = 2 * ((*(_QWORD *)&v65.hSyncObject >> 6) & 0xFFFFFFLL);
          if ( (*(_DWORD *)(v35 + 16 * ((*(_QWORD *)&v65.hSyncObject >> 6) & 0xFFFFFFLL) + 8) & 0x2000) == 0 )
          {
            v37 = WdLogNewEntry5_WdAssertion((v65.hSyncObject >> 25) & 0x60);
            *(_QWORD *)(v37 + 24) = 191LL;
            WdLogEvent5_WdAssertion(v37);
          }
          *(_DWORD *)(*(_QWORD *)(v32 + 224) + 8 * v36 + 8) &= ~0x2000u;
        }
      }
      *(_QWORD *)(v32 + 208) = 0LL;
      ExReleasePushLockExclusiveEx(v32 + 200, 0LL);
      KeLeaveCriticalRegion();
      v6 = *(PERESOURCE ***)v61;
      *((_DWORD *)this + 666) = hSyncObject;
    }
    if ( !*((_DWORD *)this + 660) )
      goto LABEL_34;
    if ( v64.Width != *((_DWORD *)this + 662) || v64.Height != *((_DWORD *)this + 663) )
      BLTQUEUE::DestroyStagingBuffer(this);
    if ( !*((_DWORD *)this + 660) )
    {
LABEL_34:
      memset(v66, 0, 0x134uLL);
      memset(&v66[39], 0, 120);
      v67 = *(struct DXGSYNCOBJECT **)&v64.Width;
      v68 = 0;
      v66[3] = &v67;
      HIDWORD(v66[0]) = 0;
      LODWORD(v66[2]) = 3;
      LODWORD(v12) = DXGDEVICE::CreateStandardAllocation(a2, (struct _D3DKM_CREATESTANDARDALLOCATION *)v66, v6);
      if ( (int)v12 >= 0 )
      {
        v40 = v66[1];
        v41 = HIDWORD(v66[6]);
        *((_DWORD *)this + 658) = HIDWORD(v66[6]);
        *((_DWORD *)this + 660) = v40;
        Current = DXGPROCESS::GetCurrent(v39, v38);
        DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 200));
        v43 = (v41 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v43 < *((_DWORD *)Current + 60)
          && (v44 = *((_QWORD *)Current + 28),
              v45 = *(_DWORD *)(v44 + 16LL * (unsigned int)v43 + 8),
              ((v41 >> 25) & 0x60) == (*(_BYTE *)(v44 + 16LL * (unsigned int)v43 + 8) & 0x60))
          && (v45 & 0x2000) == 0
          && (v45 & 0x1F) != 0
          && (v46 = 2 * v43, (*(_BYTE *)(v44 + 8 * v46 + 8) & 0x1F) == 5) )
        {
          v47 = *(struct _EX_RUNDOWN_REF **)(v44 + 8 * v46);
        }
        else
        {
          v47 = 0LL;
        }
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v61, v47);
        ExReleasePushLockSharedEx((char *)Current + 200, 0LL);
        KeLeaveCriticalRegion();
        v49 = *(PERESOURCE ***)v61;
        if ( !*(_QWORD *)v61 )
        {
          v50 = WdLogNewEntry5_WdAssertion(v48);
          *(_QWORD *)(v50 + 24) = 3788LL;
          WdLogEvent5_WdAssertion(v50);
          v49 = *(PERESOURCE ***)v61;
        }
        *((_DWORD *)this + 659) = *((_DWORD *)v49 + 24);
        Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                     (struct VMBCHANNEL__ **)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 3888LL),
                     *((_DWORD *)Current + 106),
                     *((_DWORD *)a2 + 84),
                     0,
                     (struct D3DDDI_MAKERESIDENT_FLAGS)3,
                     1u,
                     (const struct DXGALLOCATIONREFERENCE *)v61,
                     0LL,
                     0LL);
        v12 = Resident;
        if ( Resident >= 0 )
        {
          memset(&v63, 0, sizeof(v63));
          v63.hAllocation = *((_DWORD *)this + 658);
          LODWORD(v12) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
                           (struct VMBCHANNEL__ **)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 3888LL),
                           Current,
                           a2,
                           &v63,
                           0);
          if ( (int)v12 < 0 )
          {
            v55 = WdLogNewEntry5_WdError(v54);
            *(_QWORD *)(v55 + 24) = 3814LL;
            WdLogEvent5_WdError(v55);
          }
          *((_QWORD *)this + 332) = v63.pData;
          if ( (int)v12 >= 0 )
          {
            v56 = v68;
            if ( !v68 )
            {
              v57 = WdLogNewEntry5_WdAssertion(v54);
              *(_QWORD *)(v57 + 24) = 3820LL;
              WdLogEvent5_WdAssertion(v57);
              v56 = v68;
            }
            Width = v64.Width;
            *((_QWORD *)this + 336) = 0LL;
            *((_DWORD *)this + 661) = v56;
            Height = v64.Height;
            *((_DWORD *)this + 663) = v64.Height;
            *((_DWORD *)this + 675) = Height;
            *((_DWORD *)this + 662) = Width;
            *((_DWORD *)this + 674) = Width;
          }
        }
        else
        {
          v53 = WdLogNewEntry5_WdError(v52);
          *(_QWORD *)(v53 + 24) = v12;
          WdLogEvent5_WdError(v53);
        }
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v61);
      }
    }
    goto LABEL_53;
  }
  v22 = (_QWORD *)WdLogNewEntry5_WdError(v21);
  LODWORD(v23) = -1073741811;
  v22[3] = a2;
  v22[4] = v62;
  v22[5] = -1073741811LL;
LABEL_17:
  WdLogEvent5_WdError(v22);
LABEL_54:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v62);
  return (unsigned int)v23;
}
