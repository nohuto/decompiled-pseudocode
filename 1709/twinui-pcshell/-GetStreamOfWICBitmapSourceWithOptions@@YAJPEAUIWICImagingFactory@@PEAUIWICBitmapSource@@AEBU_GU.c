/*
 * XREFs of ?GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GUID@@U3@W4EncodingOptions@@PEAPEAUIStream@@@Z @ 0x1800E6E34
 * Callers:
 *     ?GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@PEAPEAUIWICBitmapSource@@@Z @ 0x1800E709C (-GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@.c)
 *     _anonymous_namespace_::GetBitmapStreamFromHICON @ 0x1801BC51C (_anonymous_namespace_--GetBitmapStreamFromHICON.c)
 * Callees:
 *     ?AddFrameToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapEncoder@@PEAUIWICBitmapSource@@U_GUID@@W4EncodingOptions@@@Z @ 0x1800E6AE0 (-AddFrameToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapEncoder@@PEAUIWICBitmapSource@@U_.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetStreamOfWICBitmapSourceWithOptions(
        void *a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        char a5,
        IStream **a6)
{
  IStream **v9; // rsi
  signed int v10; // edi
  IStream *v11; // rbx
  __int64 v12; // rcx
  LPVOID v13; // rcx
  __int128 v15; // [rsp+40h] [rbp-10h] BYREF
  LPVOID ppv; // [rsp+80h] [rbp+30h] BYREF

  v9 = a6;
  *a6 = 0LL;
  ppv = a1;
  if ( a1 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)a1 + 8LL))(a1);
    a1 = ppv;
  }
  if ( a1
    || (v10 = CoCreateInstance(&CLSID_WICImagingFactory2, 0LL, 1u, &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70, &ppv),
        v10 >= 0) )
  {
    v11 = SHCreateMemStream(0LL, 0);
    v10 = v11 == 0LL ? 0x8007000E : 0;
    if ( v11 )
    {
      a6 = 0LL;
      v10 = (*(__int64 (__fastcall **)(LPVOID, __int64, GUID *, IStream ***))(*(_QWORD *)ppv + 64LL))(
              ppv,
              a3,
              &GUID_VendorMicrosoft,
              &a6);
      if ( v10 >= 0 )
      {
        v10 = (*((__int64 (__fastcall **)(IStream **, IStream *, __int64))*a6 + 3))(a6, v11, 2LL);
        if ( v10 >= 0 )
        {
          v15 = *a4;
          v10 = AddFrameToWICBitmap((__int64)ppv, (__int64)a6, a2, &v15, a5);
          if ( v10 >= 0 )
          {
            v10 = (*((__int64 (__fastcall **)(IStream **))*a6 + 11))(a6);
            if ( v10 >= 0 )
            {
              v10 = (*(__int64 (__fastcall **)(IStream *, __int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 40LL))(
                      v11,
                      `GetStreamOfWICBitmapSourceWithOptions'::`23'::lnBeginning,
                      0LL,
                      0LL);
              if ( v10 >= 0 )
              {
                (*(void (__fastcall **)(IStream *))(*(_QWORD *)v11 + 8LL))(v11);
                *v9 = v11;
                v10 = 0;
              }
            }
          }
        }
      }
      v12 = (__int64)a6;
      if ( a6 )
      {
        a6 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
    if ( v11 )
      (*(void (__fastcall **)(IStream *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v13 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return (unsigned int)v10;
}
