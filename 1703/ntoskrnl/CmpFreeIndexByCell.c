/*
 * XREFs of CmpFreeIndexByCell @ 0x140670088
 * Callers:
 *     CmMoveKey @ 0x1406631AC (CmMoveKey.c)
 *     CmRenameKey @ 0x140663778 (CmRenameKey.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x140673CA8 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     HvFreeCell @ 0x14048C8DC (HvFreeCell.c)
 */

void __fastcall CmpFreeIndexByCell(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // ebp
  _WORD *v4; // rsi
  __int64 i; // rbx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+34h] [rbp+Ch]

  v6 = -1;
  v2 = BugCheckParameter3;
  v7 = 0;
  v4 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, int *))(BugCheckParameter2 + 8))(
                  BugCheckParameter2,
                  BugCheckParameter3,
                  &v6);
  if ( *v4 == 26994 )
  {
    for ( i = 0LL; (unsigned int)i < (unsigned __int16)v4[1]; i = (unsigned int)(i + 1) )
      HvFreeCell(BugCheckParameter2, *(unsigned int *)&v4[2 * i + 2]);
  }
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v6);
  HvFreeCell(BugCheckParameter2, v2);
}
