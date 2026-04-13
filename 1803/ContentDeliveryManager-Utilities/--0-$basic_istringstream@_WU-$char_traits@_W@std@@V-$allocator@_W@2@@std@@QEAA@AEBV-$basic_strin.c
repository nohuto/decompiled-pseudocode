/*
 * XREFs of ??0?$basic_istringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@H@Z @ 0x18008B250
 * Callers:
 *     ??0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@Z @ 0x18008A714 (--0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV-$map@V-$.c)
 *     ?GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA?AU_FILETIME@@PEB_W_N@Z @ 0x18009FD08 (-GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA-AU_FILETIME@@PEB_W_N@Z.c)
 * Callees:
 *     ?_Init@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@IEAAXPEB_W_KH@Z @ 0x180037D6C (-_Init@-$basic_stringbuf@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@IEAAXPEB_W_KH@Z.c)
 *     ??0?$basic_streambuf@GU?$char_traits@G@std@@@std@@IEAA@XZ @ 0x180037E70 (--0-$basic_streambuf@GU-$char_traits@G@std@@@std@@IEAA@XZ.c)
 *     ?init@?$basic_ios@_WU?$char_traits@_W@std@@@std@@IEAAXPEAV?$basic_streambuf@_WU?$char_traits@_W@std@@@2@_N@Z @ 0x18007133C (-init@-$basic_ios@_WU-$char_traits@_W@std@@@std@@IEAAXPEAV-$basic_streambuf@_WU-$char_traits@_W@.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::wistringstream::wistringstream(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rbx
  unsigned __int64 v5; // r8

  *(_QWORD *)a1 = &std::wistringstream::`vbtable';
  *(_QWORD *)(a1 + 144) = &std::wios::`vftable';
  *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1) = &std::basic_istream<unsigned short>::`vftable';
  *(_DWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 - 4) = *(_DWORD *)(*(_QWORD *)a1 + 4LL) - 24;
  *(_QWORD *)(a1 + 8) = 0LL;
  v4 = (_QWORD *)(a1 + 16);
  std::wios::init((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL)), a1 + 16);
  *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1) = &std::basic_istringstream<unsigned short>::`vftable';
  *(_DWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 - 4) = *(_DWORD *)(*(_QWORD *)a1 + 4LL) - 144;
  std::basic_streambuf<unsigned short>::basic_streambuf<unsigned short>((_QWORD *)(a1 + 16));
  *v4 = &std::basic_stringbuf<unsigned short>::`vftable';
  v5 = a2[2];
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 128) = 2;
  if ( v5 )
    std::wstringbuf::_Init(a1 + 16, a2, v5);
  return a1;
}
