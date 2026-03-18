/*
 * XREFs of DxgkNeedToEnableCddPrimary @ 0x1C0167910
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0019CE0 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00A9DAC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C010D8B4 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 */

char __fastcall DxgkNeedToEnableCddPrimary(struct DXGADAPTER *a1, unsigned int a2)
{
  char v2; // bl
  __int64 v3; // rsi
  __int64 v5; // rax
  int PairingAdapters; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbp
  _QWORD *v10; // rax
  DXGADAPTER ***v12; // rdi
  __int64 v13; // rax
  DXGADAPTER **v14; // rcx
  __int64 v15; // rax
  _BYTE v16[8]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v17[32]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v18[64]; // [rsp+58h] [rbp-40h] BYREF
  struct DXGADAPTER *v19; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 v20; // [rsp+B0h] [rbp+18h] BYREF

  v2 = 0;
  v3 = a2;
  if ( !a1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v5 + 24) = 6804LL;
    WdLogEvent5_WdAssertion(v5);
  }
  PairingAdapters = DxgkpGetPairingAdapters(a1, v3, 0LL, 0LL, &v19, &v20);
  v9 = PairingAdapters;
  if ( PairingAdapters >= 0 )
  {
    v12 = (DXGADAPTER ***)v19;
    if ( !v19 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v13 + 24) = 6834LL;
      WdLogEvent5_WdAssertion(v13);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v16, (struct DXGADAPTER *const)v12, 0LL);
    DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v12);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v16) >= 0 )
    {
      v14 = v12[307];
      if ( !v14 )
      {
        v15 = WdLogNewEntry5_WdAssertion(0LL);
        *(_QWORD *)(v15 + 24) = 6848LL;
        WdLogEvent5_WdAssertion(v15);
        v14 = v12[307];
      }
      if ( !ADAPTER_DISPLAY::GetCddPrimaryAllocation(v14, v3, 0) && !ADAPTER_DISPLAY::GetVidPnSourceOwner(v12[307], v3) )
        v2 = 1;
    }
    COREACCESS::~COREACCESS((COREACCESS *)v18);
    COREACCESS::~COREACCESS((COREACCESS *)v17);
    return v2;
  }
  else
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdEvent(v8, v7);
    v10[3] = a1;
    v10[4] = v3;
    v10[5] = v9;
    WdLogEvent5_WdEvent(v10);
    return 0;
  }
}
