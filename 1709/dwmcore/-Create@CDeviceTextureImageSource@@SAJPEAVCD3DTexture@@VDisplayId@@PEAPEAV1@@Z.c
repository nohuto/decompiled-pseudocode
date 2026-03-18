/*
 * XREFs of ?Create@CDeviceTextureImageSource@@SAJPEAVCD3DTexture@@VDisplayId@@PEAPEAV1@@Z @ 0x1801D4690
 * Callers:
 *     ?GetImageSourceWrapperNoRef@CHwTexturedColorSource@@QEAAJPEAPEAVIImageSource@@@Z @ 0x1801AD7C0 (-GetImageSourceWrapperNoRef@CHwTexturedColorSource@@QEAAJPEAPEAVIImageSource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x180081D60 (-GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BB1A4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??0CDeviceTextureImageSource@@IEAA@PEAVCD3DTexture@@PEAVCD3DSurface@@VDisplayId@@@Z @ 0x1801D4584 (--0CDeviceTextureImageSource@@IEAA@PEAVCD3DTexture@@PEAVCD3DSurface@@VDisplayId@@@Z.c)
 */

__int64 __fastcall CDeviceTextureImageSource::Create(CD3DTexture *a1, int a2, __int64 *a3)
{
  unsigned int v6; // edi
  DWORD v7; // r9d
  __int64 v8; // rdx
  int D3DSurfaceLevel; // eax
  LPVOID v10; // rax
  __int64 v11; // rbx
  unsigned int v13; // [rsp+20h] [rbp-18h]
  struct CD3DSurface *v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0LL;
  if ( !(*(unsigned __int8 (__fastcall **)(CD3DTexture *))(*(_QWORD *)a1 + 32LL))(a1) )
  {
    v6 = -2003292412;
    v13 = 25;
LABEL_3:
    v7 = v6;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, v13);
    goto LABEL_13;
  }
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v14);
  D3DSurfaceLevel = CD3DTexture::GetD3DSurfaceLevel(a1, v8, &v14);
  v6 = D3DSurfaceLevel;
  if ( D3DSurfaceLevel < 0 )
  {
    v13 = 28;
    v7 = D3DSurfaceLevel;
    goto LABEL_12;
  }
  v10 = HeapAlloc(WPF::g_processHeap, 0, 0x40uLL);
  if ( v10 )
    v11 = CDeviceTextureImageSource::CDeviceTextureImageSource(
            (__int64)v10,
            (__int64)a1,
            (void (__fastcall ***)(_QWORD))v14,
            a2);
  else
    v11 = 0LL;
  if ( !v11 )
  {
    v6 = -2147024882;
    v13 = 35;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  *a3 = v11;
LABEL_13:
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v14);
  return v6;
}
