/*
 * XREFs of sub_18007B3C0 @ 0x18007B3C0
 * Callers:
 *     RtlSetHeapInformation @ 0x18007B300 (RtlSetHeapInformation.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 */

__int64 __fastcall sub_18007B3C0(__int64 a1)
{
  char v2; // di
  unsigned int v3; // esi
  __int64 v4; // rax

  v2 = 0;
  v3 = 0;
  RtlEnterCriticalSection(&stru_18015AAC0);
  v4 = 60LL;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    v4 = 208LL;
  if ( *(_WORD *)(v4 + a1) == 0xFFFF )
  {
    v3 = -1073741811;
  }
  else
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
    v2 = 1;
    if ( !*(_BYTE *)(a1 + 387) )
    {
      *(_BYTE *)(a1 + 387) = 2;
      RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      v2 = 0;
    }
  }
  if ( v2 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  RtlLeaveCriticalSection(&stru_18015AAC0);
  return v3;
}
