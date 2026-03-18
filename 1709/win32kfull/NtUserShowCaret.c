/*
 * XREFs of NtUserShowCaret @ 0x1C0064190
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     zzzInternalShowCaret @ 0x1C0064398 (zzzInternalShowCaret.c)
 */

__int64 __fastcall NtUserShowCaret(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rsi
  unsigned int ThreadId; // eax
  __int64 v9; // rax

  EnterCrit(0LL, 1LL);
  v2 = 0LL;
  if ( a1 )
  {
    v5 = ValidateHwnd(a1);
    if ( !v5 )
      goto LABEL_5;
  }
  else
  {
    v5 = 0LL;
  }
  v6 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( *(_QWORD *)(v6 + 288)
    && ((ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent),
         v4 = *(unsigned int *)(v6 + 344),
         (_DWORD)v4 == ThreadId)
     || (v9 = PtiFromThreadId(v4)) != 0 && *(_QWORD *)(gptiCurrent + 400LL) == *(_QWORD *)(v9 + 400)) )
  {
    if ( !v5 || v5 == *(_QWORD *)(v6 + 288) )
    {
      zzzInternalShowCaret();
      v2 = 1LL;
    }
  }
  else
  {
    UserSetLastError(5LL);
  }
LABEL_5:
  UserSessionSwitchLeaveCrit(v4, v3);
  return v2;
}
