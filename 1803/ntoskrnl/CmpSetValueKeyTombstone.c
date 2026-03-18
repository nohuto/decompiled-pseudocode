/*
 * XREFs of CmpSetValueKeyTombstone @ 0x1406F31B8
 * Callers:
 *     CmDeleteValueKey @ 0x14049B18C (CmDeleteValueKey.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x1404E3EC4 (HvpMarkCellDirty.c)
 *     CmpAddValueToListEx @ 0x140514E5C (CmpAddValueToListEx.c)
 *     CmpFreeValue @ 0x1405154A4 (CmpFreeValue.c)
 *     CmpAddValueKeyTombstone @ 0x1406F2834 (CmpAddValueKeyTombstone.c)
 */

__int64 __fastcall CmpSetValueKeyTombstone(ULONG_PTR a1, __int64 a2, unsigned __int16 *a3, unsigned int a4, int a5)
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
