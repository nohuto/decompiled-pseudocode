/*
 * XREFs of ExpWnfGetCurrentScopeInstance @ 0x1405032EC
 * Callers:
 *     ExpWnfResolveScopeInstance @ 0x140502B1C (ExpWnfResolveScopeInstance.c)
 * Callees:
 *     PsGetProcessSessionId @ 0x1400AE9F0 (PsGetProcessSessionId.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1405033D4 (ExpWnfQueryCurrentUserSID.c)
 */

__int64 __fastcall ExpWnfGetCurrentScopeInstance(_KPROCESS *a1, int a2, int a3, _KPROCESS **a4, _DWORD *a5, _DWORD *a6)
{
  unsigned int v6; // ebx
  _KPROCESS *Process; // r10
  int v8; // r8d
  int v9; // r8d
  unsigned __int8 v11; // dl
  unsigned __int8 ApcStateIndex; // dl

  v6 = 0;
  Process = a1;
  if ( !a3 )
    goto LABEL_13;
  v8 = a3 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
      return (unsigned int)ExpWnfQueryCurrentUserSID((_DWORD)a1, a2, (_DWORD)a4, (_DWORD)a5, (__int64)a6);
    if ( v9 == 1 )
    {
      ApcStateIndex = KeGetCurrentThread()->ApcStateIndex;
      *a6 = ApcStateIndex != 1;
      if ( ApcStateIndex == 1 )
        Process = KeGetCurrentThread()->ApcState.Process;
      *a4 = Process;
      *a5 = 8;
      return v6;
    }
LABEL_13:
    *a5 = 0;
    *a6 = 1;
    return v6;
  }
  v11 = KeGetCurrentThread()->ApcStateIndex;
  *a6 = v11 != 1;
  if ( v11 == 1 )
    Process = KeGetCurrentThread()->ApcState.Process;
  *(_DWORD *)a4 = PsGetProcessSessionId((__int64)Process);
  *a5 = 4;
  return v6;
}
