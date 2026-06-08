/*
 * XREFs of IsValidAcpiGenericAddress @ 0x1C002AC34
 * Callers:
 *     InitAcpi1CStates @ 0x1C002526C (InitAcpi1CStates.c)
 *     InitAcpi1ThrottleStates @ 0x1C0029E04 (InitAcpi1ThrottleStates.c)
 *     ValidateAcpiCStates @ 0x1C002B148 (ValidateAcpiCStates.c)
 *     ValidateLpiState @ 0x1C002C534 (ValidateLpiState.c)
 * Callees:
 *     <none>
 */

char __fastcall IsValidAcpiGenericAddress(char *a1)
{
  char v2; // r8
  char v3; // cl
  int v4; // eax
  unsigned __int8 v5; // al

  v2 = 1;
  v3 = *a1;
  if ( !v3 )
    goto LABEL_10;
  if ( v3 == 1 )
  {
    if ( *((_DWORD *)a1 + 2) )
      return 0;
    v4 = *((_DWORD *)a1 + 1);
    if ( (v4 & 0xFFFF0000) != 0 || !v4 )
      return 0;
LABEL_10:
    v5 = a1[1];
    if ( !v5 || v5 + (unsigned int)(unsigned __int8)a1[2] > (unsigned __int8)a1[3] )
      return 0;
    return v2;
  }
  if ( v3 != 10 && (unsigned __int8)(v3 - 2) > 2u && v3 != 127 )
    return 0;
  return v2;
}
