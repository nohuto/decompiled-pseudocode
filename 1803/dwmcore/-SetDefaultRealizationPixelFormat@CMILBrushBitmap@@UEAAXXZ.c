/*
 * XREFs of ?SetDefaultRealizationPixelFormat@CMILBrushBitmap@@UEAAXXZ @ 0x18020F5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180021D84 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?IsOpaque@CMILBrushBitmap@@UEBA_NXZ @ 0x18020F4F0 (-IsOpaque@CMILBrushBitmap@@UEBA_NXZ.c)
 */

void __fastcall CMILBrushBitmap::SetDefaultRealizationPixelFormat(CMILBrushBitmap *this)
{
  __int64 v2; // rax
  _BYTE v3[16]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 21) + 24LL))(*((_QWORD *)this + 21), v3);
  *((_QWORD *)this + 1) = *(_QWORD *)v2;
  *((_DWORD *)this + 4) = *(_DWORD *)(v2 + 8);
  if ( CMILBrushBitmap::IsOpaque(this) || !(unsigned int)HasAlphaChannel(*((_DWORD *)this + 2)) )
    *((_DWORD *)this + 3) = 3;
}
