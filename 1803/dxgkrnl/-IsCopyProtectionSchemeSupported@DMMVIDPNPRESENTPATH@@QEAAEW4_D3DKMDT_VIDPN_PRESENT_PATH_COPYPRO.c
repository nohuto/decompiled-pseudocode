/*
 * XREFs of ?IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C0044BB0
 * Callers:
 *     ?SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C0045040 (-SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_.c)
 *     ?DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@I@Z @ 0x1C00DB168 (-DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_C.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DMMVIDPNPRESENTPATH::IsCopyProtectionSchemeSupported(
        DMMVIDPNPRESENTPATH *this,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  int v5; // eax

  v2 = a2;
  switch ( a2 )
  {
    case D3DKMDT_VPPMT_NOPROTECTION:
      LOBYTE(v5) = *((_BYTE *)this + 168);
      break;
    case D3DKMDT_VPPMT_MACROVISION_APSTRIGGER:
      v5 = *((_DWORD *)this + 42) >> 1;
      break;
    case D3DKMDT_VPPMT_MACROVISION_FULLSUPPORT:
      v5 = *((_DWORD *)this + 42) >> 2;
      break;
    default:
      v3 = WdLogNewEntry5_WdError(this);
      *(_QWORD *)(v3 + 24) = v2;
      WdLogEvent5_WdError(v3);
      return 0;
  }
  return v5 & 1;
}
