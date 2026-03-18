/*
 * XREFs of NtGdiSetBitmapAttributes @ 0x1C00F87C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiSetBitmapAttributes(__int64 a1, char a2)
{
  if ( (a2 & 1) != 0 )
    return GreMakeBitmapStock();
  else
    return 0LL;
}
