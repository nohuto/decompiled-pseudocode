/*
 * XREFs of ?ModeFromCeaVideoFormat@EDID_MODES@MonDescParser@@QEAAJPEBU_EDID_V1_CEA_861_SHORT_VIDEO_DESC@@PEAU_VideoModeDescriptor@@@Z @ 0x1C0037938
 * Callers:
 *     ?ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z @ 0x1C0010010 (-ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z.c)
 * Callees:
 *     ?GTF_GetVideoModeDescriptor@@YAJGGKKEPEAU_VideoModeDescriptor@@@Z @ 0x1C0010968 (-GTF_GetVideoModeDescriptor@@YAJGGKKEPEAU_VideoModeDescriptor@@@Z.c)
 *     memset @ 0x1C0016A80 (memset.c)
 */

__int64 __fastcall MonDescParser::EDID_MODES::ModeFromCeaVideoFormat(
        UCHAR *this,
        const struct _EDID_V1_CEA_861_SHORT_VIDEO_DESC *a2,
        struct _VideoModeDescriptor *a3)
{
  __int64 result; // rax
  char *v6; // rbx

  if ( (*(_BYTE *)a2 & 0x7Fu) >= 0x3F )
    return 3223126018LL;
  v6 = (char *)&MonDescParser::CeaVideoFormatEntries + 28 * (*(_BYTE *)a2 & 0x7F);
  memset(a3, 0, sizeof(struct _VideoModeDescriptor));
  a3->HorizontalImageSize = *(unsigned __int8 *)(**(_QWORD **)this + 21LL);
  a3->VerticalImageSize = *(unsigned __int8 *)(**(_QWORD **)this + 22LL);
  result = GTF_GetVideoModeDescriptor(
             *((_WORD *)v6 + 4),
             *((_WORD *)v6 + 6),
             *((_DWORD *)v6 + 5),
             *((_DWORD *)v6 + 6),
             v6[16],
             a3);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)&a3->StereoModeType = 33685504;
    *(_DWORD *)&a3->CompositePolarityType = 453116418;
    a3->Origin = this[8];
    result = 0LL;
    a3->TimingType = 1;
  }
  return result;
}
