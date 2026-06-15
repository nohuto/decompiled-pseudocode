/*
 * XREFs of ??1CUnknown@@UEAA@XZ @ 0x180010184
 * Callers:
 *     _CProcess::CProcess_::_1_::dtor$0 @ 0x180036DF5 (_CProcess--CProcess_--_1_--dtor$0.c)
 *     _CTrackedEndpoint::CTrackedEndpoint_::_1_::dtor$0 @ 0x180037A80 (_CTrackedEndpoint--CTrackedEndpoint_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CUnknown::~CUnknown(CUnknown *this)
{
  *(_QWORD *)this = &CUnknown::`vftable';
}
