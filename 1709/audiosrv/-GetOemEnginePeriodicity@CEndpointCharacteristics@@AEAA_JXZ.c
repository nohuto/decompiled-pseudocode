/*
 * XREFs of ?GetOemEnginePeriodicity@CEndpointCharacteristics@@AEAA_JXZ @ 0x1800B5600
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z @ 0x1800B3FC8 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z.c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x1800B8308 (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetOemEnginePeriodicity(CEndpointCharacteristics *this)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  PROPVARIANT pvar; // [rsp+20h] [rbp-20h] BYREF
  __int64 v6; // [rsp+28h] [rbp-18h]
  __int64 *v7; // [rsp+30h] [rbp-10h]

  pvar = 0LL;
  v6 = 0LL;
  v2 = *((_QWORD *)this + 4);
  v3 = 0LL;
  v7 = 0LL;
  if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v2 + 40LL))(
         v2,
         &PKEY_AudioEngine_PeriodUseDefault,
         &pvar) >= 0
    && (_WORD)pvar == 11
    && (_WORD)v6 == 0xFFFF )
  {
    v3 = 100000LL;
  }
  else
  {
    PropVariantClear(&pvar);
    if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)this + 4) + 40LL))(
           *((_QWORD *)this + 4),
           &PKEY_AudioEngine_OEMPeriod,
           &pvar) >= 0
      && (_WORD)pvar == 65
      && (_DWORD)v6 == 8
      && (unsigned __int64)(*v7 - 50000) <= 0xC350 )
    {
      v3 = *v7;
    }
  }
  PropVariantClear(&pvar);
  return v3;
}
