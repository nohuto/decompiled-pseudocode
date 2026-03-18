/*
 * XREFs of ?QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z @ 0x1C00C40DC
 * Callers:
 *     DxgkQueryAllocationResidency @ 0x1C009C3C0 (DxgkQueryAllocationResidency.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0001C48 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?VidMmQueryAllocationResidency@VIDMM_EXPORT@@QEAA?AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C000DE0C (-VidMmQueryAllocationResidency@VIDMM_EXPORT@@QEAA-AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAVVIDM.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0013770 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0013830 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?VmBusSendQueryAllocationResidency@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@@Z @ 0x1C0030FD0 (-VmBusSendQueryAllocationResidency@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EPEAU_D3DKMT_.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00CADD0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDEVICE::QueryAllocationResidency(
        struct DXGPROCESS **this,
        struct _D3DKMT_QUERYALLOCATIONRESIDENCY *a2,
        char a3,
        __int64 a4)
{
  __int64 hResource; // r8
  _QWORD *v8; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  _QWORD *v16; // rax
  D3DKMT_ALLOCATIONRESIDENCYSTATUS v17; // esi
  __int64 v18; // r14
  int v19; // eax
  _DWORD *pResidencyStatus; // rdx
  UINT i; // r14d
  __int64 v22; // r15
  unsigned int *v23; // rdx
  unsigned int v24; // r12d
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r9
  _QWORD *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  struct DXGPROCESS *v31; // r9
  _QWORD *v32; // rax
  D3DKMT_ALLOCATIONRESIDENCYSTATUS AllocationResidency; // eax
  D3DKMT_ALLOCATIONRESIDENCYSTATUS *v34; // r8
  _BYTE v35[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v36; // [rsp+78h] [rbp+10h] BYREF

  hResource = a2->hResource;
  if ( (_DWORD)hResource && a2->AllocationCount )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, hResource, a4);
    v8[3] = this;
    v8[4] = -1073741811LL;
LABEL_46:
    WdLogEvent5_WdWarning(v8);
    return 3221225485LL;
  }
  if ( *((_BYTE *)this + 1821) )
  {
    LOBYTE(a4) = a3;
    return DXGADAPTER::VmBusSendQueryAllocationResidency(
             *((struct VMBCHANNEL__ ***)this[2] + 2),
             this[5],
             (struct DXGDEVICE *)this,
             a4,
             a2);
  }
  if ( !(_DWORD)hResource )
  {
    if ( a2->AllocationCount )
    {
      for ( i = 0; ; ++i )
      {
        if ( i >= a2->AllocationCount )
          return 0LL;
        if ( a3 )
        {
          v22 = i;
          v23 = (unsigned int *)&a2->phAllocationList[v22];
          if ( (unsigned __int64)v23 >= MmUserProbeAddress )
            v23 = (unsigned int *)MmUserProbeAddress;
          v24 = *v23;
        }
        else
        {
          v22 = i;
          v24 = a2->phAllocationList[v22];
        }
        DXGPROCESS::GetAllocationSafe((__int64)this[5], (DXGALLOCATIONREFERENCE *)&v36, v24);
        if ( !v36 )
          break;
        v29 = *(_QWORD *)(*(_QWORD *)(v36 + 8) + 16LL);
        v30 = *(_QWORD *)(v29 + 16);
        v31 = this[2];
        if ( v30 != *((_QWORD *)v31 + 2) )
        {
          v32 = (_QWORD *)WdLogNewEntry5_WdError(v29, v30);
          v32[3] = this;
          v32[4] = v36;
          v32[5] = -1073741811LL;
          WdLogEvent5_WdError(v32);
          goto LABEL_35;
        }
        AllocationResidency = (unsigned int)VIDMM_EXPORT::VidMmQueryAllocationResidency(
                                              *((VIDMM_EXPORT **)v31 + 54),
                                              *((struct VIDMM_GLOBAL **)v31 + 55),
                                              *(struct _VIDMM_MULTI_ALLOC **)(v36 + 24));
        if ( a3 )
        {
          v34 = &a2->pResidencyStatus[v22];
          if ( (unsigned __int64)v34 >= MmUserProbeAddress )
            v34 = (D3DKMT_ALLOCATIONRESIDENCYSTATUS *)MmUserProbeAddress;
          *v34 = AllocationResidency;
        }
        else
        {
          a2->pResidencyStatus[v22] = AllocationResidency;
        }
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v36);
      }
      v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, 0LL, v27);
      v28[3] = this;
      v28[4] = v24;
      v28[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v28);
LABEL_35:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v36);
      return 3221225485LL;
    }
    v8 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, hResource, a4);
    v8[3] = this;
    v8[4] = a2->AllocationCount;
    v8[5] = -1073741811LL;
    goto LABEL_46;
  }
  DXGPROCESS::GetResourceSafe((__int64)this[5], (DXGRESOURCEREFERENCE *)&v36, hResource);
  if ( !v36 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, 0LL, v11, v12);
    v13[3] = this;
    v13[4] = a2->hResource;
    v13[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v13);
LABEL_9:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v36);
    return 3221225485LL;
  }
  v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 8) + 16LL) + 16LL);
  v15 = *((_QWORD *)this[2] + 2);
  if ( v14 != v15 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v15, v36);
    v16[3] = this;
    v16[4] = v36;
    v16[5] = -1073741811LL;
    WdLogEvent5_WdError(v16);
    goto LABEL_9;
  }
  v17 = D3DKMT_ALLOCATIONRESIDENCYSTATUS_RESIDENTINGPUMEMORY;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v35, (struct DXGFASTMUTEX *const)(v36 + 80), v14, v12);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v35);
  v18 = *(_QWORD *)(v36 + 24);
  if ( v18 )
  {
    while ( 1 )
    {
      v19 = VIDMM_EXPORT::VidMmQueryAllocationResidency(
              *((VIDMM_EXPORT **)this[2] + 54),
              *((struct VIDMM_GLOBAL **)this[2] + 55),
              *(struct _VIDMM_MULTI_ALLOC **)(v18 + 24));
      if ( v19 == 3 )
        break;
      if ( v19 == 2 )
        v17 = D3DKMT_ALLOCATIONRESIDENCYSTATUS_RESIDENTINSHAREDMEMORY;
      v18 = *(_QWORD *)(v18 + 64);
      if ( !v18 )
        goto LABEL_19;
    }
    v17 = D3DKMT_ALLOCATIONRESIDENCYSTATUS_NOTRESIDENT;
  }
LABEL_19:
  if ( a3 )
  {
    pResidencyStatus = a2->pResidencyStatus;
    if ( (unsigned __int64)pResidencyStatus >= MmUserProbeAddress )
      pResidencyStatus = (_DWORD *)MmUserProbeAddress;
    *pResidencyStatus = v17;
  }
  else
  {
    *a2->pResidencyStatus = v17;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v35);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v36);
  return 0LL;
}
