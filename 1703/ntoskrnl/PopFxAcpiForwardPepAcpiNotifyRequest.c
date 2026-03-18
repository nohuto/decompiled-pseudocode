/*
 * XREFs of PopFxAcpiForwardPepAcpiNotifyRequest @ 0x140237F5C
 * Callers:
 *     PopFxProcessWork @ 0x140069444 (PopFxProcessWork.c)
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x140022800 (IoReleaseRemoveLockEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PopFxBugCheck @ 0x14022A7A4 (PopFxBugCheck.c)
 *     PopFxFindAndReferenceAcpiDevice @ 0x14022AD48 (PopFxFindAndReferenceAcpiDevice.c)
 */

void __fastcall PopFxAcpiForwardPepAcpiNotifyRequest(ULONG_PTR BugCheckParameter2, int *a2)
{
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (int)PopFxFindAndReferenceAcpiDevice((__int64 *)BugCheckParameter2) >= 0 )
  {
    if ( !*(_QWORD *)(BugCheckParameter2 + 80) )
      PopFxBugCheck(0x668uLL, BugCheckParameter2, *a2, 0LL);
    memset(v4, 0, 0x20uLL);
    LODWORD(v4[0]) = 0;
    v4[1] = qword_1403490E8;
    v4[3] = a2;
    ((void (__fastcall *)(_QWORD *))PopFxPlatformInterface)(v4);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 248), (PVOID)0x66466F50, 0x20u);
  }
}
