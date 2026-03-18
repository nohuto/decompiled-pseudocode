/*
 * XREFs of DxgkQueryModeListCacheLuid @ 0x1C00A5660
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?QueryModeListCacheLuid@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z @ 0x1C000B110 (-QueryModeListCacheLuid@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00D79B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00F7EEC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 */

__int64 __fastcall DxgkQueryModeListCacheLuid(struct _LUID *a1, __int64 a2, struct _LUID *a3)
{
  __int64 v3; // rsi
  DXGGLOBAL *Global; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGADAPTER *v9; // rdi
  __int64 PairingAdapters; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct DXGADAPTER *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  _BYTE v28[8]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v29[32]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v30[64]; // [rsp+58h] [rbp-40h] BYREF
  struct DXGADAPTER *v31; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 v32; // [rsp+B8h] [rbp+20h] BYREF

  v3 = (unsigned int)a2;
  if ( !a1 )
  {
    v22 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v22 + 24) = 5877LL;
LABEL_16:
    WdLogEvent5_WdError(v22);
    return 3221225485LL;
  }
  if ( !a3 )
  {
    v22 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v22 + 24) = 5884LL;
    goto LABEL_16;
  }
  Global = DXGGLOBAL::GetGlobal();
  v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, (unsigned __int64 *)&v31);
  if ( !v9 )
  {
    v22 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v22 + 24) = a1->HighPart;
    *(_QWORD *)(v22 + 32) = a1->LowPart;
    goto LABEL_16;
  }
  PairingAdapters = (int)DxgkpGetPairingAdapters(v9, v3, 0LL, 0LL, &v31, &v32);
  DXGADAPTER::ReleaseReference(v9);
  if ( (int)PairingAdapters < 0 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v23[3] = 0LL;
    v23[4] = v3;
    v23[5] = PairingAdapters;
    WdLogEvent5_WdEvent(v23);
  }
  else
  {
    v15 = v31;
    if ( !v31 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
      *(_QWORD *)(v24 + 24) = 5931LL;
      WdLogEvent5_WdAssertion(v24);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v28, v15, 0LL);
    PairingAdapters = (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v28);
    DXGADAPTER::ReleaseReference(v15);
    if ( (int)PairingAdapters < 0 )
    {
      v25 = WdLogNewEntry5_WdError(v17, v16);
      *(_QWORD *)(v25 + 24) = v15;
      *(_QWORD *)(v25 + 32) = PairingAdapters;
      WdLogEvent5_WdError(v25);
    }
    else
    {
      if ( !*((_QWORD *)v15 + 285) )
      {
        v26 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
        *(_QWORD *)(v26 + 24) = 5953LL;
        WdLogEvent5_WdAssertion(v26);
      }
      v20 = *((_QWORD *)v15 + 285);
      if ( (unsigned int)v3 >= *(_DWORD *)(v20 + 80) )
      {
        v27 = WdLogNewEntry5_WdError(v20, v16);
        *(_QWORD *)(v27 + 24) = v3;
        *(_QWORD *)(v27 + 32) = v15;
        WdLogEvent5_WdError(v27);
        LODWORD(PairingAdapters) = -1073741811;
      }
      else
      {
        LODWORD(PairingAdapters) = ADAPTER_DISPLAY::QueryModeListCacheLuid((DXGADAPTER **)v20, v3, a3);
      }
    }
    COREACCESS::~COREACCESS((COREACCESS *)v30);
    COREACCESS::~COREACCESS((COREACCESS *)v29);
  }
  return (unsigned int)PairingAdapters;
}
