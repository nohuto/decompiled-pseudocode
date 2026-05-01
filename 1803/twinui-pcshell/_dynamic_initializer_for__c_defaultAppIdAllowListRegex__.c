/*
 * XREFs of _dynamic_initializer_for__c_defaultAppIdAllowListRegex__ @ 0x180002350
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@V?$initializer_list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@AEBV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x18008C54C (--0-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$basic_.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008C740 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800993B0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=4
int dynamic_initializer_for__c_defaultAppIdAllowListRegex__()
{
  __int64 v0; // rcx
  _QWORD v2[4]; // [rsp+20h] [rbp-59h] BYREF
  _BYTE v3[32]; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v4[32]; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v5[32]; // [rsp+80h] [rbp+7h] BYREF
  _BYTE v6[32]; // [rsp+A0h] [rbp+27h] BYREF
  __int64 v7; // [rsp+C0h] [rbp+47h] BYREF

  v2[2] = -2LL;
  std::wstring::wstring(v3, L"Microsoft(\\s|\\.)Office.*Excel(?:\\.exe)?");
  std::wstring::wstring(v4, L"Microsoft(\\s|\\.)Office.*PowerPnt(?:\\.exe)?");
  std::wstring::wstring(v5, L"Microsoft(\\s|\\.)Office.*Word(?:\\.exe)?");
  std::wstring::wstring(v6, L"Microsoft(\\s|\\.)Office.*OneNote(?:\\.exe)?");
  v2[0] = v3;
  v2[1] = &v7;
  std::vector<std::wstring>::vector<std::wstring>(v0, v2);
  `eh vector destructor iterator'(v3, 0x20uLL, 4uLL, std::wstring::~wstring);
  return atexit(dynamic_atexit_destructor_for__c_defaultAppIdAllowListRegex__);
}
