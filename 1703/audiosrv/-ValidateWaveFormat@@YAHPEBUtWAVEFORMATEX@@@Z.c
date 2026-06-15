/*
 * XREFs of ?ValidateWaveFormat@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x180001710
 * Callers:
 *     ?SetAudioFormat@CAudioMediaType@@IEAAJPEBUtWAVEFORMATEX@@IH@Z @ 0x1800015B4 (-SetAudioFormat@CAudioMediaType@@IEAAJPEBUtWAVEFORMATEX@@IH@Z.c)
 * Callees:
 *     ?IsValidFloatWfx@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x1800017C8 (-IsValidFloatWfx@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 *     ?IsValidPcmWfx@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x1800D3038 (-IsValidPcmWfx@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 */

__int64 __fastcall ValidateWaveFormat(const struct tWAVEFORMATEX *a1)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // rax
  WORD nSamplesPerSec_high; // ax
  unsigned int valid; // eax
  unsigned int v6; // ecx

  if ( a1->wFormatTag == 0xFFFE )
  {
    if ( a1->cbSize < 0x16u )
      goto LABEL_18;
    v2 = *(_QWORD *)((char *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data1 + 2) - *(_QWORD *)&a1[1].nAvgBytesPerSec;
    if ( *(_QWORD *)((char *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data1 + 2) == *(_QWORD *)&a1[1].nAvgBytesPerSec )
    {
      v3 = *(unsigned int *)&a1[1].cbSize;
      v2 = *(unsigned int *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[2] - v3;
      if ( *(unsigned int *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[2] == v3 )
        v2 = *(unsigned __int16 *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[6]
           - (unsigned __int64)a1[2].nChannels;
    }
    if ( v2 )
LABEL_18:
      nSamplesPerSec_high = 0;
    else
      nSamplesPerSec_high = HIWORD(a1[1].nSamplesPerSec);
  }
  else
  {
    nSamplesPerSec_high = a1->wFormatTag;
  }
  if ( nSamplesPerSec_high == 1 )
  {
    valid = IsValidPcmWfx(a1);
LABEL_11:
    v6 = valid;
    if ( !valid )
      return v6;
    goto LABEL_12;
  }
  if ( nSamplesPerSec_high == 3 )
  {
    valid = IsValidFloatWfx(a1);
    goto LABEL_11;
  }
  v6 = 1;
LABEL_12:
  if ( a1->wFormatTag == 0xFFFE )
  {
    v6 = 0;
    if ( a1->cbSize >= 0x16u )
      return a1[1].wFormatTag <= a1->wBitsPerSample;
  }
  return v6;
}
