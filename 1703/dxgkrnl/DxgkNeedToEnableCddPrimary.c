/*
 * XREFs of DxgkNeedToEnableCddPrimary @ 0x1C017C5B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C000B7E8 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00E87E0 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00F7EEC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 */

char __fastcall DxgkNeedToEnableCddPrimary(struct DXGADAPTER *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  __int64 v5; // rsi
  __int64 v7; // rax
  int PairingAdapters; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbp
  _QWORD *v14; // rax
  DXGADAPTER ***v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  _BYTE v23[8]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v24[32]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v25[64]; // [rsp+58h] [rbp-40h] BYREF
  struct DXGADAPTER *v26; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 v27; // [rsp+B0h] [rbp+18h] BYREF

  v4 = 0;
  v5 = (unsigned int)a2;
  if ( !a1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 5757LL;
    WdLogEvent5_WdAssertion(v7);
  }
  PairingAdapters = DxgkpGetPairingAdapters(a1, (unsigned int)v5, 0LL, 0LL, &v26, &v27);
  v13 = PairingAdapters;
  if ( PairingAdapters >= 0 )
  {
    v16 = (DXGADAPTER ***)v26;
    if ( !v26 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
      *(_QWORD *)(v17 + 24) = 5787LL;
      WdLogEvent5_WdAssertion(v17);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v23, (struct DXGADAPTER *const)v16, 0LL);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v16);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v23) >= 0 )
    {
      if ( !v16[285] )
      {
        v22 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
        *(_QWORD *)(v22 + 24) = 5801LL;
        WdLogEvent5_WdAssertion(v22);
      }
      if ( !ADAPTER_DISPLAY::GetCddPrimaryAllocation(v16[285], (unsigned int)v5, 0LL, v21)
        && !ADAPTER_DISPLAY::GetVidPnSourceOwner(v16[285], v5) )
      {
        v4 = 1;
      }
    }
    COREACCESS::~COREACCESS((COREACCESS *)v25);
    COREACCESS::~COREACCESS((COREACCESS *)v24);
    return v4;
  }
  else
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdEvent(v10);
    v14[3] = a1;
    v14[4] = v5;
    v14[5] = v13;
    WdLogEvent5_WdEvent(v14);
    return 0;
  }
}
