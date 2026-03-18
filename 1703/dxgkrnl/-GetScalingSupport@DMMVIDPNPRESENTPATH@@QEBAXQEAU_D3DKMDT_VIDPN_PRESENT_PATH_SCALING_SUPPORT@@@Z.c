/*
 * XREFs of ?GetScalingSupport@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C00090F4
 * Callers:
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00DF3C8 (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 *     BmlPinPathContentScaling @ 0x1C00F2B0C (BmlPinPathContentScaling.c)
 * Callees:
 *     <none>
 */

void __fastcall DMMVIDPNPRESENTPATH::GetScalingSupport(
        DMMVIDPNPRESENTPATH *this,
        struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *const a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  *a2 = *(struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)((char *)this + 120);
}
