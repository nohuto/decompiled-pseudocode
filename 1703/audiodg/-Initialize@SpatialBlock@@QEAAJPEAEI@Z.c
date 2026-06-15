/*
 * XREFs of ?Initialize@SpatialBlock@@QEAAJPEAEI@Z @ 0x14005C3EC
 * Callers:
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAX@Z @ 0x14005C820 (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAX@Z.c)
 * Callees:
 *     ?GetMemoryRequirement@SpatialBlock@@SAIIIII@Z @ 0x14005BD64 (-GetMemoryRequirement@SpatialBlock@@SAIIIII@Z.c)
 *     ?SetPointersFromDescriptor@SpatialBlock@@AEAAXXZ @ 0x14005CDF8 (-SetPointersFromDescriptor@SpatialBlock@@AEAAXXZ.c)
 *     ?ValidateDescriptor@SpatialBlock@@QEAAJXZ @ 0x14005D014 (-ValidateDescriptor@SpatialBlock@@QEAAJXZ.c)
 */

__int64 __fastcall SpatialBlock::Initialize(SpatialBlock *this, unsigned __int8 *a2, unsigned int a3)
{
  int v4; // r11d

  v4 = -2147467261;
  if ( a2 )
  {
    *(_QWORD *)this = a2;
    v4 = -2005139387;
    if ( a3 > 4
      && a3 == (unsigned int)SpatialBlock::GetMemoryRequirement(
                               *((_DWORD *)a2 + 5),
                               *((_DWORD *)a2 + 3),
                               *((_DWORD *)a2 + 4),
                               *((_DWORD *)a2 + 2)) )
    {
      v4 = SpatialBlock::ValidateDescriptor(this);
      if ( v4 >= 0 )
        SpatialBlock::SetPointersFromDescriptor(this);
    }
  }
  return (unsigned int)v4;
}
