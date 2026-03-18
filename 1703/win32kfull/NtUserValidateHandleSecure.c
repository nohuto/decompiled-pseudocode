/*
 * XREFs of NtUserValidateHandleSecure @ 0x1C00F8D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserValidateHandleSecure(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  int v6; // ebx

  EnterCrit(0LL, 1LL);
  v5 = gptiCurrent;
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x20000000) != 0 )
    v6 = ValidateHandleSecure(a1, 3LL);
  else
    v6 = 0;
  UserSessionSwitchLeaveCrit(v2, v5, v3, v4);
  return v6;
}
