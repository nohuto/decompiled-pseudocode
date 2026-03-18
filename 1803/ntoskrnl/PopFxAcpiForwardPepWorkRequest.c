/*
 * XREFs of PopFxAcpiForwardPepWorkRequest @ 0x140282E38
 * Callers:
 *     PopFxProcessWork @ 0x140077B28 (PopFxProcessWork.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x1400782B0 (IoAcquireRemoveLockEx.c)
 *     IoReleaseRemoveLockEx @ 0x1400BA4B0 (IoReleaseRemoveLockEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PopFxBugCheck @ 0x140274BF4 (PopFxBugCheck.c)
 */

void __fastcall PopFxAcpiForwardPepWorkRequest(ULONG_PTR BugCheckParameter2, int *a2)
{
  struct _IO_REMOVE_LOCK *v3; // rdi
  _QWORD v4[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( !*(_QWORD *)(BugCheckParameter2 + 80) )
    PopFxBugCheck(0x668uLL, BugCheckParameter2, *a2, 0LL);
  v3 = (struct _IO_REMOVE_LOCK *)(BugCheckParameter2 + 248);
  if ( IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 248), (PVOID)0x77466F50, &File, 1u, 0x20u) >= 0 )
  {
    memset(v4, 0, 0x20uLL);
    LODWORD(v4[0]) = 0;
    v4[1] = qword_1403A6368;
    v4[3] = a2;
    ((void (__fastcall *)(_QWORD *))PopFxPlatformInterface)(v4);
    IoReleaseRemoveLockEx(v3, (PVOID)0x77466F50, 0x20u);
  }
}
