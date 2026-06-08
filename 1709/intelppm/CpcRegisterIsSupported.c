/*
 * XREFs of CpcRegisterIsSupported @ 0x1C0007D48
 * Callers:
 *     InitAcpiCpc @ 0x1C001EEC0 (InitAcpiCpc.c)
 *     ValidateAcpiCPC @ 0x1C002963C (ValidateAcpiCPC.c)
 *     InitCpcStatesInternal @ 0x1C002E5D0 (InitCpcStatesInternal.c)
 * Callees:
 *     <none>
 */

char __fastcall CpcRegisterIsSupported(__int64 a1)
{
  char result; // al

  result = 0;
  if ( *(_BYTE *)a1 || *(_QWORD *)(a1 + 4) )
    return 1;
  return result;
}
