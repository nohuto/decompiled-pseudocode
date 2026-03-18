/*
 * XREFs of CommonBuffer_ReleaseSecureBuffer @ 0x1C0002354
 * Callers:
 *     CommonBuffer_ReleaseBuffer @ 0x1C00068AC (CommonBuffer_ReleaseBuffer.c)
 * Callees:
 *     SecureDmaEnabler_FreeCommonBufferPage @ 0x1C005D5E8 (SecureDmaEnabler_FreeCommonBufferPage.c)
 */

void __fastcall CommonBuffer_ReleaseSecureBuffer(__int64 a1, _QWORD *a2)
{
  SecureDmaEnabler_FreeCommonBufferPage(a1, a2[11]);
  ExFreePoolWithTag(a2, 0x49434858u);
}
