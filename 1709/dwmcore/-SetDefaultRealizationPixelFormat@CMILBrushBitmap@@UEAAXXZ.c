/*
 * XREFs of ?SetDefaultRealizationPixelFormat@CMILBrushBitmap@@UEAAXXZ @ 0x180046120
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOpaque@CMILBrushBitmap@@UEBA_NXZ @ 0x1800460A0 (-IsOpaque@CMILBrushBitmap@@UEBA_NXZ.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x1800823E4 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMILBrushBitmap::SetDefaultRealizationPixelFormat(CMILBrushBitmap *this)
{
  __int64 v2; // rax
  _BYTE v3[16]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 21) + 24LL))(*((_QWORD *)this + 21), v3);
  *((_QWORD *)this + 1) = *(_QWORD *)v2;
  *((_DWORD *)this + 4) = *(_DWORD *)(v2 + 8);
  if ( CMILBrushBitmap::IsOpaque(this) || !(unsigned int)HasAlphaChannel((enum DXGI_FORMAT)*((_DWORD *)this + 2)) )
    *((_DWORD *)this + 3) = 3;
}
