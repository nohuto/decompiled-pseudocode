/*
 * XREFs of ?ModeFromDetailedTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_DETAILED_TIMING@2@PEAU_VideoModeDescriptor@@@Z @ 0x1C000E734
 * Callers:
 *     ?ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z @ 0x1C000EE5C (-ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonDescParser::EDID_MODES::ModeFromDetailedTimingBlock(
        MonDescParser::EDID_MODES *this,
        struct MonDescParser::EDID_PARSER_DETAILED_TIMING *a2,
        struct _VideoModeDescriptor *a3)
{
  signed int v5; // r11d
  USHORT v6; // di
  USHORT v7; // r8
  int v8; // r14d
  unsigned __int8 v9; // al
  UCHAR v10; // cl
  USHORT HorizontalBlankingPixels; // dx
  unsigned __int16 v12; // dx
  unsigned __int16 v13; // cx
  int v14; // r8d
  int v15; // ebx
  signed int v16; // ecx
  unsigned int v17; // esi
  ULONG v18; // eax
  int v19; // ecx
  unsigned int v20; // ebx
  int v21; // r8d
  UCHAR SyncSignalType; // al

  a3->VideoStandardType = 0;
  a3->Origin = *((_BYTE *)this + 8);
  a3->TimingType = 4;
  v5 = 10000 * (**(unsigned __int8 **)a2 + (*(unsigned __int8 *)(*(_QWORD *)a2 + 1LL) << 8));
  a3->PixelClockRate = v5;
  v6 = *(unsigned __int8 *)(*(_QWORD *)a2 + 2LL) + (*(_BYTE *)(*(_QWORD *)a2 + 4LL) >> 4 << 8);
  a3->HorizontalActivePixels = v6;
  v7 = *(unsigned __int8 *)(*(_QWORD *)a2 + 5LL) + (*(_BYTE *)(*(_QWORD *)a2 + 7LL) >> 4 << 8);
  a3->VerticalActivePixels = v7;
  if ( v5 && v6 >= 0x64u && v7 >= 0x64u )
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
    v8 = *(unsigned __int8 *)(*(_QWORD *)a2 + 17LL) >> 7;
    a3->IsInterlaced = *(_BYTE *)(*(_QWORD *)a2 + 17LL) >> 7;
    v9 = (*(_BYTE *)(*(_QWORD *)a2 + 17LL) & 1) + 2 * ((*(_BYTE *)(*(_QWORD *)a2 + 17LL) >> 5) & 3);
    v10 = v9 >= 2u ? v9 - 1 : 0;
    HorizontalBlankingPixels = a3->HorizontalBlankingPixels;
    a3->StereoModeType = v10;
    v12 = v6 + HorizontalBlankingPixels;
    a3->SyncSignalType = (*(_BYTE *)(*(_QWORD *)a2 + 17LL) >> 3) & 3;
    v13 = a3->VerticalBlankingPixels + a3->VerticalActivePixels;
    if ( v12 )
    {
      if ( v13 )
      {
        v14 = v5;
        v15 = v12 * v13;
        if ( v5 < 0 )
          v14 = -v5;
        v16 = abs32(v15);
        if ( v16 )
        {
          while ( 1 )
          {
            v14 %= v16;
            if ( !v14 )
              break;
            v16 %= v14;
            if ( !v16 )
              goto LABEL_13;
          }
        }
        else
        {
LABEL_13:
          v16 = v14;
        }
        v17 = v5 / v16;
        a3->VerticalRefreshRateNumerator = v5 / v16;
        v18 = v15 / v16;
        v19 = v5;
        a3->VerticalRefreshRateDenominator = v18;
        v20 = v18;
        if ( v5 < 0 )
          v19 = -v5;
        v21 = v12;
        while ( 1 )
        {
          v19 %= v21;
          if ( !v19 )
            break;
          v21 %= v19;
          if ( !v21 )
          {
            v21 = v19;
            break;
          }
        }
        *(_DWORD *)&a3->IsSerrationRequired = 33686018;
        a3->HorizontalPolarityType = 2;
        a3->HorizontalRefreshRateNumerator = v5 / v21;
        a3->HorizontalRefreshRateDenominator = v12 / v21;
        SyncSignalType = a3->SyncSignalType;
        if ( SyncSignalType <= 1u )
        {
          a3->IsSyncOnRGB = (*(_BYTE *)(*(_QWORD *)a2 + 17LL) & 2) == 0;
          a3->IsSerrationRequired = (*(_BYTE *)(*(_QWORD *)a2 + 17LL) & 4) == 0;
        }
        else if ( SyncSignalType == 2 )
        {
          a3->IsSyncOnRGB = (*(_BYTE *)(*(_QWORD *)a2 + 17LL) & 2) == 0;
          a3->CompositePolarityType = (*(_BYTE *)(*(_QWORD *)a2 + 17LL) & 4) == 0;
        }
        else if ( SyncSignalType == 3 )
        {
          a3->HorizontalPolarityType = (*(_BYTE *)(*(_QWORD *)a2 + 17LL) & 2) == 0;
          a3->VerticalPolarityType = (*(_BYTE *)(*(_QWORD *)a2 + 17LL) & 4) == 0;
        }
        if ( v6 != 1920 )
          return 0LL;
        if ( a3->VerticalActivePixels != 540 )
          return 0LL;
        if ( !(_BYTE)v8 )
          return 0LL;
        a3->VerticalActivePixels = 1080;
        if ( v17 / v20 != 30 )
          return 0LL;
        if ( v17 <= 0x7FFFFFFF )
        {
          a3->VerticalRefreshRateNumerator = 2 * v17;
          return 0LL;
        }
        if ( v20 >= 2 )
        {
          a3->VerticalRefreshRateDenominator = v20 >> 1;
          return 0LL;
        }
      }
    }
  }
  return 3223126025LL;
}
