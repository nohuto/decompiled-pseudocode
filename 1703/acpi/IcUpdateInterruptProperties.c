/*
 * XREFs of IcUpdateInterruptProperties @ 0x1C00A6138
 * Callers:
 *     AcpiUpdateInterruptProperties @ 0x1C009EAD0 (AcpiUpdateInterruptProperties.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IcUpdateInterruptProperties(unsigned int a1, int a2, int a3)
{
  __int64 v3; // r9
  unsigned int v4; // r10d
  __int64 v6; // rcx

  v3 = IcListHead;
  if ( &IcListHead == (__int64 *)IcListHead )
  {
    return (unsigned int)-1073741275;
  }
  else
  {
    v4 = 0;
    while ( *(int *)(v3 + 28) < 0 || a1 < *(_DWORD *)(v3 + 16) || a1 > *(_DWORD *)(v3 + 20) )
    {
      v3 = *(_QWORD *)v3;
      if ( &IcListHead == (__int64 *)v3 )
        return (unsigned int)-1073741275;
    }
    v6 = a1 - *(_DWORD *)(v3 + 16);
    *(_DWORD *)(200 * v6 + v3 + 64) = a2;
    *(_DWORD *)(200 * v6 + v3 + 60) = a3;
  }
  return v4;
}
