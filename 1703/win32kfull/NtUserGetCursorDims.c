/*
 * XREFs of NtUserGetCursorDims @ 0x1C01009B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserGetCursorDims(_DWORD *a1)
{
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 v4; // rcx
  _DWORD *v5; // rdx
  _DWORD *v6; // rdx

  EnterCrit(0LL, 1LL);
  v3 = 0LL;
  LODWORD(v4) = 0;
  v5 = &gfCursorSizeNeeded;
  do
  {
    if ( *v5 )
      v3 = (1 << v4) | (unsigned int)v3;
    v4 = (unsigned int)(v4 + 1);
    ++v5;
  }
  while ( (unsigned int)v4 < 5 );
  v6 = a1;
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    v6 = (_DWORD *)W32UserProbeAddress;
  *v6 = *v6;
  *a1 = v3;
  UserSessionSwitchLeaveCrit(v4, v6, v3, v2);
  return 1LL;
}
