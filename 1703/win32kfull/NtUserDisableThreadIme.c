/*
 * XREFs of NtUserDisableThreadIme @ 0x1C010C180
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     PostEventMessageEx @ 0x1C0049DE8 (PostEventMessageEx.c)
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 */

__int64 __fastcall NtUserDisableThreadIme(unsigned int a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 i; // rdi
  __int64 *v9; // rax
  __int64 *v10; // rax

  EnterCrit(0LL, 1LL);
  v4 = gpsi;
  if ( (*gpsi & 4) == 0 )
  {
    UserSetLastError(120LL);
    v6 = 0LL;
    goto LABEL_3;
  }
  v6 = 0LL;
  if ( a1 == -1 )
  {
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 12LL) |= 0x800000u;
    for ( i = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 288LL); i; i = *(_QWORD *)(i + 584) )
    {
      *(_DWORD *)(i + 440) |= 0x2000000u;
      if ( i != gptiCurrent )
      {
        v9 = *(__int64 **)(i + 696);
        if ( v9 )
          PostEventMessageEx(i, *(_QWORD *)(i + 384), 8u, 0LL, 0, *v9, 0LL, 0LL);
      }
    }
LABEL_11:
    v5 = *(_QWORD *)(gptiCurrent + 696LL);
    if ( v5 )
      xxxDestroyWindow(v5, v4, v2);
LABEL_13:
    v6 = 1LL;
    goto LABEL_3;
  }
  if ( !a1 )
  {
    *(_DWORD *)(gptiCurrent + 440LL) |= 0x2000000u;
    goto LABEL_11;
  }
  v5 = PtiFromThreadId(a1);
  if ( v5 && *(_QWORD *)(v5 + 376) == *(_QWORD *)(gptiCurrent + 376LL) )
  {
    *(_DWORD *)(v5 + 440) |= 0x2000000u;
    v10 = *(__int64 **)(v5 + 696);
    if ( v10 )
      PostEventMessageEx(v5, *(_QWORD *)(v5 + 384), 8u, 0LL, 0, *v10, 0LL, 0LL);
    goto LABEL_13;
  }
LABEL_3:
  UserSessionSwitchLeaveCrit(v5, v4, v2, v3);
  return v6;
}
