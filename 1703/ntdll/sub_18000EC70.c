/*
 * XREFs of sub_18000EC70 @ 0x18000EC70
 * Callers:
 *     RtlCreateHeap @ 0x18000CA40 (RtlCreateHeap.c)
 * Callees:
 *     sub_18000EEA8 @ 0x18000EEA8 (sub_18000EEA8.c)
 */

void __fastcall sub_18000EC70(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 120) & 2) == 0 && (*(_DWORD *)(a1 + 112) & 0x4000000) == 0 )
  {
    *(_DWORD *)(a1 + 136) = 0;
    *(_BYTE *)(a1 + 138) |= 0x10u;
    *(_DWORD *)(a1 + 124) = *(_DWORD *)(a1 + 136);
    *(_DWORD *)(a1 + 136) |= sub_18000EEA8();
    *(_DWORD *)(a1 + 140) = (unsigned __int16)sub_18000EEA8();
  }
}
