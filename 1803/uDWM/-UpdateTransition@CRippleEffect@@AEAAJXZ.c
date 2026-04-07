/*
 * XREFs of ?UpdateTransition@CRippleEffect@@AEAAJXZ @ 0x18008833C
 * Callers:
 *     ?ValidateVisual@CRippleEffect@@UEAAJXZ @ 0x1800883D0 (-ValidateVisual@CRippleEffect@@UEAAJXZ.c)
 * Callees:
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x18000D72C (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     McTemplateU0 @ 0x180073C8C (McTemplateU0.c)
 *     ?Stop@CRippleEffect@@QEAAJXZ @ 0x1800882D4 (-Stop@CRippleEffect@@QEAAJXZ.c)
 */

__int64 __fastcall CRippleEffect::UpdateTransition(CRippleEffect *this)
{
  __int64 v1; // rax
  unsigned int v3; // eax

  v1 = *((_QWORD *)this + 33);
  if ( v1 )
  {
    v3 = (int)(float)((float)*(double *)(v1 + 48) * 12.0);
    if ( v3 >= 0xC )
      v3 = 11;
    CImage::SetBitmapSource(*((CImage **)this + 35), *((struct CBitmapSource **)this + (int)v3 + 36));
    if ( *(_BYTE *)(*((_QWORD *)this + 33) + 72LL) )
    {
      CRippleEffect::Stop(this);
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0(Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmRippleAnimation_End);
    }
  }
  return 0LL;
}
