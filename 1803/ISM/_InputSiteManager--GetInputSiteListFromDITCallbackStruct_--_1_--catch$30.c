/*
 * XREFs of _InputSiteManager::GetInputSiteListFromDITCallbackStruct_::_1_::catch$30 @ 0x1800E3B03
 * Callers:
 *     <none>
 * Callees:
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x18000D11C (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall InputSiteManager::GetInputSiteListFromDITCallbackStruct_::_1_::catch_30(__int64 a1, __int64 a2)
{
  int v2; // ebx

  v2 = *(_DWORD *)(*(_QWORD *)(a2 + 56) + 28LL);
  if ( v2 != (unsigned int)wil::details::NtStatusToHr((wil::details *)0xC0000008LL) )
    throw;
  return &loc_18000BD71;
}
