/*
 * XREFs of ?LookUpOffsetValue@SpatialAudioPositionCalc@@AEAAMEPEAUSpatialAudioProjectionOffsets@@@Z @ 0x1800CD044
 * Callers:
 *     ?CalculatePositions@SpatialAudioPositionCalc@@UEAAJPEAUStaticObjectProjectionData@@PEAT__m128@@I@Z @ 0x1800CC9B0 (-CalculatePositions@SpatialAudioPositionCalc@@UEAAJPEAUStaticObjectProjectionData@@PEAT__m128@@I.c)
 * Callees:
 *     <none>
 */

float __fastcall SpatialAudioPositionCalc::LookUpOffsetValue(
        SpatialAudioPositionCalc *this,
        unsigned __int8 a2,
        struct SpatialAudioProjectionOffsets *a3)
{
  float result; // xmm0_4
  float v4; // xmm0_4

  result = 0.0;
  if ( a2 > 0xBu )
  {
    if ( a2 <= 0x11u )
    {
      switch ( a2 )
      {
        case 0x11u:
          return *((float *)a3 + 10);
        case 0xCu:
          v4 = *((float *)a3 + 9);
          break;
        case 0xDu:
          return *((float *)a3 + 9);
        case 0xEu:
          v4 = *((float *)a3 + 11);
          break;
        case 0xFu:
          return *((float *)a3 + 11);
        case 0x10u:
          v4 = *((float *)a3 + 10);
          break;
        default:
          return result;
      }
      goto LABEL_47;
    }
    switch ( a2 )
    {
      case 0x12u:
        v4 = *((float *)a3 + 12);
        goto LABEL_47;
      case 0x13u:
        return *((float *)a3 + 12);
      case 0x14u:
        v4 = *((float *)a3 + 8);
        goto LABEL_47;
      case 0x15u:
        return *((float *)a3 + 8);
    }
  }
  else
  {
    if ( a2 == 11 )
      return *((float *)a3 + 7);
    if ( a2 <= 5u )
    {
      switch ( a2 )
      {
        case 5u:
          return *((float *)a3 + 3);
        case 0u:
          return result;
        case 1u:
          v4 = *((float *)a3 + 2);
          break;
        case 2u:
          return *((float *)a3 + 2);
        case 3u:
          v4 = *(float *)a3;
          break;
        case 4u:
          return *(float *)a3;
        default:
          return result;
      }
LABEL_47:
      LODWORD(result) = LODWORD(v4) ^ _xmm;
      return result;
    }
    switch ( a2 )
    {
      case 6u:
        v4 = *((float *)a3 + 5);
        goto LABEL_47;
      case 7u:
        v4 = *((float *)a3 + 4);
        goto LABEL_47;
      case 8u:
        return *((float *)a3 + 4);
      case 9u:
        v4 = *((float *)a3 + 6);
        goto LABEL_47;
      case 0xAu:
        return *((float *)a3 + 6);
    }
  }
  return result;
}
