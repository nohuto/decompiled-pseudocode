/*
 * XREFs of NtUserCallHwndLock @ 0x1C0049280
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserCallHwndLock(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a2;
  EnterCrit(0LL, 1LL);
  v4 = 0LL;
  if ( (_DWORD)v2 == 120
    || (_DWORD)v2 == 125
    || (_DWORD)v2 == 129
    || (unsigned int)v2 > 0x82 && (unsigned int)v2 <= 0x84 )
  {
    gbValidateHandleForIL = 0;
  }
  v5 = ValidateHwnd(a1);
  v9 = v5;
  if ( v5 && ((_DWORD)v2 != 114 && (_DWORD)v2 != 127 || (((*(_WORD *)(v5 + 82) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0) )
  {
    v10 = gptiCurrent;
    v12[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v12;
    v12[1] = v5;
    ++*(_DWORD *)(v5 + 8);
    if ( (unsigned int)(v2 - 113) <= 0xC )
      v4 = ((__int64 (__fastcall *)(__int64))apfnSimpleCall[v2])(v5);
    ThreadUnlock1(v10, v9);
  }
  UserSessionSwitchLeaveCrit(v6, v9, v7, v8);
  return v4;
}
