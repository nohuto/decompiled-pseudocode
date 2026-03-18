/*
 * XREFs of CmpDoesBufferRequireCapturing @ 0x1404A4878
 * Callers:
 *     NtDeleteValueKey @ 0x14049ACA0 (NtDeleteValueKey.c)
 *     NtSetValueKey @ 0x1404A3E60 (NtSetValueKey.c)
 *     CmpCaptureKeyValueArray @ 0x1404A45C4 (CmpCaptureKeyValueArray.c)
 *     NtRenameKey @ 0x1406EC3E0 (NtRenameKey.c)
 * Callees:
 *     CmpIsBufferGloballyVisible @ 0x1404A17C8 (CmpIsBufferGloballyVisible.c)
 */

bool __fastcall CmpDoesBufferRequireCapturing(int a1, unsigned __int64 a2)
{
  if ( a1 )
    return 1;
  if ( qword_1403CA2E8 )
    return !CmpIsBufferGloballyVisible(a2);
  return 0;
}
