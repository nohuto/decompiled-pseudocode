/*
 * XREFs of ?Initialize@CAtlasTexture@@AEAAJPEAVCD3DDeviceLevel1@@I@Z @ 0x180013458
 * Callers:
 *     ?Create@CAtlasTexture@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z @ 0x180013648 (-Create@CAtlasTexture@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GenerateWhitePixel@CAtlasTexture@@AEAAXXZ @ 0x180013240 (-GenerateWhitePixel@CAtlasTexture@@AEAAXXZ.c)
 *     ??4?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180013600 (--4-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x180019928 (-InternalRelease@-$ComPtr@VCD3DTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800B9A38 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 *     ??$As@VIDeviceResource@@@?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@VIDeviceResource@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800C05C4 (--$As@VIDeviceResource@@@-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Com.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasTexture::Initialize(CAtlasTexture *this, struct CD3DDeviceLevel1 *a2, unsigned int a3)
{
  int RenderTargetBitmap; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  SIZE_T v10; // rax
  void *v11; // rax
  void *v12; // rcx
  char v14; // [rsp+30h] [rbp-29h]
  char v15; // [rsp+38h] [rbp-21h]
  char v16; // [rsp+40h] [rbp-19h]
  __int64 v17; // [rsp+50h] [rbp-9h] BYREF
  const char *v18; // [rsp+58h] [rbp-1h] BYREF
  int v19; // [rsp+60h] [rbp+7h]
  __int64 v20; // [rsp+68h] [rbp+Fh] BYREF
  _DWORD v21[4]; // [rsp+70h] [rbp+17h] BYREF

  v17 = 0LL;
  v20 = 0LL;
  v21[2] = 0;
  v21[1] = 1;
  v21[0] = 87;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v17);
  v19 = 17;
  v18 = "DWM Atlas surface";
  v16 = 0;
  v15 = 1;
  v14 = 0;
  RenderTargetBitmap = CRenderTargetBitmapCache::GetRenderTargetBitmap(
                         (char *)a2 + 536,
                         &v18,
                         2048LL,
                         a3,
                         DisplayId::All,
                         v21,
                         v14,
                         v15,
                         v16,
                         &v17);
  v7 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RenderTargetBitmap, 0x42u);
    goto LABEL_12;
  }
  v18 = 0LL;
  v8 = Microsoft::WRL::ComPtr<IRenderTargetBitmap>::As<IDeviceResource>(&v17, &v18);
  v7 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x4Bu);
    goto LABEL_16;
  }
  v9 = (*(__int64 (__fastcall **)(const char *, CAtlasTexture *))(*(_QWORD *)v18 + 24LL))(v18, this);
  v7 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x4Cu);
LABEL_16:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
    goto LABEL_12;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
  Microsoft::WRL::ComPtr<IRenderTargetBitmap>::operator=((char *)this + 8, &v17);
  *((_DWORD *)this + 6) = a3 - 1;
  *((_DWORD *)this + 7) = a3 - 1;
  v10 = 8LL * (a3 - 1);
  if ( !is_mul_ok(a3 - 1, 8uLL) )
    v10 = -1LL;
  if ( !v10 )
    v10 = 1LL;
  v11 = HeapAlloc(WPF::g_processHeap, 0, v10);
  v12 = (void *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = v11;
  if ( v12 )
  {
    operator delete(v12);
    v11 = (void *)*((_QWORD *)this + 2);
  }
  if ( v11 )
  {
    memset_0(v11, 0, 8LL * *((unsigned int *)this + 6));
    CAtlasTexture::GenerateWhitePixel(this);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x57u);
  }
LABEL_12:
  Microsoft::WRL::ComPtr<CD3DTexture>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v17);
  return v7;
}
