/*
 * XREFs of ?VmBusSendQueryAllocationResidency@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@@Z @ 0x1C0030FD0
 * Callers:
 *     ?QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z @ 0x1C00C40DC (-QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000755C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C00138F0 (-GetResourceUnsafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0013970 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0032214 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00A5924 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00AF918 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B1A9C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00CADD0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGADAPTER::VmBusSendQueryAllocationResidency(
        struct VMBCHANNEL__ **this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        __int64 a4,
        struct _D3DKMT_QUERYALLOCATIONRESIDENCY *a5)
{
  unsigned int v7; // r15d
  struct _D3DKMT_QUERYALLOCATIONRESIDENCY *v8; // rsi
  __int64 AllocationCount; // r11
  __int64 v10; // rax
  char *v12; // rax
  __int64 v13; // rcx
  char *v14; // rdi
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // ebx
  unsigned int v18; // r13d
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int *v22; // r14
  __int64 v23; // rax
  unsigned int hResource; // r8d
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  UINT i; // r12d
  __int64 v31; // r13
  unsigned int *v32; // rdx
  unsigned int v33; // r8d
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  struct VMBCHANNEL__ *v39; // rcx
  __int64 j; // r9
  D3DKMT_ALLOCATIONRESIDENCYSTATUS *pResidencyStatus; // rax
  D3DKMT_ALLOCATIONRESIDENCYSTATUS *v42; // rdx
  struct _MDL *v43; // [rsp+28h] [rbp-80h]
  unsigned int v44; // [rsp+30h] [rbp-78h]
  unsigned int v45; // [rsp+34h] [rbp-74h]
  _QWORD v46[3]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v47[80]; // [rsp+58h] [rbp-50h] BYREF
  char v50; // [rsp+C8h] [rbp+20h]

  v50 = a4;
  v7 = 48;
  v8 = a5;
  AllocationCount = a5->AllocationCount;
  if ( (a5->hResource == 0) == ((_DWORD)AllocationCount == 0) )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v10 + 24) = 3679LL;
LABEL_3:
    WdLogEvent5_WdAssertion(v10);
    return 3221225485LL;
  }
  if ( (_DWORD)AllocationCount )
  {
    if ( (unsigned __int64)(4 * AllocationCount) > 0xFFFFFFFF )
    {
      v10 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
      *(_QWORD *)(v10 + 24) = 3686LL;
      goto LABEL_3;
    }
    if ( (unsigned int)(4 * AllocationCount + 48) < 0x30 )
    {
      v10 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
      *(_QWORD *)(v10 + 24) = 3691LL;
      goto LABEL_3;
    }
    v7 = 4 * AllocationCount + 48;
  }
  v12 = (char *)operator new(v7, (unsigned int)a2, 1, (enum _POOL_TYPE)512);
  v14 = v12;
  v46[1] = v12;
  if ( !v12 )
  {
    v15 = WdLogNewEntry5_WdLowResource(v13);
    *(_QWORD *)(v15 + 24) = 3699LL;
    WdLogEvent5_WdLowResource(v15);
    return 3221225495LL;
  }
  memset(v12 + 16, 0, 0x20uLL);
  *((_DWORD *)v14 + 2) = 53;
  *((_DWORD *)v14 + 3) = *((_DWORD *)a2 + 96);
  *((_DWORD *)v14 + 4) = *((_DWORD *)a3 + 84);
  *((_DWORD *)v14 + 8) = v8->AllocationCount;
  v16 = 1;
  if ( !v8->hResource )
    v16 = v8->AllocationCount;
  v44 = v16;
  v17 = -1073741811;
  LODWORD(a5) = -1073741811;
  v18 = (4 * v16 + 7) & 0xFFFFFFF8;
  v45 = v18;
  v22 = (int *)operator new[](v18, 0x4B677844u, (enum _POOL_TYPE)512);
  v46[2] = v22;
  if ( v22 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v47, a2, v20, v21);
    hResource = v8->hResource;
    if ( hResource )
    {
      DXGPROCESS::GetResourceUnsafe((__int64)a2, (DXGRESOURCEREFERENCE *)&a5, hResource);
      if ( !a5 || (v26 = *(&a5->AllocationCount + 1), !(_DWORD)v26) )
      {
        v29 = WdLogNewEntry5_WdAssertion(v26, v25, v27, v28);
        *(_QWORD *)(v29 + 24) = 3729LL;
        WdLogEvent5_WdAssertion(v29);
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&a5);
LABEL_21:
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v47);
        goto LABEL_48;
      }
      v8->hResource = v26;
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&a5);
    }
    else
    {
      for ( i = 0; i < v8->AllocationCount; ++i )
      {
        v31 = i;
        if ( v50 )
        {
          v32 = (unsigned int *)&v8->phAllocationList[v31];
          if ( (unsigned __int64)v32 >= MmUserProbeAddress )
            v32 = (unsigned int *)MmUserProbeAddress;
          v33 = *v32;
        }
        else
        {
          v33 = v8->phAllocationList[i];
        }
        DXGPROCESS::GetAllocationUnsafe((__int64)a2, (DXGALLOCATIONREFERENCE *)v46, v33);
        if ( !v46[0] || (v35 = *(unsigned int *)(v46[0] + 96LL), !(_DWORD)v35) )
        {
          v38 = WdLogNewEntry5_WdAssertion(v35, v34, v36, v37);
          *(_QWORD *)(v38 + 24) = 3762LL;
          WdLogEvent5_WdAssertion(v38);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v46);
          goto LABEL_21;
        }
        *(_DWORD *)&v14[v31 * 4 + 48] = v35;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v46);
      }
      v18 = v45;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v47);
    LODWORD(a5) = v18;
    if ( *((_BYTE *)this + 3880) )
      v39 = this[484];
    else
      v39 = 0LL;
    VmBusSendSyncMessage(v39, (struct DXGKVMB_COMMAND *)v14, v7, v22, (unsigned int *)&a5, v43);
    if ( (unsigned int)a5 < v18 )
    {
      v17 = -1073741823;
    }
    else
    {
      v17 = *v22;
      if ( *v22 >= 0 )
      {
        for ( j = 0LL; (unsigned int)j < v44; j = (unsigned int)(j + 1) )
        {
          pResidencyStatus = v8->pResidencyStatus;
          if ( v50 )
          {
            v42 = &pResidencyStatus[j];
            if ( (unsigned __int64)v42 >= MmUserProbeAddress )
              v42 = (D3DKMT_ALLOCATIONRESIDENCYSTATUS *)MmUserProbeAddress;
            *v42 = v22[j + 1];
          }
          else
          {
            pResidencyStatus[j] = v22[j + 1];
          }
        }
      }
    }
  }
  else
  {
    v23 = WdLogNewEntry5_WdLowResource(v19);
    *(_QWORD *)(v23 + 24) = 3717LL;
    WdLogEvent5_WdLowResource(v23);
    v17 = -1073741801;
  }
LABEL_48:
  operator delete[](v14);
  operator delete[](v22);
  return v17;
}
