/*
 * XREFs of sub_180006330 @ 0x180006330
 * Callers:
 *     sub_1800062E0 @ 0x1800062E0 (sub_1800062E0.c)
 *     RtlSetHeapInformation @ 0x18007EF50 (RtlSetHeapInformation.c)
 * Callees:
 *     sub_180006554 @ 0x180006554 (sub_180006554.c)
 *     sub_18001EE00 @ 0x18001EE00 (sub_18001EE00.c)
 *     RtlTryEnterCriticalSection @ 0x18001EEC0 (RtlTryEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall sub_180006330(__int64 a1)
{
  __int64 v2; // rcx

  if ( (*(_BYTE *)(a1 + 112) & 1) == 0 && RtlTryEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352)) )
  {
    if ( *(_BYTE *)(a1 + 386) == 2 )
      v2 = *(_QWORD *)(a1 + 376);
    else
      v2 = 0LL;
    if ( v2 )
      sub_180006554();
    sub_18001EE00(a1);
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  }
  return 0LL;
}
