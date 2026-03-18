/*
 * XREFs of ?SetBufferProperty@CVisualSurfaceMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C014C830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualSurfaceMarshaler::SetBufferProperty(
        DirectComposition::CVisualSurfaceMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        float *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx
  float v7; // xmm1_4
  bool v8; // zf

  v6 = -1073741811;
  *a6 = 0;
  if ( a3 == 1 )
  {
    v6 = a5 != 8 ? 0xC000000D : 0;
    if ( a5 == 8 )
    {
      *((double *)this + 8) = *a4;
      v7 = a4[1];
      *((_DWORD *)this + 4) |= 0x20u;
      v8 = *((_QWORD *)this + 5) == 0LL;
      *((double *)this + 9) = v7;
      if ( !v8 )
      {
        *((_DWORD *)this + 4) |= 0x40u;
        *((_BYTE *)this + 80) = 0;
      }
      *a6 = 1;
    }
  }
  return v6;
}
