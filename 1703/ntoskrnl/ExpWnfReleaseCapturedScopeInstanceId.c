/*
 * XREFs of ExpWnfReleaseCapturedScopeInstanceId @ 0x1404EF570
 * Callers:
 *     NtQueryWnfStateNameInformation @ 0x1404476C4 (NtQueryWnfStateNameInformation.c)
 *     NtUpdateWnfStateData @ 0x1404EE944 (NtUpdateWnfStateData.c)
 *     NtQueryWnfStateData @ 0x1404EF144 (NtQueryWnfStateData.c)
 *     NtDeleteWnfStateData @ 0x1405D16C8 (NtDeleteWnfStateData.c)
 * Callees:
 *     <none>
 */

void __fastcall ExpWnfReleaseCapturedScopeInstanceId(int a1, PVOID *a2, char a3)
{
  int v3; // ecx
  int v4; // ecx

  v3 = a1 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        if ( *a2 )
          ObfDereferenceObjectWithTag(*a2, 0x20666E57u);
      }
    }
    else if ( *a2 )
    {
      SeReleaseSid(*a2, a3, 0);
    }
  }
  else if ( *a2 )
  {
    ObfDereferenceObject(*a2);
  }
}
