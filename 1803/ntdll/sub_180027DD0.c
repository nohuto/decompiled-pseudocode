/*
 * XREFs of sub_180027DD0 @ 0x180027DD0
 * Callers:
 *     sub_180027040 @ 0x180027040 (sub_180027040.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180027DD0(__int64 a1)
{
  __int64 result; // rax
  __int64 (*v2)(void); // rax

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    v2 = **(__int64 (***)(void))(a1 + 8);
    if ( (char *)v2 == (char *)sub_180059040 )
    {
      return sub_180059040((PVOID)a1);
    }
    else if ( v2 == sub_18007CAB0 )
    {
      return sub_18007CAB0();
    }
    else
    {
      return v2();
    }
  }
  return result;
}
