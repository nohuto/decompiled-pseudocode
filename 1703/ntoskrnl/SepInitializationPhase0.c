/*
 * XREFs of SepInitializationPhase0 @ 0x14081A294
 * Callers:
 *     SeInitSystem @ 0x14081A260 (SeInitSystem.c)
 * Callees:
 *     ObInitializeFastReference @ 0x1404A11D4 (ObInitializeFastReference.c)
 *     SeMakeSystemToken @ 0x14081A5B4 (SeMakeSystemToken.c)
 *     SepInitializeWorkList @ 0x14081AF9C (SepInitializeWorkList.c)
 *     SepTokenInitialization @ 0x14081B048 (SepTokenInitialization.c)
 *     SepVariableInitialization @ 0x14081B100 (SepVariableInitialization.c)
 *     SepRmDbInitialization @ 0x14082189C (SepRmDbInitialization.c)
 */

bool SepInitializationPhase0()
{
  _KPROCESS *Process; // rbx
  __int64 SystemToken; // rax

  if ( !(unsigned __int8)SepVariableInitialization()
    || !(unsigned __int8)SepRmDbInitialization()
    || !(unsigned __int8)SepTokenInitialization()
    || !(unsigned __int8)SepInitializeWorkList() )
  {
    return 0;
  }
  *(_QWORD *)&KeGetCurrentThread()[1].SystemCallNumber = 0LL;
  _InterlockedAnd((volatile signed __int32 *)&KeGetCurrentThread()[1].SwapListEntry + 2, 0xFFFFFFF7);
  ObInitializeFastReference(&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5], 0LL);
  Process = KeGetCurrentThread()->ApcState.Process;
  SystemToken = SeMakeSystemToken();
  ObInitializeFastReference(&Process[1].Affinity.Bitmap[5], SystemToken);
  SepMandatoryObjectTypePolicyLock = 0LL;
  SepDefaultMandatorySid = SeMediumMandatorySid;
  return KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5] != 0;
}
