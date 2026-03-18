/*
 * XREFs of DxgkQueryModeListCacheLuid @ 0x1C00F8840
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?QueryModeListCacheLuid@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z @ 0x1C0007090 (-QueryModeListCacheLuid@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C008BD94 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00B1CE4 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 */

__int64 __fastcall DxgkQueryModeListCacheLuid(struct _LUID *a1, unsigned int a2, struct _LUID *a3)
{
  __int64 v3; // rsi
  DXGGLOBAL *Global; // rax
  __int64 v7; // rcx
  struct DXGADAPTER *v8; // rdi
  __int64 PairingAdapters; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGADAPTER *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  _BYTE v24[8]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v25[32]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v26[64]; // [rsp+58h] [rbp-40h] BYREF
  struct DXGADAPTER *v27; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 v28; // [rsp+B8h] [rbp+20h] BYREF

  v3 = a2;
  if ( !a1 )
  {
    v18 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v18 + 24) = 6185LL;
LABEL_16:
    WdLogEvent5_WdError(v18);
    return 3221225485LL;
  }
  if ( !a3 )
  {
    v18 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v18 + 24) = 6192LL;
    goto LABEL_16;
  }
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v8 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, (unsigned __int64 *)&v27);
  if ( !v8 )
  {
    v18 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v18 + 24) = a1->HighPart;
    *(_QWORD *)(v18 + 32) = a1->LowPart;
    goto LABEL_16;
  }
  PairingAdapters = (int)DxgkpGetPairingAdapters(v8, v3, 0LL, 0LL, &v27, &v28);
  DXGADAPTER::ReleaseReferenceNoTracking(v8);
  if ( (int)PairingAdapters < 0 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdEvent(v11, v10, v12, v13);
    v19[3] = 0LL;
    v19[4] = v3;
    v19[5] = PairingAdapters;
    WdLogEvent5_WdEvent(v19);
  }
  else
  {
    v14 = v27;
    if ( !v27 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v11);
      *(_QWORD *)(v20 + 24) = 6239LL;
      WdLogEvent5_WdAssertion(v20);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v24, v14, 0LL);
    PairingAdapters = (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v24);
    DXGADAPTER::ReleaseReferenceNoTracking(v14);
    if ( (int)PairingAdapters < 0 )
    {
      v21 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v21 + 24) = v14;
      *(_QWORD *)(v21 + 32) = PairingAdapters;
      WdLogEvent5_WdError(v21);
    }
    else
    {
      if ( !*((_QWORD *)v14 + 288) )
      {
        v22 = WdLogNewEntry5_WdAssertion(v15);
        *(_QWORD *)(v22 + 24) = 6261LL;
        WdLogEvent5_WdAssertion(v22);
      }
      v16 = *((_QWORD *)v14 + 288);
      if ( (unsigned int)v3 >= *(_DWORD *)(v16 + 80) )
      {
        v23 = WdLogNewEntry5_WdError(v16);
        *(_QWORD *)(v23 + 24) = v3;
        *(_QWORD *)(v23 + 32) = v14;
        WdLogEvent5_WdError(v23);
        LODWORD(PairingAdapters) = -1073741811;
      }
      else
      {
        LODWORD(PairingAdapters) = ADAPTER_DISPLAY::QueryModeListCacheLuid((DXGADAPTER **)v16, v3, a3);
      }
    }
    COREACCESS::~COREACCESS((COREACCESS *)v26);
    COREACCESS::~COREACCESS((COREACCESS *)v25);
  }
  return (unsigned int)PairingAdapters;
}
