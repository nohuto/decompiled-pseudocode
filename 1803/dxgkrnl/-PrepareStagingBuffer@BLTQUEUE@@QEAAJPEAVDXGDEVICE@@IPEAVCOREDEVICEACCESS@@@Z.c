/*
 * XREFs of ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01D5160
 * Callers:
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01D5738 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0097778 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00E8320 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F1F88 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C010EEAC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C0183378 (-VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C01837E8 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 *     ?DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ @ 0x1C01D4750 (-DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ.c)
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
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r9
  int v15; // edx
  struct _EX_RUNDOWN_REF *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rbx
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
  __int64 v35; // rdx
  __int64 v36; // rbx
  __int64 v37; // rax
  int v38; // ecx
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // eax
  unsigned int v42; // esi
  struct DXGPROCESS *Current; // r15
  unsigned int v44; // ecx
  __int64 v45; // r8
  __int64 v46; // rdx
  int v47; // ecx
  __int64 v48; // rdx
  struct _EX_RUNDOWN_REF *v49; // rdx
  __int64 v50; // rcx
  PERESOURCE **v51; // rax
  __int64 v52; // rax
  int Resident; // eax
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rax
  int v58; // eax
  __int64 v59; // rax
  UINT Width; // ecx
  UINT Height; // eax
  unsigned int v63[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct _EX_RUNDOWN_REF *v64; // [rsp+58h] [rbp-A8h] BYREF
  struct _D3DKMT_LOCK2 v65; // [rsp+60h] [rbp-A0h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v66; // [rsp+78h] [rbp-88h] BYREF
  struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 v67; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v68[54]; // [rsp+110h] [rbp+10h] BYREF
  struct DXGSYNCOBJECT *v69; // [rsp+2C0h] [rbp+1C0h] BYREF
  int v70; // [rsp+2C8h] [rbp+1C8h]

  v4 = *((_QWORD *)a2 + 2);
  v6 = a4;
  *(_QWORD *)v63 = a4;
  v7 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v4 + 16)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 3688LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( v6 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(v6[3]);
  v11 = *((_QWORD *)a2 + 5);
  LODWORD(v12) = 0;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v11 + 208));
  v13 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v13 < *(_DWORD *)(v11 + 248)
    && (v14 = *(_QWORD *)(v11 + 232),
        v15 = *(_DWORD *)(v14 + 16 * v13 + 8),
        (((unsigned int)v7 >> 25) & 0x60) == (*(_BYTE *)(v14 + 16 * v13 + 8) & 0x60))
    && (v15 & 0x2000) == 0
    && (v15 & 0x1F) == 5 )
  {
    v16 = *(struct _EX_RUNDOWN_REF **)(v14 + 16LL * (unsigned int)v13);
  }
  else
  {
    v16 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v64, v16);
  ExReleasePushLockSharedEx(v11 + 208, 0LL);
  KeLeaveCriticalRegion();
  memset(&v66, 0, sizeof(v66));
  if ( !v64 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
    v26[3] = -1073741811LL;
    v26[4] = this;
    v26[5] = v7;
    WdLogEvent5_WdWarning(v26);
    goto LABEL_18;
  }
  v20 = *((_QWORD *)a2 + 2);
  v21 = *(_QWORD *)(v20 + 16);
  if ( *(_QWORD *)(*(_QWORD *)(v64[1].Count + 16) + 16LL) == v21 )
  {
    v66.hAllocation = *(HANDLE *)(v64[6].Count + 16);
    v24 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*(_QWORD *)(v20 + 16) + 2464LL), &v66, v20);
    v23 = v24;
    if ( v24 < 0 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdError(v25);
      v22[3] = v23;
      goto LABEL_16;
    }
LABEL_18:
    if ( !*((_DWORD *)this + 666) )
    {
      *((_QWORD *)this + 335) = 0LL;
      memset(&v67, 0, sizeof(v67));
      v27 = *((_DWORD *)a2 + 83);
      v28 = (DXGADAPTER **)*((_QWORD *)a2 + 2);
      v67.Info.Flags.Value |= 0x80u;
      v67.hDevice = v27;
      v67.Info.Type = D3DDDI_MONITORED_FENCE;
      v29 = CreateSynchronizationObjectInternal(a2, 0, v28, &v67, &v69, (struct DXGDEVICESYNCOBJECT **)this + 334, 0LL);
      v12 = v29;
      if ( v29 < 0 )
      {
        v31 = WdLogNewEntry5_WdError(v30);
        *(_QWORD *)(v31 + 24) = v12;
        *(_QWORD *)(v31 + 32) = 3745LL;
        WdLogEvent5_WdError(v31);
LABEL_52:
        LODWORD(v23) = v12;
        goto LABEL_53;
      }
      v32 = *((_QWORD *)a2 + 5);
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v32 + 208));
      hSyncObject = v67.hSyncObject;
      v34 = (v67.hSyncObject >> 6) & 0xFFFFFF;
      if ( (unsigned int)v34 < *(_DWORD *)(v32 + 248) )
      {
        v35 = *(_QWORD *)(v32 + 232);
        if ( ((v67.hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v35 + 16 * v34 + 8) & 0x60)
          && (*(_DWORD *)(v35 + 16 * v34 + 8) & 0x1F) != 0 )
        {
          v36 = 2 * ((*(_QWORD *)&v67.hSyncObject >> 6) & 0xFFFFFFLL);
          if ( (*(_DWORD *)(v35 + 16 * ((*(_QWORD *)&v67.hSyncObject >> 6) & 0xFFFFFFLL) + 8) & 0x2000) == 0 )
          {
            v37 = WdLogNewEntry5_WdAssertion((v67.hSyncObject >> 25) & 0x60);
            *(_QWORD *)(v37 + 24) = 215LL;
            WdLogEvent5_WdAssertion(v37);
            v35 = *(_QWORD *)(v32 + 232);
          }
          *(_DWORD *)(v35 + 8 * v36 + 8) &= ~0x2000u;
        }
      }
      *(_QWORD *)(v32 + 216) = 0LL;
      ExReleasePushLockExclusiveEx(v32 + 208, 0LL);
      KeLeaveCriticalRegion();
      v6 = *(PERESOURCE ***)v63;
      *((_DWORD *)this + 666) = hSyncObject;
    }
    v38 = *((_DWORD *)this + 660);
    if ( !v38 )
      goto LABEL_33;
    if ( v66.Width != *((_DWORD *)this + 662) || v66.Height != *((_DWORD *)this + 663) )
    {
      BLTQUEUE::DestroyStagingBuffer(this);
      v38 = *((_DWORD *)this + 660);
    }
    if ( !v38 )
    {
LABEL_33:
      memset(v68, 0, 0x134uLL);
      memset(&v68[39], 0, 120);
      v69 = *(struct DXGSYNCOBJECT **)&v66.Width;
      v70 = 0;
      HIDWORD(v68[0]) = 0;
      LODWORD(v68[2]) = 3;
      v68[3] = &v69;
      LODWORD(v12) = DXGDEVICE::CreateStandardAllocation(a2, (struct _D3DKM_CREATESTANDARDALLOCATION *)v68, v6);
      if ( (int)v12 >= 0 )
      {
        v41 = v68[1];
        v42 = HIDWORD(v68[6]);
        *((_DWORD *)this + 658) = HIDWORD(v68[6]);
        *((_DWORD *)this + 660) = v41;
        Current = DXGPROCESS::GetCurrent(v40, v39);
        DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
        v44 = (v42 >> 6) & 0xFFFFFF;
        if ( v44 < *((_DWORD *)Current + 62)
          && (v45 = *((_QWORD *)Current + 29),
              v46 = v44,
              v47 = *(_DWORD *)(v45 + 16LL * v44 + 8),
              ((v42 >> 25) & 0x60) == (v47 & 0x60))
          && (v47 & 0x2000) == 0
          && (v47 & 0x1F) != 0
          && (v48 = 2 * v46, (v47 & 0x1F) == 5) )
        {
          v49 = *(struct _EX_RUNDOWN_REF **)(v45 + 8 * v48);
        }
        else
        {
          v49 = 0LL;
        }
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v63, v49);
        ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
        KeLeaveCriticalRegion();
        v51 = *(PERESOURCE ***)v63;
        if ( !*(_QWORD *)v63 )
        {
          v52 = WdLogNewEntry5_WdAssertion(v50);
          *(_QWORD *)(v52 + 24) = 3790LL;
          WdLogEvent5_WdAssertion(v52);
          v51 = *(PERESOURCE ***)v63;
        }
        *((_DWORD *)this + 659) = *((_DWORD *)v51 + 24);
        Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                     (struct VMBCHANNEL__ **)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 4080LL),
                     *((_DWORD *)Current + 98),
                     *((_DWORD *)a2 + 84),
                     0,
                     (struct D3DDDI_MAKERESIDENT_FLAGS)3,
                     1u,
                     (const struct DXGALLOCATIONREFERENCE *)v63,
                     0LL,
                     0LL);
        v12 = Resident;
        if ( Resident >= 0 )
        {
          memset(&v65, 0, sizeof(v65));
          v65.hAllocation = *((_DWORD *)this + 658);
          LODWORD(v12) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
                           (struct VMBCHANNEL__ **)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 4080LL),
                           Current,
                           a2,
                           &v65,
                           0);
          if ( (int)v12 < 0 )
          {
            v57 = WdLogNewEntry5_WdError(v56);
            *(_QWORD *)(v57 + 24) = 3816LL;
            WdLogEvent5_WdError(v57);
          }
          *((_QWORD *)this + 332) = v65.pData;
          if ( (int)v12 >= 0 )
          {
            v58 = v70;
            if ( !v70 )
            {
              v59 = WdLogNewEntry5_WdAssertion(v56);
              *(_QWORD *)(v59 + 24) = 3822LL;
              WdLogEvent5_WdAssertion(v59);
              v58 = v70;
            }
            Width = v66.Width;
            *((_DWORD *)this + 661) = v58;
            Height = v66.Height;
            *((_DWORD *)this + 663) = v66.Height;
            *((_DWORD *)this + 675) = Height;
            *((_DWORD *)this + 662) = Width;
            *((_QWORD *)this + 336) = 0LL;
            *((_DWORD *)this + 674) = Width;
          }
        }
        else
        {
          v55 = WdLogNewEntry5_WdError(v54);
          *(_QWORD *)(v55 + 24) = v12;
          WdLogEvent5_WdError(v55);
        }
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v63);
      }
    }
    goto LABEL_52;
  }
  v22 = (_QWORD *)WdLogNewEntry5_WdError(v21);
  LODWORD(v23) = -1073741811;
  v22[3] = a2;
  v22[4] = v64;
  v22[5] = -1073741811LL;
LABEL_16:
  WdLogEvent5_WdError(v22);
LABEL_53:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v64);
  return (unsigned int)v23;
}
