/*
 * XREFs of ?GetImplementation@CProcess@@UEAAJPEAPEAV1@@Z @ 0x1800162B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::GetImplementation(CProcess *this, struct CProcess **a2)
{
  __int64 result; // rax

  result = a2 == 0LL ? 0x80004003 : 0;
  if ( a2 )
  {
    *a2 = (CProcess *)((char *)this - 24);
    _InterlockedIncrement((volatile signed __int32 *)this - 4);
  }
  return result;
}
