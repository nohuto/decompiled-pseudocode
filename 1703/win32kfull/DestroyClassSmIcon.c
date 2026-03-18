/*
 * XREFs of DestroyClassSmIcon @ 0x1C003949C
 * Callers:
 *     DestroyClass @ 0x1C00392B4 (DestroyClass.c)
 *     xxxSetClassIcon @ 0x1C020AD74 (xxxSetClassIcon.c)
 *     xxxRecreateSmallIcons @ 0x1C020DA24 (xxxRecreateSmallIcons.c)
 * Callees:
 *     _DestroyCursor @ 0x1C0044EE0 (_DestroyCursor.c)
 */

__int64 __fastcall DestroyClassSmIcon(__int64 a1)
{
  struct tagCURSOR *v3; // rax

  if ( (*(_BYTE *)(a1 + 34) & 0x20) == 0 )
    return 0LL;
  v3 = (struct tagCURSOR *)HMAssignmentUnlock(a1 + 160);
  if ( v3 )
    DestroyCursor(v3);
  *(_WORD *)(a1 + 34) &= ~0x20u;
  return 1LL;
}
