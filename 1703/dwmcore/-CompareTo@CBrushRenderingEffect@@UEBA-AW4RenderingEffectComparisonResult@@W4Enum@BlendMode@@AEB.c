/*
 * XREFs of ?CompareTo@CBrushRenderingEffect@@UEBA?AW4RenderingEffectComparisonResult@@W4Enum@BlendMode@@AEBVCRenderingEffect@@0@Z @ 0x180015E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBrushRenderingEffect::CompareTo(__int64 a1, int a2, __int64 a3, int a4)
{
  unsigned int v4; // r10d

  v4 = 0;
  if ( a3 == a1 )
    return (a2 == 22) == (a4 == 22);
  return v4;
}
