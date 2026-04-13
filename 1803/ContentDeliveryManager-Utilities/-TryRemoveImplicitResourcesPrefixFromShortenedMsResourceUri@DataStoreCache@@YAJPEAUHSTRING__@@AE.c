/*
 * XREFs of ?TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri@DataStoreCache@@YAJPEAUHSTRING__@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180095BFC
 * Callers:
 *     ?Resolve@MRTHelperBase@StartUI@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z @ 0x1800960E8 (-Resolve@MRTHelperBase@StartUI@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x18003681C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?_Grow@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA_N_K_N@Z @ 0x180037AC8 (-_Grow@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA_N_K_N@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x180038C5C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x18004E8A4 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DataStoreCache::TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri(HSTRING a1, __int64 a2)
{
  _WORD *v3; // rax
  PCWSTR StringRawBuffer; // rax
  const char *v5; // r9
  char *v6; // rdi
  unsigned __int64 v7; // rdx
  void **v8; // rax
  __int64 result; // rax
  UINT32 length; // [rsp+20h] [rbp-58h] BYREF
  __int64 v11; // [rsp+28h] [rbp-50h]
  void *Src[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v13; // [rsp+40h] [rbp-38h]
  unsigned __int64 v14; // [rsp+48h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v11 = -2LL;
  try
  {
    *(_QWORD *)(a2 + 16) = 0LL;
    if ( *(_QWORD *)(a2 + 24) < 8uLL )
      v3 = (_WORD *)a2;
    else
      v3 = *(_WORD **)a2;
    *v3 = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(a1, &length);
    if ( length > 0xC )
    {
      v6 = (char *)(StringRawBuffer + 12);
      if ( StringRawBuffer[12] != 47 )
      {
        v7 = length + 4;
        v14 = 7LL;
        v13 = 0LL;
        LOWORD(Src[0]) = 0;
        if ( v7 != 7 && std::wstring::_Grow(Src, v7, 1) )
        {
          v13 = 0LL;
          v8 = Src;
          if ( v14 >= 8 )
            v8 = (void **)Src[0];
          *(_WORD *)v8 = 0;
        }
        std::wstring::append(Src, (char *)L"ms-resource:", 0xCuLL);
        std::wstring::append((_WORD **)Src, 3uLL, 47);
        std::wstring::append(Src, v6, length - 12);
        if ( (void **)a2 != Src )
        {
          if ( *(_QWORD *)(a2 + 24) >= 8uLL )
            operator delete(*(void **)a2);
          *(_QWORD *)(a2 + 24) = 7LL;
          *(_QWORD *)(a2 + 16) = 0LL;
          *(_WORD *)a2 = 0;
          std::wstring::_Assign_rv((_QWORD *)a2, Src);
        }
        if ( v14 >= 8 )
          operator delete(Src[0]);
      }
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xBD,
                           (__int64)"internal\\shellcommonshell\\private\\inc\\shellmrthelpercommonimpl.h",
                           v5);
  }
  return result;
}
