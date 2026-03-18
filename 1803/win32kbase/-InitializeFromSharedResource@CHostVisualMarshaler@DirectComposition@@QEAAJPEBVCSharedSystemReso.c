/*
 * XREFs of ?InitializeFromSharedResource@CHostVisualMarshaler@DirectComposition@@QEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C00012EC
 * Callers:
 *     ?Create@CHostVisualMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C00010EC (-Create@CHostVisualMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z.c)
 * Callees:
 *     ?Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x1C000C9A0 (-Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ.c)
 */

NTSTATUS __fastcall DirectComposition::CHostVisualMarshaler::InitializeFromSharedResource(
        DirectComposition::CHostVisualMarshaler *this,
        const struct DirectComposition::CSharedSystemResource *a2)
{
  NTSTATUS result; // eax

  result = DirectComposition::CVisualMarshaler::Initialize(this);
  if ( result >= 0 )
  {
    result = ObReferenceObjectByPointer((char *)a2 - 24, 3u, ExCompositionObjectType, 0);
    if ( result >= 0 )
      *((_QWORD *)this + 35) = a2;
  }
  return result;
}
