/*
 * XREFs of IrqPolicyUpdatePolicy @ 0x1C009CDDC
 * Callers:
 *     AcpiIrqLibConfigureLibrary @ 0x1C009C690 (AcpiIrqLibConfigureLibrary.c)
 * Callees:
 *     IrqPolicyQueryInterruptSteeringEnabled @ 0x1C008DF08 (IrqPolicyQueryInterruptSteeringEnabled.c)
 *     ProcessorQueryGroupInformation @ 0x1C008E708 (ProcessorQueryGroupInformation.c)
 */

__int64 __fastcall IrqPolicyUpdatePolicy(__int64 a1)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF
  int v3; // [rsp+38h] [rbp+10h] BYREF

  if ( !IrqPolicyRegistrySpecified
    && !IrqDisableInterruptSteeringPolicy
    && (int)ProcessorQueryGroupInformation(a1, &v3, &v2) >= 0 )
  {
    IrqInterruptSteeringEnabled = IrqPolicyQueryInterruptSteeringEnabled(0LL);
    if ( IrqInterruptSteeringEnabled )
    {
      if ( v3 == 1 || v3 == 3 && !v2 )
        IrqMachinePolicy = 6;
    }
  }
  return 0LL;
}
