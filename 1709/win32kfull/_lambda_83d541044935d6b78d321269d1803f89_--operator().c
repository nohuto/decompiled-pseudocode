/*
 * XREFs of _lambda_83d541044935d6b78d321269d1803f89_::operator() @ 0x1C010F404
 * Callers:
 *     NtUserSetWindowBand @ 0x1C010F1D0 (NtUserSetWindowBand.c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_3f591c061a26dc8c636baef7d4393c9a___ @ 0x1C010F3CC (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_3f591c061a26dc8c636baef7d4393c9a__.c)
 * Callees:
 *     _DeferWindowPosAndBand @ 0x1C009ABD8 (_DeferWindowPosAndBand.c)
 */

__int64 *__fastcall lambda_83d541044935d6b78d321269d1803f89_::operator()(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 *result; // rax
  __int64 v5; // rcx

  result = *(__int64 **)a1;
  v5 = **(_QWORD **)a1;
  if ( v5 )
  {
    result = (__int64 *)DeferWindowPosAndBand(v5, a2, a3, 0, 0, 0, 0, 0x13u, **(_DWORD **)(a1 + 8), 1);
    **(_QWORD **)a1 = result;
  }
  return result;
}
