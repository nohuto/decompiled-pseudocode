/*
 * XREFs of ?SetTargetAnalogCopyProtection@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C01DD5E4
 * Callers:
 *     DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource @ 0x1C00A2884 (DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000AD00 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ @ 0x1C0045120 (-GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ.c)
 *     ?DdiSetTargetAnalogCopyProtection@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETANALOGCOPYPROTECTION@@@Z @ 0x1C0178E00 (-DdiSetTargetAnalogCopyProtection@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETANALOGCOPYPROTECTI.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SetTargetAnalogCopyProtection(
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
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  D3DDDI_VIDEO_PRESENT_TARGET_ID v20; // ecx
  D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE v21; // eax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v30; // rax
  _DXGKARG_SETTARGETANALOGCOPYPROTECTION v31; // [rsp+20h] [rbp-28h] BYREF

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
  v20 = *(_DWORD *)(*((_QWORD *)this + 12) + 24LL);
  v31.CopyProtectionSupport = (D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)*((_DWORD *)this + 42);
  v21 = *((_DWORD *)this + 43);
  v31.TargetId = v20;
  v31.CopyProtectionType = v21;
  if ( v21 == D3DKMDT_VPPMT_MACROVISION_APSTRIGGER )
    v31.APSTriggerBits = DMMVIDPNPRESENTPATH::GetMacroVisionTriggerBits(this, v17, v18, v19);
  else
    v31.APSTriggerBits = 0;
  v22 = ADAPTER_DISPLAY::DdiSetTargetAnalogCopyProtection((ADAPTER_DISPLAY *)v9, &v31, v18);
  v27 = v22;
  if ( v22 == -1073741637 )
  {
    v28 = WdLogNewEntry5_WdWarning(v24, v23, v25, v26);
    *(_QWORD *)(v28 + 24) = this;
    *(_QWORD *)(v28 + 32) = -1073741637LL;
    WdLogEvent5_WdWarning(v28);
    return (unsigned int)v27;
  }
  if ( v22 >= 0 )
    return 0LL;
  v30 = WdLogNewEntry5_WdError(v24, v23);
  *(_QWORD *)(v30 + 24) = this;
  *(_QWORD *)(v30 + 32) = v27;
  WdLogEvent5_WdError(v30);
  return (unsigned int)v27;
}
