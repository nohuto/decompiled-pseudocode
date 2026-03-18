/*
 * XREFs of ?IsSPIActionAllowedForFilteredProcess@@YAHI@Z @ 0x1C00043CC
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C00BEA10 (xxxSystemParametersInfo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsSPIActionAllowedForFilteredProcess(unsigned int a1)
{
  bool v2; // zf
  unsigned int v3; // ecx
  bool v4; // zf
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx

  if ( a1 <= 0x90 )
  {
    if ( a1 != 144 )
    {
      switch ( a1 )
      {
        case 1u:
        case 3u:
        case 5u:
        case 0xAu:
        case 0xEu:
        case 0x10u:
        case 0x12u:
        case 0x16u:
        case 0x19u:
        case 0x1Bu:
        case 0x1Fu:
        case 0x23u:
        case 0x26u:
        case 0x29u:
        case 0x2Bu:
        case 0x2Du:
        case 0x30u:
        case 0x32u:
        case 0x34u:
        case 0x36u:
        case 0x38u:
        case 0x3Au:
        case 0x3Cu:
        case 0x3Eu:
        case 0x40u:
        case 0x42u:
        case 0x44u:
        case 0x46u:
        case 0x48u:
        case 0x4Au:
        case 0x4Fu:
        case 0x50u:
        case 0x53u:
        case 0x54u:
        case 0x59u:
        case 0x5Cu:
        case 0x5Eu:
        case 0x5Fu:
        case 0x62u:
        case 0x64u:
        case 0x66u:
        case 0x68u:
        case 0x6Au:
        case 0x6Cu:
        case 0x6Eu:
        case 0x70u:
        case 0x72u:
        case 0x73u:
        case 0x74u:
        case 0x76u:
        case 0x78u:
        case 0x7Au:
        case 0x7Cu:
        case 0x7Eu:
        case 0x80u:
        case 0x82u:
        case 0x84u:
        case 0x86u:
        case 0x88u:
        case 0x8Au:
        case 0x8Cu:
        case 0x8Eu:
          return 1LL;
        default:
          return 0LL;
      }
    }
    return 1LL;
  }
  if ( a1 <= 0x1000 )
  {
    if ( a1 == 4096 )
      return 1LL;
    if ( a1 <= 0x9E )
    {
      if ( a1 == 158 )
        return 1LL;
      v9 = a1 - 146;
      if ( !v9 )
        return 1LL;
      v3 = v9 - 2;
      v2 = v3 == 0;
      goto LABEL_12;
    }
    if ( a1 != 160 && a1 != 162 && a1 != 165 )
    {
      if ( a1 <= 0xA6 )
        return 0LL;
      if ( a1 > 0xA8 && a1 != 170 )
        return a1 == 172;
    }
    return 1LL;
  }
  if ( a1 <= 0x103E )
  {
    if ( a1 != 4158 )
    {
      switch ( a1 )
      {
        case 0x1002u:
        case 0x1004u:
        case 0x1006u:
        case 0x1008u:
        case 0x100Au:
        case 0x100Cu:
        case 0x100Eu:
        case 0x1012u:
        case 0x1014u:
        case 0x1016u:
        case 0x1018u:
        case 0x101Au:
        case 0x101Cu:
        case 0x101Eu:
        case 0x1020u:
        case 0x1022u:
        case 0x1024u:
        case 0x1026u:
          return 1LL;
        default:
          return 0LL;
      }
    }
    return 1LL;
  }
  if ( a1 > 0x200A )
  {
    switch ( a1 )
    {
      case 0x200Cu:
      case 0x200Eu:
      case 0x2010u:
      case 0x2012u:
      case 0x2014u:
      case 0x2016u:
      case 0x2018u:
      case 0x201Au:
      case 0x201Cu:
      case 0x201Eu:
      case 0x2020u:
        return 1LL;
      default:
        return 0LL;
    }
  }
  if ( a1 == 8202 )
    return 1LL;
  if ( a1 <= 0x1050 )
  {
    if ( a1 == 4176 )
      return 1LL;
    v10 = a1 - 4160;
    if ( !v10 )
      return 1LL;
    v11 = v10 - 2;
    if ( !v11 )
      return 1LL;
    v5 = v11 - 6;
    v4 = v5 == 0;
    goto LABEL_14;
  }
  v3 = a1 - 0x2000;
  v2 = v3 == 0;
LABEL_12:
  if ( v2 )
    return 1LL;
  v5 = v3 - 2;
  v4 = v5 == 0;
LABEL_14:
  if ( v4 )
    return 1LL;
  v6 = v5 - 2;
  if ( !v6 )
    return 1LL;
  v7 = v6 - 2;
  if ( !v7 )
    return 1LL;
  return v7 == 2;
}
