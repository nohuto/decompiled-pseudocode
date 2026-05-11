/*
 * XREFs of IntersectConvertDatarangeToFormat @ 0x1C0015750
 * Callers:
 *     PinDataFormatIntersection @ 0x1C0014D10 (PinDataFormatIntersection.c)
 * Callees:
 *     PinMatchChannelConfigToFormat @ 0x1C00140F0 (PinMatchChannelConfigToFormat.c)
 */

__int64 __fastcall IntersectConvertDatarangeToFormat(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // r8d
  int v7; // ecx
  int v8; // edx
  int v9; // edx
  __int64 result; // rax
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // r11

  *(_OWORD *)a3 = *(_OWORD *)a2;
  *(_OWORD *)(a3 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a3 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a3 + 48) = *(_OWORD *)(a2 + 48);
  *(_DWORD *)(a3 + 4) &= ~2u;
  if ( *(_OWORD *)(a2 + 32) == KSDATAFORMAT_SUBTYPE_DOLBY_AC3_SPDIF
    || *(_OWORD *)(a2 + 32) == KSDATAFORMAT_SUBTYPE_DOLBY_MP3_SPDIF
    || *(_OWORD *)(a2 + 32) == KSDATAFORMAT_SUBTYPE_WMA_SPDIF )
  {
    v6 = *(_DWORD *)(a2 + 100);
    *(_DWORD *)(a3 + 68) = v6;
    v7 = *(unsigned __int16 *)(a2 + 64);
    *(_WORD *)(a3 + 66) = v7;
    v8 = *(unsigned __int16 *)(a2 + 72);
    *(_WORD *)(a3 + 78) = v8;
    v9 = (v7 * v8) >> 3;
    *(_WORD *)(a3 + 76) = v9;
    *(_DWORD *)(a3 + 72) = v6 * (unsigned __int16)v9;
LABEL_10:
    *(_WORD *)(a3 + 64) = *(_WORD *)(a2 + 32);
    result = 0LL;
    *(_WORD *)(a3 + 80) = 0;
    *(_DWORD *)a3 = 82;
    return result;
  }
  result = *(_QWORD *)((char *)&KSDATAFORMAT_SUBTYPE_WAVEFORMATEX.Data1 + 2);
  if ( *(_QWORD *)((char *)&KSDATAFORMAT_SUBTYPE_WAVEFORMATEX.Data1 + 2) == *(_QWORD *)(a2 + 34) )
  {
    result = *(unsigned int *)&KSDATAFORMAT_SUBTYPE_WAVEFORMATEX.Data4[2];
    if ( *(_DWORD *)&KSDATAFORMAT_SUBTYPE_WAVEFORMATEX.Data4[2] == *(_DWORD *)(a2 + 42) )
    {
      result = *(unsigned __int16 *)&KSDATAFORMAT_SUBTYPE_WAVEFORMATEX.Data4[6];
      if ( *(_WORD *)&KSDATAFORMAT_SUBTYPE_WAVEFORMATEX.Data4[6] == *(_WORD *)(a2 + 46) )
      {
        v11 = *(_DWORD *)(a2 + 100);
        *(_DWORD *)(a3 + 68) = v11;
        v12 = *(unsigned __int16 *)(a2 + 64);
        *(_WORD *)(a3 + 66) = v12;
        v13 = *(unsigned __int16 *)(a2 + 72);
        *(_WORD *)(a3 + 78) = v13;
        v14 = (v12 * v13) >> 3;
        *(_WORD *)(a3 + 76) = v14;
        *(_DWORD *)(a3 + 72) = v11 * (unsigned __int16)v14;
        if ( *(_DWORD *)(a2 + 72) <= 0x10u && *(_DWORD *)(a2 + 64) <= 2u )
          goto LABEL_10;
        *(_WORD *)(a3 + 64) = -2;
        *(_WORD *)(a3 + 80) = 22;
        *(_DWORD *)(a3 + 84) = PinMatchChannelConfigToFormat(*(_DWORD *)(a2 + 64), *(_DWORD *)(a1 + 144));
        *(GUID *)(a3 + 88) = KSDATAFORMAT_SUBTYPE_PCM;
        result = *(unsigned __int16 *)(v15 + 104);
        *(_WORD *)(a3 + 82) = result;
        *(_DWORD *)a3 = 104;
      }
    }
  }
  return result;
}
