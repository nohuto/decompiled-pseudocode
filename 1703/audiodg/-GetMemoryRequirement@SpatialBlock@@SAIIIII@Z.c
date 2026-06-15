/*
 * XREFs of ?GetMemoryRequirement@SpatialBlock@@SAIIIII@Z @ 0x14005BD64
 * Callers:
 *     ?Create@SpatialBlock@@QEAAJPEAEIIIII@Z @ 0x14005B8B8 (-Create@SpatialBlock@@QEAAJPEAEIIIII@Z.c)
 *     ?Initialize@SpatialBlock@@QEAAJPEAEI@Z @ 0x14005C3EC (-Initialize@SpatialBlock@@QEAAJPEAEI@Z.c)
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAU_SECURITY_ATTRIBUTES@@PEBGIIIIPEAPEAX@Z @ 0x14005C458 (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAU_SECURITY_ATTRIBUTES@@PEBGIIIIPEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SpatialBlock::GetMemoryRequirement(int a1, int a2, int a3, int a4)
{
  int v4; // ecx
  int v5; // eax
  int v6; // edx

  if ( (a1 & 0x1F) != 0 )
    a1 = a1 - (a1 & 0x1F) + 32;
  v4 = 2 * a4 * a1;
  v5 = 2 * a4 * (a2 + a3) + 28;
  v6 = (2 * (_BYTE)a4 * ((_BYTE)a2 + (_BYTE)a3) + 28) & 0x1F;
  if ( v6 )
    v5 += 32 - v6;
  return (unsigned int)(v4 + v5);
}
