/*
 * XREFs of PnpQueuePendingEject @ 0x140727D9C
 * Callers:
 *     IopEjectDevice @ 0x14073A03C (IopEjectDevice.c)
 * Callees:
 *     PpDevNodeUnlockTree @ 0x14050BED8 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14050BFCC (PpDevNodeLockTree.c)
 */

char __fastcall PnpQueuePendingEject(_QWORD *a1)
{
  _QWORD *v2; // rax

  PpDevNodeLockTree(1);
  v2 = (_QWORD *)qword_1403C7318;
  if ( *(__int64 **)qword_1403C7318 != &IopPendingEjects )
    __fastfail(3u);
  *a1 = &IopPendingEjects;
  a1[1] = v2;
  *v2 = a1;
  qword_1403C7318 = (__int64)a1;
  PpDevNodeUnlockTree(1);
  return 1;
}
