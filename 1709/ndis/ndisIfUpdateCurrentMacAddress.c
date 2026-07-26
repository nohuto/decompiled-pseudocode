/*
 * XREFs of ndisIfUpdateCurrentMacAddress @ 0x1C0041F20
 * Callers:
 *     ndisFIndicateStatusInternal @ 0x1C00064EC (ndisFIndicateStatusInternal.c)
 *     ndisIfUpdateCurrentMacAddressAndNotify @ 0x1C00DBE44 (ndisIfUpdateCurrentMacAddressAndNotify.c)
 * Callees:
 *     memcmp @ 0x1C0024E20 (memcmp.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 */

char __fastcall ndisIfUpdateCurrentMacAddress(__int64 a1, unsigned __int16 *a2)
{
  KIRQL v4; // al
  unsigned __int16 v5; // bp
  KIRQL v6; // r14
  char v7; // si

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
