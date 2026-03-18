/*
 * XREFs of DxgkIsAdapterVirtualTopologyEnabled @ 0x1C017FBD0
 * Callers:
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00AFB00 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C008BD94 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkIsAdapterVirtualTopologyEnabled(struct _LUID a1, _DWORD *a2)
{
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v5; // rax
  __int64 v6; // rcx
  struct DXGADAPTER *v7; // rsi
  __int64 v8; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  _QWORD *v15; // rax
  __int64 v16; // rax
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
      v11 = WdLogNewEntry5_WdAssertion(v10);
      *(_QWORD *)(v11 + 24) = 7585LL;
      WdLogEvent5_WdAssertion(v11);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v18, v7, 0LL);
    DXGADAPTER::ReleaseReferenceNoTracking(v7);
    v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v18);
    v14 = v12;
    if ( v12 >= 0 )
    {
      v16 = *((_QWORD *)v7 + 288);
      if ( v16 )
      {
        *a2 = *(unsigned __int8 *)(v16 + 133);
      }
      else
      {
        v17 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v17 + 24) = 7607LL;
        WdLogEvent5_WdError(v17);
        LODWORD(v14) = -1073741811;
      }
    }
    else
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdError(v13);
      v15[3] = HighPart;
      v15[4] = a1.LowPart;
      v15[5] = v14;
      WdLogEvent5_WdError(v15);
    }
    COREACCESS::~COREACCESS((COREACCESS *)v20);
    COREACCESS::~COREACCESS((COREACCESS *)v19);
    return (unsigned int)v14;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = HighPart;
    *(_QWORD *)(v8 + 32) = a1.LowPart;
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
}
