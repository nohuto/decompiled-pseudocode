/*
 * XREFs of ?SetBufferProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0159F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCaptureRenderTargetMarshaler::SetBufferProperty(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v7; // edx
  __int64 v8; // rcx

  v7 = -1073741811;
  *a6 = 0;
  if ( a3 == 2 )
  {
    v7 = a5 != 8 ? 0xC000000D : 0;
    if ( a5 == 8 )
    {
      v8 = *a4;
      *((_DWORD *)this + 4) |= 0x80u;
      *((_QWORD *)this + 5) = v8;
      *a6 = 1;
    }
  }
  return v7;
}
