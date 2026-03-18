/*
 * XREFs of AlpcpDeleteView @ 0x1404D9E8C
 * Callers:
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1404D513C (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x1404D9AEC (AlpcpCaptureViewAttributeInternal.c)
 *     NtAlpcCreateSectionView @ 0x140556558 (NtAlpcCreateSectionView.c)
 *     NtAlpcDeleteSectionView @ 0x1405692DC (NtAlpcDeleteSectionView.c)
 * Callees:
 *     AlpcpDereferenceBlobEx @ 0x1404CF1A0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteBlob @ 0x1404D9EC0 (AlpcpDeleteBlob.c)
 */

char __fastcall AlpcpDeleteView(ULONG_PTR BugCheckParameter2)
{
  if ( !(unsigned __int8)AlpcpDeleteBlob(BugCheckParameter2) )
    return 0;
  AlpcpDereferenceBlobEx(BugCheckParameter2, 1);
  return 1;
}
