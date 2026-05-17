/*
 * XREFs of sub_1800FC34C @ 0x1800FC34C
 * Callers:
 *     RtlCreateHeap @ 0x18005AA80 (RtlCreateHeap.c)
 *     sub_18005D87C @ 0x18005D87C (sub_18005D87C.c)
 *     sub_1800ED0C0 @ 0x1800ED0C0 (sub_1800ED0C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800FC34C(__int64 (__fastcall *a1)())
{
  __int64 result; // rax
  unsigned __int16 v2; // dx
  bool v3; // zf

  LOWORD(result) = 0;
  while ( 1 )
  {
    v2 = result + 1;
    v3 = funcs_1800EC034[(unsigned __int16)result] == a1;
    result = (unsigned __int16)(result + 1);
    if ( v3 )
      break;
    if ( v2 >= 2u )
      return 0LL;
  }
  return result;
}
