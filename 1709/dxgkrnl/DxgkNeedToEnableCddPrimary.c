/*
 * XREFs of DxgkNeedToEnableCddPrimary @ 0x1C017FF70
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C000796C (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00ADE98 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00B1CE4 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 */

char __fastcall DxgkNeedToEnableCddPrimary(struct DXGADAPTER *a1, unsigned int a2)
{
  char v2; // bl
  __int64 v3; // rsi
  __int64 v5; // rax
  int PairingAdapters; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbp
  _QWORD *v12; // rax
  DXGADAPTER ***v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  _BYTE v18[8]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v19[32]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v20[64]; // [rsp+58h] [rbp-40h] BYREF
  struct DXGADAPTER *v21; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 v22; // [rsp+B0h] [rbp+18h] BYREF

  v2 = 0;
  v3 = a2;
  if ( !a1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v5 + 24) = 6065LL;
    WdLogEvent5_WdAssertion(v5);
  }
  PairingAdapters = DxgkpGetPairingAdapters(a1, v3, 0LL, 0LL, &v21, &v22);
  v11 = PairingAdapters;
  if ( PairingAdapters >= 0 )
  {
    v14 = (DXGADAPTER ***)v21;
    if ( !v21 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v15 + 24) = 6095LL;
      WdLogEvent5_WdAssertion(v15);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v18, (struct DXGADAPTER *const)v14, 0LL);
    DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v14);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v18) >= 0 )
    {
      if ( !v14[288] )
      {
        v17 = WdLogNewEntry5_WdAssertion(v16);
        *(_QWORD *)(v17 + 24) = 6109LL;
        WdLogEvent5_WdAssertion(v17);
      }
      if ( !ADAPTER_DISPLAY::GetCddPrimaryAllocation(v14[288], v3, 0)
        && !ADAPTER_DISPLAY::GetVidPnSourceOwner(v14[288], v3) )
      {
        v2 = 1;
      }
    }
    COREACCESS::~COREACCESS((COREACCESS *)v20);
    COREACCESS::~COREACCESS((COREACCESS *)v19);
    return v2;
  }
  else
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdEvent(v8, v7, v9, v10);
    v12[3] = a1;
    v12[4] = v3;
    v12[5] = v11;
    WdLogEvent5_WdEvent(v12);
    return 0;
  }
}
