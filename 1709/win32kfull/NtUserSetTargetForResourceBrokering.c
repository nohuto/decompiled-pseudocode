/*
 * XREFs of NtUserSetTargetForResourceBrokering @ 0x1C0008FD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetTargetForResourceBrokering(int a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx

  EnterCrit(0LL, 1LL);
  v5 = 0LL;
  if ( a1 )
    goto LABEL_15;
  v6 = *(unsigned int *)(*(_QWORD *)(gptiCurrent + 400LL) + 776LL);
  LOBYTE(v6) = v6 & 0x30;
  if ( (_BYTE)v6 != 16 )
  {
LABEL_16:
    v12 = 5LL;
    goto LABEL_17;
  }
  if ( !a2 )
  {
LABEL_12:
    v11 = *(_QWORD *)(gptiCurrent + 1448LL);
    if ( v11 )
    {
      *(_QWORD *)(v11 + 1448) = 0LL;
      *(_QWORD *)(gptiCurrent + 1448LL) = 0LL;
    }
    *(_DWORD *)(gptiCurrent + 1184LL) &= ~0x4000000u;
    goto LABEL_10;
  }
  v7 = PtiFromThreadId(a2);
  v8 = v7;
  if ( !v7 )
  {
LABEL_15:
    v12 = 87LL;
LABEL_17:
    UserSetLastError(v12);
    goto LABEL_11;
  }
  if ( v7 == gptiCurrent )
    goto LABEL_12;
  v9 = *(_QWORD *)(v7 + 400);
  if ( (*(_DWORD *)(v9 + 776) & 0x30) != 0x10
    || !(unsigned __int8)PsIsWin32KFilterEnabledForProcess(*(_QWORD *)v9)
    && !(unsigned __int8)PsIsWin32KFilterAuditEnabledForProcess(**(_QWORD **)(v8 + 400)) )
  {
    goto LABEL_16;
  }
  *(_DWORD *)(gptiCurrent + 1184LL) |= 0x4000000u;
  *(_QWORD *)(gptiCurrent + 1448LL) = v8;
  *(_DWORD *)(v8 + 1184) &= ~0x4000000u;
  *(_QWORD *)(v8 + 1448) = gptiCurrent;
LABEL_10:
  v5 = 1LL;
LABEL_11:
  UserSessionSwitchLeaveCrit(v6, v4);
  return v5;
}
