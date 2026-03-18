/*
 * XREFs of PnpQueuePendingEject @ 0x1406C1DFC
 * Callers:
 *     IopEjectDevice @ 0x1406D25EC (IopEjectDevice.c)
 * Callees:
 *     PpDevNodeUnlockTree @ 0x1405270EC (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14052717C (PpDevNodeLockTree.c)
 */

char __fastcall PnpQueuePendingEject(_QWORD *a1)
{
  _QWORD *v2; // rax

  PpDevNodeLockTree(1);
  v2 = (_QWORD *)qword_140383EA8;
  if ( *(__int64 **)qword_140383EA8 != &IopPendingEjects )
    __fastfail(3u);
  *a1 = &IopPendingEjects;
  a1[1] = v2;
  *v2 = a1;
  qword_140383EA8 = (__int64)a1;
  PpDevNodeUnlockTree(1);
  return 1;
}
