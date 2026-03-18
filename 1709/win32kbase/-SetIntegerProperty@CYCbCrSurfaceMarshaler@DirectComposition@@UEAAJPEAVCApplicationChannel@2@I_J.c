/*
 * XREFs of ?SetIntegerProperty@CYCbCrSurfaceMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C014FD30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CYCbCrSurfaceMarshaler::SetIntegerProperty(
        DirectComposition::CYCbCrSurfaceMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  __int64 result; // rax
  int v6; // edx

  result = 0LL;
  if ( a3 != 2 )
    return 3221225485LL;
  v6 = *((_DWORD *)this + 14);
  if ( v6 != a4 )
    *((_DWORD *)this + 14) = a4;
  *a5 = v6 != a4;
  return result;
}
