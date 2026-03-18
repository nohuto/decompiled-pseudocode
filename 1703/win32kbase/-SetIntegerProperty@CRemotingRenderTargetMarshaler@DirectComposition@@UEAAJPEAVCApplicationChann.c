/*
 * XREFs of ?SetIntegerProperty@CRemotingRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0144640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRemotingRenderTargetMarshaler::SetIntegerProperty(
        DirectComposition::CRemotingRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  __int64 result; // rax

  result = 0LL;
  if ( a3 != 2 )
    return 3221225485LL;
  if ( a4 != *((_QWORD *)this + 5) )
  {
    *((_QWORD *)this + 5) = a4;
    *a5 = 1;
  }
  return result;
}
