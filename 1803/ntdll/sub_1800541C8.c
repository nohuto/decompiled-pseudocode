/*
 * XREFs of sub_1800541C8 @ 0x1800541C8
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180034390 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     sub_180054338 @ 0x180054338 (sub_180054338.c)
 *     LdrFindEntryForAddress @ 0x180054400 (LdrFindEntryForAddress.c)
 *     wcsrchr @ 0x180090EA0 (wcsrchr.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_1800541C8(
        __int64 a1,
        void *a2,
        __int64 a3,
        unsigned int *a4,
        wchar_t **a5,
        _DWORD *a6,
        wchar_t **a7)
{
  int EntryForAddress; // ebx
  wchar_t *v11; // rdi
  wchar_t *v12; // rcx
  wchar_t *v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // ecx
  wchar_t **v16; // rcx
  wchar_t *v17; // rax
  __int64 v19; // rdi
  unsigned int v20; // eax
  wchar_t *v21[6]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v22; // [rsp+70h] [rbp+8h] BYREF

  v22 = 0LL;
  memset(v21, 0, sizeof(v21));
  if ( (a1 & 3) == 0 )
  {
    EntryForAddress = LdrFindEntryForAddress(a1, &v22);
    if ( EntryForAddress < 0 )
      return (unsigned int)EntryForAddress;
    v19 = v22;
    v20 = *(unsigned __int16 *)(v22 + 72) - *(unsigned __int16 *)(v22 + 88);
    *a4 = v20;
    if ( v20 <= *(unsigned __int16 *)(v19 + 72) && v20 < 0x2BE )
    {
      memmove(a2, *(const void **)(v19 + 80), v20);
      *a5 = *(wchar_t **)(v19 + 96);
      *a6 = *(unsigned __int16 *)(v19 + 88);
      v16 = a7;
      if ( !a7 )
        return (unsigned int)EntryForAddress;
      v17 = *(wchar_t **)(v19 + 136);
      goto LABEL_9;
    }
    return (unsigned int)-2147483643;
  }
  EntryForAddress = sub_180054338(a1, v21);
  if ( EntryForAddress < 0 )
    return (unsigned int)EntryForAddress;
  v11 = v21[1];
  v12 = wcsrchr(v21[1], 0x5Cu);
  if ( !v12 )
    return (unsigned int)-1073741767;
  v13 = v12 + 1;
  v14 = -1LL;
  *a5 = v13;
  do
    ++v14;
  while ( v13[v14] );
  v15 = 2 * (v13 - v11);
  *a6 = 2 * v14;
  *a4 = v15;
  if ( v15 >= 0x2BE )
    return (unsigned int)-2147483643;
  memmove(a2, v11, v15);
  v16 = a7;
  if ( a7 )
  {
    v17 = v21[5];
    if ( v21[5] != (wchar_t *)-1LL )
LABEL_9:
      *v16 = v17;
  }
  return (unsigned int)EntryForAddress;
}
