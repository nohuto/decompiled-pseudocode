/*
 * XREFs of ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x1800259A0
 * Callers:
 *     ?GetEndpointVolumeOverridePolicyVolume@CEndpointVolumeStateManager@@UEAAMPEBG@Z @ 0x180024D80 (-GetEndpointVolumeOverridePolicyVolume@CEndpointVolumeStateManager@@UEAAMPEBG@Z.c)
 *     ?AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x180024E60 (-AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 *     ?ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x1800250F0 (-ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 * Callees:
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_05cef1f6fdf474c9f3ed207deba0f73b__unsigned_short_const_____ptr64_ @ 0x18001A71C (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsigned_short_.c)
 */

char *__fastcall std::wstring::wstring(char *a1, _WORD *Src, bool a3)
{
  unsigned __int64 v5; // rdx
  char *v6; // rsi
  __int64 v7; // rbx

  *((_QWORD *)a1 + 3) = 7LL;
  *((_QWORD *)a1 + 2) = 0LL;
  *(_WORD *)a1 = 0;
  v5 = -1LL;
  do
    ++v5;
  while ( Src[v5] );
  if ( v5 > *((_QWORD *)a1 + 3) )
  {
    std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_05cef1f6fdf474c9f3ed207deba0f73b__unsigned_short_const_____ptr64_(
      (__int64)a1,
      v5,
      a3,
      Src);
  }
  else
  {
    v6 = a1;
    if ( *((_QWORD *)a1 + 3) >= 8uLL )
      v6 = *(char **)a1;
    v7 = 2 * v5;
    *((_QWORD *)a1 + 2) = v5;
    memmove(v6, Src, 2 * v5);
    *(_WORD *)&v6[v7] = 0;
  }
  return a1;
}
