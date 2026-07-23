/*
 * XREFs of sub_18010CAF8 @ 0x18010CAF8
 * Callers:
 *     sub_18010D6E8 @ 0x18010D6E8 (sub_18010D6E8.c)
 * Callees:
 *     RtlDeleteCriticalSection @ 0x180008D10 (RtlDeleteCriticalSection.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 */

__int64 __fastcall sub_18010CAF8(_RTL_CRITICAL_SECTION *BaseAddress)
{
  _RTL_CRITICAL_SECTION *v3; // rdi
  void *v4; // r8

  if ( BaseAddress == (_RTL_CRITICAL_SECTION *)1 )
    return 1LL;
  if ( BaseAddress == (_RTL_CRITICAL_SECTION *)-1LL )
  {
    RtlSetLastWin32Error(6);
    return 0LL;
  }
  else
  {
    v3 = BaseAddress + 1;
    RtlEnterCriticalSection(BaseAddress + 1);
    if ( ZwClose(BaseAddress->DebugInfo) < 0 )
    {
      RtlLeaveCriticalSection(v3);
      return 0LL;
    }
    else
    {
      v4 = *(void **)&BaseAddress->LockCount;
      if ( v4 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
      RtlDeleteCriticalSection(v3);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      return 1LL;
    }
  }
}
