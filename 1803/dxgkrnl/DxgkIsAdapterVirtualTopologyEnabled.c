/*
 * XREFs of DxgkIsAdapterVirtualTopologyEnabled @ 0x1C009C36C
 * Callers:
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00ABA00 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FA6EC (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkIsAdapterVirtualTopologyEnabled(struct _LUID a1, _DWORD *a2)
{
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v5; // rax
  __int64 v6; // rcx
  struct DXGADAPTER *v7; // rsi
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rax
  _BYTE v18[8]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v19[32]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v20[64]; // [rsp+48h] [rbp-40h] BYREF
  LONG HighPart; // [rsp+94h] [rbp+Ch]
  unsigned __int64 v22; // [rsp+A0h] [rbp+18h] BYREF

  HighPart = a1.HighPart;
  Global = DXGGLOBAL::GetGlobal(*(_QWORD *)&a1);
  v5 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v22);
  v7 = v5;
  if ( v5 )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v5) )
    {
      v15 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v15 + 24) = 8326LL;
      WdLogEvent5_WdAssertion(v15);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v18, v7, 0LL);
    DXGADAPTER::ReleaseReferenceNoTracking(v7);
    v9 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v18);
    v11 = v9;
    if ( v9 < 0 )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      v16[3] = HighPart;
      v16[4] = a1.LowPart;
      v16[5] = v11;
      WdLogEvent5_WdError(v16);
    }
    else
    {
      v12 = *((_QWORD *)v7 + 307);
      if ( v12 )
      {
        *a2 = *(unsigned __int8 *)(v12 + 133);
      }
      else
      {
        v17 = WdLogNewEntry5_WdError(v10);
        *(_QWORD *)(v17 + 24) = 8348LL;
        WdLogEvent5_WdError(v17);
        LODWORD(v11) = -1073741811;
      }
    }
    COREACCESS::~COREACCESS((COREACCESS *)v20);
    COREACCESS::~COREACCESS((COREACCESS *)v19);
    return (unsigned int)v11;
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v14 + 24) = HighPart;
    *(_QWORD *)(v14 + 32) = a1.LowPart;
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
}
