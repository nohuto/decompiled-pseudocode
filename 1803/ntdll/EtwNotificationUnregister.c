/*
 * XREFs of EtwNotificationUnregister @ 0x180008040
 * Callers:
 *     EtwUnregisterTraceGuids @ 0x180007FE0 (EtwUnregisterTraceGuids.c)
 *     EtwEventUnregister @ 0x180008030 (EtwEventUnregister.c)
 *     SbSelectProcedure @ 0x18002D680 (SbSelectProcedure.c)
 *     sub_180043AA8 @ 0x180043AA8 (sub_180043AA8.c)
 *     sub_1800483F8 @ 0x1800483F8 (sub_1800483F8.c)
 *     sub_18007EDB4 @ 0x18007EDB4 (sub_18007EDB4.c)
 *     sub_1800C8548 @ 0x1800C8548 (sub_1800C8548.c)
 *     sub_1800C85C8 @ 0x1800C85C8 (sub_1800C85C8.c)
 *     sub_1800CBC40 @ 0x1800CBC40 (sub_1800CBC40.c)
 * Callees:
 *     sub_180005D90 @ 0x180005D90 (sub_180005D90.c)
 *     sub_180008138 @ 0x180008138 (sub_180008138.c)
 *     sub_180008170 @ 0x180008170 (sub_180008170.c)
 *     RtlSetLastWin32Error @ 0x180008390 (RtlSetLastWin32Error.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 */

ULONG __cdecl EtwNotificationUnregister(REGHANDLE RegHandle, PVOID *Context)
{
  REGHANDLE v2; // rdi
  REGHANDLE v4; // rbx
  void *v5; // rcx

  v2 = HIWORD(RegHandle);
  if ( !HIWORD(RegHandle) )
    goto LABEL_13;
  v4 = RegHandle & 0xFFFFFFFFFFFFLL;
  if ( (RegHandle & 1) != 0
    || HIWORD(RegHandle) != *(_WORD *)((RegHandle & 0xFFFFFFFFFFFFLL) + 0x60)
    || v4 == qword_18015A418 )
  {
    goto LABEL_13;
  }
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v4 + 72));
  if ( (_WORD)v2 != _InterlockedCompareExchange16((volatile signed __int16 *)(v4 + 96), 0, v2) )
  {
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v4 + 72));
LABEL_13:
    RtlSetLastWin32Error(6);
    return 6;
  }
  sub_180008170((PRTL_BALANCED_NODE)v4);
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v4 + 72));
  if ( (*(_WORD *)(v4 + 98) & 0x3FFF) != 0xA )
    ZwClose(*(HANDLE *)(v4 + 88));
  v5 = *(void **)(v4 + 248);
  if ( v5 )
  {
    sub_180005D90(v5);
    *(_QWORD *)(v4 + 248) = 0LL;
  }
  if ( Context )
    *Context = *(PVOID *)(v4 + 56);
  sub_180008138((PSLIST_ENTRY)v4);
  return 0;
}
