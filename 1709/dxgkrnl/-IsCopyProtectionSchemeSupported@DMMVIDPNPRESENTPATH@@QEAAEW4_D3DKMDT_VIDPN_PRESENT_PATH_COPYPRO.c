/*
 * XREFs of ?IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C0005C8C
 * Callers:
 *     ?SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C0005CB8 (-SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_.c)
 *     ?DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@I@Z @ 0x1C00E223C (-DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_C.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DMMVIDPNPRESENTPATH::IsCopyProtectionSchemeSupported(
        DMMVIDPNPRESENTPATH *this,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE a2)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 v5; // rax

  v2 = a2;
  switch ( a2 )
  {
    case D3DKMDT_VPPMT_NOPROTECTION:
      LOBYTE(v3) = *((_BYTE *)this + 168);
      return v3 & 1;
    case D3DKMDT_VPPMT_MACROVISION_APSTRIGGER:
      v3 = *((_DWORD *)this + 42) >> 1;
      return v3 & 1;
    case D3DKMDT_VPPMT_MACROVISION_FULLSUPPORT:
      v3 = *((_DWORD *)this + 42) >> 2;
      return v3 & 1;
  }
  v5 = WdLogNewEntry5_WdError(this);
  *(_QWORD *)(v5 + 24) = v2;
  WdLogEvent5_WdError(v5);
  return 0;
}
