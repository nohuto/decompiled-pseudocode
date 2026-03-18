/*
 * XREFs of ?ProcessUpdateMargins@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UPDATEMARGINS@@@Z @ 0x180094BC0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::ProcessUpdateMargins(
        CGdiSpriteBitmap *this,
        const struct CResourceTable *a2,
        const struct MILCMD_GDISPRITEBITMAP_UPDATEMARGINS *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  char v5; // al

  v3 = *((_DWORD *)a3 + 2);
  v4 = 0;
  if ( v3 < 0 || *((int *)a3 + 3) < 0 || *((int *)a3 + 4) < 0 || *((int *)a3 + 5) < 0 )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x158u);
  }
  else
  {
    if ( *((_DWORD *)this + 25) != v3
      || *((_DWORD *)this + 26) != *((_DWORD *)a3 + 3)
      || *((_DWORD *)this + 27) != *((_DWORD *)a3 + 4)
      || (v5 = 0, *((_DWORD *)this + 28) != *((_DWORD *)a3 + 5)) )
    {
      v5 = 1;
    }
    if ( v5 )
    {
      *(_OWORD *)((char *)this + 100) = *(_OWORD *)((char *)a3 + 8);
      CResource::NotifyOnChanged(this, 0LL, 0LL);
    }
  }
  return v4;
}
