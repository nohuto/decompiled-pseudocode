/*
 * XREFs of DestroyClassSmIcon @ 0x1C00F238C
 * Callers:
 *     DestroyClass @ 0x1C00F2194 (DestroyClass.c)
 *     xxxSetClassIcon @ 0x1C020C114 (xxxSetClassIcon.c)
 *     xxxRecreateSmallIcons @ 0x1C020F19C (xxxRecreateSmallIcons.c)
 * Callees:
 *     _DestroyCursor @ 0x1C0098338 (_DestroyCursor.c)
 */

__int64 __fastcall DestroyClassSmIcon(__int64 a1)
{
  struct tagCURSOR *v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9

  if ( (*(_BYTE *)(a1 + 34) & 0x20) == 0 )
    return 0LL;
  v3 = (struct tagCURSOR *)HMAssignmentUnlock(a1 + 168);
  if ( v3 )
    DestroyCursor(v3, 0LL, v4, v5);
  *(_WORD *)(a1 + 34) &= ~0x20u;
  return 1LL;
}
