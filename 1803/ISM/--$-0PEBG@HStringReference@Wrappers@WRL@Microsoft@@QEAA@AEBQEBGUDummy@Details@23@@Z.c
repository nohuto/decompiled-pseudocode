/*
 * XREFs of ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18007AC28
 * Callers:
 *     ??$GetPropertyValue@_K@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEA_K@Z @ 0x18007A684 (--$GetPropertyValue@_K@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEA_K@Z.c)
 *     ??$GetPropertyValue@K@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAK@Z @ 0x18007A86C (--$GetPropertyValue@K@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAK@Z.c)
 *     ?OnCameraAccessToggle@ButtonProcessor@@AEAAXXZ @ 0x180091DF0 (-OnCameraAccessToggle@ButtonProcessor@@AEAAXXZ.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18005D838 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Wrappers::HStringReference::HStringReference(__int64 a1, const WCHAR **a2)
{
  const WCHAR *v3; // r10
  unsigned __int64 v4; // rax
  UINT32 v5; // edx
  HRESULT StringReference; // eax

  *(_QWORD *)(a1 + 24) = 0LL;
  v3 = *a2;
  v4 = -1LL;
  do
    ++v4;
  while ( v3[v4] );
  if ( v4 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    __debugbreak();
  }
  if ( (int)v4 + 1 < (unsigned int)v4 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    __debugbreak();
  }
  v5 = v4;
  if ( (unsigned int)v4 < (int)v4 + 1 )
    v5 = v4;
  StringReference = WindowsCreateStringReference(v3, v5, (HSTRING_HEADER *)a1, (HSTRING *)(a1 + 24));
  if ( StringReference < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)StringReference);
    JUMPOUT(0x18007ACB0LL);
  }
  return a1;
}
