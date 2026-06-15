/*
 * XREFs of GetEndpointFormFactor @ 0x18003C538
 * Callers:
 *     ?OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x1800031B0 (-OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z.c)
 *     ?DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z @ 0x180039AF4 (-DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z.c)
 *     IsInternalFormFactorOf @ 0x1800C07DC (IsInternalFormFactorOf.c)
 * Callees:
 *     ??$GetAsUInt32WithDefault@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@KPEAK@Z @ 0x18003C938 (--$GetAsUInt32WithDefault@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GetEndpointFormFactor(__int64 a1)
{
  unsigned int v2; // edi
  PROPERTYKEY v4; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+60h] [rbp+8h] BYREF
  __int64 v6; // [rsp+68h] [rbp+10h] BYREF

  v5 = 10;
  v6 = a1;
  if ( a1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  v4 = PKEY_AudioEndpoint_FormFactor;
  CPropertyStoreHelperBase<IPropertyStore>::GetAsUInt32WithDefault<_tagpropertykey>(&v6, &v4, 10LL, &v5, -2LL);
  v2 = v5;
  if ( a1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return v2;
}
