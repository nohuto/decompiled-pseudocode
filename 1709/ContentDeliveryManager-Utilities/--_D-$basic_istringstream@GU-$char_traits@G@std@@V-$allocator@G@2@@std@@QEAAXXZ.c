/*
 * XREFs of ??_D?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18002B134
 * Callers:
 *     __anonymous_namespace_::GetImpressionEventExpirationTime_::_1_::dtor$2 @ 0x1800B5D7D (__anonymous_namespace_--GetImpressionEventExpirationTime_--_1_--dtor$2.c)
 *     __anonymous_namespace_::GetImpressionEventExpirationTime_::_1_::dtor$3 @ 0x1800B5D89 (__anonymous_namespace_--GetImpressionEventExpirationTime_--_1_--dtor$3.c)
 *     _CreativeFramework::Actions::NotificationManagerService::NotificationManagerService_::_1_::dtor$10 @ 0x1800BB002 (_CreativeFramework--Actions--NotificationManagerService--NotificationManagerService_ea_1800BB002.c)
 *     _CreativeFramework::CommonHelper::StringUtils::GetFileTimeFromString_::_1_::dtor$1 @ 0x1800BCA11 (_CreativeFramework--CommonHelper--StringUtils--GetFileTimeFromString_--_1_--dtor$1.c)
 * Callees:
 *     ??1?$basic_istringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAA@XZ @ 0x180030FD4 (--1-$basic_istringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UEAA@XZ.c)
 */

void __fastcall std::basic_istringstream<unsigned short>::`vbase destructor'(__int64 a1)
{
  struct std::ios_base *v1; // rbx

  v1 = (struct std::ios_base *)(a1 + 144);
  std::wistringstream::~wistringstream(a1 + 144);
  *(_QWORD *)v1 = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor(v1);
}
