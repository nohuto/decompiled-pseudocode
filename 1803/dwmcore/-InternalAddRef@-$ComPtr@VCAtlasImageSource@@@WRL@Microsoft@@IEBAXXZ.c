/*
 * XREFs of ?InternalAddRef@?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@IEBAXXZ @ 0x180013048
 * Callers:
 *     ?Create@CAtlasImageSource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180011640 (-Create@CAtlasImageSource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z.c)
 *     ?Generate@CGradientSource@@IEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N3W4D2D1_EXTEND_MODE@@@Z @ 0x18001269C (-Generate@CGradientSource@@IEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@1@V-$span@$$CBUD2D1_GR.c)
 *     ?FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDeviceLevel1@@_NAEBVRetrievalParams@1@@Z @ 0x180012868 (-FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDeviceLevel1@@_NAEBVRetrievalParams@1@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18000D6E0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 */

void __fastcall Microsoft::WRL::ComPtr<CAtlasImageSource>::InternalAddRef(CBitmapOfDeviceBitmaps **a1)
{
  CBitmapOfDeviceBitmaps *v1; // rcx
  void (*v2)(void); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = *(void (**)(void))(*(_QWORD *)v1 + 8LL);
    if ( (char *)v2 == (char *)CBitmapOfDeviceBitmaps::AddRef )
      CBitmapOfDeviceBitmaps::AddRef(v1);
    else
      v2();
  }
}
