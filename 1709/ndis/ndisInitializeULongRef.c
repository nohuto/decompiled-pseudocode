/*
 * XREFs of ndisInitializeULongRef @ 0x1C001D7FC
 * Callers:
 *     ndisMInitializeMiniportBlockFront @ 0x1C0105034 (ndisMInitializeMiniportBlockFront.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisInitializeULongRef(__int64 a1)
{
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 8) = 1;
  KeInitializeSpinLock((PKSPIN_LOCK)a1);
}
