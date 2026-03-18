/*
 * XREFs of NtUserCallHwndLock @ 0x1C009F8A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserCallHwndLock(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a2;
  EnterCrit(0LL, 1LL);
  v4 = 0LL;
  if ( (_DWORD)v2 == 115
    || (_DWORD)v2 == 120
    || (_DWORD)v2 == 124
    || (unsigned int)v2 > 0x7D && (unsigned int)v2 <= 0x7F )
  {
    gbValidateHandleForIL = 0;
  }
  v5 = ValidateHwnd(a1);
  v7 = v5;
  if ( v5 && ((_DWORD)v2 != 109 && (_DWORD)v2 != 122 || (((*(_WORD *)(v5 + 82) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0) )
  {
    v8 = gptiCurrent;
    v10[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v10;
    v10[1] = v5;
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    if ( (unsigned int)(v2 - 108) <= 0xC )
      v4 = ((__int64 (__fastcall *)(__int64))*(&apfnSimpleCall + v2))(v5);
    ThreadUnlock1(v8, v7);
  }
  UserSessionSwitchLeaveCrit(v6, v7);
  return v4;
}
