/*
 * XREFs of MiGetFreeOrZeroPageAnyColor @ 0x1400C6214
 * Callers:
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 * Callees:
 *     MiDemoteLocalLargePage @ 0x1400C62F0 (MiDemoteLocalLargePage.c)
 *     MiRemovePageAnyColor @ 0x1400C7CB8 (MiRemovePageAnyColor.c)
 *     MiGetPageSlist @ 0x1400C7FE4 (MiGetPageSlist.c)
 */

__int64 __fastcall MiGetFreeOrZeroPageAnyColor(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v3; // r15
  int v6; // ebp
  unsigned __int64 v7; // r15
  int v9; // r14d
  __int64 result; // rax
  unsigned int v11; // ebx

  v3 = *(int *)(a1 + 5212);
  if ( v3 >= 0x10 )
    v3 = 16LL;
  v6 = a3 & 1;
  v7 = (unsigned int)dword_140388540 * v3;
  v9 = 1;
  if ( (a3 & 1) != 0 )
    goto LABEL_7;
  do
  {
    result = MiDemoteLocalLargePage(a1, a2, a3 | 4, v7);
    if ( result )
      break;
    v9 = 0;
LABEL_7:
    result = MiRemovePageAnyColor(a1, a2, a3);
    if ( result == 1 )
      return 1LL;
    if ( result )
      return result;
    result = MiGetPageSlist(a1, a2, a3);
    if ( result )
      return result;
    if ( !v9 )
    {
      if ( (a3 & 0x1000) == 0 )
        return result;
      v11 = a3 & 0xFFFFEFFF;
      result = MiRemovePageAnyColor(a1, a2, v11);
      if ( result == 1 )
        return 1LL;
      if ( !result )
        return MiGetPageSlist(a1, a2, v11);
      return result;
    }
  }
  while ( !v6 );
  return result;
}
