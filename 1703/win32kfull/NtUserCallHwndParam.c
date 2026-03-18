/*
 * XREFs of NtUserCallHwndParam @ 0x1C00F63A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

// write access to const memory has been detected, the output may be wrong!
_QWORD *__fastcall NtUserCallHwndParam(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a3;
  EnterCrit(0LL, 1LL);
  if ( (_DWORD)v4 == 102 || (_DWORD)v4 == -1 )
    gbValidateHandleForIL = 0;
  v8 = ValidateHwnd(a1);
  if ( !v8 )
  {
    v12 = 0LL;
    goto LABEL_9;
  }
  v10 = gptiCurrent;
  v14[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v14;
  v14[1] = v8;
  ++*(_DWORD *)(v8 + 8);
  if ( (unsigned int)(v4 - 102) > 0xA )
    goto LABEL_13;
  _mm_lfence();
  v11 = (_QWORD *)((__int64 (__fastcall *)(__int64, __int64))apfnSimpleCall[v4])(v8, a2);
  v12 = v11;
  if ( (unsigned int)v4 < 0x67 )
  {
    if ( v11 )
    {
      v12 = (_QWORD *)*v11;
      goto LABEL_8;
    }
LABEL_13:
    v12 = 0LL;
  }
LABEL_8:
  ThreadUnlock1(v10, v6);
LABEL_9:
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v12;
}
