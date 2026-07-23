/*
 * XREFs of MmDiscardDriverSection @ 0x140825DE0
 * Callers:
 *     KeFreeInitializationCode @ 0x1407DCB08 (KeFreeInitializationCode.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x14006CE70 (MiLookupDataTableEntry.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400A3C70 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiFreeInitializationCode @ 0x1404B1698 (MiFreeInitializationCode.c)
 *     MiSnapDriverRange @ 0x1404B1FD8 (MiSnapDriverRange.c)
 */

unsigned __int64 __fastcall MmDiscardDriverSection(unsigned __int64 a1)
{
  unsigned __int64 *v2; // rbx
  unsigned __int64 result; // rax
  PVOID v4; // r11
  ULONG_PTR v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v2 = (unsigned __int64 *)MiLookupDataTableEntry(a1, 0);
  result = MI_IS_PHYSICAL_ADDRESS(v2[6]);
  if ( !(_DWORD)result || v4 == PsNtosImageBase || v4 == PsHalImageBase )
  {
    result = MiSnapDriverRange((__int64)v2, 0, 0, a1, &v5, (unsigned __int64 *)&v6);
    if ( v5 )
      return MiFreeInitializationCode(v2, v5, v6);
  }
  return result;
}
