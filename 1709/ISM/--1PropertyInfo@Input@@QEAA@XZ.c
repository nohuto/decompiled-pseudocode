/*
 * XREFs of ??1PropertyInfo@Input@@QEAA@XZ @ 0x1800335A0
 * Callers:
 *     _PropertyDefinitions::ProcessInit_::_1_::dtor$0 @ 0x1800CE257 (_PropertyDefinitions--ProcessInit_--_1_--dtor$0.c)
 *     _PropertyDefinitions::ProcessInit_::_1_::dtor$1 @ 0x1800CE263 (_PropertyDefinitions--ProcessInit_--_1_--dtor$1.c)
 *     _PropertyDefinitions::ProcessInit_::_1_::dtor$2 @ 0x1800CE26F (_PropertyDefinitions--ProcessInit_--_1_--dtor$2.c)
 *     _PropertyDefinitions::ProcessInit_::_1_::dtor$3 @ 0x1800CE27B (_PropertyDefinitions--ProcessInit_--_1_--dtor$3.c)
 *     _PropertyDefinitions::ProcessInit_::_1_::dtor$4 @ 0x1800CE287 (_PropertyDefinitions--ProcessInit_--_1_--dtor$4.c)
 *     _PropertyDefinitions::ProcessInit_::_1_::dtor$5 @ 0x1800CE293 (_PropertyDefinitions--ProcessInit_--_1_--dtor$5.c)
 *     _PropertyDefinitions::ProcessInit_::_1_::dtor$6 @ 0x1800CE29F (_PropertyDefinitions--ProcessInit_--_1_--dtor$6.c)
 *     _PropertyDefinitions::ProcessInit_::_1_::dtor$7 @ 0x1800CE2AB (_PropertyDefinitions--ProcessInit_--_1_--dtor$7.c)
 *     _PropertyDefinitions::ProcessInit_::_1_::dtor$8 @ 0x1800CE2B7 (_PropertyDefinitions--ProcessInit_--_1_--dtor$8.c)
 *     _PropertyDefinitions::ProcessInit_::_1_::dtor$9 @ 0x1800CE2C3 (_PropertyDefinitions--ProcessInit_--_1_--dtor$9.c)
 *     _PropertyDefinitions::ProcessInit_::_1_::dtor$10 @ 0x1800CE2CF (_PropertyDefinitions--ProcessInit_--_1_--dtor$10.c)
 *     _PropertyDefinitions::ProcessInit_::_1_::dtor$11 @ 0x1800CE2DB (_PropertyDefinitions--ProcessInit_--_1_--dtor$11.c)
 *     _PropertyDefinitions::ProcessInit_::_1_::dtor$12 @ 0x1800CE2E7 (_PropertyDefinitions--ProcessInit_--_1_--dtor$12.c)
 *     _PropertyDefinitions::DefineType_::_1_::dtor$0 @ 0x1800CE320 (_PropertyDefinitions--DefineType_--_1_--dtor$0.c)
 *     _PropertyDefinitions::DefineProperty_::_1_::dtor$0 @ 0x1800CE34E (_PropertyDefinitions--DefineProperty_--_1_--dtor$0.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::AddTelemetryGuidMapping_::_1_::dtor$1 @ 0x1800D1A46 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--AddTelemetryGuidMapping_ea_1800D1A46.c)
 *     __lambda_ee46ae3407b0869cacd23b14ef71fd42_::operator()_::_1_::dtor$0 @ 0x1800D1D4D (__lambda_ee46ae3407b0869cacd23b14ef71fd42_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Input::PropertyInfo::~PropertyInfo(Input::PropertyInfo *this)
{
  std::wstring::_Tidy_deallocate((unsigned __int64 *)this + 2);
}
