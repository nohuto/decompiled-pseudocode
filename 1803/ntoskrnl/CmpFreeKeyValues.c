/*
 * XREFs of CmpFreeKeyValues @ 0x1406FDD28
 * Callers:
 *     CmDeleteLayeredKey @ 0x140222964 (CmDeleteLayeredKey.c)
 *     CmpSyncKeyValues @ 0x1406FEB90 (CmpSyncKeyValues.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     CmpFreeValue @ 0x1405154A4 (CmpFreeValue.c)
 *     HvFreeCell @ 0x14051584C (HvFreeCell.c)
 *     CmpMarkKeyValuesDirty @ 0x1406FDF0C (CmpMarkKeyValuesDirty.c)
 */

char __fastcall CmpFreeKeyValues(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  __int64 v6; // r14
  unsigned int v7; // esi
  int v8; // [rsp+58h] [rbp+20h] BYREF
  int v9; // [rsp+5Ch] [rbp+24h]

  v8 = -1;
  v9 = 0;
  if ( !(unsigned __int8)CmpMarkKeyValuesDirty(BugCheckParameter2) )
    return 0;
  if ( (*(_BYTE *)(a3 + 2) & 2) == 0 )
  {
    if ( *(_DWORD *)(a3 + 36) )
    {
      v6 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
             BugCheckParameter2,
             *(unsigned int *)(a3 + 40),
             &v8);
      if ( !v6 )
        return 0;
      v7 = 0;
      if ( *(_DWORD *)(a3 + 36) )
      {
        while ( CmpFreeValue(BugCheckParameter2, *(unsigned int *)(v6 + 4LL * v7)) )
        {
          if ( ++v7 >= *(_DWORD *)(a3 + 36) )
            goto LABEL_9;
        }
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v8);
        return 0;
      }
LABEL_9:
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v8);
      HvFreeCell(BugCheckParameter2, *(unsigned int *)(a3 + 40));
    }
    *(_DWORD *)(a3 + 40) = -1;
    *(_DWORD *)(a3 + 36) = 0;
    if ( *(_WORD *)(a3 + 74) )
    {
      HvFreeCell(BugCheckParameter2, *(unsigned int *)(a3 + 48));
      *(_DWORD *)(a3 + 48) = -1;
      *(_WORD *)(a3 + 74) = 0;
    }
  }
  return 1;
}
