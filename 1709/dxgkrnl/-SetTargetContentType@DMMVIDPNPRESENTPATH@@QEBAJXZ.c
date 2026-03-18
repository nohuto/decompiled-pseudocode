/*
 * XREFs of ?SetTargetContentType@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C01F6144
 * Callers:
 *     ?DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C01EE49C (-DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007B20 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?DdiSetTargetContentType@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETCONTENTTYPE@@@Z @ 0x1C017C9B4 (-DdiSetTargetContentType@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETCONTENTTYPE@@@Z.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SetTargetContentType(DMMVIDPNPRESENTPATH *this)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rax
  DXGADAPTER **v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  D3DKMDT_VIDPN_PRESENT_PATH_CONTENT v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v20; // rax
  _DXGKARG_SETTARGETCONTENTTYPE v21; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  if ( !*(_QWORD *)(v2 + 40) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v3);
  }
  v4 = *(_QWORD *)(*(_QWORD *)(v2 + 40) + 88LL);
  if ( !*(_QWORD *)(v4 + 8) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = *(DXGADAPTER ***)(v4 + 8);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v6[2]) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6[2] + 24) + 64LL) + 40LL);
  if ( *(_DWORD *)(v9 + 28) < 0x700Au )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v6, *(_DWORD *)(*((_QWORD *)this + 11) + 24LL)) )
    return 0LL;
  v12 = *((_DWORD *)this + 41);
  v21.TargetId = *(_DWORD *)(*((_QWORD *)this + 12) + 24LL);
  v21.ContentType = v12;
  v13 = ADAPTER_DISPLAY::DdiSetTargetContentType((ADAPTER_DISPLAY *)v6, &v21, v11);
  v17 = v13;
  if ( v13 == -1073741637 )
  {
    v18 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v18 + 24) = this;
    *(_QWORD *)(v18 + 32) = -1073741637LL;
    WdLogEvent5_WdWarning(v18);
    return (unsigned int)v17;
  }
  if ( v13 >= 0 )
    return 0LL;
  v20 = WdLogNewEntry5_WdError(v15);
  *(_QWORD *)(v20 + 24) = this;
  *(_QWORD *)(v20 + 32) = v17;
  WdLogEvent5_WdError(v20);
  return (unsigned int)v17;
}
