/*
 * XREFs of ?ModesFromEstablishedTimings@EDID_MODES@MonDescParser@@QEAAJ_KPEAU_VideoModeDescriptor@@@Z @ 0x1C000EB80
 * Callers:
 *     ?ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z @ 0x1C000EE5C (-ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonDescParser::EDID_MODES::ModesFromEstablishedTimings(
        MonDescParser::EDID_MODES *this,
        unsigned __int64 a2,
        struct _VideoModeDescriptor *a3)
{
  unsigned __int16 v6; // di
  __int64 v7; // r9
  __int16 v8; // ax
  unsigned int v9; // r10d
  USHORT v10; // bp
  USHORT v11; // r14
  unsigned __int16 v12; // r9
  unsigned int v13; // r8d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int128 v16; // xmm1
  __int128 v17; // xmm0

  v6 = 0;
  v7 = **(_QWORD **)this;
  v8 = *(_WORD *)(v7 + 35);
  v9 = *(unsigned __int8 *)(v7 + 37);
  v10 = *(unsigned __int8 *)(v7 + 21);
  v11 = *(unsigned __int8 *)(v7 + 22);
  v12 = 0;
  v13 = (v9 >> 7) | (2 * (HIBYTE(v8) | ((unsigned __int8)v8 << 8)));
  if ( !v13 )
    return v12 < a2 ? 0xC01D0008 : 0;
  do
  {
    if ( v12 >= a2 )
      break;
    if ( (v13 & 1) != 0 )
    {
      v14 = v12;
      v15 = 56LL * v6;
      ++v12;
      v16 = *(_OWORD *)((char *)&unk_1C004C640 + v15 + 16);
      *(_OWORD *)&a3[v14].PixelClockRate = *(_OWORD *)((char *)&unk_1C004C640 + v15);
      v17 = *(_OWORD *)((char *)&unk_1C004C640 + v15 + 32);
      *(_OWORD *)&a3[v14].HorizontalRefreshRateDenominator = v16;
      *(_QWORD *)&v16 = *(_QWORD *)((char *)&unk_1C004C640 + v15 + 48);
      *(_OWORD *)&a3[v14].HorizontalSyncPulseWidth = v17;
      *(_QWORD *)&a3[v14].IsSyncOnRGB = v16;
      a3[v14].HorizontalImageSize = v10;
      a3[v14].VerticalImageSize = v11;
      a3[v14].Origin = *((_BYTE *)this + 8);
    }
    ++v6;
    v13 >>= 1;
  }
  while ( v13 );
  if ( v13 && v12 == a2 )
    return 3221225507LL;
  else
    return v12 < a2 ? 0xC01D0008 : 0;
}
