/*
 * XREFs of MiRecheckVaWorkingSet @ 0x1400A4950
 * Callers:
 *     MiSystemFault @ 0x140032BA0 (MiSystemFault.c)
 *     MiAcquireProperVm @ 0x1400D5208 (MiAcquireProperVm.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MiGetMultiplexedVm @ 0x1400A344C (MiGetMultiplexedVm.c)
 *     MiGetSystemCacheReverseMap @ 0x1400A3490 (MiGetSystemCacheReverseMap.c)
 */

__int64 __fastcall MiRecheckVaWorkingSet(__int64 a1, unsigned __int64 a2)
{
  int SystemRegionType; // eax
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // r11
  bool v9; // zf

  if ( (*(_BYTE *)(a1 + 192) & 7) != 0 )
  {
    SystemRegionType = MiGetSystemRegionType(a2);
    if ( SystemRegionType == 1 )
    {
      v9 = (_BYTE)v4 == 1;
    }
    else
    {
      if ( SystemRegionType == 8 )
      {
        if ( (_BYTE)v4 == 2 && *(_QWORD *)(MiGetSystemCacheReverseMap(v3, v3, v4, v5) + 16) )
          return MiGetMultiplexedVm(v6, v7);
        return 0LL;
      }
      if ( (unsigned int)(SystemRegionType - 6) <= 1 )
        v9 = (_BYTE)v4 == 3;
      else
        v9 = (_BYTE)v4 == 4;
    }
    if ( v9 )
      return v5;
    return 0LL;
  }
  return a1;
}
