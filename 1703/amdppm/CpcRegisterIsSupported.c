/*
 * XREFs of CpcRegisterIsSupported @ 0x1C0007110
 * Callers:
 *     InitAcpiCpc @ 0x1C0021788 (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x1C0024B54 (InitCpcStatesInternal.c)
 *     ValidateAcpiCPC @ 0x1C00283AC (ValidateAcpiCPC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CpcRegisterIsSupported(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_BYTE *)a1 || *(_QWORD *)(a1 + 4) )
    return 1LL;
  return result;
}
