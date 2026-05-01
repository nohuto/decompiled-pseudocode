/*
 * XREFs of ?Create32BitHBITMAP@@YAJPEAUHDC__@@PEBUtagSIZE@@PEAPEAXPEAPEAUHBITMAP__@@@Z @ 0x18026E62C
 * Callers:
 *     CreateBitmapFromIcon @ 0x18026F380 (CreateBitmapFromIcon.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 */

__int64 __fastcall Create32BitHBITMAP(HDC a1, const struct tagSIZE *a2, void **a3, HBITMAP *a4)
{
  HDC DC; // rax
  HDC v7; // rbx
  __int64 result; // rax
  BITMAPINFO pbmi; // [rsp+30h] [rbp-48h] BYREF

  *a4 = 0LL;
  memset_0(&pbmi, 0, sizeof(pbmi));
  *(struct tagSIZE *)&pbmi.bmiHeader.biWidth = *a2;
  pbmi.bmiHeader.biSize = 40;
  *(_QWORD *)&pbmi.bmiHeader.biPlanes = 2097153LL;
  DC = GetDC(0LL);
  v7 = DC;
  if ( DC )
  {
    *a4 = CreateDIBSection(DC, &pbmi, 0, 0LL, 0LL, 0);
    ReleaseDC(0LL, v7);
  }
  result = 2147942414LL;
  if ( *a4 )
    return 0LL;
  return result;
}
