/*
 * XREFs of ?SetIntegerProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0143380
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBoolProperty@CManipulationMarshaler@DirectComposition@@AEAAJPEAVCApplicationChannel@2@I_NPEA_N@Z @ 0x1C01431FC (-SetBoolProperty@CManipulationMarshaler@DirectComposition@@AEAAJPEAVCApplicationChannel@2@I_NPEA.c)
 */

__int64 __fastcall DirectComposition::CManipulationMarshaler::SetIntegerProperty(
        DirectComposition::CManipulationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  unsigned int v5; // edx

  v5 = 0;
  if ( a3 )
  {
    return (unsigned int)DirectComposition::CManipulationMarshaler::SetBoolProperty(this, 0LL, a3, a4 != 0, a5);
  }
  else if ( *((_DWORD *)this + 20) != a4 )
  {
    *((_DWORD *)this + 20) = a4;
    *a5 = 1;
    *((_DWORD *)this + 4) |= 0x20u;
  }
  return v5;
}
