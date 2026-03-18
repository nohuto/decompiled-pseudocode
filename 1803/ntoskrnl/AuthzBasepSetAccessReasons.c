/*
 * XREFs of AuthzBasepSetAccessReasons @ 0x1400B1500
 * Callers:
 *     AuthzBasepAddAccessTypeList @ 0x1400B1408 (AuthzBasepAddAccessTypeList.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140148E84 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     AuthzBasepSetTypeListAccessReasons @ 0x140149920 (AuthzBasepSetTypeListAccessReasons.c)
 *     SepMaximumAccessCheckEx @ 0x140149980 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140149AA0 (SepNormalAccessCheckEx.c)
 *     AuthzBasepUpdateParentTypeList @ 0x1402C3A78 (AuthzBasepUpdateParentTypeList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AuthzBasepSetAccessReasons(int a1, int a2, int a3, __int64 a4, char a5)
{
  __int64 v5; // r10
  __int64 result; // rax

  v5 = 0LL;
  result = 1LL;
  if ( a4 )
  {
    while ( (_DWORD)result )
    {
      if ( ((unsigned int)result & a1) != 0 && (a5 || !*(_DWORD *)(a4 + 4 * v5)) )
        *(_DWORD *)(a4 + 4 * v5) = a3 | a2;
      v5 = (unsigned int)(v5 + 1);
      result = (unsigned int)(2 * result);
    }
  }
  return result;
}
