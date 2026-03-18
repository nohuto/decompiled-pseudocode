/*
 * XREFs of MiCloneNoChange @ 0x1405BFA3C
 * Callers:
 *     MiAllocateChildVads @ 0x1405BF6F8 (MiAllocateChildVads.c)
 * Callees:
 *     MiAddSecureEntry @ 0x140593490 (MiAddSecureEntry.c)
 */

__int64 __fastcall MiCloneNoChange(__int64 a1, __int64 a2)
{
  __int64 *i; // r8
  unsigned int v4; // edx
  int v5; // r9d
  int v6; // eax
  char v7; // cl

  for ( i = *(__int64 **)(a1 + 56); ; i = (__int64 *)*i )
  {
    if ( !i )
      return 0LL;
    if ( *((_DWORD *)i + 16) == 2 )
    {
      v4 = *((_DWORD *)i + 2);
      if ( (v4 & 0x80u) == 0 )
      {
        v5 = (i[1] & 4) != 0 ? 0x80000000 : 0;
        if ( (v4 & 8) == 0 )
          goto LABEL_6;
        if ( (v4 & 4) != 0 || (v4 & 3) == 0 )
          break;
      }
    }
LABEL_14:
    ;
  }
  v5 |= 1u;
LABEL_6:
  if ( !v5 )
    goto LABEL_14;
  v6 = (v4 >> 5) & 1;
  v7 = v6 | 4;
  if ( (v4 & 0x40) == 0 )
    v7 = v6;
  if ( MiAddSecureEntry(
         a2,
         (*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) << 12,
         ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) << 12) | 0xFFF,
         v5,
         v7) )
  {
    return 0LL;
  }
  return 3221225626LL;
}
