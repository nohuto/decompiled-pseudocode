/*
 * XREFs of IopSymlinkGetRelatedMountPoint @ 0x1405CE50C
 * Callers:
 *     IopGraftName @ 0x1405CDB54 (IopGraftName.c)
 *     IopSymlinkRememberJunction @ 0x1405CE168 (IopSymlinkRememberJunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopSymlinkGetRelatedMountPoint(__int64 a1, unsigned __int16 a2)
{
  if ( !a1 )
    return a1;
  do
  {
    if ( (*(_BYTE *)(a1 + 2) & 1) == 0 )
      break;
    if ( *(_WORD *)a1 > a2 )
      break;
    a1 = *(_QWORD *)(a1 + 8);
  }
  while ( a1 );
  if ( a1 && (*(_BYTE *)(a1 + 2) & 1) == 0 )
    return 0LL;
  else
    return a1;
}
