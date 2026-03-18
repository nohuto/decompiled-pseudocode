/*
 * XREFs of ??$ComputeAntialiasBorderFlags@$0DAA@$0BAA@$0CAA@@Mesh@@CAKK@Z @ 0x1800B9C54
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x1800647B0 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Mesh::ComputeAntialiasBorderFlags<768,256,512>(__int16 a1)
{
  int v1; // ecx
  __int64 result; // rax

  v1 = a1 & 0x300;
  if ( v1 == 256 )
    return 4LL;
  if ( v1 == 512 )
    return 8LL;
  result = 12LL;
  if ( v1 != 768 )
    return 0LL;
  return result;
}
