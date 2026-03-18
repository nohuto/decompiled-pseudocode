/*
 * XREFs of ?QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z @ 0x1C01830C8
 * Callers:
 *     DxgkQueryAllocationResidency @ 0x1C0184C10 (DxgkQueryAllocationResidency.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002ED4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0014504 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C00145BC (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?VidMmQueryAllocationResidency@VIDMM_EXPORT@@QEAA?AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00240B0 (-VidMmQueryAllocationResidency@VIDMM_EXPORT@@QEAA-AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAVVIDM.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C008A3F0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?VmBusSendQueryAllocationResidency@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@@Z @ 0x1C01975B8 (-VmBusSendQueryAllocationResidency@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVIC.c)
 */

int __fastcall DXGDEVICE::QueryAllocationResidency(
        struct DXGPROCESS **this,
        struct _D3DKMT_QUERYALLOCATIONRESIDENCY *a2,
        unsigned __int8 a3)
{
  __int64 hResource; // r8
  _QWORD *v7; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  D3DKMT_ALLOCATIONRESIDENCYSTATUS v14; // esi
  ULONG_PTR Count; // r14
  int v16; // eax
  _DWORD *pResidencyStatus; // rdx
  UINT i; // r14d
  __int64 v19; // r15
  unsigned int *v20; // rdx
  unsigned int v21; // r12d
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rcx
  struct DXGPROCESS *v26; // r9
  _QWORD *v27; // rax
  D3DKMT_ALLOCATIONRESIDENCYSTATUS AllocationResidency; // eax
  D3DKMT_ALLOCATIONRESIDENCYSTATUS *v29; // r8
  _BYTE v30[16]; // [rsp+30h] [rbp-38h] BYREF
  struct _EX_RUNDOWN_REF *v31; // [rsp+78h] [rbp+10h] BYREF

  hResource = a2->hResource;
  if ( (_DWORD)hResource && a2->AllocationCount )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, hResource);
    v7[3] = this;
    v7[4] = -1073741811LL;
LABEL_46:
    WdLogEvent5_WdWarning(v7);
    return -1073741811;
  }
  if ( *((_BYTE *)this + 1693) )
    return DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAllocationResidency(
             (DXG_GUEST_VIRTUALGPU_VMBUS *)(*((_QWORD *)this[2] + 2) + 3888LL),
             this[5],
             (struct DXGDEVICE *)this,
             a3,
             a2);
  if ( !(_DWORD)hResource )
  {
    if ( a2->AllocationCount )
    {
      for ( i = 0; ; ++i )
      {
        if ( i >= a2->AllocationCount )
          return 0;
        if ( a3 )
        {
          v19 = i;
          v20 = (unsigned int *)&a2->phAllocationList[v19];
          if ( (unsigned __int64)v20 >= MmUserProbeAddress )
            v20 = (unsigned int *)MmUserProbeAddress;
          v21 = *v20;
        }
        else
        {
          v19 = i;
          v21 = a2->phAllocationList[v19];
        }
        DXGPROCESS::GetAllocationSafe((__int64)this[5], (DXGALLOCATIONREFERENCE *)&v31, v21);
        if ( !v31 )
          break;
        v25 = *(_QWORD *)(v31[1].Count + 16);
        v26 = this[2];
        if ( *(_QWORD *)(v25 + 16) != *((_QWORD *)v26 + 2) )
        {
          v27 = (_QWORD *)WdLogNewEntry5_WdError(v25);
          v27[3] = this;
          v27[4] = v31;
          v27[5] = -1073741811LL;
          WdLogEvent5_WdError(v27);
          goto LABEL_35;
        }
        AllocationResidency = (unsigned int)VIDMM_EXPORT::VidMmQueryAllocationResidency(
                                              *((VIDMM_EXPORT **)v26 + 66),
                                              *((struct VIDMM_GLOBAL **)v26 + 67),
                                              (struct _VIDMM_MULTI_ALLOC *)v31[3].Count);
        if ( a3 )
        {
          v29 = &a2->pResidencyStatus[v19];
          if ( (unsigned __int64)v29 >= MmUserProbeAddress )
            v29 = (D3DKMT_ALLOCATIONRESIDENCYSTATUS *)MmUserProbeAddress;
          *v29 = AllocationResidency;
        }
        else
        {
          a2->pResidencyStatus[v19] = AllocationResidency;
        }
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v31);
      }
      v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, 0LL);
      v24[3] = this;
      v24[4] = v21;
      v24[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v24);
LABEL_35:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v31);
      return -1073741811;
    }
    v7 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, hResource);
    v7[3] = this;
    v7[4] = a2->AllocationCount;
    v7[5] = -1073741811LL;
    goto LABEL_46;
  }
  DXGPROCESS::GetResourceSafe((__int64)this[5], (DXGRESOURCEREFERENCE *)&v31, hResource);
  if ( !v31 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, 0LL, v10);
    v11[3] = this;
    v11[4] = a2->hResource;
    v11[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v11);
LABEL_9:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v31);
    return -1073741811;
  }
  v12 = *((_QWORD *)this[2] + 2);
  if ( *(_QWORD *)(*(_QWORD *)(v31[1].Count + 16) + 16LL) != v12 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v13[3] = this;
    v13[4] = v31;
    v13[5] = -1073741811LL;
    WdLogEvent5_WdError(v13);
    goto LABEL_9;
  }
  v14 = D3DKMT_ALLOCATIONRESIDENCYSTATUS_RESIDENTINGPUMEMORY;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v30, (struct DXGFASTMUTEX *const)&v31[10]);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
  Count = v31[3].Count;
  if ( Count )
  {
    while ( 1 )
    {
      v16 = VIDMM_EXPORT::VidMmQueryAllocationResidency(
              *((VIDMM_EXPORT **)this[2] + 66),
              *((struct VIDMM_GLOBAL **)this[2] + 67),
              *(struct _VIDMM_MULTI_ALLOC **)(Count + 24));
      if ( v16 == 3 )
        break;
      if ( v16 == 2 )
        v14 = D3DKMT_ALLOCATIONRESIDENCYSTATUS_RESIDENTINSHAREDMEMORY;
      Count = *(_QWORD *)(Count + 64);
      if ( !Count )
        goto LABEL_19;
    }
    v14 = D3DKMT_ALLOCATIONRESIDENCYSTATUS_NOTRESIDENT;
  }
LABEL_19:
  if ( a3 )
  {
    pResidencyStatus = a2->pResidencyStatus;
    if ( (unsigned __int64)pResidencyStatus >= MmUserProbeAddress )
      pResidencyStatus = (_DWORD *)MmUserProbeAddress;
    *pResidencyStatus = v14;
  }
  else
  {
    *a2->pResidencyStatus = v14;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v30);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v31);
  return 0;
}
