/*
 * XREFs of NtUserDrawCaption @ 0x1C01E4150
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxDrawCaptionTemp @ 0x1C013C3E8 (xxxDrawCaptionTemp.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserDrawCaption(__int64 a1, HDC a2, struct tagRECT *a3, unsigned int a4)
{
  ULONG_PTR v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD v15[3]; // [rsp+58h] [rbp-60h] BYREF
  struct tagRECT v16; // [rsp+70h] [rbp-48h] BYREF

  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  v11 = 0;
  if ( v8 )
  {
    v15[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v15;
    v15[1] = v8;
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (struct tagRECT *)MmUserProbeAddress;
    v16 = *a3;
    v11 = xxxDrawCaptionTemp(v8, a2, &v16, 0LL, 0LL, 0LL, a4);
    ThreadUnlock1(v13, v12);
  }
  UserSessionSwitchLeaveCrit(v10, v9);
  return v11;
}
