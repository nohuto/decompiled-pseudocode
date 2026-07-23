/*
 * XREFs of sub_180060E04 @ 0x180060E04
 * Callers:
 *     sub_180060DF0 @ 0x180060DF0 (sub_180060DF0.c)
 *     RtlSetHeapInformation @ 0x18007B300 (RtlSetHeapInformation.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     sub_18005CB44 @ 0x18005CB44 (sub_18005CB44.c)
 *     RtlTryEnterCriticalSection @ 0x180060E90 (RtlTryEnterCriticalSection.c)
 *     sub_180061148 @ 0x180061148 (sub_180061148.c)
 */

__int64 __fastcall sub_180060E04(__int64 a1)
{
  __int64 v2; // rcx

  if ( (*(_BYTE *)(a1 + 112) & 1) == 0 && RtlTryEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352)) )
  {
    if ( *(_BYTE *)(a1 + 386) == 2 )
      v2 = *(_QWORD *)(a1 + 376);
    else
      v2 = 0LL;
    if ( v2 )
      sub_180061148();
    sub_18005CB44(a1);
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  }
  return 0LL;
}
