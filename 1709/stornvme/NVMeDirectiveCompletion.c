/*
 * XREFs of NVMeDirectiveCompletion @ 0x1C000F610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeDirectiveCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // dl
  __int64 v6; // rsi
  __int64 result; // rax
  __int64 v8; // rcx

  v5 = *(_BYTE *)(a2 + 2);
  if ( v5 == 40 )
    v6 = *(_QWORD *)(a2 + 104);
  else
    v6 = *(_QWORD *)(a2 + 56);
  result = v6 & 0xFFF;
  if ( (v6 & 0xFFF) != 0 )
    v6 = v6 - result + 4096;
  if ( a3 )
  {
    if ( *(_BYTE *)(a2 + 3) != 1 )
    {
      if ( v5 == 40 )
        v8 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
      else
        v8 = *(unsigned __int8 *)(a2 + 7);
      result = StorPortExtendedFunction(60LL, a1, *(_QWORD *)(a1 + 8 * v8 + 1184), 2LL);
    }
    *(_BYTE *)(v6 + 4245) |= 8u;
  }
  return result;
}
