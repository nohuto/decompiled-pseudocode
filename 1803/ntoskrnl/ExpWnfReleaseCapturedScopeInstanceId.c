/*
 * XREFs of ExpWnfReleaseCapturedScopeInstanceId @ 0x1404F5F30
 * Callers:
 *     NtUpdateWnfStateData @ 0x1404F53D8 (NtUpdateWnfStateData.c)
 *     NtQueryWnfStateData @ 0x1404F5B08 (NtQueryWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x14056F7C0 (NtQueryWnfStateNameInformation.c)
 *     NtDeleteWnfStateData @ 0x14065039C (NtDeleteWnfStateData.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     SeReleaseSid @ 0x140543EF0 (SeReleaseSid.c)
 */

__int64 __fastcall ExpWnfReleaseCapturedScopeInstanceId(int a1, PVOID *a2, char a3)
{
  int v3; // ecx
  int v4; // ecx
  PVOID v5; // rcx
  __int64 result; // rax

  v3 = a1 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        if ( *a2 )
          return ObfDereferenceObjectWithTag(*a2, 0x20666E57u);
      }
    }
    else
    {
      v5 = *a2;
      if ( *a2 )
      {
        LOBYTE(a2) = a3;
        return SeReleaseSid(v5, a2, 0LL);
      }
    }
  }
  else if ( *a2 )
  {
    return ObfDereferenceObject(*a2);
  }
  return result;
}
