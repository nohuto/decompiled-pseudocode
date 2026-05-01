/*
 * XREFs of ?ConvertIWICBitmapSourcePixelFormat@@YAJPEAUIWICBitmapSource@@U_GUID@@PEAUIWICImagingFactory@@PEAPEAU1@@Z @ 0x18026E410
 * Callers:
 *     ?ConvertIWICBitmapSourceTo32bppHBITMAP@@YAJPEAUIWICBitmapSource@@PEAUIWICImagingFactory@@PEAPEAUHBITMAP__@@@Z @ 0x18026E514 (-ConvertIWICBitmapSourceTo32bppHBITMAP@@YAJPEAUIWICBitmapSource@@PEAUIWICImagingFactory@@PEAPEAU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ConvertIWICBitmapSourcePixelFormat(
        struct IWICBitmapSource *a1,
        struct _GUID *a2,
        struct IWICImagingFactory *a3,
        struct IWICBitmapSource **a4)
{
  int v8; // ebx
  __int64 v9; // rcx
  struct IWICBitmapSource *v10; // rax
  struct IWICBitmapSource *v12; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v13[2]; // [rsp+48h] [rbp-40h] BYREF

  *a4 = 0LL;
  v8 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, _QWORD *))a1->lpVtbl->GetPixelFormat)(a1, v13);
  v9 = v13[0] - *(_QWORD *)&a2->Data1;
  if ( v13[0] == *(_QWORD *)&a2->Data1 )
    v9 = v13[1] - *(_QWORD *)a2->Data4;
  if ( v9 )
  {
    v12 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    v8 = ((__int64 (__fastcall *)(struct IWICImagingFactory *, struct IWICBitmapSource **))a3->lpVtbl->CreateFormatConverter)(
           a3,
           &v12);
    if ( v8 >= 0 )
    {
      v8 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, struct IWICBitmapSource *, struct _GUID *, _QWORD, _QWORD, _QWORD, _DWORD))v12->lpVtbl[1].QueryInterface)(
             v12,
             a1,
             a2,
             0LL,
             0LL,
             0LL,
             0);
      if ( v8 >= 0 )
      {
        v10 = v12;
        v12 = 0LL;
        *a4 = v10;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  }
  else
  {
    *a4 = a1;
    ((void (__fastcall *)(struct IWICBitmapSource *))a1->lpVtbl->AddRef)(a1);
  }
  return (unsigned int)v8;
}
