/*
 * XREFs of ?VmBusSendQueryAllocationResidency@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@@Z @ 0x1C01975B8
 * Callers:
 *     ?QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z @ 0x1C01830C8 (-QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002D7C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008B68 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0014674 (-GetResourceUnsafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C00146EC (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C008A3F0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00CECE8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00F925C (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0198920 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAllocationResidency(
        struct VMBCHANNEL__ **this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        char a4,
        struct _D3DKMT_QUERYALLOCATIONRESIDENCY *a5)
{
  unsigned int v7; // r15d
  struct _D3DKMT_QUERYALLOCATIONRESIDENCY *v8; // r14
  __int64 AllocationCount; // r11
  __int64 v10; // rax
  unsigned int v12; // ecx
  struct _EX_RUNDOWN_REF *v13; // rax
  __int64 v14; // rcx
  struct _EX_RUNDOWN_REF *v15; // rdi
  __int64 v16; // rax
  int v17; // eax
  unsigned int Count; // ebx
  unsigned int v19; // r13d
  __int64 v20; // rcx
  struct _EX_RUNDOWN_REF *v21; // rsi
  __int64 v22; // rax
  unsigned int hResource; // r8d
  __int64 v24; // rcx
  __int64 v25; // rax
  UINT i; // r12d
  __int64 v27; // r13
  unsigned int *v28; // rdx
  unsigned int v29; // r8d
  __int64 Count_low; // rcx
  __int64 v31; // rax
  __int64 j; // r9
  D3DKMT_ALLOCATIONRESIDENCYSTATUS *pResidencyStatus; // rax
  D3DKMT_ALLOCATIONRESIDENCYSTATUS *v34; // rdx
  struct _MDL *v35; // [rsp+28h] [rbp-80h]
  unsigned int v36; // [rsp+30h] [rbp-78h]
  unsigned int v37; // [rsp+34h] [rbp-74h]
  struct _EX_RUNDOWN_REF *v38[3]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v39[80]; // [rsp+58h] [rbp-50h] BYREF

  v7 = 56;
  v8 = a5;
  AllocationCount = a5->AllocationCount;
  if ( (a5->hResource == 0) == ((_DWORD)AllocationCount == 0) )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v10 + 24) = 5359LL;
LABEL_3:
    WdLogEvent5_WdAssertion(v10);
    return 3221225485LL;
  }
  if ( (_DWORD)AllocationCount )
  {
    if ( (unsigned __int64)(4 * AllocationCount) > 0xFFFFFFFF )
    {
      v10 = WdLogNewEntry5_WdAssertion(0xFFFFFFFFLL);
      *(_QWORD *)(v10 + 24) = 5366LL;
      goto LABEL_3;
    }
    v12 = 4 * AllocationCount;
    if ( v12 >= 0xFFFFFFC8 )
    {
      v10 = WdLogNewEntry5_WdAssertion((unsigned int)(4 * AllocationCount));
      *(_QWORD *)(v10 + 24) = 5371LL;
      goto LABEL_3;
    }
    v7 = v12 + 56;
  }
  v13 = (struct _EX_RUNDOWN_REF *)operator new(v7, 0x4B677844u, 1, (POOL_TYPE)512);
  v15 = v13;
  v38[1] = v13;
  if ( !v13 )
  {
    v16 = WdLogNewEntry5_WdLowResource(v14);
    *(_QWORD *)(v16 + 24) = 5379LL;
    WdLogEvent5_WdLowResource(v16);
    return 3221225495LL;
  }
  v13->Count = 0LL;
  LODWORD(v13[1].Count) = 0;
  HIDWORD(v13[1].Ptr) = 0;
  LODWORD(v13[2].Count) = 41;
  memset(&v13[3], 0, 0x20uLL);
  LODWORD(v15[1].Count) = *((_DWORD *)a2 + 106);
  LODWORD(v15[3].Count) = *((_DWORD *)a3 + 84);
  LODWORD(v15[5].Count) = v8->AllocationCount;
  v17 = 1;
  if ( !v8->hResource )
    v17 = v8->AllocationCount;
  v36 = v17;
  Count = -1073741811;
  LODWORD(a5) = -1073741811;
  v19 = (4 * v17 + 7) & 0xFFFFFFF8;
  v37 = v19;
  v21 = (struct _EX_RUNDOWN_REF *)operator new[](v19, 0x4B677844u, (POOL_TYPE)512);
  v38[2] = v21;
  if ( v21 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v39, a2);
    hResource = v8->hResource;
    if ( hResource )
    {
      DXGPROCESS::GetResourceUnsafe((__int64)a2, (DXGRESOURCEREFERENCE *)&a5, hResource);
      if ( !a5 || (v24 = *(&a5->AllocationCount + 1), !(_DWORD)v24) )
      {
        v25 = WdLogNewEntry5_WdAssertion(v24);
        *(_QWORD *)(v25 + 24) = 5409LL;
        WdLogEvent5_WdAssertion(v25);
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&a5);
LABEL_22:
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v39);
        goto LABEL_46;
      }
      v8->hResource = v24;
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&a5);
    }
    else
    {
      for ( i = 0; i < v8->AllocationCount; ++i )
      {
        v27 = i;
        if ( a4 )
        {
          v28 = (unsigned int *)&v8->phAllocationList[v27];
          if ( (unsigned __int64)v28 >= MmUserProbeAddress )
            v28 = (unsigned int *)MmUserProbeAddress;
          v29 = *v28;
        }
        else
        {
          v29 = v8->phAllocationList[i];
        }
        DXGPROCESS::GetAllocationUnsafe((__int64)a2, (DXGALLOCATIONREFERENCE *)v38, v29);
        if ( !v38[0] || (Count_low = LODWORD(v38[0][12].Count), !(_DWORD)Count_low) )
        {
          v31 = WdLogNewEntry5_WdAssertion(Count_low);
          *(_QWORD *)(v31 + 24) = 5442LL;
          WdLogEvent5_WdAssertion(v31);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v38);
          goto LABEL_22;
        }
        *(_DWORD *)((char *)&v15[7].Count + v27 * 4) = Count_low;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v38);
      }
      v19 = v37;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v39);
    LODWORD(a5) = v19;
    VmBusSendSyncMessage(*this, (struct DXGKVMB_COMMAND_BASE *)v15, v7, v21, (unsigned int *)&a5, v35);
    if ( (unsigned int)a5 < v19 )
    {
      Count = -1073741823;
    }
    else
    {
      Count = v21->Count;
      if ( SLODWORD(v21->Count) >= 0 )
      {
        for ( j = 0LL; (unsigned int)j < v36; j = (unsigned int)(j + 1) )
        {
          pResidencyStatus = v8->pResidencyStatus;
          if ( a4 )
          {
            v34 = &pResidencyStatus[j];
            if ( (unsigned __int64)v34 >= MmUserProbeAddress )
              v34 = (D3DKMT_ALLOCATIONRESIDENCYSTATUS *)MmUserProbeAddress;
            *v34 = *((D3DKMT_ALLOCATIONRESIDENCYSTATUS *)&v21->Ptr + j + 1);
          }
          else
          {
            pResidencyStatus[j] = *((D3DKMT_ALLOCATIONRESIDENCYSTATUS *)&v21->Ptr + j + 1);
          }
        }
      }
    }
  }
  else
  {
    v22 = WdLogNewEntry5_WdLowResource(v20);
    *(_QWORD *)(v22 + 24) = 5397LL;
    WdLogEvent5_WdLowResource(v22);
    Count = -1073741801;
  }
LABEL_46:
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  if ( v21 )
    ExFreePoolWithTag(v21, 0);
  return Count;
}
