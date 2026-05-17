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

__int64 __fastcall sub_18010CAF8(unsigned __int64 a1)
{
  __int64 *v3; // rdi
  unsigned __int64 v4; // r8

  if ( a1 == 1 )
    return 1LL;
  if ( a1 == -1LL )
  {
    RtlSetLastWin32Error(6u);
    return 0LL;
  }
  else
  {
    v3 = (__int64 *)(a1 + 40);
    RtlEnterCriticalSection(a1 + 40);
    if ( (int)ZwClose() < 0 )
    {
      RtlLeaveCriticalSection((__int64)v3);
      return 0LL;
    }
    else
    {
      v4 = *(_QWORD *)(a1 + 8);
      if ( v4 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
      RtlDeleteCriticalSection(v3);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
      return 1LL;
    }
  }
}
