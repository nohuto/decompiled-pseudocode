/*
 * XREFs of ?SetBufferProperty@CPlaneCaptureRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01593C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CPlaneCaptureRenderTargetMarshaler::SetBufferProperty(
        DirectComposition::CPlaneCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _QWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx

  v6 = -1073741811;
  *a6 = 0;
  if ( a3 == 3 )
  {
    v6 = a5 != 8 ? 0xC000000D : 0;
    if ( a5 == 8 )
    {
      *((_QWORD *)this + 6) = *a4;
      *((_DWORD *)this + 4) |= 0x20u;
      *a6 = 1;
    }
  }
  return v6;
}
