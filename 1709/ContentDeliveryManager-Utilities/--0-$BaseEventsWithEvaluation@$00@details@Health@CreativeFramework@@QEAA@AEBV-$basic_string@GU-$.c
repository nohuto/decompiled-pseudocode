/*
 * XREFs of ??0?$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N@Z @ 0x180029DF0
 * Callers:
 *     ??$make_shared@V?$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEB_N@std@@YA?AV?$shared_ptr@V?$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@@0@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEB_N@Z @ 0x18003BDCC (--$make_shared@V-$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@AEBV-$basic_str.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800017F0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180033414 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180034944 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B4307 (memset_0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreativeFramework::Health::details::BaseEventsWithEvaluation<1>::BaseEventsWithEvaluation<1>(
        __int64 a1,
        __int64 a2,
        char a3)
{
  _QWORD *v5; // r15
  __int64 v6; // rbp
  wchar_t Buffer[264]; // [rsp+30h] [rbp-248h] BYREF

  *(_QWORD *)a1 = &CreativeFramework::Health::details::BaseScenarioEvents::`vftable';
  memset_0((void *)(a1 + 16), 0, 0x58uLL);
  memset_0((void *)(a1 + 112), 0, 0x20uLL);
  memset_0((void *)(a1 + 152), 0, 0x20uLL);
  v5 = (_QWORD *)(a1 + 184);
  *(_QWORD *)(a1 + 208) = 7LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_WORD *)(a1 + 184) = 0;
  v6 = -1LL;
  std::wstring::assign((void *)(a1 + 184));
  *(_QWORD *)(a1 + 240) = 7LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_WORD *)(a1 + 216) = 0;
  *(_BYTE *)(a1 + 248) = a3;
  *(_DWORD *)(a1 + 249) = 0;
  *(_WORD *)(a1 + 253) = 0;
  *(_BYTE *)(a1 + 8) = 4;
  *(_BYTE *)(a1 + 104) = 4;
  *(_BYTE *)(a1 + 144) = 4;
  if ( *(_QWORD *)(a1 + 208) >= 8uLL )
    v5 = (_QWORD *)*v5;
  StringCchPrintfW(
    Buffer,
    260LL,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager\\Health\\Placement-%s",
    v5,
    -2LL,
    a1);
  if ( Buffer[0] )
  {
    do
      ++v6;
    while ( Buffer[v6] );
  }
  std::wstring::assign((void *)(a1 + 216), Buffer);
  *(_QWORD *)a1 = &CreativeFramework::Health::details::BaseEventsWithEvaluation<1>::`vftable';
  return a1;
}
