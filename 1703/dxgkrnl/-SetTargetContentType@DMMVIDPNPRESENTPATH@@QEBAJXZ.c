/*
 * XREFs of ?SetTargetContentType@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C01DD74C
 * Callers:
 *     DmmUpdateContentOnAllClientVidPnPathsFromSource @ 0x1C01D6C10 (DmmUpdateContentOnAllClientVidPnPathsFromSource.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000AD00 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?DdiSetTargetContentType@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETCONTENTTYPE@@@Z @ 0x1C0179050 (-DdiSetTargetContentType@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETCONTENTTYPE@@@Z.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SetTargetContentType(
        DMMVIDPNPRESENTPATH *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  DXGADAPTER **v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r8
  D3DKMDT_VIDPN_PRESENT_PATH_CONTENT v18; // eax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v27; // rax
  _DXGKARG_SETTARGETCONTENTTYPE v28; // [rsp+30h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  if ( !*(_QWORD *)(v5 + 40) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = *(_QWORD *)(*(_QWORD *)(v5 + 40) + 88LL);
  if ( !*(_QWORD *)(v7 + 8) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = *(DXGADAPTER ***)(v7 + 8);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v9[2]) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v9[2] + 24) + 64LL) + 40LL);
  if ( *(_DWORD *)(v15 + 28) < 0x700Au )
  {
    v16 = WdLogNewEntry5_WdAssertion(v15, v10, v12, v13);
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(
          (ADAPTER_DISPLAY *)v9,
          *(unsigned int *)(*((_QWORD *)this + 11) + 24LL),
          v12,
          v13) )
    return 0LL;
  v18 = *((_DWORD *)this + 41);
  v28.TargetId = *(_DWORD *)(*((_QWORD *)this + 12) + 24LL);
  v28.ContentType = v18;
  v19 = ADAPTER_DISPLAY::DdiSetTargetContentType((ADAPTER_DISPLAY *)v9, &v28, v17);
  v24 = v19;
  if ( v19 == -1073741637 )
  {
    v25 = WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
    *(_QWORD *)(v25 + 24) = this;
    *(_QWORD *)(v25 + 32) = -1073741637LL;
    WdLogEvent5_WdWarning(v25);
    return (unsigned int)v24;
  }
  if ( v19 >= 0 )
    return 0LL;
  v27 = WdLogNewEntry5_WdError(v21, v20);
  *(_QWORD *)(v27 + 24) = this;
  *(_QWORD *)(v27 + 32) = v24;
  WdLogEvent5_WdError(v27);
  return (unsigned int)v24;
}
