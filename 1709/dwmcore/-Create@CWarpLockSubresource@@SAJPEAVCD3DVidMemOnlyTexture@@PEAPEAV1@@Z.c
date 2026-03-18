/*
 * XREFs of ?Create@CWarpLockSubresource@@SAJPEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z @ 0x1801B42D4
 * Callers:
 *     ?TryFastWarpLock@CBitmapOfDeviceBitmaps@@AEAA_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAEPEAI2PEAPEAUIUnknown@@@Z @ 0x1801ACE94 (-TryFastWarpLock@CBitmapOfDeviceBitmaps@@AEAA_NAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniquen.c)
 * Callees:
 *     ?Create@CWarpLockSubresource@@SAJPEAVCD3DDeviceLevel1@@PEAVIWarpPrivateAPI@@PEAUIDXGIResource@@IPEAPEAV1@@Z @ 0x18000AC34 (-Create@CWarpLockSubresource@@SAJPEAVCD3DDeviceLevel1@@PEAVIWarpPrivateAPI@@PEAUIDXGIResource@@I.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetDXGIResource@CD3DTexture@@QEBAJPEAPEAUIDXGIResource@@@Z @ 0x180081D04 (-GetDXGIResource@CD3DTexture@@QEBAJPEAPEAUIDXGIResource@@@Z.c)
 */

__int64 __fastcall CWarpLockSubresource::Create(struct CD3DVidMemOnlyTexture *this, struct CWarpLockSubresource **a2)
{
  __int64 v2; // rax
  struct CD3DDeviceLevel1 *v5; // rbp
  struct IWarpPrivateAPI *v6; // r14
  signed int DXGIResource; // eax
  unsigned int v8; // ebx
  signed int v9; // eax
  struct IDXGIResource *v11; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 2);
  *a2 = 0LL;
  v5 = *(struct CD3DDeviceLevel1 **)(v2 + 80);
  v6 = (struct IWarpPrivateAPI *)*((_QWORD *)v5 + 79);
  if ( v6 )
  {
    v11 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
    DXGIResource = CD3DTexture::GetDXGIResource(this, &v11);
    v8 = DXGIResource;
    if ( DXGIResource < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18021C1EC, 1u, DXGIResource, 0x25u);
    }
    else
    {
      v9 = CWarpLockSubresource::Create(v5, v6, v11, *((_DWORD *)this + 43), a2);
      v8 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18021C1EC, 1u, v9, 0x2Du);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
  }
  else
  {
    return (unsigned int)-2003292287;
  }
  return v8;
}
