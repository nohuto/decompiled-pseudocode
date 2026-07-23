/*
 * XREFs of SepInitializationPhase0 @ 0x1408BC6F0
 * Callers:
 *     SeInitSystem @ 0x1408BC6C0 (SeInitSystem.c)
 * Callees:
 *     ObInitializeFastReference @ 0x1404F0348 (ObInitializeFastReference.c)
 *     SeMakeSystemToken @ 0x1408BCBA0 (SeMakeSystemToken.c)
 *     SepInitializeWorkList @ 0x1408BD584 (SepInitializeWorkList.c)
 *     SepTokenInitialization @ 0x1408BD630 (SepTokenInitialization.c)
 *     SepVariableInitialization @ 0x1408BD6E8 (SepVariableInitialization.c)
 *     SepRmDbInitialization @ 0x1408C3D58 (SepRmDbInitialization.c)
 */

bool SepInitializationPhase0()
{
  _KPROCESS *Process; // rbx
  ULONG_PTR SystemToken; // rax

  if ( !(unsigned __int8)SepVariableInitialization()
    || !(unsigned __int8)SepRmDbInitialization()
    || !(unsigned __int8)SepTokenInitialization()
    || !(unsigned __int8)SepInitializeWorkList() )
  {
    return 0;
  }
  *($A9C66A0F7B092172F948892A004DB1E3 *)((char *)&KeGetCurrentThread()[1].116 + 4) = 0LL;
  _InterlockedAnd((volatile signed __int32 *)&KeGetCurrentThread()[1].SwapListEntry + 2, 0xFFFFFFF7);
  ObInitializeFastReference(&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5], 0LL);
  Process = KeGetCurrentThread()->ApcState.Process;
  SystemToken = SeMakeSystemToken();
  ObInitializeFastReference(&Process[1].Affinity.Bitmap[5], SystemToken);
  SepMandatoryObjectTypePolicyLock = 0LL;
  SepDefaultMandatorySid = SeMediumMandatorySid;
  return KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5] != 0;
}
