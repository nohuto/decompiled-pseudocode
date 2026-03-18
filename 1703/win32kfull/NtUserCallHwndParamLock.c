/*
 * XREFs of NtUserCallHwndParamLock @ 0x1C00B7750
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserCallHwndParamLock(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // rcx
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a3;
  EnterCrit(0LL, 1LL);
  v6 = 0LL;
  if ( (_DWORD)v4 == 129
    || (_DWORD)v4 == 120
    || (_DWORD)v4 == 125
    || (unsigned int)v4 > 0x82 && (unsigned int)v4 <= 0x84 )
  {
    gbValidateHandleForIL = 0;
  }
  v7 = ValidateHwnd(a1);
  v11 = v7;
  if ( v7 && ((_DWORD)v4 != 127 && (_DWORD)v4 != 114 || (((*(_WORD *)(v7 + 82) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0) )
  {
    v12 = gptiCurrent;
    v14[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v14;
    v14[1] = v7;
    ++*(_DWORD *)(v7 + 8);
    if ( (unsigned int)(v4 - 126) <= 8 )
      v6 = ((__int64 (__fastcall *)(__int64, __int64))apfnSimpleCall[v4])(v7, a2);
    ThreadUnlock1(v12, v8);
  }
  UserSessionSwitchLeaveCrit(v9, v8, v11, v10);
  return v6;
}
