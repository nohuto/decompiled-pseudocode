/*
 * XREFs of vCopy_IFIV @ 0x1C022B2B8
 * Callers:
 *     bLoadTTF @ 0x1C022910C (bLoadTTF.c)
 *     bLoadTTF_Cache @ 0x1C0229608 (bLoadTTF_Cache.c)
 * Callees:
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall vCopy_IFIV(char *Src, char *a2)
{
  char *v4; // rax
  char *v5; // r8
  _WORD *v6; // rax
  char *v7; // rcx
  char *v8; // rdx
  _WORD *v9; // rcx
  __int64 result; // rax
  _WORD *v11; // rcx
  unsigned __int16 *v12; // rdx
  _WORD *i; // rcx

  memmove(a2, Src, *(unsigned int *)Src);
  v4 = &a2[*((int *)a2 + 4)];
  v5 = &Src[*((int *)Src + 4)];
  *(_WORD *)v4 = 64;
  v6 = v4 + 2;
  while ( *(_WORD *)v5 )
  {
    *v6++ = *(_WORD *)v5;
    v5 += 2;
  }
  *v6 = 0;
  v7 = &a2[*((int *)a2 + 2)];
  v8 = &Src[*((int *)Src + 2)];
  *(_WORD *)v7 = 64;
  v9 = v7 + 2;
  while ( *(_WORD *)v8 )
  {
    *v9++ = *(_WORD *)v8;
    v8 += 2;
  }
  *v9 = 0;
  result = *((unsigned int *)a2 + 12);
  if ( (result & 0x8000000) != 0 )
  {
    v11 = v9 + 1;
    v12 = (unsigned __int16 *)(v8 + 2);
    *v11 = 64;
    for ( i = v11 + 1; ; ++i )
    {
      result = *v12;
      if ( !(_WORD)result )
        break;
      *i = result;
      ++v12;
    }
    *(_DWORD *)i = 0;
  }
  return result;
}
