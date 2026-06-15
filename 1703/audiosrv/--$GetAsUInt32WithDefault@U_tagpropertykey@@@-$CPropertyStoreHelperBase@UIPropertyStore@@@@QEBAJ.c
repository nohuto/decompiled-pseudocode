/*
 * XREFs of ??$GetAsUInt32WithDefault@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@KPEAK@Z @ 0x18003C938
 * Callers:
 *     GetEndpointFormFactor @ 0x18003C538 (GetEndpointFormFactor.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropertyStore@@PEAUIPolicyConfig@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x18003DF68 (-ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropert.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEAGPEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18003F190 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@P.c)
 * Callees:
 *     ??$GetAsUInt32@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEAK@Z @ 0x18003C894 (--$GetAsUInt32@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagproper.c)
 */

__int64 __fastcall CPropertyStoreHelperBase<IPropertyStore>::GetAsUInt32WithDefault<_tagpropertykey>(
        _QWORD *a1,
        __int64 a2,
        ULONG a3,
        ULONG *a4)
{
  int v5; // eax
  __int64 result; // rax
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+30h] [rbp-18h]

  v5 = *(_DWORD *)(a2 + 16);
  v8 = *(_OWORD *)a2;
  v9 = v5;
  result = CPropertyStoreHelperBase<IPropertyStore>::GetAsUInt32<_tagpropertykey>(a1, &v8, a4);
  if ( (_DWORD)result == -2147023728 )
  {
    *a4 = a3;
    return 0LL;
  }
  return result;
}
