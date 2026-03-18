/*
 * XREFs of ?Create@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIMILResourceCache@@AEBUCacheParameters@1@_NPEAPEAV1@@Z @ 0x1801B4E58
 * Callers:
 *     ?ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@4@AEAPEAV4@3@Z @ 0x1801AEAA8 (-ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapCo.c)
 *     ?GetBitmapColorSource@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@5@PEAV1@AEAPEAV5@5@Z @ 0x1801AEDAC (-GetBitmapColorSource@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEAUCacheParam.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@AEBUCacheParameters@1@@Z @ 0x180085100 (-SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU-$TMILFlag.c)
 *     ??0CHwBitmapColorSource@@IEAA@PEAVCD3DDeviceLevel1@@IIPEAVIMILResourceCache@@PEBUD3D11_TEXTURE2D_DESC@@@Z @ 0x180085400 (--0CHwBitmapColorSource@@IEAA@PEAVCD3DDeviceLevel1@@IIPEAVIMILResourceCache@@PEBUD3D11_TEXTURE2D.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwBitmapColorSource::Create(
        struct CD3DDeviceLevel1 *a1,
        struct IMILResourceCache *a2,
        const struct CHwBitmapColorSource::CacheParameters *a3,
        char a4,
        struct CHwBitmapColorSource **a5)
{
  unsigned int v5; // ebx
  DXGI_FORMAT v8; // eax
  UINT v10; // eax
  CHwBitmapColorSource *v11; // rax
  struct CHwBitmapColorSource *v12; // rax
  D3D11_TEXTURE2D_DESC v14; // [rsp+30h] [rbp-30h] BYREF
  const void *retaddr; // [rsp+68h] [rbp+8h]

  v5 = 0;
  v14.Width = *((_DWORD *)a3 + 11);
  v14.Height = *((_DWORD *)a3 + 14);
  v8 = *(_DWORD *)a3;
  v14.MipLevels = 1;
  v14.ArraySize = 1;
  v14.SampleDesc = (DXGI_SAMPLE_DESC)1LL;
  v14.Format = v8;
  v10 = 8;
  if ( a4 )
    v10 = 40;
  v14.Usage = D3D11_USAGE_DEFAULT;
  v14.BindFlags = v10;
  *(_QWORD *)&v14.CPUAccessFlags = 0LL;
  v11 = (CHwBitmapColorSource *)HeapAlloc(WPF::g_processHeap, 0, 0x150uLL);
  if ( !v11 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v12 = CHwBitmapColorSource::CHwBitmapColorSource(v11, a1, *((_DWORD *)a3 + 3), *((_DWORD *)a3 + 4), a2, &v14);
  *a5 = v12;
  if ( v12 )
  {
    (**(void (__fastcall ***)(struct CHwBitmapColorSource *))v12)(v12);
    CHwBitmapColorSource::SetBitmapAndContextCacheParameters(*a5, 0LL, 0LL, (__int64)a3);
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x69Fu);
  }
  return v5;
}
