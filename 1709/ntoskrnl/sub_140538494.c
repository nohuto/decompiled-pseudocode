/*
 * XREFs of sub_140538494 @ 0x140538494
 * Callers:
 *     sub_1400E3590 @ 0x1400E3590 (sub_1400E3590.c)
 * Callees:
 *     bsearch @ 0x14015EEB0 (bsearch.c)
 *     memmove @ 0x140192C00 (memmove.c)
 */

__int64 __fastcall sub_140538494(const void *a1, _DWORD *a2, void *a3, unsigned int a4, _DWORD *a5)
{
  void *v8; // rax
  unsigned __int16 *v9; // rdx

  v8 = bsearch(
         a1,
         qword_1407F54A0,
         (unsigned int)NumOfElements,
         0x10uLL,
         (int (__cdecl *)(const void *, const void *))sub_1404F4410);
  if ( v8 )
  {
    v9 = (unsigned __int16 *)*((_QWORD *)v8 + 1);
    *a5 = v9[3];
    if ( a2 )
      *a2 = v9[2];
    if ( v9[3] > a4 )
    {
      return (unsigned int)-1073741789;
    }
    else
    {
      if ( a3 )
        memmove(a3, (char *)v9 + v9[1] + 16, v9[3]);
      return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741772;
  }
}
