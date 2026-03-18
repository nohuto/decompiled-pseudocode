/*
 * XREFs of ?VerifyDDCCIMessageChecksum@CPhysicalMonitorHandle@@CAJEQEAEK@Z @ 0x1C024AA48
 * Callers:
 *     ?DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x1C024A3E0 (-DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 * Callees:
 *     ?ComputeDDCCIMessageChecksum@CPhysicalMonitorHandle@@CAEEQEAEK@Z @ 0x1C02497D8 (-ComputeDDCCIMessageChecksum@CPhysicalMonitorHandle@@CAEEQEAEK@Z.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::VerifyDDCCIMessageChecksum(
        __int64 a1,
        unsigned __int8 *const a2,
        unsigned int a3)
{
  unsigned __int8 v5; // al
  unsigned int v6; // r8d
  char v7; // al
  __int64 v8; // r8
  __int64 v9; // r10

  if ( a3 < 3 )
    return 3223192968LL;
  v5 = a2[2];
  if ( !v5 )
    return 3223192969LL;
  if ( v5 > 3u && v5 != 7 && v5 != 12 )
  {
    if ( v5 == 78 )
    {
      v6 = 9;
      goto LABEL_13;
    }
    if ( v5 != 0xE3 && v5 != 0xF3 )
      return 3223192969LL;
  }
  v6 = (a2[1] & 0x7F) + 3;
  if ( (a2[1] & 0x7F) == 0xFFFFFFFD )
    return 3223192970LL;
LABEL_13:
  if ( a3 < v6 )
    return 3223192970LL;
  if ( v5 != 1 )
  {
    if ( v5 == 2 )
    {
      if ( v6 != 11 )
        return 3223192970LL;
    }
    else if ( v5 != 3 && v5 != 7 && v5 != 12 )
    {
      switch ( v5 )
      {
        case 0x4Eu:
          if ( v6 != 9 )
            return 3223192970LL;
          break;
        case 0xE3u:
          if ( v6 - 6 > 0x20 )
            return 3223192970LL;
          break;
        case 0xF3u:
          break;
        default:
          return 3223192968LL;
      }
    }
  }
  v7 = CPhysicalMonitorHandle::ComputeDDCCIMessageChecksum(111, a2, v6 - 1);
  return v7 != *(_BYTE *)(v8 + v9) ? 0xC01E058B : 0;
}
