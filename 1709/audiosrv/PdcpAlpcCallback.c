/*
 * XREFs of PdcpAlpcCallback @ 0x1800DEBD0
 * Callers:
 *     <none>
 * Callees:
 *     PdcpAlpcProcessMessage @ 0x1800DEC30 (PdcpAlpcProcessMessage.c)
 */

__int64 __fastcall PdcpAlpcCallback(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  volatile signed __int32 *v4; // rdi
  signed __int32 v5; // eax
  bool v6; // cc

  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a2 + 128));
  if ( (_DWORD)result == 1 )
  {
    v4 = (volatile signed __int32 *)(a2 + 124);
    do
    {
      PdcpAlpcProcessMessage(a2);
      _InterlockedIncrement(v4);
      if ( *v4 == *(_DWORD *)(a2 + 120) )
        RtlWakeAddressAll(v4);
      v5 = _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 128), 0xFFFFFFFF);
      v6 = v5 <= 1;
      result = (unsigned int)(v5 - 1);
    }
    while ( !v6 );
  }
  return result;
}
