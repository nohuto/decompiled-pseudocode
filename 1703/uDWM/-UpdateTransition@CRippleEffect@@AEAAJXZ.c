/*
 * XREFs of ?UpdateTransition@CRippleEffect@@AEAAJXZ @ 0x180087DF0
 * Callers:
 *     ?ValidateVisual@CRippleEffect@@UEAAJXZ @ 0x180087E70 (-ValidateVisual@CRippleEffect@@UEAAJXZ.c)
 * Callees:
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x1800195DC (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     TemplateEventDescriptor @ 0x1800777AC (TemplateEventDescriptor.c)
 *     ?Stop@CRippleEffect@@QEAAJXZ @ 0x180087D88 (-Stop@CRippleEffect@@QEAAJXZ.c)
 */

__int64 __fastcall CRippleEffect::UpdateTransition(CRippleEffect *this)
{
  __int64 v1; // rax
  unsigned int v3; // eax
  __int64 v4; // rcx

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
        TemplateEventDescriptor(v4, (__int64)&UdwmRippleAnimation_End);
    }
  }
  return 0LL;
}
