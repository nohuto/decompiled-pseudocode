/*
 * XREFs of CmpSetValueKeyNew @ 0x1405155F8
 * Callers:
 *     CmSetValueKey @ 0x1404A4924 (CmSetValueKey.c)
 *     CmpCommitSetValueKeyUoW @ 0x1405DF3F0 (CmpCommitSetValueKeyUoW.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x1404E3EC4 (HvpMarkCellDirty.c)
 *     CmpAddValueToListEx @ 0x140514E5C (CmpAddValueToListEx.c)
 *     CmpFreeValue @ 0x1405154A4 (CmpFreeValue.c)
 *     CmpAddValueKeyNew @ 0x1405156B4 (CmpAddValueKeyNew.c)
 */

__int64 __fastcall CmpSetValueKeyNew(
        ULONG_PTR a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        int a7,
        int a8)
{
  unsigned int *v8; // rsi
  int v11; // eax
  unsigned int v12; // edi

  v8 = (unsigned int *)(a2 + 36);
  if ( *(_DWORD *)(a2 + 36) && !HvpMarkCellDirty(a1, *(unsigned int *)(a2 + 40), 0) )
    return 3221225853LL;
  v11 = CmpAddValueKeyNew(a1, a7, a8);
  v12 = v11;
  if ( v11 != -1 )
  {
    if ( (int)CmpAddValueToListEx(a1, v11, a4, a8, v8, 1) >= 0 )
      return 0LL;
    CmpFreeValue(a1, v12);
  }
  return 3221225626LL;
}
