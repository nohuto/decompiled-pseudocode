/*
 * XREFs of ??1CUnknown@@UEAA@XZ @ 0x180006AE8
 * Callers:
 *     _CProcess::CProcess_::_1_::dtor$0 @ 0x1800284A1 (_CProcess--CProcess_--_1_--dtor$0.c)
 *     _CProcess::_CProcess_::_1_::dtor$0 @ 0x1800285EA (_CProcess--_CProcess_--_1_--dtor$0.c)
 *     _CTrackedEndpoint::CTrackedEndpoint_::_1_::dtor$0 @ 0x180028ED5 (_CTrackedEndpoint--CTrackedEndpoint_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CUnknown::~CUnknown(CUnknown *this)
{
  *(_QWORD *)this = &CUnknown::`vftable';
}
