/*
 * XREFs of AuthzBasepSetAccessReasons @ 0x140110310
 * Callers:
 *     AuthzBasepAddAccessTypeList @ 0x140110230 (AuthzBasepAddAccessTypeList.c)
 *     SepCommonAccessCheckEx @ 0x14014204C (SepCommonAccessCheckEx.c)
 *     AuthzBasepSetTypeListAccessReasons @ 0x140142A7C (AuthzBasepSetTypeListAccessReasons.c)
 *     SepMaximumAccessCheckEx @ 0x140142AD0 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140142BF0 (SepNormalAccessCheckEx.c)
 *     AuthzBasepUpdateParentTypeList @ 0x14028DDFC (AuthzBasepUpdateParentTypeList.c)
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
