/*
 * XREFs of ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18006966C
 * Callers:
 *     ?OnDisconnected@EdgyControllerClientProxy@@MEAAJXZ @ 0x180066710 (-OnDisconnected@EdgyControllerClientProxy@@MEAAJXZ.c)
 *     ?OnEdgyCompositionUpdate@EdgyConnection@@AEAAXPEBUEdgyCompositionConfigurationUpdate@@@Z @ 0x180067C38 (-OnEdgyCompositionUpdate@EdgyConnection@@AEAAXPEBUEdgyCompositionConfigurationUpdate@@@Z.c)
 *     ?Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1800685F0 (-Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 *     ?Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x180084A78 (-Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 *     ?OpenBestMatchingControllerKey@SpatialInteractionDevices@@YAJPEB_WGGGW4Handedness@1@PEAPEAUHKEY__@@PEA_N@Z @ 0x18009AE7C (-OpenBestMatchingControllerKey@SpatialInteractionDevices@@YAJPEB_WGGGW4Handedness@1@PEAPEAUHKEY_.c)
 *     ?GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUDynamicNodeInfo@234@@Z @ 0x1800C43F0 (-GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUHSTRING.c)
 *     ?Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJAEBU_GUID@@PEAUHSTRING__@@W4HandleWrapperDesiredAccess@234@_NPEAXPEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@Z @ 0x1800C6AB4 (-Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJAEBU_GUID@@PEAUHSTRING_.c)
 *     _lambda_b6eb6e6574f6e884ecb744657c22bdda_::operator() @ 0x1800D6758 (_lambda_b6eb6e6574f6e884ecb744657c22bdda_--operator().c)
 * Callees:
 *     std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_ @ 0x18006695C (std--basic_string_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___--_Reallocate_for__.c)
 */

unsigned __int64 *__fastcall std::wstring::wstring(unsigned __int64 *a1, _WORD *Src, __int64 a3)
{
  unsigned __int64 v5; // rdx
  char *v6; // rsi
  __int64 v7; // rbx

  a1[3] = 7LL;
  a1[2] = 0LL;
  *(_WORD *)a1 = 0;
  v5 = -1LL;
  do
    ++v5;
  while ( Src[v5] );
  if ( v5 > a1[3] )
  {
    std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_(
      a1,
      v5,
      a3,
      Src);
  }
  else
  {
    v6 = (char *)a1;
    if ( a1[3] >= 8 )
      v6 = (char *)*a1;
    v7 = 2 * v5;
    a1[2] = v5;
    memmove(v6, Src, 2 * v5);
    *(_WORD *)&v6[v7] = 0;
  }
  return a1;
}
