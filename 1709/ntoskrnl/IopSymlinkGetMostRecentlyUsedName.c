/*
 * XREFs of IopSymlinkGetMostRecentlyUsedName @ 0x14014B834
 * Callers:
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     IopSymlinkProcessReparse @ 0x1405CDAF8 (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x1405CDB54 (IopGraftName.c)
 *     IopSymlinkRememberJunction @ 0x1405CE168 (IopSymlinkRememberJunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopSymlinkGetMostRecentlyUsedName(__int64 a1)
{
  __int64 i; // rax

  for ( i = *(_QWORD *)(a1 + 8); i; i = *(_QWORD *)(i + 8) )
    a1 = i;
  return a1;
}
