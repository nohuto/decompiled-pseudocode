/*
 * XREFs of ?IsStale@CEndpointCharacteristics@@QEAAHXZ @ 0x18000DBD0
 * Callers:
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18004CAC0 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointChar.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall CEndpointCharacteristics::IsStale(CEndpointCharacteristics *this)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  PROPVARIANT pvar; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]

  pvar = 0LL;
  v6 = 0LL;
  v2 = *((_QWORD *)this + 4);
  v3 = 0LL;
  v7 = 0LL;
  if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v2 + 40LL))(
         v2,
         &PKEY_MMDEVAPI_ActiveTime,
         &pvar) >= 0
    && (_WORD)pvar == 21 )
  {
    v3 = v6;
  }
  PropVariantClear(&pvar);
  return *((_QWORD *)this + 19) != v3;
}
