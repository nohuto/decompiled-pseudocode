/*
 * XREFs of ?do_get@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAO@Z @ 0x1800B0E50
 * Callers:
 *     <none>
 * Callees:
 *     _Stoldx @ 0x180098C34 (_Stoldx.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x18009E360 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ?_Getmfld@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0_NAEAVios_base@2@PEAD@Z @ 0x1800AEC04 (-_Getmfld@-$money_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$basic_.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800B3E2F (--3@YAXPEAX@Z_0.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall std::money_get<char,std::istreambuf_iterator<char>>::do_get(
        __int64 a1,
        _OWORD *a2,
        __int64 *a3,
        __int64 *a4,
        char a5,
        __int64 a6,
        _DWORD *a7,
        unsigned __int64 *a8)
{
  void **v11; // rbx
  unsigned __int64 v12; // xmm0_8
  int v14; // [rsp+48h] [rbp-39h] BYREF
  _QWORD v15[2]; // [rsp+50h] [rbp-31h] BYREF
  void *v16[3]; // [rsp+60h] [rbp-21h] BYREF
  unsigned __int64 v17; // [rsp+78h] [rbp-9h]
  char v18[16]; // [rsp+80h] [rbp-1h] BYREF

  v15[1] = -2LL;
  std::money_get<char,std::istreambuf_iterator<char>>::_Getmfld(a1, (size_t *)v16, (__int64)a3, a4, a5, a6, v18);
  if ( std::istreambuf_iterator<char>::equal(a3, a4) )
    *a7 |= 1u;
  if ( !v16[2] )
    goto LABEL_9;
  v11 = v16;
  if ( v17 >= 0x10 )
    v11 = (void **)v16[0];
  v14 = 0;
  v12 = Stoldx((__int64)v11, (int)v15, 0LL, &v14).m128_u64[0];
  if ( (void **)v15[0] == v11 || v14 )
LABEL_9:
    *a7 |= 2u;
  else
    *a8 = v12;
  *a2 = *(_OWORD *)a3;
  if ( v17 >= 0x10 )
    operator delete(v16[0]);
  return a2;
}
