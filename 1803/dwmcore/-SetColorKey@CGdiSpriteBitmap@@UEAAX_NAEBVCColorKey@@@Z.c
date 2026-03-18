/*
 * XREFs of ?SetColorKey@CGdiSpriteBitmap@@UEAAX_NAEBVCColorKey@@@Z @ 0x180094380
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??8CColorKey@@QEBA_NAEBV0@@Z @ 0x1800937A0 (--8CColorKey@@QEBA_NAEBV0@@Z.c)
 *     ?ReleaseBitmapRealization@CGdiSpriteBitmap@@IEAA_NXZ @ 0x18009399C (-ReleaseBitmapRealization@CGdiSpriteBitmap@@IEAA_NXZ.c)
 */

void __fastcall CGdiSpriteBitmap::SetColorKey(CGdiSpriteBitmap *this, char a2, const struct CColorKey *a3)
{
  unsigned __int8 v3; // r10
  char v4; // r11
  CGdiSpriteBitmap *v5; // r9
  CVisual *v6; // rbx

  v3 = *((_BYTE *)this + 60);
  v4 = a2;
  v5 = this;
  if ( a2 != v3 >> 7 || !CColorKey::operator==((float *)this + 64, (float *)a3) )
  {
    v6 = (CGdiSpriteBitmap *)((char *)v5 - 56);
    *((_BYTE *)v5 + 60) = (v4 << 7) | v3 & 0x7F;
    *((_OWORD *)v5 + 16) = *(_OWORD *)a3;
    *((_OWORD *)v5 + 17) = *((_OWORD *)a3 + 1);
    *((_DWORD *)v5 + 72) = *((_DWORD *)a3 + 8);
    if ( CGdiSpriteBitmap::ReleaseBitmapRealization((CGdiSpriteBitmap *)((char *)v5 - 56)) )
      CResource::NotifyOnChanged(v6, 0LL, 0LL);
  }
}
