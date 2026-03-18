/*
 * XREFs of ?IsOpaque@CMILBrushBitmap@@UEBA_NXZ @ 0x18020F4F0
 * Callers:
 *     ?SetDefaultRealizationPixelFormat@CMILBrushBitmap@@UEAAXXZ @ 0x18020F5C0 (-SetDefaultRealizationPixelFormat@CMILBrushBitmap@@UEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CMILBrushBitmap::IsOpaque(CMILBrushBitmap *this)
{
  float v1; // xmm1_4
  bool result; // al
  int v3; // edx
  _BYTE v4[16]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((float *)this + 59);
  result = 0;
  if ( v1 < 1.0000001 && v1 > 0.99999988 )
  {
    v3 = *((_DWORD *)this + 58);
    if ( (v3 & 1) != 0 )
    {
      return 1;
    }
    else if ( (v3 & 2) == 0 )
    {
      return *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 21) + 24LL))(
                           *((_QWORD *)this + 21),
                           v4)
                       + 4) == 3;
    }
  }
  return result;
}
