/*
 * XREFs of TppWorkCallbackEpilog @ 0x18000EDF0
 * Callers:
 *     TppCallbackEpilog @ 0x18000E3F0 (TppCallbackEpilog.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TppWorkCallbackEpilog(__int64 a1)
{
  __int64 result; // rax
  __int64 (*v2)(void); // rax

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    v2 = **(__int64 (***)(void))(a1 + 8);
    if ( (char *)v2 == (char *)TppWorkpFree )
      return TppWorkpFree((PVOID)a1);
    else
      return v2();
  }
  return result;
}
