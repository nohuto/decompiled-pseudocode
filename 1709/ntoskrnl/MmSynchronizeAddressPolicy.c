/*
 * XREFs of MmSynchronizeAddressPolicy @ 0x14043D634
 * Callers:
 *     PspDisablePrimaryTokenExchange @ 0x14053F3DC (PspDisablePrimaryTokenExchange.c)
 *     PsCreateMinimalProcess @ 0x140719A94 (PsCreateMinimalProcess.c)
 * Callees:
 *     MiDeleteProcessShadow @ 0x14017BF70 (MiDeleteProcessShadow.c)
 */

void __fastcall MmSynchronizeAddressPolicy(struct _KPROCESS *a1)
{
  if ( a1 != PsInitialSystemProcess )
    MiDeleteProcessShadow((__int64)a1, 1);
}
