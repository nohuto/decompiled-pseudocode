/*
 * XREFs of ApiSetQueryApiSetPresence @ 0x1800782E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003BC9C @ 0x18003BC9C (sub_18003BC9C.c)
 *     sub_18003BCF0 @ 0x18003BCF0 (sub_18003BCF0.c)
 */

__int64 __fastcall ApiSetQueryApiSetPresence(unsigned __int16 *a1, char *a2)
{
  PAPI_SET_NAMESPACE ApiSetMap; // rbx
  int v5; // ebx
  unsigned __int16 v6; // cx
  _WORD v8[12]; // [rsp+30h] [rbp-18h] BYREF

  ApiSetMap = NtCurrentPeb()->ApiSetMap;
  sub_18003BC9C(0, (__int64)a1, 0x14D0u);
  v5 = sub_18003BCF0((__int64)ApiSetMap, a1, 0LL, a2, (__int64)v8);
  if ( v5 >= 0 && *a2 )
  {
    if ( v8[0] )
      v6 = 5329;
    else
      v6 = 5330;
  }
  else
  {
    v6 = 5331;
  }
  sub_18003BC9C(0, (__int64)a1, v6);
  if ( v5 < 0 )
    return (unsigned int)v5;
  if ( !v8[0] )
  {
    if ( *a2 )
      *a2 = 0;
  }
  return 0LL;
}
