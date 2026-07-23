/*
 * XREFs of EtwNotificationUnregister @ 0x18005FD10
 * Callers:
 *     SbSelectProcedure @ 0x180039270 (SbSelectProcedure.c)
 *     EtwUnregisterTraceGuids @ 0x18005FCB0 (EtwUnregisterTraceGuids.c)
 *     EtwEventUnregister @ 0x18005FD00 (EtwEventUnregister.c)
 *     sub_1800703F8 @ 0x1800703F8 (sub_1800703F8.c)
 *     sub_180083094 @ 0x180083094 (sub_180083094.c)
 *     sub_1800831CC @ 0x1800831CC (sub_1800831CC.c)
 *     sub_1800D3E98 @ 0x1800D3E98 (sub_1800D3E98.c)
 *     sub_1800D3F18 @ 0x1800D3F18 (sub_1800D3F18.c)
 *     sub_1800D6480 @ 0x1800D6480 (sub_1800D6480.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800528A4 @ 0x1800528A4 (sub_1800528A4.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     sub_18005FE1C @ 0x18005FE1C (sub_18005FE1C.c)
 *     sub_18005FE54 @ 0x18005FE54 (sub_18005FE54.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 */

ULONG __cdecl EtwNotificationUnregister(REGHANDLE RegHandle, PVOID *Context)
{
  REGHANDLE v2; // rdi
  REGHANDLE v4; // rbx
  __int64 v5; // rax
  _RTL_BALANCED_NODE *v6; // rcx

  v2 = HIWORD(RegHandle);
  if ( !HIWORD(RegHandle) )
    goto LABEL_14;
  v4 = RegHandle & 0xFFFFFFFFFFFFLL;
  if ( (RegHandle & 1) != 0 || HIWORD(RegHandle) != *(_WORD *)((RegHandle & 0xFFFFFFFFFFFFLL) + 0x60) )
    goto LABEL_14;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v4 + 72));
  if ( (_WORD)v2 != _InterlockedCompareExchange16((volatile signed __int16 *)(v4 + 96), 0, v2) )
  {
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v4 + 72));
LABEL_14:
    RtlSetLastWin32Error(6);
    return 6;
  }
  sub_18005FE54((PRTL_BALANCED_NODE)v4);
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v4 + 72));
  if ( (*(_WORD *)(v4 + 98) & 0x3FFF) != 0xA )
  {
    ZwClose(*(HANDLE *)(v4 + 88));
    v5 = qword_1801593B0;
    if ( v4 == qword_1801593B0 )
      v5 = 0LL;
    qword_1801593B0 = v5;
  }
  v6 = *(_RTL_BALANCED_NODE **)(v4 + 248);
  if ( v6 )
  {
    sub_1800528A4(v6);
    *(_QWORD *)(v4 + 248) = 0LL;
  }
  if ( Context )
    *Context = *(PVOID *)(v4 + 56);
  sub_18005FE1C((PSLIST_ENTRY)v4);
  return 0;
}
