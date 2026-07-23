/*
 * XREFs of LdrpLoadResourceFromAlternativeModule @ 0x140012E98
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x14042A354 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     LdrpFindMessageInAlternateModule @ 0x140012680 (LdrpFindMessageInAlternateModule.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x140013300 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSearchResourceSection_U @ 0x14042A354 (LdrpSearchResourceSection_U.c)
 */

int __fastcall LdrpLoadResourceFromAlternativeModule(void *a1, __int64 a2, int a3, char Flags, unsigned int **a5)
{
  LANGID v7; // di
  int result; // eax
  int v9; // ecx
  PVOID v10; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR v11[2]; // [rsp+38h] [rbp-10h] BYREF

  v10 = 0LL;
  if ( (unsigned int)(a3 - 3) > 1 )
    return -1073741583;
  v7 = *(_WORD *)(a2 + 16);
  v11[0] = 0LL;
  result = LdrLoadAlternateResourceModuleEx(a1, v7, &v10, v11, Flags);
  if ( result < 0 )
  {
    if ( result == -1073741772 || result == -1073741766 )
      return -1073020927;
  }
  else
  {
    v9 = (int)v10;
    *(_QWORD *)(a2 + 16) = v7;
    result = LdrpSearchResourceSection_U(v9, a2, 3, 48, (__int64)a5);
    if ( (Flags & 0x40) != 0 && result >= 0 )
    {
      result = LdrpFindMessageInAlternateModule(v10, *a5, 0LL, *(_DWORD *)(a2 + 24), 0);
      if ( result < 0 )
        *a5 = 0LL;
    }
  }
  return result;
}
