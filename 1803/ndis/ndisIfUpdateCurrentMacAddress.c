/*
 * XREFs of ndisIfUpdateCurrentMacAddress @ 0x1C0042EB0
 * Callers:
 *     ndisFIndicateStatusInternal @ 0x1C00172BC (ndisFIndicateStatusInternal.c)
 *     ndisIfUpdateCurrentMacAddressAndNotify @ 0x1C00DDB78 (ndisIfUpdateCurrentMacAddressAndNotify.c)
 * Callees:
 *     memcmp @ 0x1C0025D20 (memcmp.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 */

char __fastcall ndisIfUpdateCurrentMacAddress(__int64 a1, unsigned __int16 *a2)
{
  KIRQL v4; // al
  unsigned __int16 v5; // di
  KIRQL v6; // r12
  char v7; // bl

  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v5 = *a2;
  v6 = v4;
  if ( *(_WORD *)(a1 + 1124) != *a2 || (v7 = 0, memcmp((const void *)(a1 + 1126), a2 + 1, v5)) )
  {
    *(_WORD *)(a1 + 1124) = v5;
    memmove((void *)(a1 + 1126), a2 + 1, *a2);
    v7 = 1;
  }
  KeReleaseSpinLock(&ndisIfListLock, v6);
  return v7;
}
