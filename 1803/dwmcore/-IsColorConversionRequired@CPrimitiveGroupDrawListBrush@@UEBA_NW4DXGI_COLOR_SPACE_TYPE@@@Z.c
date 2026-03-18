/*
 * XREFs of ?IsColorConversionRequired@CPrimitiveGroupDrawListBrush@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180217570
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPixelFormatInfo@CBitmapSourceD2DCacheAdapter@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800B8610 (-GetPixelFormatInfo@CBitmapSourceD2DCacheAdapter@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

char __fastcall CPrimitiveGroupDrawListBrush::IsColorConversionRequired(
        CPrimitiveGroupDrawListBrush *this,
        enum DXGI_COLOR_SPACE_TYPE a2)
{
  __int64 v2; // r8
  __int64 v3; // rbx
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_QWORD *)this + 7);
  v3 = 0LL;
  if ( !*(_DWORD *)(*(_QWORD *)(v2 + 24) + 8LL) )
    return 0;
  while ( a2 == *(_DWORD *)(CBitmapSourceD2DCacheAdapter::GetPixelFormatInfo(
                              *(_QWORD *)(v2 + 112) + 24LL * *(unsigned int *)(**(_QWORD **)(v2 + 24) + 144 * v3 + 40),
                              (__int64)v7)
                          + 8) )
  {
    v2 = *((_QWORD *)this + 7);
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= *(_DWORD *)(*(_QWORD *)(v2 + 24) + 8LL) )
      return 0;
  }
  return 1;
}
