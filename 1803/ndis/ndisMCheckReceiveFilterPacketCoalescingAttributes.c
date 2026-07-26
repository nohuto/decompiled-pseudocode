/*
 * XREFs of ndisMCheckReceiveFilterPacketCoalescingAttributes @ 0x1C00B3720
 * Callers:
 *     ndisMSetReceiveFilterAttributes @ 0x1C00B3528 (ndisMSetReceiveFilterAttributes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisMCheckReceiveFilterPacketCoalescingAttributes(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( (*(_DWORD *)(a1 + 20) & 0x100) != 0 && (*(_BYTE *)(a1 + 8) & 2) == 0 )
    return 3221291013LL;
  return result;
}
