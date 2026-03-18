/*
 * XREFs of ?SetTargetAnalogCopyProtection@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C022333C
 * Callers:
 *     ?DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@I@Z @ 0x1C00DB168 (-DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_C.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0014394 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ @ 0x1C0045A58 (-GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ.c)
 *     ?DdiSetTargetAnalogCopyProtection@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETANALOGCOPYPROTECTION@@@Z @ 0x1C01626DC (-DdiSetTargetAnalogCopyProtection@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETANALOGCOPYPROTECTI.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SetTargetAnalogCopyProtection(DMMVIDPNPRESENTPATH *this)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rsi
  DXGADAPTER **v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r8
  D3DDDI_VIDEO_PRESENT_TARGET_ID v13; // ecx
  D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v22; // rax
  _DXGKARG_SETTARGETANALOGCOPYPROTECTION v23; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  v3 = *(_QWORD *)(v2 + 40);
  if ( !v3 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
    v3 = *(_QWORD *)(v2 + 40);
  }
  v5 = *(_QWORD *)(v3 + 88);
  v6 = *(DXGADAPTER ***)(v5 + 8);
  if ( !v6 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
    v6 = *(DXGADAPTER ***)(v5 + 8);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v6[2]) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6[2] + 24) + 64LL) + 40LL);
  if ( *(_DWORD *)(v10 + 28) < 0x700Au )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v6, *(_DWORD *)(*((_QWORD *)this + 11) + 24LL)) )
    return 0LL;
  v13 = *(_DWORD *)(*((_QWORD *)this + 12) + 24LL);
  v23.CopyProtectionSupport = (D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)*((_DWORD *)this + 42);
  v14 = *((_DWORD *)this + 43);
  v23.TargetId = v13;
  v23.CopyProtectionType = v14;
  if ( v14 == D3DKMDT_VPPMT_MACROVISION_APSTRIGGER )
    v23.APSTriggerBits = DMMVIDPNPRESENTPATH::GetMacroVisionTriggerBits(this);
  else
    v23.APSTriggerBits = 0;
  v15 = ADAPTER_DISPLAY::DdiSetTargetAnalogCopyProtection((ADAPTER_DISPLAY *)v6, &v23, v12);
  v19 = v15;
  if ( v15 == -1073741637 )
  {
    v20 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    *(_QWORD *)(v20 + 24) = this;
    *(_QWORD *)(v20 + 32) = -1073741637LL;
    WdLogEvent5_WdWarning(v20);
    return 3221225659LL;
  }
  if ( v15 >= 0 )
    return 0LL;
  v22 = WdLogNewEntry5_WdError(v17);
  *(_QWORD *)(v22 + 24) = this;
  *(_QWORD *)(v22 + 32) = v19;
  WdLogEvent5_WdError(v22);
  return (unsigned int)v19;
}
