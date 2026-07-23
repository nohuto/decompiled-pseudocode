/*
 * XREFs of MmDiscardDriverSection @ 0x140857448
 * Callers:
 *     KeFreeInitializationCode @ 0x14080CB64 (KeFreeInitializationCode.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400BD300 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLookupDataTableEntry @ 0x1400DCDF4 (MiLookupDataTableEntry.c)
 *     MiSnapDriverRange @ 0x140516C14 (MiSnapDriverRange.c)
 *     MiFreeInitializationCode @ 0x14058F3A0 (MiFreeInitializationCode.c)
 */

unsigned __int64 __fastcall MmDiscardDriverSection(unsigned __int64 a1)
{
  unsigned __int64 *v2; // rdi
  PVOID v3; // rbx
  unsigned __int64 result; // rax
  ULONG_PTR v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v2 = (unsigned __int64 *)MiLookupDataTableEntry(a1, 0);
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
