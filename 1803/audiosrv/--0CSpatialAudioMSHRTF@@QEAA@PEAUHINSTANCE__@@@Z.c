/*
 * XREFs of ??0CSpatialAudioMSHRTF@@QEAA@PEAUHINSTANCE__@@@Z @ 0x18004EDD0
 * Callers:
 *     ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x18004E558 (-CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z.c)
 * Callees:
 *     ??0CSpatialAudioTech@@QEAA@XZ @ 0x18004EFE0 (--0CSpatialAudioTech@@QEAA@XZ.c)
 */

CSpatialAudioMSHRTF *__fastcall CSpatialAudioMSHRTF::CSpatialAudioMSHRTF(CSpatialAudioMSHRTF *this, HINSTANCE a2)
{
  __int64 v4; // rdi
  char *v5; // rbx
  char *v6; // rbx
  __int64 v7; // rdi
  signed __int64 v8; // rcx
  __int16 v9; // ax
  signed __int64 v11; // rcx
  __int16 v12; // ax
  char *v13; // rax

  CSpatialAudioTech::CSpatialAudioTech(this);
  v4 = 128LL;
  *(_QWORD *)this = &CSpatialAudioMSHRTF::`vftable';
  v5 = (char *)this + 32;
  *((_OWORD *)this + 1) = MICROSOFT_HRTF_SPATIAL_ENCODER;
  if ( LoadStringW(a2, 0x190u, (LPWSTR)this + 16, 128) <= 0 )
  {
    v11 = (char *)L"Microsoft HRTF" - v5;
    do
    {
      if ( v4 == -2147483518 )
        break;
      v12 = *(_WORD *)&v5[v11];
      if ( !v12 )
        break;
      *(_WORD *)v5 = v12;
      v5 += 2;
      --v4;
    }
    while ( v4 );
    v13 = v5 - 2;
    if ( v4 )
      v13 = v5;
    *(_WORD *)v13 = 0;
  }
  v6 = (char *)this + 288;
  v7 = 256LL;
  if ( LoadStringW(a2, 0x1AEu, (LPWSTR)this + 144, 256) <= 0 )
  {
    v8 = (char *)&word_180133238 - v6;
    while ( v7 != -2147483390 )
    {
      v9 = *(_WORD *)&v6[v8];
      if ( !v9 )
        break;
      *(_WORD *)v6 = v9;
      v6 += 2;
      if ( !--v7 )
      {
        v6 -= 2;
        break;
      }
    }
    *(_WORD *)v6 = 0;
  }
  return this;
}
