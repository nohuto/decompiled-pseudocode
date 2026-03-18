/*
 * XREFs of ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B4C30
 * Callers:
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B51E8 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?VmBusSendLock2@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C003056C (-VmBusSendLock2@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z.c)
 *     ?VmBusSendMakeResident@DXGADAPTER@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C00309F0 (-VmBusSendMakeResident@DXGADAPTER@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFEREN.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00881D8 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C9C30 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00CCDB0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00CFC9C (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ @ 0x1C01B4380 (-DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ.c)
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
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  unsigned int v16; // edx
  __int64 v17; // r9
  int v18; // r8d
  struct _EX_RUNDOWN_REF *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rdi
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  _QWORD *v34; // rax
  D3DKMT_HANDLE v35; // eax
  DXGADAPTER **v36; // r8
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // r15
  D3DKMT_HANDLE hSyncObject; // r12d
  __int64 v43; // rax
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rcx
  int v49; // eax
  unsigned int v50; // edi
  struct DXGPROCESS *Current; // r15
  unsigned int v52; // ecx
  __int64 v53; // r8
  int v54; // edx
  struct _EX_RUNDOWN_REF *v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  PERESOURCE **v60; // rax
  __int64 v61; // rax
  int Resident; // eax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rcx
  __int64 v70; // rax
  int v71; // eax
  __int64 v72; // rax
  UINT Width; // ecx
  UINT Height; // eax
  unsigned int v76[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct _EX_RUNDOWN_REF *v77; // [rsp+58h] [rbp-A8h] BYREF
  struct _D3DKMT_LOCK2 v78; // [rsp+60h] [rbp-A0h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v79; // [rsp+78h] [rbp-88h] BYREF
  struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 v80; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v81[52]; // [rsp+110h] [rbp+10h] BYREF
  struct DXGSYNCOBJECT *v82; // [rsp+2B0h] [rbp+1B0h] BYREF
  int v83; // [rsp+2B8h] [rbp+1B8h]

  v4 = *((_QWORD *)a2 + 2);
  v6 = a4;
  *(_QWORD *)v76 = a4;
  v7 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v4 + 16)) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v13 + 24) = 3688LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( v6 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(v6[3]);
  v14 = *((_QWORD *)a2 + 5);
  LODWORD(v15) = 0;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v14 + 168));
  v16 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
  if ( v16 < *(_DWORD *)(v14 + 208)
    && (v17 = *(_QWORD *)(v14 + 192),
        v18 = *(_DWORD *)(v17 + 16LL * v16 + 8),
        (((unsigned int)v7 >> 26) & 0x30) == (*(_BYTE *)(v17 + 16LL * v16 + 8) & 0x30))
    && (v18 & 0x1000) == 0
    && (v18 & 0xF) != 0
    && (*(_BYTE *)(v17 + 16LL * v16 + 8) & 0xF) == 5 )
  {
    v19 = *(struct _EX_RUNDOWN_REF **)(v17 + 16LL * v16);
  }
  else
  {
    v19 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v77, v19);
  ExReleasePushLockSharedEx(v14 + 168, 0LL);
  KeLeaveCriticalRegion();
  memset(&v79, 0, sizeof(v79));
  if ( !v77 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
    v34[3] = -1073741811LL;
    v34[4] = this;
    v34[5] = v7;
    WdLogEvent5_WdWarning(v34);
    goto LABEL_19;
  }
  v24 = *((_QWORD *)a2 + 2);
  v25 = *(_QWORD *)(v77[1].Count + 16);
  v26 = *(_QWORD *)(v24 + 16);
  if ( *(_QWORD *)(v25 + 16) == v26 )
  {
    v79.hAllocation = *(HANDLE *)(v77[6].Count + 16);
    v29 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*(_QWORD *)(v24 + 16) + 2288LL), &v79, v24);
    v28 = v29;
    if ( v29 < 0 )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30);
      v27[3] = v28;
      goto LABEL_17;
    }
LABEL_19:
    if ( !*((_DWORD *)this + 666) )
    {
      *((_QWORD *)this + 335) = 0LL;
      memset(&v80, 0, sizeof(v80));
      v35 = *((_DWORD *)a2 + 83);
      v36 = (DXGADAPTER **)*((_QWORD *)a2 + 2);
      v80.Info.Flags.Value |= 0x80u;
      v80.hDevice = v35;
      v80.Info.Type = D3DDDI_MONITORED_FENCE;
      v37 = CreateSynchronizationObjectInternal(a2, 0, v36, &v80, &v82, (struct DXGDEVICESYNCOBJECT **)this + 334, 0LL);
      v15 = v37;
      if ( v37 < 0 )
      {
        v40 = WdLogNewEntry5_WdError(v39, v38);
        *(_QWORD *)(v40 + 24) = v15;
        *(_QWORD *)(v40 + 32) = 3745LL;
        WdLogEvent5_WdError(v40);
LABEL_53:
        LODWORD(v28) = v15;
        goto LABEL_54;
      }
      v41 = *((_QWORD *)a2 + 5);
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v41 + 168));
      hSyncObject = v80.hSyncObject;
      v43 = (v80.hSyncObject >> 6) & 0xFFFFFF;
      if ( (unsigned int)v43 < *(_DWORD *)(v41 + 208) )
      {
        v44 = *(_QWORD *)(v41 + 192);
        v45 = *(unsigned int *)(v44 + 16 * v43 + 8);
        if ( ((v80.hSyncObject >> 26) & 0x30) == (*(_BYTE *)(v44 + 16 * v43 + 8) & 0x30) && (v45 & 0xF) != 0 )
        {
          v46 = 2 * ((*(_QWORD *)&v80.hSyncObject >> 6) & 0xFFFFFFLL);
          if ( (*(_DWORD *)(v44 + 16 * ((*(_QWORD *)&v80.hSyncObject >> 6) & 0xFFFFFFLL) + 8) & 0x1000) == 0 )
          {
            v47 = WdLogNewEntry5_WdAssertion((v80.hSyncObject >> 26) & 0x30, v45, v44, 0xFFFFFFLL);
            *(_QWORD *)(v47 + 24) = 190LL;
            WdLogEvent5_WdAssertion(v47);
          }
          *(_DWORD *)(*(_QWORD *)(v41 + 192) + 8 * v46 + 8) &= ~0x1000u;
        }
      }
      *(_QWORD *)(v41 + 176) = 0LL;
      ExReleasePushLockExclusiveEx(v41 + 168, 0LL);
      KeLeaveCriticalRegion();
      v6 = *(PERESOURCE ***)v76;
      *((_DWORD *)this + 666) = hSyncObject;
    }
    if ( !*((_DWORD *)this + 660) )
      goto LABEL_34;
    if ( v79.Width != *((_DWORD *)this + 662) || v79.Height != *((_DWORD *)this + 663) )
      BLTQUEUE::DestroyStagingBuffer(this);
    if ( !*((_DWORD *)this + 660) )
    {
LABEL_34:
      memset(v81, 0, 0x198uLL);
      v82 = *(struct DXGSYNCOBJECT **)&v79.Width;
      v83 = 0;
      v81[3] = &v82;
      HIDWORD(v81[0]) = 0;
      LODWORD(v81[2]) = 3;
      LODWORD(v15) = DXGDEVICE::CreateStandardAllocation(a2, (struct _D3DKM_CREATESTANDARDALLOCATION *)v81, v6);
      if ( (int)v15 >= 0 )
      {
        v49 = v81[1];
        v50 = HIDWORD(v81[6]);
        *((_DWORD *)this + 658) = HIDWORD(v81[6]);
        *((_DWORD *)this + 660) = v49;
        Current = DXGPROCESS::GetCurrent(v48);
        DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 168));
        v52 = (v50 >> 6) & 0xFFFFFF;
        if ( v52 < *((_DWORD *)Current + 52)
          && (v53 = *((_QWORD *)Current + 24),
              v54 = *(_DWORD *)(v53 + 16LL * v52 + 8),
              ((v50 >> 26) & 0x30) == (*(_BYTE *)(v53 + 16LL * v52 + 8) & 0x30))
          && (v54 & 0x1000) == 0
          && (v54 & 0xF) != 0
          && (*(_BYTE *)(v53 + 16LL * v52 + 8) & 0xF) == 5 )
        {
          v55 = *(struct _EX_RUNDOWN_REF **)(v53 + 16LL * v52);
        }
        else
        {
          v55 = 0LL;
        }
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v76, v55);
        ExReleasePushLockSharedEx((char *)Current + 168, 0LL);
        KeLeaveCriticalRegion();
        v60 = *(PERESOURCE ***)v76;
        if ( !*(_QWORD *)v76 )
        {
          v61 = WdLogNewEntry5_WdAssertion(v57, v56, v58, v59);
          *(_QWORD *)(v61 + 24) = 3790LL;
          WdLogEvent5_WdAssertion(v61);
          v60 = *(PERESOURCE ***)v76;
        }
        *((_DWORD *)this + 659) = *((_DWORD *)v60 + 24);
        Resident = DXGADAPTER::VmBusSendMakeResident(
                     *(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL),
                     *((_DWORD *)Current + 96),
                     *((_DWORD *)a2 + 84),
                     0,
                     (struct D3DDDI_MAKERESIDENT_FLAGS)3,
                     1u,
                     (const struct DXGALLOCATIONREFERENCE *)v76,
                     0LL,
                     0LL);
        v15 = Resident;
        if ( Resident >= 0 )
        {
          memset(&v78, 0, sizeof(v78));
          v78.hAllocation = *((_DWORD *)this + 658);
          LODWORD(v15) = DXGADAPTER::VmBusSendLock2(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL), Current, a2, &v78, 0);
          if ( (int)v15 < 0 )
          {
            v70 = WdLogNewEntry5_WdError(v69, v66);
            *(_QWORD *)(v70 + 24) = 3817LL;
            WdLogEvent5_WdError(v70);
          }
          *((_QWORD *)this + 332) = v78.pData;
          if ( (int)v15 >= 0 )
          {
            v71 = v83;
            if ( !v83 )
            {
              v72 = WdLogNewEntry5_WdAssertion(v69, v66, v67, v68);
              *(_QWORD *)(v72 + 24) = 3824LL;
              WdLogEvent5_WdAssertion(v72);
              v71 = v83;
            }
            Width = v79.Width;
            *((_QWORD *)this + 336) = 0LL;
            *((_DWORD *)this + 661) = v71;
            Height = v79.Height;
            *((_DWORD *)this + 663) = v79.Height;
            *((_DWORD *)this + 675) = Height;
            *((_DWORD *)this + 662) = Width;
            *((_DWORD *)this + 674) = Width;
          }
        }
        else
        {
          v65 = WdLogNewEntry5_WdError(v64, v63);
          *(_QWORD *)(v65 + 24) = v15;
          WdLogEvent5_WdError(v65);
        }
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v76, v66, v67, v68);
      }
    }
    goto LABEL_53;
  }
  v27 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25);
  LODWORD(v28) = -1073741811;
  v27[3] = a2;
  v27[4] = v77;
  v27[5] = -1073741811LL;
LABEL_17:
  WdLogEvent5_WdError(v27);
LABEL_54:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v77, v30, v32, v33);
  return (unsigned int)v28;
}
