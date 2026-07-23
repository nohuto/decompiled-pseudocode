/*
 * XREFs of MmDiscardDriverSection @ 0x1408E0DA4
 * Callers:
 *     KeFreeInitializationCode @ 0x14087CB70 (KeFreeInitializationCode.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400160B0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLookupDataTableEntry @ 0x14013F6A8 (MiLookupDataTableEntry.c)
 *     MiFreeInitializationCode @ 0x1405F84EC (MiFreeInitializationCode.c)
 *     MiSnapDriverRange @ 0x1405F8770 (MiSnapDriverRange.c)
 */

unsigned __int64 __fastcall MmDiscardDriverSection(unsigned __int64 a1)
{
  unsigned __int64 *v2; // rdi
  PVOID v3; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v2 = (unsigned __int64 *)MiLookupDataTableEntry(a1, 1LL);
  v3 = (PVOID)v2[6];
  result = MI_IS_PHYSICAL_ADDRESS((unsigned __int64)v3);
  if ( !(_DWORD)result || v3 == PsNtosImageBase || v3 == PsHalImageBase )
  {
    result = MiSnapDriverRange((__int64)v2, 0, 0, a1, &v5, (unsigned __int64 *)&v6);
    if ( v5 )
      return MiFreeInitializationCode(v2, v5, v6);
  }
  return result;
}
