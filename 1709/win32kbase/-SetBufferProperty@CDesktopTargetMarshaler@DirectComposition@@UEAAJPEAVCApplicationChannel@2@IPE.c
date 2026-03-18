/*
 * XREFs of ?SetBufferProperty@CDesktopTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0143B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDesktopTargetMarshaler::SetBufferProperty(
        DirectComposition::CDesktopTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _OWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx

  v6 = -1073741811;
  *a6 = 0;
  if ( a3 == 7 )
  {
    v6 = a5 != 16 ? 0xC000000D : 0;
    if ( a5 == 16 )
    {
      *((_OWORD *)this + 5) = *a4;
      *((_DWORD *)this + 4) |= 0x800u;
      *a6 = 1;
    }
  }
  return v6;
}
