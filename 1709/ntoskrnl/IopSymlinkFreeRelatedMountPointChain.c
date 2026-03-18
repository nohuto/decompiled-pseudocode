/*
 * XREFs of IopSymlinkFreeRelatedMountPointChain @ 0x1405CDAB4
 * Callers:
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     IopSymlinkUpdateECP @ 0x1405CD968 (IopSymlinkUpdateECP.c)
 *     IopSymlinkCleanupECP @ 0x1405CDAA0 (IopSymlinkCleanupECP.c)
 *     IopSymlinkRememberJunction @ 0x1405CE168 (IopSymlinkRememberJunction.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall IopSymlinkFreeRelatedMountPointChain(__int64 a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx

  v2 = *(_QWORD **)(a1 + 8);
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)v2[1];
      ExFreePoolWithTag(v2, 0x69536F49u);
      v2 = v3;
    }
    while ( v3 );
  }
  *(_QWORD *)(a1 + 8) = 0LL;
}
