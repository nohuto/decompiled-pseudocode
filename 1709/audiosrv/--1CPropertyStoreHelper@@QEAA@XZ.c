/*
 * XREFs of ??1CPropertyStoreHelper@@QEAA@XZ @ 0x1800BA54C
 * Callers:
 *     _GetEndpointFormFactor_::_1_::dtor$0 @ 0x1800BAC46 (_GetEndpointFormFactor_--_1_--dtor$0.c)
 *     _CSpatialProperties::SetSpatialAudioSettingsInternal_::_1_::dtor$1 @ 0x1800CD2AF (_CSpatialProperties--SetSpatialAudioSettingsInternal_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
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
