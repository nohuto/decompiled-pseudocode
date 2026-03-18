/*
 * XREFs of ?SetHandleProperty@CRenderTargetTargetMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x1C0089CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRenderTargetTargetMarshaler::SetHandleProperty(
        DirectComposition::CRenderTargetTargetMarshaler *this,
        int a2,
        void *a3,
        bool *a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 != 1 )
    return 3221225485LL;
  *((_QWORD *)this + 6) = a3;
  *a4 = 1;
  return result;
}
