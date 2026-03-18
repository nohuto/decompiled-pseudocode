/*
 * XREFs of MmSynchronizeAddressPolicy @ 0x14041DA50
 * Callers:
 *     PspDisablePrimaryTokenExchange @ 0x1404F8A10 (PspDisablePrimaryTokenExchange.c)
 *     PsCreateMinimalProcess @ 0x1405D991C (PsCreateMinimalProcess.c)
 * Callees:
 *     MiDeleteProcessShadow @ 0x14017C830 (MiDeleteProcessShadow.c)
 */

void __fastcall MmSynchronizeAddressPolicy(struct _KPROCESS *a1)
{
  if ( a1 != PsInitialSystemProcess )
    MiDeleteProcessShadow((__int64)a1, 1);
}
