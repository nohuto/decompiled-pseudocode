/*
 * XREFs of MY_WRITE_REGISTER_ULONG @ 0x140133000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MY_WRITE_REGISTER_ULONG(_DWORD *a1, unsigned __int8 a2)
{
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  result = a2;
  *a1 = a2;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  return result;
}
