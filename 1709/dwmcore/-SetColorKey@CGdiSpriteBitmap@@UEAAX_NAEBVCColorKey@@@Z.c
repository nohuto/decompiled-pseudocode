/*
 * XREFs of ?SetColorKey@CGdiSpriteBitmap@@UEAAX_NAEBVCColorKey@@@Z @ 0x18009DA50
 * Callers:
 *     <none>
 * Callees:
 *     ??8CColorKey@@QEBA_NAEBV0@@Z @ 0x18009D000 (--8CColorKey@@QEBA_NAEBV0@@Z.c)
 *     ?ReleaseBitmapRealization@CGdiSpriteBitmap@@IEAA_NXZ @ 0x18009D120 (-ReleaseBitmapRealization@CGdiSpriteBitmap@@IEAA_NXZ.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

void __fastcall CGdiSpriteBitmap::SetColorKey(CGdiSpriteBitmap *this, char a2, const struct CColorKey *a3)
{
  unsigned __int8 v3; // r10
  char v4; // r11
  CGdiSpriteBitmap *v5; // r9
  char *v6; // rbx

  v3 = *((_BYTE *)this + 60);
  v4 = a2;
  v5 = this;
  if ( a2 != v3 >> 7 || !CColorKey::operator==((float *)this + 62, (float *)a3) )
  {
    v6 = (char *)v5 - 56;
    *((_BYTE *)v5 + 60) = (v4 << 7) | v3 & 0x7F;
    *(_OWORD *)((char *)v5 + 248) = *(_OWORD *)a3;
    *(_OWORD *)((char *)v5 + 264) = *((_OWORD *)a3 + 1);
    *((_DWORD *)v5 + 70) = *((_DWORD *)a3 + 8);
    if ( CGdiSpriteBitmap::ReleaseBitmapRealization((CGdiSpriteBitmap *)((char *)v5 - 56)) )
      CResource::NotifyOnChanged(v6, 0LL, 0LL);
  }
}
