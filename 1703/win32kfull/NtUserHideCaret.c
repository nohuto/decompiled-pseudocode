/*
 * XREFs of NtUserHideCaret @ 0x1C00384B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     zzzInternalHideCaret @ 0x1C0038688 (zzzInternalHideCaret.c)
 */

__int64 __fastcall NtUserHideCaret(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rsi
  unsigned int ThreadId; // eax
  __int64 v11; // rax

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
  v8 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( *(_QWORD *)(v8 + 256)
    && ((ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent),
         v4 = *(unsigned int *)(v8 + 304),
         (_DWORD)v4 == ThreadId)
     || (v11 = PtiFromThreadId()) != 0 && *(_QWORD *)(gptiCurrent + 376LL) == *(_QWORD *)(v11 + 376)) )
  {
    if ( !v5 || v5 == *(_QWORD *)(v8 + 256) )
    {
      zzzInternalHideCaret();
      v2 = 1LL;
    }
  }
  else
  {
    UserSetLastError(5LL);
  }
LABEL_5:
  UserSessionSwitchLeaveCrit(v4, v3, v6, v7);
  return v2;
}
