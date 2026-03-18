/*
 * XREFs of NtUserScrollDC @ 0x1C00671B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _ScrollDC @ 0x1C0067304 (_ScrollDC.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserScrollDC(
        HDC a1,
        int a2,
        int a3,
        struct tagRECT *a4,
        unsigned __int64 a5,
        HRGN a6,
        unsigned __int64 a7)
{
  struct tagRECT *v11; // rdi
  _OWORD *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // r8
  __int64 v17; // r9
  __int128 v19; // [rsp+80h] [rbp-78h] BYREF
  struct tagRECT v20; // [rsp+90h] [rbp-68h] BYREF
  struct tagRECT v21; // [rsp+A0h] [rbp-58h] BYREF

  v11 = (struct tagRECT *)a5;
  v12 = (_OWORD *)a7;
  v19 = 0uLL;
  EnterSharedCrit(0LL, 1LL);
  if ( a4 )
  {
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      a4 = (struct tagRECT *)W32UserProbeAddress;
    v20 = *a4;
    a4 = &v20;
  }
  if ( a5 )
  {
    if ( a5 >= W32UserProbeAddress )
      v11 = (struct tagRECT *)W32UserProbeAddress;
    v21 = *v11;
    v11 = &v21;
  }
  v15 = ScrollDC(a1, a2, a3, a4, v11, a6, (struct tagRECT *)((unsigned __int64)&v19 & -(__int64)(a7 != 0)));
  if ( a7 )
  {
    v14 = W32UserProbeAddress;
    if ( a7 >= W32UserProbeAddress )
      v12 = (_OWORD *)W32UserProbeAddress;
    *v12 = v19;
  }
  UserSessionSwitchLeaveCrit(v14, v13, v16, v17);
  return v15;
}
