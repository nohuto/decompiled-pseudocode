/*
 * XREFs of ??1?$basic_ostream@_WU?$char_traits@_W@std@@@std@@UEAA@XZ @ 0x180070D74
 * Callers:
 *     _Windows::Services::TargetedContent::Internal::SetTriggerStateTransitions_::_1_::dtor$7 @ 0x1800C5F33 (_Windows--Services--TargetedContent--Internal--SetTriggerStateTransitions_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wostream::~wostream<wchar_t,std::char_traits<wchar_t>>(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 16) + 4LL) + a1 - 16) = &std::basic_ostream<unsigned short>::`vftable';
  result = *(_QWORD *)(a1 - 16);
  *(_DWORD *)(*(int *)(result + 4) + a1 - 20) = *(_DWORD *)(result + 4) - 16;
  return result;
}
