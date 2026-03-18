/*
 * XREFs of ?ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@AEAI@Z @ 0x1C0027B5C
 * Callers:
 *     ?ReleaseAllReferences@CCompositionLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0002B00 (-ReleaseAllReferences@CCompositionLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel.c)
 *     ?SetReferenceArrayProperty@CCompositionLightMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C0002B70 (-SetReferenceArrayProperty@CCompositionLightMarshaler@DirectComposition@@UEAAJPEAVCApplicationCh.c)
 *     ?SetReferenceArrayProperty@CPrimitiveGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C00278D0 (-SetReferenceArrayProperty@CPrimitiveGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChan.c)
 *     ?ReleaseAllReferences@CPrimitiveGroupMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0027AA0 (-ReleaseAllReferences@CPrimitiveGroupMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002DEE0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CPrimitiveGroupMarshaler::ReleaseResourceMarshalers(
        DirectComposition::CPrimitiveGroupMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CResourceMarshaler **a3,
        unsigned int *a4)
{
  __int64 i; // rdi

  if ( a3 )
  {
    for ( i = 0LL; (unsigned int)i < *a4; i = (unsigned int)(i + 1) )
      DirectComposition::CApplicationChannel::ReleaseResource(a2, a3[i]);
    Win32FreePool(a3, a2, a3);
  }
  *a4 = 0;
}
