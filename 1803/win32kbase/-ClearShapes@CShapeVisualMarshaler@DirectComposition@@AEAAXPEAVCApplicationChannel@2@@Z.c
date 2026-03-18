/*
 * XREFs of ?ClearShapes@CShapeVisualMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0153D34
 * Callers:
 *     ?ReleaseAllReferences@CShapeVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0153E80 (-ReleaseAllReferences@CShapeVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?SetReferenceArrayProperty@CShapeVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C0153ED0 (-SetReferenceArrayProperty@CShapeVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0015294 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CShapeVisualMarshaler::ClearShapes(
        DirectComposition::CShapeVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 i; // rdi
  __int64 v5; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 74); i = (unsigned int)(i + 1) )
    DirectComposition::CApplicationChannel::ReleaseResource(
      a2,
      *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 36) + 8 * i));
  v5 = *((_QWORD *)this + 36);
  if ( v5 )
  {
    Win32FreePool(v5);
    *((_QWORD *)this + 36) = 0LL;
    *((_DWORD *)this + 74) = 0;
  }
}
