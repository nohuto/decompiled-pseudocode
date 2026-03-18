/*
 * XREFs of MiLocateHotPatchBase @ 0x1406E1898
 * Callers:
 *     MmLoadSystemImageEx @ 0x1405431E0 (MmLoadSystemImageEx.c)
 * Callees:
 *     VslLocateHotPatchBase @ 0x1401F230C (VslLocateHotPatchBase.c)
 *     MmGetSectionStrongImageReference @ 0x1406EC4E0 (MmGetSectionStrongImageReference.c)
 */

NTSTATUS __fastcall MiLocateHotPatchBase(__int64 a1, PVOID **a2, _DWORD *a3)
{
  NTSTATUS result; // eax
  PVOID *i; // rax
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF
  PVOID v9; // [rsp+48h] [rbp+20h] BYREF

  *a2 = 0LL;
  result = MmGetSectionStrongImageReference(0LL, 0LL, a1, &v8);
  if ( result >= 0 )
  {
    result = VslLocateHotPatchBase(v8, a1, &v9, a3);
    if ( result >= 0 )
    {
      if ( v9 )
      {
        for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
        {
          if ( i[6] == v9 )
          {
            *a2 = i;
            return 0;
          }
        }
        return 0;
      }
    }
  }
  return result;
}
