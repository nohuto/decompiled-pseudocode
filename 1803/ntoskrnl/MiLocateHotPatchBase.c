/*
 * XREFs of MiLocateHotPatchBase @ 0x14074C654
 * Callers:
 *     MmLoadSystemImageEx @ 0x1405F9AF4 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x14013F6A8 (MiLookupDataTableEntry.c)
 *     VslLocateHotPatchBase @ 0x14022FE2C (VslLocateHotPatchBase.c)
 *     MmGetSectionStrongImageReference @ 0x140755FFC (MmGetSectionStrongImageReference.c)
 */

NTSTATUS __fastcall MiLocateHotPatchBase(__int64 a1, __int64 *a2, _DWORD *a3)
{
  NTSTATUS result; // eax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  *a2 = 0LL;
  result = MmGetSectionStrongImageReference(0LL, 0LL, a1, &v7);
  if ( result >= 0 )
  {
    result = VslLocateHotPatchBase(v7, a1, &v8, a3);
    if ( result >= 0 )
    {
      if ( v8 )
      {
        *a2 = MiLookupDataTableEntry(v8, 2LL);
        return 0;
      }
    }
  }
  return result;
}
