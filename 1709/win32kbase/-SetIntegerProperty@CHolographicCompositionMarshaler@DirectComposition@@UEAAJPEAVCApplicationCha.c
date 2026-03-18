/*
 * XREFs of ?SetIntegerProperty@CHolographicCompositionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C014CAC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHolographicCompositionMarshaler::SetIntegerProperty(
        DirectComposition::CHolographicCompositionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  __int64 result; // rax

  result = 0LL;
  if ( a3 )
    return 3221225485LL;
  *((_DWORD *)this + 4) |= 0x40u;
  *((_DWORD *)this + 10) = a4;
  *((_BYTE *)this + 44) = 1;
  *a5 = 1;
  return result;
}
