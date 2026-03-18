/*
 * XREFs of ?ProcessUpdate@CMatrixTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MATRIXTRANSFORM@@@Z @ 0x1800B4CAC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_PARAM@@@Z @ 0x1801389A8 (-ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_P.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CMatrixTransform::ProcessUpdate(
        CMatrixTransform *this,
        struct CResourceTable *a2,
        const struct MILCMD_MATRIXTRANSFORM *a3)
{
  _BYTE v4[56]; // [rsp+20h] [rbp-48h]

  *(_OWORD *)v4 = *(_OWORD *)a3;
  *(_OWORD *)&v4[16] = *((_OWORD *)a3 + 1);
  *(_OWORD *)&v4[32] = *((_OWORD *)a3 + 2);
  *(_QWORD *)&v4[48] = *((_QWORD *)a3 + 6);
  *(_OWORD *)((char *)this + 152) = *(_OWORD *)&v4[8];
  *(_OWORD *)((char *)this + 168) = *(_OWORD *)&v4[24];
  *(_OWORD *)((char *)this + 184) = *(_OWORD *)&v4[40];
  CResource::NotifyOnChanged(this, 0, 0LL);
  return 0LL;
}
