/*
 * XREFs of ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180016F94
 * Callers:
 *     ?RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x1800134F4 (-RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x180014A30 (-GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z.c)
 *     ?GetEndpointVolumeOverridePolicyVolume@CEndpointVolumeStateManager@@UEAAMPEBG@Z @ 0x18002DAA0 (-GetEndpointVolumeOverridePolicyVolume@CEndpointVolumeStateManager@@UEAAMPEBG@Z.c)
 *     ?AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x18002DB80 (-AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 *     ?ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x18002DE20 (-ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 *     ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x180030418 (-LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ.c)
 * Callees:
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_05cef1f6fdf474c9f3ed207deba0f73b__unsigned_short_const_____ptr64_ @ 0x1800179EC (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsigned_short_.c)
 */

char *__fastcall std::wstring::wstring(char *a1, _WORD *Src)
{
  unsigned __int64 v4; // rdx
  char *v5; // rsi
  __int64 v6; // rbx

  *((_QWORD *)a1 + 3) = 7LL;
  *((_QWORD *)a1 + 2) = 0LL;
  *(_WORD *)a1 = 0;
  v4 = -1LL;
  do
    ++v4;
  while ( Src[v4] );
  if ( v4 > *((_QWORD *)a1 + 3) )
  {
    std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_05cef1f6fdf474c9f3ed207deba0f73b__unsigned_short_const_____ptr64_();
  }
  else
  {
    v5 = a1;
    if ( *((_QWORD *)a1 + 3) >= 8uLL )
      v5 = *(char **)a1;
    v6 = 2 * v4;
    *((_QWORD *)a1 + 2) = v4;
    memmove(v5, Src, 2 * v4);
    *(_WORD *)&v5[v6] = 0;
  }
  return a1;
}
