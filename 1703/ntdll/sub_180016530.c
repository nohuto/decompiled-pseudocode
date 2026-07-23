/*
 * XREFs of sub_180016530 @ 0x180016530
 * Callers:
 *     sub_1800156B0 @ 0x1800156B0 (sub_1800156B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180016530(__int64 a1)
{
  __int64 result; // rax
  __int64 (*v2)(void); // rax

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    v2 = **(__int64 (***)(void))(a1 + 8);
    if ( (char *)v2 == (char *)sub_1800186C0 )
      return sub_1800186C0((PVOID)a1);
    else
      return v2();
  }
  return result;
}
