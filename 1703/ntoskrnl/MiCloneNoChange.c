/*
 * XREFs of MiCloneNoChange @ 0x14041E6C8
 * Callers:
 *     MiAllocateChildVads @ 0x14041E31C (MiAllocateChildVads.c)
 * Callees:
 *     MiAddSecureEntry @ 0x1405127E0 (MiAddSecureEntry.c)
 */

__int64 __fastcall MiCloneNoChange(__int64 a1, __int64 a2)
{
  __int64 *i; // r8
  unsigned int v4; // edx
  unsigned int v5; // r9d

  for ( i = *(__int64 **)(a1 + 56); ; i = (__int64 *)*i )
  {
    if ( !i )
      return 0LL;
    if ( *((_DWORD *)i + 16) == 2 )
    {
      v4 = *((_DWORD *)i + 2);
      v5 = (v4 & 4) != 0 ? 0x80000000 : 0;
      if ( (v4 & 8) == 0 )
        goto LABEL_5;
      if ( (i[1] & 4) != 0 || (v4 & 3) == 0 )
        break;
    }
LABEL_11:
    ;
  }
  v5 |= 1u;
LABEL_5:
  if ( !v5 )
    goto LABEL_11;
  if ( MiAddSecureEntry(a2, *(_DWORD *)(a2 + 24) << 12, (*(_DWORD *)(a2 + 28) << 12) | 0xFFFu, v5, (v4 >> 5) & 1) )
    return 0LL;
  return 3221225626LL;
}
