/*
 * XREFs of IopSymlinkGetMostRecentlyUsedName @ 0x14013FF24
 * Callers:
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 *     IopSymlinkRememberJunction @ 0x14057BD70 (IopSymlinkRememberJunction.c)
 *     IopSymlinkProcessReparse @ 0x14057C25C (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x14057C2B8 (IopGraftName.c)
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
