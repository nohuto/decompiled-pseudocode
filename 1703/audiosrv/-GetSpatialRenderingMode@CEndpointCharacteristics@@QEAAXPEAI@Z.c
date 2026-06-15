/*
 * XREFs of ?GetSpatialRenderingMode@CEndpointCharacteristics@@QEAAXPEAI@Z @ 0x1800BDDF8
 * Callers:
 *     _lambda_2cdbfdbf6a906d093ee55c9100591272_::operator() @ 0x18000FC80 (_lambda_2cdbfdbf6a906d093ee55c9100591272_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CEndpointCharacteristics::GetSpatialRenderingMode(CEndpointCharacteristics *this, unsigned int *a2)
{
  __int64 v3; // rcx
  PROPVARIANT pvar; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h]
  __int64 v6; // [rsp+30h] [rbp-18h]

  *a2 = 0;
  v3 = *((_QWORD *)this + 4);
  pvar = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( (*(int (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v3 + 40LL))(
         v3,
         &PKEY_SpatialAudioEndpoint_RenderingMode,
         &pvar) >= 0
    && (_WORD)pvar == 19
    && (unsigned int)v5 <= 4 )
  {
    *a2 = v5;
  }
  PropVariantClear(&pvar);
}
