/*
 * XREFs of ndisCloseULongRef @ 0x1C0001948
 * Callers:
 *     ndisMHaltMiniport @ 0x1C00AB944 (ndisMHaltMiniport.c)
 *     ndisInitializeAdapter @ 0x1C00C0828 (ndisInitializeAdapter.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisCloseULongRef(PKSPIN_LOCK SpinLock)
{
  KIRQL v2; // al
  char v3; // cl
  bool v4; // bl

  v2 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  v3 = *((_BYTE *)SpinLock + 12);
  if ( !v3 )
    *((_BYTE *)SpinLock + 12) = 1;
  v4 = v3 == 0;
  KeReleaseSpinLock(SpinLock, v2);
  return v4;
}
