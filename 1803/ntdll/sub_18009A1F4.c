/*
 * XREFs of sub_18009A1F4 @ 0x18009A1F4
 * Callers:
 *     sub_18003394C @ 0x18003394C (sub_18003394C.c)
 *     LdrEnumResources @ 0x1800DB230 (LdrEnumResources.c)
 * Callees:
 *     wcsncmp @ 0x180090D80 (wcsncmp.c)
 */

__int64 __fastcall sub_18009A1F4(__int64 a1, __int64 a2, const wchar_t *a3, __int64 a4, int *a5, _BYTE *a6)
{
  char v8; // r10
  int v9; // edx
  unsigned __int16 *v11; // rbx
  unsigned __int64 v12; // rax
  unsigned int v13; // edx
  unsigned int v14; // eax
  unsigned int v15; // edx
  __int64 v16; // rax

  if ( !a1 || (v8 = 1, !a2) )
    v8 = 0;
  *a6 = 1;
  v9 = *a5;
  if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( v9 >= 0 )
      return -1LL;
    if ( v8 && a4 + (unsigned __int64)(v9 & 0x7FFFFFFF) > a2 + (a1 & 0xFFFFFFFFFFFFFFFCuLL)
      || (v11 = (unsigned __int16 *)(a4 + (v9 & 0x7FFFFFFF)), v8)
      && ((v12 = 2LL * *v11, v12 > 0xFFFFFFFF)
       || (v13 = v9 & 0x7FFFFFFF, v14 = v13 + v12, v13 + 2 * *v11 < v13)
       || a4 + (unsigned __int64)v14 > a2 + (a1 & 0xFFFFFFFFFFFFFFFCuLL)) )
    {
      *a6 = 0;
      return -1LL;
    }
    v15 = wcsncmp(a3, v11 + 1, *v11);
    if ( !v15 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a3[v16] );
      if ( v16 != *v11 )
        return 1LL;
    }
    return v15;
  }
  else
  {
    if ( v9 < 0 )
      return 1LL;
    return (unsigned int)((_DWORD)a3 - v9);
  }
}
