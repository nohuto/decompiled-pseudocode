/*
 * XREFs of ?ProcessSetNonScalingStroke@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVECTORSHAPE_SETNONSCALINGSTROKE@@@Z @ 0x1801A4FCC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CSpriteVectorShape::ProcessSetNonScalingStroke(
        CSpriteVectorShape *this,
        struct CResourceTable *a2,
        const struct MILCMD_SPRITEVECTORSHAPE_SETNONSCALINGSTROKE *a3)
{
  char v4; // al

  v4 = *((_DWORD *)a3 + 2) != 0;
  if ( v4 != *((_BYTE *)this + 196) )
  {
    *((_BYTE *)this + 196) = v4;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 14);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 15);
    CResource::NotifyOnChanged(this, 0LL, 0LL);
  }
  return 0LL;
}
