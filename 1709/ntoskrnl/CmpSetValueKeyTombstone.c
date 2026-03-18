/*
 * XREFs of CmpSetValueKeyTombstone @ 0x14068EFD0
 * Callers:
 *     CmDeleteValueKey @ 0x140474FC8 (CmDeleteValueKey.c)
 * Callees:
 *     CmpFreeValue @ 0x140476A50 (CmpFreeValue.c)
 *     CmpAddValueToListEx @ 0x140476AC8 (CmpAddValueToListEx.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 *     CmpAddValueKeyTombstone @ 0x14068E56C (CmpAddValueKeyTombstone.c)
 */

__int64 __fastcall CmpSetValueKeyTombstone(ULONG_PTR a1, __int64 a2, const void **a3, unsigned int a4, int a5)
{
  unsigned int *v5; // rbx
  int v9; // ebx
  int v10; // eax
  unsigned int v11; // edi

  v5 = (unsigned int *)(a2 + 36);
  if ( !*(_DWORD *)(a2 + 36) || HvpMarkCellDirty(a1, *(unsigned int *)(a2 + 40), 0) )
  {
    v10 = CmpAddValueKeyTombstone(a1, a3);
    v11 = v10;
    if ( v10 == -1 )
    {
      return (unsigned int)-1073741670;
    }
    else
    {
      v9 = CmpAddValueToListEx(a1, v10, a4, a5, v5, 1);
      if ( v9 >= 0 )
      {
        v11 = -1;
        v9 = 0;
      }
      if ( v11 != -1 )
        CmpFreeValue(a1, v11);
    }
  }
  else
  {
    return (unsigned int)-1073741443;
  }
  return (unsigned int)v9;
}
