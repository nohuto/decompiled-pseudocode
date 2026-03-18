/*
 * XREFs of ?InitializeFromSharedResource@CSharedReadMarshaler@DirectComposition@@UEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C000C5A0
 * Callers:
 *     ?InitializeFromSharedResource@CSharedReadAnimationTriggerMarshaler@DirectComposition@@UEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C000C070 (-InitializeFromSharedResource@CSharedReadAnimationTriggerMarshaler@DirectComposition@@UEAAJPEBVC.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DirectComposition::CSharedReadMarshaler::InitializeFromSharedResource(
        DirectComposition::CSharedReadMarshaler *this,
        const struct DirectComposition::CSharedSystemResource *a2)
{
  NTSTATUS result; // eax

  result = ObReferenceObjectByPointer((char *)a2 - 24, 3u, ExCompositionObjectType, 0);
  if ( result >= 0 )
  {
    *((_QWORD *)this + 5) = a2;
    *((_DWORD *)this + 12) = *((_DWORD *)a2 + 3);
  }
  return result;
}
