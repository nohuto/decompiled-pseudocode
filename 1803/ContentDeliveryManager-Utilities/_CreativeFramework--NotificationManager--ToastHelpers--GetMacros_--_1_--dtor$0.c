/*
 * XREFs of _CreativeFramework::NotificationManager::ToastHelpers::GetMacros_::_1_::dtor$0 @ 0x1800C8B57
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unordered_set@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAA@XZ @ 0x180083774 (--1-$unordered_set@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@U-$hash@V-$b.c)
 */

void __fastcall CreativeFramework::NotificationManager::ToastHelpers::GetMacros_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 64) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 64) &= ~1u;
    std::unordered_set<std::wstring>::~unordered_set<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>,std::allocator<std::wstring>>(*(_QWORD *)(a2 + 80));
  }
}
