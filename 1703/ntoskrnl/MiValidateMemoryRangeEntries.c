/*
 * XREFs of MiValidateMemoryRangeEntries @ 0x14049AD94
 * Callers:
 *     MmOutSwapVirtualAddresses @ 0x140004100 (MmOutSwapVirtualAddresses.c)
 *     NtSetInformationVirtualMemory @ 0x14049A7B0 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiValidateMemoryRangeEntries(unsigned __int64 *a1, __int64 a2, __int64 a3, unsigned __int64 *a4)
{
  unsigned __int64 *v4; // r8
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax

  v4 = a1;
  if ( a4 )
    *a4 = 0LL;
  v5 = 0LL;
  v6 = (unsigned __int64)&a1[2 * a2];
  if ( (unsigned __int64)a1 >= v6 )
  {
LABEL_10:
    if ( a4 )
      *a4 = v5;
    return 1LL;
  }
  else
  {
    while ( 1 )
    {
      v7 = *v4;
      if ( *v4 > 0x7FFFFFFEFFFFLL )
        return 0LL;
      v8 = v4[1];
      if ( !v8 )
        return 0LL;
      if ( v8 + v7 < v7 )
        return 0LL;
      if ( v8 + v7 - 1 > 0x7FFFFFFEFFFFLL )
        return 0LL;
      v9 = v5 + ((v8 + (*(_DWORD *)v4 & 0xFFF) + 4095LL) >> 12);
      if ( v9 < v5 )
        return 0LL;
      v4 += 2;
      v5 = v9;
      if ( (unsigned __int64)v4 >= v6 )
        goto LABEL_10;
    }
  }
}
