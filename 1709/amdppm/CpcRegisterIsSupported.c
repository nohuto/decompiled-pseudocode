/*
 * XREFs of CpcRegisterIsSupported @ 0x1C0007464
 * Callers:
 *     InitAcpiCpc @ 0x1C0024918 (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x1C0027D1C (InitCpcStatesInternal.c)
 *     ValidateAcpiCPC @ 0x1C002B58C (ValidateAcpiCPC.c)
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
