/*
 * XREFs of NtUserEnableIAMAccess @ 0x1C003B030
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _EnableIAMThreadAccess @ 0x1C003AF6C (_EnableIAMThreadAccess.c)
 */

__int64 __fastcall NtUserEnableIAMAccess(__int64 a1, int a2)
{
  int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // r9
  BOOL v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9

  EnterCrit(0LL, 1LL);
  v4 = 0;
  v5 = *(_QWORD *)(gptiCurrent + 408LL);
  v6 = *(_QWORD *)(v5 + 8);
  v7 = *(_QWORD *)(v6 + 168);
  if ( *(_QWORD *)(gptiCurrent + 376LL) != v7 )
    goto LABEL_10;
  if ( v7 && *(_QWORD *)(v6 + 160) )
  {
    if ( !*(_QWORD *)(v5 + 288) )
    {
LABEL_10:
      UserSetLastError(5LL);
      goto LABEL_8;
    }
    v8 = a1 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 280LL);
  }
  else
  {
    v8 = 0;
  }
  if ( !v8 )
    goto LABEL_10;
  v4 = EnableIAMThreadAccess(gptiCurrent, a2);
LABEL_8:
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v4;
}
