/*
 * XREFs of CmpSetValueKeyTombstone @ 0x1406656A8
 * Callers:
 *     CmDeleteValueKey @ 0x1404CEB38 (CmDeleteValueKey.c)
 * Callees:
 *     CmpFreeValue @ 0x1404D154C (CmpFreeValue.c)
 *     CmpAddValueToListEx @ 0x1404D3280 (CmpAddValueToListEx.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 *     CmpAddValueKeyTombstone @ 0x140664DD4 (CmpAddValueKeyTombstone.c)
 */

__int64 __fastcall CmpSetValueKeyTombstone(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        const void **a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int *v5; // rbx
  int v9; // ebx
  int v10; // eax
  unsigned int v11; // edi

  v5 = (unsigned int *)(a2 + 36);
  if ( !*(_DWORD *)(a2 + 36) || HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(a2 + 40), 0) )
  {
    v10 = CmpAddValueKeyTombstone(BugCheckParameter2, a3);
    v11 = v10;
    if ( v10 == -1 )
    {
      return (unsigned int)-1073741670;
    }
    else
    {
      v9 = CmpAddValueToListEx(BugCheckParameter2, v10, a4, a5, v5, 1);
      if ( v9 >= 0 )
      {
        v11 = -1;
        v9 = 0;
      }
      if ( v11 != -1 )
        CmpFreeValue(BugCheckParameter2, v11);
    }
  }
  else
  {
    return (unsigned int)-1073741443;
  }
  return (unsigned int)v9;
}
