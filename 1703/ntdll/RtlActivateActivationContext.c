/*
 * XREFs of RtlActivateActivationContext @ 0x180055540
 * Callers:
 *     <none>
 * Callees:
 *     RtlActivateActivationContextEx @ 0x180055590 (RtlActivateActivationContextEx.c)
 */

__int64 __fastcall RtlActivateActivationContext(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax

  if ( a3 )
    *a3 = 0LL;
  if ( (_DWORD)a1 || !a3 )
    return 3221225485LL;
  result = RtlActivateActivationContextEx(a1, NtCurrentTeb(), a2, a3);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
