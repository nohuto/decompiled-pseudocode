/*
 * XREFs of ?SetTargetAnalogCopyProtection@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C01F5FDC
 * Callers:
 *     ?DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@I@Z @ 0x1C00E223C (-DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_C.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007B20 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ @ 0x1C0035F08 (-GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ.c)
 *     ?DdiSetTargetAnalogCopyProtection@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETANALOGCOPYPROTECTION@@@Z @ 0x1C017C758 (-DdiSetTargetAnalogCopyProtection@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETANALOGCOPYPROTECTI.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SetTargetAnalogCopyProtection(DMMVIDPNPRESENTPATH *this)
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
  D3DDDI_VIDEO_PRESENT_TARGET_ID v12; // ecx
  D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v21; // rax
  _DXGKARG_SETTARGETANALOGCOPYPROTECTION v22; // [rsp+20h] [rbp-28h] BYREF

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
  v12 = *(_DWORD *)(*((_QWORD *)this + 12) + 24LL);
  v22.CopyProtectionSupport = (D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)*((_DWORD *)this + 42);
  v13 = *((_DWORD *)this + 43);
  v22.TargetId = v12;
  v22.CopyProtectionType = v13;
  if ( v13 == D3DKMDT_VPPMT_MACROVISION_APSTRIGGER )
    v22.APSTriggerBits = DMMVIDPNPRESENTPATH::GetMacroVisionTriggerBits(this);
  else
    v22.APSTriggerBits = 0;
  v14 = ADAPTER_DISPLAY::DdiSetTargetAnalogCopyProtection((ADAPTER_DISPLAY *)v6, &v22, v11);
  v18 = v14;
  if ( v14 == -1073741637 )
  {
    v19 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v19 + 24) = this;
    *(_QWORD *)(v19 + 32) = -1073741637LL;
    WdLogEvent5_WdWarning(v19);
    return (unsigned int)v18;
  }
  if ( v14 >= 0 )
    return 0LL;
  v21 = WdLogNewEntry5_WdError(v16);
  *(_QWORD *)(v21 + 24) = this;
  *(_QWORD *)(v21 + 32) = v18;
  WdLogEvent5_WdError(v21);
  return (unsigned int)v18;
}
