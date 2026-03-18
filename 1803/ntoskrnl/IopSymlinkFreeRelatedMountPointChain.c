/*
 * XREFs of IopSymlinkFreeRelatedMountPointChain @ 0x1405778A4
 * Callers:
 *     IopSymlinkRememberJunction @ 0x1404E0CD0 (IopSymlinkRememberJunction.c)
 *     IopSymlinkUpdateECP @ 0x140577744 (IopSymlinkUpdateECP.c)
 *     IopSymlinkCleanupECP @ 0x140577890 (IopSymlinkCleanupECP.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
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
