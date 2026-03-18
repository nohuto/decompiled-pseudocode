/*
 * XREFs of NtUserGetCursorDims @ 0x1C010BE80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserGetCursorDims(_DWORD *a1)
{
  int v2; // r8d
  unsigned int v3; // ecx
  _DWORD *v4; // rdx
  _DWORD *v5; // rdx

  EnterCrit(0LL, 1LL);
  v2 = 0;
  v3 = 0;
  v4 = &gfCursorSizeNeeded;
  do
  {
    if ( *v4 )
      v2 |= 1 << v3;
    ++v3;
    ++v4;
  }
  while ( v3 < 5 );
  v5 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v5 = (_DWORD *)MmUserProbeAddress;
  *v5 = *v5;
  *a1 = v2;
  UserSessionSwitchLeaveCrit(MmUserProbeAddress, v5);
  return 1LL;
}
