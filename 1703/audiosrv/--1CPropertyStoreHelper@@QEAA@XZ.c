/*
 * XREFs of ??1CPropertyStoreHelper@@QEAA@XZ @ 0x18002F2F8
 * Callers:
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEAGPEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18003F190 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@P.c)
 *     _GetEndpointFormFactor_::_1_::dtor$0 @ 0x180059384 (_GetEndpointFormFactor_--_1_--dtor$0.c)
 *     _SearchForHeadphones_::_1_::dtor$2 @ 0x1800593A8 (_SearchForHeadphones_--_1_--dtor$2.c)
 *     _CSpatialProperties::ProcessPropertyChange_::_1_::dtor$1 @ 0x180059408 (_CSpatialProperties--ProcessPropertyChange_--_1_--dtor$1.c)
 *     _CSpatialProperties::SetSpatialAudioSettingsInternal_::_1_::dtor$1 @ 0x18005943C (_CSpatialProperties--SetSpatialAudioSettingsInternal_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPropertyStoreHelper::~CPropertyStoreHelper(CPropertyStoreHelper *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *(_QWORD *)this = 0LL;
  }
}
