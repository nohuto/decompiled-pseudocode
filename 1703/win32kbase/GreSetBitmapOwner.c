/*
 * XREFs of GreSetBitmapOwner @ 0x1C00432D0
 * Callers:
 *     GreSetBrushOwner @ 0x1C002E550 (GreSetBrushOwner.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     HmgShareLockCheck @ 0x1C0031F10 (HmgShareLockCheck.c)
 *     HmgSetOwner @ 0x1C00433A0 (HmgSetOwner.c)
 */

__int64 __fastcall GreSetBitmapOwner(__int64 a1, unsigned int a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rbx

  v4 = 0;
  v5 = HmgShareLockCheck(a1, 5);
  v7 = v5;
  if ( v5 )
  {
    if ( (*(_WORD *)(v5 + 100) || !*(_QWORD *)(v5 + 200) || a2) && (a1 & 0x800000) == 0 )
    {
      LOBYTE(v6) = 5;
      v4 = HmgSetOwner(a1, a2, v6);
    }
    HmgDecrementShareReferenceCount(v7);
  }
  return v4;
}
