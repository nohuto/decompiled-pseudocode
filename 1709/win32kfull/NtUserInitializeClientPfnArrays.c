/*
 * XREFs of NtUserInitializeClientPfnArrays @ 0x1C011E4A0
 * Callers:
 *     <none>
 * Callees:
 *     InitializeClientPfnArrays @ 0x1C011E58C (InitializeClientPfnArrays.c)
 */

__int64 __fastcall NtUserInitializeClientPfnArrays(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v11; // [rsp+20h] [rbp-18h]

  EnterCrit(0LL, 1LL);
  if ( a1 && (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a2 && (a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a3 && (a3 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v11 = InitializeClientPfnArrays(a1, a2, a3, a4);
  UserSessionSwitchLeaveCrit(v9, v8);
  return v11;
}
