/*
 * XREFs of ?do_get@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z @ 0x1800B0F50
 * Callers:
 *     <none>
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180035938 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
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
        size_t *a8)
{
  _BYTE *v11; // rsi
  char v12; // al
  unsigned __int64 v13; // rbx
  size_t *v14; // rax
  void **v15; // rax
  size_t *v16; // rcx
  void **v17; // rax
  size_t *v18; // rdx
  void *v20[3]; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int64 v21; // [rsp+60h] [rbp-20h]
  char v22[16]; // [rsp+68h] [rbp-18h] BYREF

  std::money_get<char,std::istreambuf_iterator<char>>::_Getmfld(a1, (size_t *)v20, (__int64)a3, a4, a5, a6, v22);
  v11 = v20[2];
  v12 = std::istreambuf_iterator<char>::equal(a3, a4);
  v13 = 0LL;
  if ( v12 )
    *a7 |= 1u;
  if ( v11 )
  {
    if ( (unsigned __int64)v11 > a8[2] )
    {
      std::string::append(a8, (size_t)&v11[-a8[2]], 0);
    }
    else
    {
      a8[2] = (size_t)v11;
      if ( a8[3] < 0x10 )
        v14 = a8;
      else
        v14 = (size_t *)*a8;
      v11[(_QWORD)v14] = 0;
    }
    v15 = v20;
    if ( v21 >= 0x10 )
      v15 = (void **)v20[0];
    if ( *(_BYTE *)v15 == 45 )
    {
      if ( a8[3] < 0x10 )
        v16 = a8;
      else
        v16 = (size_t *)*a8;
      *(_BYTE *)v16 = v22[10];
      v13 = 1LL;
    }
    while ( v13 < (unsigned __int64)v11 )
    {
      v17 = v20;
      if ( v21 >= 0x10 )
        v17 = (void **)v20[0];
      if ( a8[3] < 0x10 )
        v18 = a8;
      else
        v18 = (size_t *)*a8;
      *((_BYTE *)v18 + v13) = v22[*((char *)v17 + v13) - 48];
      ++v13;
    }
  }
  else
  {
    *a7 |= 2u;
  }
  *a2 = *(_OWORD *)a3;
  if ( v21 >= 0x10 )
    operator delete(v20[0]);
  return a2;
}
