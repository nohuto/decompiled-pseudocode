/*
 * XREFs of ApiSetQueryApiSetPresence @ 0x18007BD70
 * Callers:
 *     <none>
 * Callees:
 *     LdrpLogDllState @ 0x180031CA8 (LdrpLogDllState.c)
 *     ApiSetResolveToHost @ 0x180031CFC (ApiSetResolveToHost.c)
 */

__int64 __fastcall ApiSetQueryApiSetPresence(unsigned __int16 *a1, char *a2)
{
  void *ApiSetMap; // rbx
  int v5; // ebx
  __int64 v6; // rdx
  unsigned __int16 v7; // r8
  _WORD v9[12]; // [rsp+30h] [rbp-18h] BYREF

  ApiSetMap = NtCurrentPeb()->ApiSetMap;
  LdrpLogDllState(0, (__int64)a1, 0x14D0u);
  v5 = ApiSetResolveToHost((__int64)ApiSetMap, a1, 0LL, a2, (__int64)v9);
  if ( v5 >= 0 && *a2 )
  {
    v6 = (__int64)a1;
    if ( v9[0] )
      v7 = 5329;
    else
      v7 = 5330;
  }
  else
  {
    v7 = 5331;
    v6 = (__int64)a1;
  }
  LdrpLogDllState(0, v6, v7);
  if ( v5 < 0 )
    return (unsigned int)v5;
  if ( !v9[0] )
  {
    if ( *a2 )
      *a2 = 0;
  }
  return 0LL;
}
