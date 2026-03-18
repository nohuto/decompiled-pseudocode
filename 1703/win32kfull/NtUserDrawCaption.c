/*
 * XREFs of NtUserDrawCaption @ 0x1C01D7930
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxDrawCaptionTemp @ 0x1C0138108 (xxxDrawCaptionTemp.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserDrawCaption(__int64 a1, HDC a2, struct tagRECT *a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD v17[3]; // [rsp+58h] [rbp-60h] BYREF
  struct tagRECT v18; // [rsp+70h] [rbp-48h] BYREF

  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  v13 = 0;
  if ( v8 )
  {
    v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v17;
    v17[1] = v8;
    ++*(_DWORD *)(v8 + 8);
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      a3 = (struct tagRECT *)W32UserProbeAddress;
    v18 = *a3;
    v13 = xxxDrawCaptionTemp(v8, a2, &v18, 0LL, 0LL, 0LL, a4);
    ThreadUnlock1(v15, v14);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v13;
}
