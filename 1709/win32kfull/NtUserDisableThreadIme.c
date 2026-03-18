/*
 * XREFs of NtUserDisableThreadIme @ 0x1C0115B10
 * Callers:
 *     <none>
 * Callees:
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 */

__int64 __fastcall NtUserDisableThreadIme(unsigned int a1)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 i; // rdi
  __int64 *v8; // rax
  __int64 *v9; // rax

  EnterCrit(0LL, 1LL);
  v3 = gpsi;
  if ( (*gpsi & 4) == 0 )
  {
    UserSetLastError(120LL, gpsi);
    v5 = 0LL;
    goto LABEL_3;
  }
  v5 = 0LL;
  if ( a1 == -1 )
  {
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 12LL) |= 0x800000u;
    for ( i = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 296LL); i; i = *(_QWORD *)(i + 640) )
    {
      *(_DWORD *)(i + 464) |= 0x2000000u;
      if ( i != gptiCurrent )
      {
        v8 = *(__int64 **)(i + 752);
        if ( v8 )
          PostEventMessageEx((struct tagTHREADINFO *)i, *(_QWORD *)(i + 408), 8u, 0LL, 0, *v8, 0LL, 0LL);
      }
    }
LABEL_11:
    v4 = *(_QWORD *)(gptiCurrent + 752LL);
    if ( v4 )
      xxxDestroyWindow((volatile signed __int32 *)v4, v3, v2);
LABEL_13:
    v5 = 1LL;
    goto LABEL_3;
  }
  if ( !a1 )
  {
    *(_DWORD *)(gptiCurrent + 464LL) |= 0x2000000u;
    goto LABEL_11;
  }
  v4 = PtiFromThreadId(a1);
  if ( v4 && *(_QWORD *)(v4 + 400) == *(_QWORD *)(gptiCurrent + 400LL) )
  {
    *(_DWORD *)(v4 + 464) |= 0x2000000u;
    v9 = *(__int64 **)(v4 + 752);
    if ( v9 )
      PostEventMessageEx((struct tagTHREADINFO *)v4, *(_QWORD *)(v4 + 408), 8u, 0LL, 0, *v9, 0LL, 0LL);
    goto LABEL_13;
  }
LABEL_3:
  UserSessionSwitchLeaveCrit(v4, v3);
  return v5;
}
