/*
 * XREFs of AlpcpDeleteView @ 0x1404618AC
 * Callers:
 *     NtAlpcDeleteSectionView @ 0x140460970 (NtAlpcDeleteSectionView.c)
 *     NtAlpcCreateSectionView @ 0x140460B14 (NtAlpcCreateSectionView.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x140461390 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140461730 (AlpcpExposeViewAttributeInSenderContext.c)
 * Callees:
 *     AlpcpDeleteBlob @ 0x14046248C (AlpcpDeleteBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14049D674 (AlpcpDereferenceBlobEx.c)
 */

char __fastcall AlpcpDeleteView(ULONG_PTR BugCheckParameter2)
{
  if ( !(unsigned __int8)AlpcpDeleteBlob(BugCheckParameter2) )
    return 0;
  AlpcpDereferenceBlobEx(BugCheckParameter2);
  return 1;
}
