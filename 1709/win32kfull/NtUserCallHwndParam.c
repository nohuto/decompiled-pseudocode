/*
 * XREFs of NtUserCallHwndParam @ 0x1C00D5EF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

// write access to const memory has been detected, the output may be wrong!
_QWORD *__fastcall NtUserCallHwndParam(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a3;
  EnterCrit(0LL, 1LL);
  if ( (_DWORD)v4 == 97 || (_DWORD)v4 == -1 )
    gbValidateHandleForIL = 0;
  v6 = ValidateHwnd(a1);
  if ( !v6 )
  {
    v11 = 0LL;
    goto LABEL_9;
  }
  v9 = gptiCurrent;
  v13[0] = *(_QWORD *)(gptiCurrent + 392LL);
  *(_QWORD *)(gptiCurrent + 392LL) = v13;
  v13[1] = v6;
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  if ( (unsigned int)(v4 - 97) > 0xA )
    goto LABEL_13;
  _mm_lfence();
  v10 = (_QWORD *)((__int64 (__fastcall *)(__int64, __int64))*(&apfnSimpleCall + v4))(v6, a2);
  v11 = v10;
  if ( (unsigned int)v4 < 0x62 )
  {
    if ( v10 )
    {
      v11 = (_QWORD *)*v10;
      goto LABEL_8;
    }
LABEL_13:
    v11 = 0LL;
  }
LABEL_8:
  ThreadUnlock1(v9, v7);
LABEL_9:
  UserSessionSwitchLeaveCrit(v8, v7);
  return v11;
}
