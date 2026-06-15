/*
 * XREFs of ?Create@SpatialBlock@@QEAAJPEAEIIIII@Z @ 0x14005B8B8
 * Callers:
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAU_SECURITY_ATTRIBUTES@@PEBGIIIIPEAPEAX@Z @ 0x14005C458 (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAU_SECURITY_ATTRIBUTES@@PEBGIIIIPEA.c)
 * Callees:
 *     ?GetMemoryRequirement@SpatialBlock@@SAIIIII@Z @ 0x14005BD64 (-GetMemoryRequirement@SpatialBlock@@SAIIIII@Z.c)
 *     ?SetPointersFromDescriptor@SpatialBlock@@AEAAXXZ @ 0x14005CDF8 (-SetPointersFromDescriptor@SpatialBlock@@AEAAXXZ.c)
 */

__int64 __fastcall SpatialBlock::Create(
        SpatialBlock *this,
        unsigned __int8 *a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  int v7; // ebx
  int v11; // r8d
  int v12; // r9d
  unsigned int v13; // r11d

  v7 = a4;
  if ( a3 == SpatialBlock::GetMemoryRequirement(a4, a5, a6, a7) )
  {
    if ( a2 )
    {
      if ( ((unsigned __int8)a2 & 0x1F) != 0 )
      {
        return (unsigned int)-2147467261;
      }
      else
      {
        *(_QWORD *)this = a2;
        if ( (v7 & 0x1F) != 0 )
          v7 = v7 - (v7 & 0x1F) + 32;
        *(_DWORD *)a2 = 28;
        *(_DWORD *)(*(_QWORD *)this + 4LL) = a3;
        *(_DWORD *)(*(_QWORD *)this + 8LL) = v12;
        *(_DWORD *)(*(_QWORD *)this + 12LL) = a5;
        *(_DWORD *)(*(_QWORD *)this + 16LL) = v11;
        *(_DWORD *)(*(_QWORD *)this + 20LL) = v7;
        *(_DWORD *)(*(_QWORD *)this + 24LL) = 1396785732;
        SpatialBlock::SetPointersFromDescriptor(this);
      }
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    return (unsigned int)-2147418113;
  }
  return v13;
}
