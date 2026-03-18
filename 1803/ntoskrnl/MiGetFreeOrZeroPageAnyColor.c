/*
 * XREFs of MiGetFreeOrZeroPageAnyColor @ 0x1400E6CC0
 * Callers:
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 * Callees:
 *     MiGetPageSlist @ 0x1400AA3F0 (MiGetPageSlist.c)
 *     MiRemovePageAnyColor @ 0x1400B80E0 (MiRemovePageAnyColor.c)
 *     MiDemoteLocalLargePage @ 0x1400E6D90 (MiDemoteLocalLargePage.c)
 */

__int64 __fastcall MiGetFreeOrZeroPageAnyColor(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v7; // rbx
  int v8; // r15d
  __int64 result; // rax
  unsigned int v10; // ebp

  v3 = *(int *)(a1 + 6300);
  if ( v3 >= 0x10 )
    v3 = 16LL;
  v7 = (unsigned int)dword_1403CB6D8 * v3;
  v8 = 1;
  while ( 1 )
  {
    if ( (a3 & 0x10001) == 0 )
    {
      result = MiDemoteLocalLargePage(a1, a2, a3, v7);
      if ( result )
        return result;
      v8 = 0;
    }
    result = MiRemovePageAnyColor(a1, a2, a3);
    if ( result == 1 )
      return 1LL;
    if ( result )
      return result;
    result = (__int64)MiGetPageSlist(a1, a2, a3);
    if ( result )
      return result;
    if ( !v8 )
      break;
    if ( (a3 & 1) != 0 )
      return result;
  }
  if ( (a3 & 0x4000) == 0 )
    return result;
  v10 = a3 & 0xFFFFBFFF;
  result = MiRemovePageAnyColor(a1, a2, v10);
  if ( result == 1 )
    return 1LL;
  if ( !result )
    return (__int64)MiGetPageSlist(a1, a2, v10);
  return result;
}
