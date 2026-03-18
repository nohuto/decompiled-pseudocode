/*
 * XREFs of ?SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C0005CB8
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0005FA4 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@I@Z @ 0x1C00E223C (-DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_C.c)
 *     ?RemoveCopyProtection@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II@Z @ 0x1C00E59D0 (-RemoveCopyProtection@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@I.c)
 * Callees:
 *     ?IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C0005C8C (-IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPRO.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SetCopyProtectionScheme(
        DMMVIDPNPRESENTPATH *this,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE a2)
{
  __int64 v2; // rbx
  __int64 v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax

  v2 = a2;
  if ( (unsigned int)(a2 - 1) > 2 )
  {
    v5 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v5 + 24) = v2;
    WdLogEvent5_WdError(v5);
    v6 = (_QWORD *)WdLogNewEntry5_WdWarning();
    v6[3] = v2;
    v6[4] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
    v6[5] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
    WdLogEvent5_WdWarning(v6);
    return 3223192399LL;
  }
  else if ( DMMVIDPNPRESENTPATH::IsCopyProtectionSchemeSupported(this, a2) )
  {
    *((_DWORD *)this + 43) = v2;
    return 0LL;
  }
  else
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
    v7[3] = v2;
    v7[4] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
    v7[5] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
    WdLogEvent5_WdDmmEvent(v7);
    return 3223192326LL;
  }
}
