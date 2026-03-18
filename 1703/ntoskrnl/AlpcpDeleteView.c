/*
 * XREFs of AlpcpDeleteView @ 0x14047BCF4
 * Callers:
 *     NtAlpcCreateSectionView @ 0x140436258 (NtAlpcCreateSectionView.c)
 *     NtAlpcDeleteSectionView @ 0x140442EE4 (NtAlpcDeleteSectionView.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14047A5CC (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14047BB04 (AlpcpExposeViewAttributeInSenderContext.c)
 * Callees:
 *     AlpcpDeleteBlob @ 0x14047CC60 (AlpcpDeleteBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14047EE00 (AlpcpDereferenceBlobEx.c)
 */

char __fastcall AlpcpDeleteView(ULONG_PTR BugCheckParameter2)
{
  if ( !(unsigned __int8)AlpcpDeleteBlob(BugCheckParameter2) )
    return 0;
  AlpcpDereferenceBlobEx(BugCheckParameter2);
  return 1;
}
