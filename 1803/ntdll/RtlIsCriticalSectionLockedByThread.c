/*
 * XREFs of RtlIsCriticalSectionLockedByThread @ 0x18002C250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlIsCriticalSectionLockedByThread(__int64 a1)
{
  return *(HANDLE *)(a1 + 16) == NtCurrentTeb()->ClientId.UniqueThread;
}
