/*
 * XREFs of ?Initialize@CAtlasTexture@@AEAAJPEAVCD3DDeviceLevel1@@I@Z @ 0x18008BBC0
 * Callers:
 *     ?Create@CAtlasTexture@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z @ 0x1800C0B88 (-Create@CAtlasTexture@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x180081A04 (-InternalRelease@-$ComPtr@VCD3DTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@VIDeviceResource@@@?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@VIDeviceResource@@@WRL@Microsoft@@@Details@12@@Z @ 0x180088900 (--$As@VIDeviceResource@@@-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Com.c)
 *     ??4?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18008893C (--4-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GenerateWhitePixel@CAtlasTexture@@AEAAXXZ @ 0x18008B9CC (-GenerateWhitePixel@CAtlasTexture@@AEAAXXZ.c)
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x18008CE70 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 *     ?IsGradientWhitePixelGPUBlacklistedGpu@CCommonRegistryData@@SA_NII@Z @ 0x1800BD80C (-IsGradientWhitePixelGPUBlacklistedGpu@CCommonRegistryData@@SA_NII@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasTexture::Initialize(CAtlasTexture *this, struct CD3DDeviceLevel1 *a2, unsigned int a3)
{
  signed int RenderTargetBitmap; // eax
  unsigned int v7; // ebx
  signed int v8; // eax
  signed int v9; // eax
  SIZE_T v10; // rax
  LPVOID v11; // rsi
  void *v12; // rcx
  void *v13; // rcx
  char v15; // [rsp+30h] [rbp-29h]
  char v16; // [rsp+38h] [rbp-21h]
  char v17; // [rsp+40h] [rbp-19h]
  __int64 v18; // [rsp+50h] [rbp-9h] BYREF
  const char *v19; // [rsp+58h] [rbp-1h] BYREF
  int v20; // [rsp+60h] [rbp+7h]
  CD3DLockableTexture *v21; // [rsp+68h] [rbp+Fh] BYREF
  _DWORD v22[4]; // [rsp+70h] [rbp+17h] BYREF

  v18 = 0LL;
  v21 = 0LL;
  v22[2] = 0;
  v22[1] = 1;
  v22[0] = 87;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v18);
  v20 = 17;
  v19 = "DWM Atlas surface";
  v17 = 0;
  v16 = 1;
  v15 = 0;
  RenderTargetBitmap = CRenderTargetBitmapCache::GetRenderTargetBitmap(
                         (char *)a2 + 536,
                         &v19,
                         2048LL,
                         a3,
                         DisplayId::All,
                         v22,
                         v15,
                         v16,
                         v17,
                         &v18);
  v7 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, RenderTargetBitmap, 0x42u);
    goto LABEL_12;
  }
  v19 = 0LL;
  v8 = Microsoft::WRL::ComPtr<IRenderTargetBitmap>::As<IDeviceResource>(&v18, (__int64 *)&v19);
  v7 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x4Bu);
    goto LABEL_16;
  }
  v9 = (*(__int64 (__fastcall **)(const char *, CAtlasTexture *))(*(_QWORD *)v19 + 24LL))(v19, this);
  v7 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x4Cu);
LABEL_16:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
    goto LABEL_12;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
  Microsoft::WRL::ComPtr<IRenderTargetBitmap>::operator=((__int64 *)this + 1, &v18);
  *((_DWORD *)this + 6) = a3 - 1;
  *((_DWORD *)this + 7) = a3 - 1;
  v10 = 8LL * (a3 - 1);
  if ( !is_mul_ok(a3 - 1, 8uLL) )
    v10 = -1LL;
  if ( !v10 )
    v10 = 1LL;
  v11 = HeapAlloc(WPF::g_processHeap, 0, v10);
  v12 = (void *)*((_QWORD *)this + 2);
  if ( v11 != v12 )
  {
    WPF::ProcessHeapImpl::Free(v12);
    *((_QWORD *)this + 2) = v11;
  }
  v13 = (void *)*((_QWORD *)this + 2);
  if ( v13 )
  {
    memset_0(v13, 0, 8LL * *((unsigned int *)this + 6));
    CAtlasTexture::GenerateWhitePixel(this);
    *((_BYTE *)this + 36) = !CCommonRegistryData::IsGradientWhitePixelGPUBlacklistedGpu(
                               *(_DWORD *)(*((_QWORD *)a2 + 89) + 296LL),
                               *(_DWORD *)(*((_QWORD *)a2 + 89) + 300LL));
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x57u);
  }
LABEL_12:
  WPF::ProcessHeapImpl::Free(0LL);
  Microsoft::WRL::ComPtr<CD3DTexture>::InternalRelease(&v21);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v18);
  return v7;
}
