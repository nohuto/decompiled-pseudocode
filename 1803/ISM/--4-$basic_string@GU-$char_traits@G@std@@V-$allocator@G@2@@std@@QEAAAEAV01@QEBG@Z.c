/*
 * XREFs of ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x180066864
 * Callers:
 *     ?RegisterEdgyControllerClient@EdgyControllerServer@@UEAAJPEAVBamoEdgyControllerServerStub@@PEBGPEAVBamoEdgyControllerClientProxy@@@Z @ 0x180067350 (-RegisterEdgyControllerClient@EdgyControllerServer@@UEAAJPEAVBamoEdgyControllerServerStub@@PEBGP.c)
 *     ?Set@Edge@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x180067F54 (-Set@Edge@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 *     ?Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x180067FBC (-Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAX@Z @ 0x180068B60 (-HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAX@Z.c)
 *     GetHolographicInputSession @ 0x180070758 (GetHolographicInputSession.c)
 * Callees:
 *     std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_ @ 0x18006695C (std--basic_string_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___--_Reallocate_for__.c)
 */

_QWORD *__fastcall std::wstring::operator=(_QWORD *a1, _WORD *Src)
{
  _QWORD *v3; // rdi
  unsigned __int64 v4; // rdx
  char *v5; // rsi
  __int64 v6; // rbx

  v3 = a1;
  v4 = -1LL;
  do
    ++v4;
  while ( Src[v4] );
  if ( v4 > a1[3] )
    return (_QWORD *)std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_();
  v5 = (char *)a1;
  if ( a1[3] >= 8uLL )
    v5 = (char *)*a1;
  v6 = 2 * v4;
  a1[2] = v4;
  memmove(v5, Src, 2 * v4);
  *(_WORD *)&v5[v6] = 0;
  return v3;
}
