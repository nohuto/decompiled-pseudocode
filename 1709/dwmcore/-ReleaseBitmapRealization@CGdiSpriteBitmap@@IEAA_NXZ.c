/*
 * XREFs of ?ReleaseBitmapRealization@CGdiSpriteBitmap@@IEAA_NXZ @ 0x18009D120
 * Callers:
 *     ?SetColorKey@CGdiSpriteBitmap@@UEAAX_NAEBVCColorKey@@@Z @ 0x18009DA50 (-SetColorKey@CGdiSpriteBitmap@@UEAAX_NAEBVCColorKey@@@Z.c)
 *     ?ReleaseBitmapResources@CGdiSpriteBitmap@@IEAAXXZ @ 0x18009E0E0 (-ReleaseBitmapResources@CGdiSpriteBitmap@@IEAAXXZ.c)
 *     ?NotifyInvalidResource@CGdiSpriteBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x180166A00 (-NotifyInvalidResource@CGdiSpriteBitmap@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CGdiSpriteBitmap::ReleaseBitmapRealization(CGdiSpriteBitmap *this)
{
  char v1; // bl
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( *((_QWORD *)this + 47) )
  {
    v5 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
    (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 47))(
      *((_QWORD *)this + 47),
      &GUID_475af409_d8b1_4ca5_8177_4562f6260b68,
      &v5);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 32LL))(v5, (char *)this + 64);
    v4 = *((_QWORD *)this + 47);
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      *((_QWORD *)this + 47) = 0LL;
    }
    v1 = 1;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
  }
  return v1;
}
