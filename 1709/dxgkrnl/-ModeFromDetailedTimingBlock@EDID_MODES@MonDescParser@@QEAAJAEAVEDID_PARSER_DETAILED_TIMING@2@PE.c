/*
 * XREFs of ?ModeFromDetailedTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_DETAILED_TIMING@2@PEAU_VideoModeDescriptor@@@Z @ 0x1C000FCB8
 * Callers:
 *     ?ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z @ 0x1C0010010 (-ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonDescParser::EDID_MODES::ModeFromDetailedTimingBlock(
        MonDescParser::EDID_MODES *this,
        struct MonDescParser::EDID_PARSER_DETAILED_TIMING *a2,
        struct _VideoModeDescriptor *a3)
{
  signed int v4; // ebx
  USHORT v5; // di
  USHORT v6; // r11
  unsigned __int8 v7; // al
  UCHAR v8; // cl
  unsigned __int16 v9; // ax
  unsigned __int16 v10; // r11
  int v11; // ebp
  int v12; // r8d
  int v13; // r11d
  signed int v14; // ecx
  unsigned int v15; // esi
  ULONG v16; // eax
  int v17; // ecx
  unsigned int v18; // r11d
  int v19; // r8d
  UCHAR SyncSignalType; // al

  a3->VideoStandardType = 0;
  a3->Origin = *((_BYTE *)this + 8);
  a3->TimingType = 4;
  v4 = 10000 * (**(unsigned __int8 **)a2 + (*(unsigned __int8 *)(*(_QWORD *)a2 + 1LL) << 8));
  a3->PixelClockRate = v4;
  v5 = *(unsigned __int8 *)(*(_QWORD *)a2 + 2LL) + (*(_BYTE *)(*(_QWORD *)a2 + 4LL) >> 4 << 8);
  a3->HorizontalActivePixels = v5;
  v6 = *(unsigned __int8 *)(*(_QWORD *)a2 + 5LL) + (*(_BYTE *)(*(_QWORD *)a2 + 7LL) >> 4 << 8);
  a3->VerticalActivePixels = v6;
  if ( v4 && v5 >= 0x64u && v6 >= 0x64u )
  {
    a3->HorizontalBlankingPixels = *(unsigned __int8 *)(*(_QWORD *)a2 + 3LL)
                                 + ((*(_BYTE *)(*(_QWORD *)a2 + 4LL) & 0xF) << 8);
    a3->VerticalBlankingPixels = *(unsigned __int8 *)(*(_QWORD *)a2 + 6LL)
                               + ((*(_BYTE *)(*(_QWORD *)a2 + 7LL) & 0xF) << 8);
    a3->HorizontalSyncOffset = *(unsigned __int8 *)(*(_QWORD *)a2 + 8LL) + (*(_BYTE *)(*(_QWORD *)a2 + 11LL) >> 6 << 8);
    a3->VerticalSyncOffset = (*(_BYTE *)(*(_QWORD *)a2 + 10LL) >> 4)
                           + 16 * ((*(_BYTE *)(*(_QWORD *)a2 + 11LL) >> 2) & 3);
    a3->HorizontalSyncPulseWidth = *(unsigned __int8 *)(*(_QWORD *)a2 + 9LL)
                                 + (((*(_BYTE *)(*(_QWORD *)a2 + 11LL) >> 4) & 3) << 8);
    a3->VerticalSyncPulseWidth = (*(_BYTE *)(*(_QWORD *)a2 + 10LL) & 0xF) + 16 * (*(_BYTE *)(*(_QWORD *)a2 + 11LL) & 3);
    a3->HorizontalImageSize = *(unsigned __int8 *)(*(_QWORD *)a2 + 12LL) + (*(_BYTE *)(*(_QWORD *)a2 + 14LL) >> 4 << 8);
    a3->VerticalImageSize = *(unsigned __int8 *)(*(_QWORD *)a2 + 13LL) + ((*(_BYTE *)(*(_QWORD *)a2 + 14LL) & 0xF) << 8);
    a3->HorizontalBorder = *(unsigned __int8 *)(*(_QWORD *)a2 + 15LL);
    a3->VerticalBorder = *(unsigned __int8 *)(*(_QWORD *)a2 + 16LL);
    a3->IsInterlaced = *(_BYTE *)(*(_QWORD *)a2 + 17LL) >> 7;
    v7 = (*(_BYTE *)(*(_QWORD *)a2 + 17LL) & 1) + 2 * ((*(_BYTE *)(*(_QWORD *)a2 + 17LL) >> 5) & 3);
    v8 = v7 >= 2u ? v7 - 1 : 0;
    a3->StereoModeType = v8;
    v9 = a3->HorizontalBlankingPixels + v5;
    a3->SyncSignalType = (*(_BYTE *)(*(_QWORD *)a2 + 17LL) >> 3) & 3;
    if ( v9 )
    {
      v10 = a3->VerticalBlankingPixels + v6;
      if ( v10 )
      {
        v11 = v9;
        v12 = v4;
        v13 = v9 * v10;
        if ( v4 < 0 )
          v12 = -v4;
        v14 = abs32(v13);
        if ( v14 )
        {
          while ( 1 )
          {
            v12 %= v14;
            if ( !v12 )
              break;
            v14 %= v12;
            if ( !v14 )
              goto LABEL_13;
          }
        }
        else
        {
LABEL_13:
          v14 = v12;
        }
        v15 = v4 / v14;
        a3->VerticalRefreshRateNumerator = v4 / v14;
        v16 = v13 / v14;
        v17 = v4;
        a3->VerticalRefreshRateDenominator = v16;
        v18 = v16;
        if ( v4 < 0 )
          v17 = -v4;
        v19 = v11;
        while ( 1 )
        {
          v17 %= v19;
          if ( !v17 )
            break;
          v19 %= v17;
          if ( !v19 )
          {
            v19 = v17;
            break;
          }
        }
        *(_DWORD *)&a3->IsSerrationRequired = 33686018;
        a3->HorizontalPolarityType = 2;
        a3->HorizontalRefreshRateNumerator = v4 / v19;
        a3->HorizontalRefreshRateDenominator = v11 / v19;
        SyncSignalType = a3->SyncSignalType;
        if ( SyncSignalType > 1u )
        {
          if ( SyncSignalType == 2 )
          {
            a3->IsSyncOnRGB = (*(_BYTE *)(*(_QWORD *)a2 + 17LL) & 2) == 0;
            a3->CompositePolarityType = (*(_BYTE *)(*(_QWORD *)a2 + 17LL) & 4) == 0;
          }
          else if ( SyncSignalType == 3 )
          {
            a3->HorizontalPolarityType = (*(_BYTE *)(*(_QWORD *)a2 + 17LL) & 2) == 0;
            a3->VerticalPolarityType = (*(_BYTE *)(*(_QWORD *)a2 + 17LL) & 4) == 0;
          }
        }
        else
        {
          a3->IsSyncOnRGB = (*(_BYTE *)(*(_QWORD *)a2 + 17LL) & 2) == 0;
          a3->IsSerrationRequired = (*(_BYTE *)(*(_QWORD *)a2 + 17LL) & 4) == 0;
        }
        if ( v5 != 1920 )
          return 0LL;
        if ( a3->VerticalActivePixels != 540 )
          return 0LL;
        if ( !a3->IsInterlaced )
          return 0LL;
        a3->VerticalActivePixels = 1080;
        if ( v15 / v18 != 30 )
          return 0LL;
        if ( v15 <= 0x7FFFFFFF )
        {
          a3->VerticalRefreshRateNumerator = 2 * v15;
          return 0LL;
        }
        if ( v18 >= 2 )
        {
          a3->VerticalRefreshRateDenominator = v18 >> 1;
          return 0LL;
        }
      }
    }
  }
  return 3223126025LL;
}
