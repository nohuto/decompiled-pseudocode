/*
 * XREFs of DxgkIsAdapterVirtualTopologyEnabled @ 0x1C017C214
 * Callers:
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00AC7A0 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00D79B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkIsAdapterVirtualTopologyEnabled(struct _LUID a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  DXGGLOBAL *Global; // rax
  __int64 v7; // r9
  DXGADAPTER *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGADAPTER *v11; // rsi
  __int64 v12; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  _QWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  _BYTE v26[8]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v27[32]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v28[64]; // [rsp+48h] [rbp-40h] BYREF
  LONG HighPart; // [rsp+94h] [rbp+Ch]
  unsigned __int64 v30; // [rsp+A0h] [rbp+18h] BYREF

  HighPart = a1.HighPart;
  Global = DXGGLOBAL::GetGlobal(*(_QWORD *)&a1, (__int64)a2, a3, a4);
  v8 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v30, v7);
  v11 = v8;
  if ( v8 )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v8) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
      *(_QWORD *)(v18 + 24) = 7277LL;
      WdLogEvent5_WdAssertion(v18);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v26, v11, 0LL);
    DXGADAPTER::ReleaseReference(v11);
    v19 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v26);
    v22 = v19;
    if ( v19 >= 0 )
    {
      v24 = *((_QWORD *)v11 + 285);
      if ( v24 )
      {
        *a2 = *(unsigned __int8 *)(v24 + 134);
      }
      else
      {
        v25 = WdLogNewEntry5_WdError(v21, v20);
        *(_QWORD *)(v25 + 24) = 7299LL;
        WdLogEvent5_WdError(v25);
        LODWORD(v22) = -1073741811;
      }
    }
    else
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
      v23[3] = HighPart;
      v23[4] = a1.LowPart;
      v23[5] = v22;
      WdLogEvent5_WdError(v23);
    }
    COREACCESS::~COREACCESS((COREACCESS *)v28);
    COREACCESS::~COREACCESS((COREACCESS *)v27);
    return (unsigned int)v22;
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = HighPart;
    *(_QWORD *)(v12 + 32) = a1.LowPart;
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
}
