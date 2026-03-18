/*
 * XREFs of MiRecheckVaWorkingSet @ 0x1400B1B38
 * Callers:
 *     MiAcquireProperVm @ 0x14006BF58 (MiAcquireProperVm.c)
 *     MiSystemFault @ 0x1400B04A0 (MiSystemFault.c)
 * Callees:
 *     MiGetSystemCacheReverseMap @ 0x1400A02B0 (MiGetSystemCacheReverseMap.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MiSystemCacheVaControlArea @ 0x140102068 (MiSystemCacheVaControlArea.c)
 */

__int64 __fastcall MiRecheckVaWorkingSet(__int64 a1, __int64 a2)
{
  int SystemRegionType; // eax
  unsigned __int64 v3; // rdx
  char v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  bool v8; // zf

  if ( (*(_BYTE *)(a1 + 192) & 7) != 0 )
  {
    SystemRegionType = MiGetSystemRegionType(a2);
    if ( SystemRegionType == 1 )
    {
      v8 = v4 == 1;
    }
    else
    {
      if ( SystemRegionType == 8 )
      {
        if ( v4 == 2 && *(_QWORD *)(MiGetSystemCacheReverseMap(v3) + 16) )
          return *(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(MiSystemCacheVaControlArea(v6) + 60) & 0x3FF)) + 5888LL;
        return 0LL;
      }
      if ( (unsigned int)(SystemRegionType - 6) <= 1 )
        v8 = v4 == 3;
      else
        v8 = v4 == 4;
    }
    if ( v8 )
      return v5;
    return 0LL;
  }
  return a1;
}
