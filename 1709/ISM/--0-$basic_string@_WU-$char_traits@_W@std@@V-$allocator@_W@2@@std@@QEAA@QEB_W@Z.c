/*
 * XREFs of ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18007595C
 * Callers:
 *     ?OpenBestMatchingControllerKey@SpatialInteractionDevices@@YAJPEB_WGGGW4Handedness@1@PEAPEAUHKEY__@@PEA_N@Z @ 0x180073BDC (-OpenBestMatchingControllerKey@SpatialInteractionDevices@@YAJPEB_WGGGW4Handedness@1@PEAPEAUHKEY_.c)
 *     ?RuntimeClassInitialize@SpatialInteractionDevice@@QEAAJPEB_WK@Z @ 0x1800749CC (-RuntimeClassInitialize@SpatialInteractionDevice@@QEAAJPEB_WK@Z.c)
 *     ?ReadHidReport@SpatialInteractionDevice@@UEAAJPEAUInputReport@SpatialInteractionDevices@@PEAE@Z @ 0x180074C30 (-ReadHidReport@SpatialInteractionDevice@@UEAAJPEAUInputReport@SpatialInteractionDevices@@PEAE@Z.c)
 *     ?GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUDynamicNodeInfo@234@@Z @ 0x1800B5690 (-GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUHSTRING.c)
 *     ?Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJPEAUHSTRING__@@W4HandleWrapperDesiredAccess@234@_NPEAXPEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@Z @ 0x1800B6D94 (-Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJPEAUHSTRING__@@W4Handle.c)
 *     _lambda_0fddcef448335abe1f4d73902a9dcee8_::operator() @ 0x1800C4800 (_lambda_0fddcef448335abe1f4d73902a9dcee8_--operator().c)
 * Callees:
 *     std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_ @ 0x180034298 (std--basic_string_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___--_Reallocate_for__.c)
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
