/*
 * XREFs of ?InternalAddRef@?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@IEBAXXZ @ 0x1800BC15C
 * Callers:
 *     ??$_Buynode@AEAPEAVCD3DDeviceLevel1@@AEAV?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@?$_Tree_buy@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@PEAX@1@AEAPEAVCD3DDeviceLevel1@@AEAV?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@Z @ 0x180072750 (--$_Buynode@AEAPEAVCD3DDeviceLevel1@@AEAV-$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@-$_Tree_b.c)
 *     ?Create@CAtlasImageSource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1800727E4 (-Create@CAtlasImageSource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180009FF0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
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
