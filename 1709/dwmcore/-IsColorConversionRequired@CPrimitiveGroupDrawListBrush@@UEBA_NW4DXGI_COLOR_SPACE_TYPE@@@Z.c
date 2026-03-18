/*
 * XREFs of ?IsColorConversionRequired@CPrimitiveGroupDrawListBrush@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801D4D70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPixelFormatInfo@CDrawListBitmap@@QEBA?AUPixelFormatInfo@@XZ @ 0x1800488DC (-GetPixelFormatInfo@CDrawListBitmap@@QEBA-AUPixelFormatInfo@@XZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

char __fastcall CPrimitiveGroupDrawListBrush::IsColorConversionRequired(
        CPrimitiveGroupDrawListBrush *this,
        enum DXGI_COLOR_SPACE_TYPE a2)
{
  __int64 v2; // rbx
  _BYTE v6[16]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  if ( !*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + 24LL) + 8LL) )
    return 0;
  while ( a2 == *(_DWORD *)(CDrawListBitmap::GetPixelFormatInfo(
                              *(_QWORD *)(*((_QWORD *)this + 18) + 120LL)
                            + 24LL * *(unsigned int *)(**(_QWORD **)(*((_QWORD *)this + 18) + 24LL) + 144 * v2 + 40),
                              (__int64)v6)
                          + 8) )
  {
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + 24LL) + 8LL) )
      return 0;
  }
  return 1;
}
