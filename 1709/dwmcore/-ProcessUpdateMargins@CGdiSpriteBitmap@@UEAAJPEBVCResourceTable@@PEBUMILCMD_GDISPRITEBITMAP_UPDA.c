/*
 * XREFs of ?ProcessUpdateMargins@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UPDATEMARGINS@@@Z @ 0x18009E430
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::ProcessUpdateMargins(
        CGdiSpriteBitmap *this,
        const struct CResourceTable *a2,
        const struct MILCMD_GDISPRITEBITMAP_UPDATEMARGINS *a3)
{
  unsigned int v3; // ebx
  char v4; // al

  v3 = 0;
  if ( *((int *)a3 + 2) < 0 || *((int *)a3 + 3) < 0 || *((int *)a3 + 4) < 0 || *((int *)a3 + 5) < 0 )
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x158u);
  }
  else
  {
    if ( *((_DWORD *)this + 25) != *((_DWORD *)a3 + 2)
      || *((_DWORD *)this + 26) != *((_DWORD *)a3 + 3)
      || *((_DWORD *)this + 27) != *((_DWORD *)a3 + 4)
      || (v4 = 0, *((_DWORD *)this + 28) != *((_DWORD *)a3 + 5)) )
    {
      v4 = 1;
    }
    if ( v4 )
    {
      *(_OWORD *)((char *)this + 100) = *(_OWORD *)((char *)a3 + 8);
      CResource::NotifyOnChanged(this, 0LL, 0LL);
    }
  }
  return v3;
}
