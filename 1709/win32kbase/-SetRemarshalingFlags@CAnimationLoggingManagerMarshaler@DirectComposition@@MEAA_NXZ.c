/*
 * XREFs of ?SetRemarshalingFlags@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C009CB60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CAnimationLoggingManagerMarshaler::SetRemarshalingFlags(
        DirectComposition::CAnimationLoggingManagerMarshaler *this)
{
  __int64 result; // rax

  result = 1LL;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 44) = 0;
  *((_BYTE *)this + 180) = 0;
  return result;
}
