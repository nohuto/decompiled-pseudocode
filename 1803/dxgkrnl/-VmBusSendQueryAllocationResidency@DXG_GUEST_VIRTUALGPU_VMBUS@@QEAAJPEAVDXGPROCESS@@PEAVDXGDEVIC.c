/*
 * XREFs of ?VmBusSendQueryAllocationResidency@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@@Z @ 0x1C0183FD8
 * Callers:
 *     ?QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z @ 0x1C016B2D0 (-QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000DC30 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0015020 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00152B0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C001A630 (-GetResourceUnsafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C001A6A4 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00E6170 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C018557C (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAllocationResidency(
        struct VMBCHANNEL__ **this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        char a4,
        struct _D3DKMT_QUERYALLOCATIONRESIDENCY *a5)
{
  struct _D3DKMT_QUERYALLOCATIONRESIDENCY *v7; // r14
  unsigned int v8; // r15d
  __int64 AllocationCount; // r10
  __int64 v10; // rax
  unsigned int v12; // ecx
  struct _EX_RUNDOWN_REF *v13; // rax
  __int64 v14; // rcx
  struct _EX_RUNDOWN_REF *v15; // rdi
  __int64 v16; // rax
  int v17; // eax
  int Count; // ebx
  unsigned int v19; // r13d
  __int64 v20; // rcx
  struct _EX_RUNDOWN_REF *v21; // rsi
  __int64 v22; // rax
  unsigned int hResource; // r8d
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 i; // r12
  unsigned int *v27; // rdx
  unsigned int v28; // r8d
  __int64 Count_low; // rcx
  __int64 v30; // rax
  __int64 j; // r8
  D3DKMT_ALLOCATIONRESIDENCYSTATUS *pResidencyStatus; // rax
  D3DKMT_ALLOCATIONRESIDENCYSTATUS *v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  struct _MDL *v36; // [rsp+28h] [rbp-80h]
  unsigned int v37; // [rsp+30h] [rbp-78h]
  struct _EX_RUNDOWN_REF *v38[3]; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v39[88]; // [rsp+50h] [rbp-58h] BYREF

  v7 = a5;
  v8 = 56;
  AllocationCount = a5->AllocationCount;
  if ( (a5->hResource == 0) == ((_DWORD)AllocationCount == 0) )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v10 + 24) = 6105LL;
LABEL_3:
    WdLogEvent5_WdAssertion(v10);
    return 3221225485LL;
  }
  if ( (_DWORD)AllocationCount )
  {
    if ( (unsigned __int64)(4 * AllocationCount) > 0xFFFFFFFF )
    {
      v10 = WdLogNewEntry5_WdAssertion(0xFFFFFFFFLL);
      *(_QWORD *)(v10 + 24) = 6112LL;
      goto LABEL_3;
    }
    v12 = 4 * AllocationCount;
    if ( v12 >= 0xFFFFFFC8 )
    {
      v10 = WdLogNewEntry5_WdAssertion((unsigned int)(4 * AllocationCount));
      *(_QWORD *)(v10 + 24) = 6117LL;
      goto LABEL_3;
    }
    v8 = v12 + 56;
  }
  v13 = (struct _EX_RUNDOWN_REF *)operator new(v8, 0x4B677844u, 1, (POOL_TYPE)512);
  v15 = v13;
  v38[1] = v13;
  if ( !v13 )
  {
    v16 = WdLogNewEntry5_WdLowResource(v14);
    *(_QWORD *)(v16 + 24) = 6125LL;
    WdLogEvent5_WdLowResource(v16);
    return 3221225495LL;
  }
  v13->Count = 0LL;
  LODWORD(v13[1].Count) = 0;
  HIDWORD(v13[1].Ptr) = 0;
  LODWORD(v13[2].Count) = 41;
  memset(&v13[3], 0, 0x20uLL);
  LODWORD(v15[1].Count) = *((_DWORD *)a2 + 98);
  LODWORD(v15[3].Count) = *((_DWORD *)a3 + 84);
  LODWORD(v15[5].Count) = v7->AllocationCount;
  v17 = 1;
  if ( !v7->hResource )
    v17 = v7->AllocationCount;
  v37 = v17;
  Count = -1073741811;
  LODWORD(a5) = -1073741811;
  v19 = (4 * v17 + 7) & 0xFFFFFFF8;
  v21 = (struct _EX_RUNDOWN_REF *)operator new[](v19, 0x4B677844u, (POOL_TYPE)512);
  v38[2] = v21;
  if ( v21 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v39, (struct _KTHREAD **)a2);
    hResource = v7->hResource;
    if ( hResource )
    {
      DXGPROCESS::GetResourceUnsafe((__int64)a2, (DXGRESOURCEREFERENCE *)&a5, hResource);
      if ( !a5 || (v24 = *(&a5->AllocationCount + 1), !(_DWORD)v24) )
      {
        v25 = WdLogNewEntry5_WdAssertion(v24);
        *(_QWORD *)(v25 + 24) = 6155LL;
        WdLogEvent5_WdAssertion(v25);
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&a5);
LABEL_22:
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v39);
        goto LABEL_45;
      }
      v7->hResource = v24;
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&a5);
    }
    else
    {
      for ( i = 0LL; (unsigned int)i < v7->AllocationCount; i = (unsigned int)(i + 1) )
      {
        v27 = (unsigned int *)&v7->phAllocationList[i];
        if ( a4 )
        {
          if ( (unsigned __int64)v27 >= MmUserProbeAddress )
            v27 = (unsigned int *)MmUserProbeAddress;
          v28 = *v27;
        }
        else
        {
          v28 = *v27;
        }
        DXGPROCESS::GetAllocationUnsafe((__int64)a2, (DXGALLOCATIONREFERENCE *)v38, v28);
        if ( !v38[0] || (Count_low = LODWORD(v38[0][12].Count), !(_DWORD)Count_low) )
        {
          v30 = WdLogNewEntry5_WdAssertion(Count_low);
          *(_QWORD *)(v30 + 24) = 6188LL;
          WdLogEvent5_WdAssertion(v30);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v38);
          goto LABEL_22;
        }
        *((_DWORD *)&v15[7].Count + i) = Count_low;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v38);
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v39);
    LODWORD(a5) = v19;
    Count = VmBusSendSyncMessage(*this, (struct DXGKVMB_COMMAND_BASE *)v15, v8, v21, (unsigned int *)&a5, v36);
    if ( Count >= 0 )
    {
      Count = -1073741823;
      if ( (unsigned int)a5 >= v19 )
      {
        Count = v21->Count;
        if ( SLODWORD(v21->Count) >= 0 )
        {
          for ( j = 0LL; (unsigned int)j < v37; j = (unsigned int)(j + 1) )
          {
            pResidencyStatus = v7->pResidencyStatus;
            if ( a4 )
            {
              v33 = &pResidencyStatus[j];
              if ( (unsigned __int64)v33 >= MmUserProbeAddress )
                v33 = (D3DKMT_ALLOCATIONRESIDENCYSTATUS *)MmUserProbeAddress;
              *v33 = *((D3DKMT_ALLOCATIONRESIDENCYSTATUS *)&v21->Ptr + j + 1);
            }
            else
            {
              pResidencyStatus[j] = *((D3DKMT_ALLOCATIONRESIDENCYSTATUS *)&v21->Ptr + j + 1);
            }
          }
        }
      }
    }
  }
  else
  {
    v22 = WdLogNewEntry5_WdLowResource(v20);
    *(_QWORD *)(v22 + 24) = 6143LL;
    WdLogEvent5_WdLowResource(v22);
    Count = -1073741801;
  }
LABEL_45:
  operator delete[](v15);
  operator delete[](v21);
  if ( Count < 0 )
  {
    v35 = WdLogNewEntry5_WdAssertion(v34);
    *(_QWORD *)(v35 + 24) = Count;
    WdLogEvent5_WdAssertion(v35);
  }
  return (unsigned int)Count;
}
