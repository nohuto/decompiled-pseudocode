/*
 * XREFs of rimExtractButtonPageButtonUsages @ 0x1C0112104
 * Callers:
 *     rimProcessPointerDeviceButtonContact @ 0x1C01138B4 (rimProcessPointerDeviceButtonContact.c)
 * Callees:
 *     memset @ 0x1C00A2500 (memset.c)
 *     rimHidP_GetUsages @ 0x1C0106EE0 (rimHidP_GetUsages.c)
 */

int __fastcall rimExtractButtonPageButtonUsages(
        __int64 a1,
        struct _HIDP_PREPARSED_DATA *a2,
        char *a3,
        unsigned int a4,
        _DWORD *a5)
{
  _WORD *v6; // rbp
  _DWORD *v7; // r14
  size_t v9; // r8
  int result; // eax
  __int64 v12; // r8
  unsigned int v13; // [rsp+60h] [rbp+8h] BYREF

  v6 = *(_WORD **)(a1 + 1392);
  v7 = a5;
  v9 = 2LL * *(unsigned int *)(a1 + 1608);
  v13 = *(_DWORD *)(a1 + 1608);
  *a5 = 0;
  memset(v6, 0, v9);
  result = rimHidP_GetUsages(HidP_Input, 9u, 0, v6, &v13, a2, a3, a4);
  if ( result >= 0 && v13 )
  {
    v12 = v13;
    do
    {
      switch ( *v6 )
      {
        case 1:
          *v7 |= 0x16u;
          break;
        case 2:
          *v7 |= 0x26u;
          break;
        case 3:
          *v7 |= 0x46u;
          break;
      }
      ++v6;
      --v12;
    }
    while ( v12 );
  }
  return result;
}
