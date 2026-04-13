/*
 * XREFs of ?do_put@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AEAVios_base@2@_WK@Z @ 0x1800AC170
 * Callers:
 *     <none>
 * Callees:
 *     ?_Ifmt@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAPEADPEADPEBDH@Z @ 0x1800A64A0 (-_Ifmt@-$num_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAPEADPEADPEBDH.c)
 *     ?_Iput@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AEAVios_base@2@_WPEAD_K@Z @ 0x1800A6CB4 (-_Iput@-$num_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBA-AV-$ostreamb.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     sprintf_s_0 @ 0x1800B4261 (sprintf_s_0.c)
 */

_OWORD *__fastcall std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::do_put(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3,
        __int64 a4,
        unsigned __int16 a5,
        unsigned int a6)
{
  int v7; // r9d
  const char *v10; // rax
  int v11; // eax
  __int128 v13; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v14[16]; // [rsp+50h] [rbp-78h] BYREF
  char Buffer[64]; // [rsp+60h] [rbp-68h] BYREF

  v7 = *(_DWORD *)(a4 + 24);
  v13 = *a3;
  v10 = std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Ifmt(a1, v14, "lu", v7);
  v11 = sprintf_s_0(Buffer, 0x40uLL, v10, a6);
  std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Iput(a1, a2, &v13, a4, a5, Buffer, v11);
  return a2;
}
