/*
 * XREFs of NtUserScrollDC @ 0x1C006B660
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _ScrollDC @ 0x1C006B7C0 (_ScrollDC.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserScrollDC(HDC a1, int a2, int a3, struct tagRECT *a4, ULONG64 a5, HRGN a6, ULONG64 a7)
{
  struct tagRECT *v11; // rdi
  _OWORD *v12; // rsi
  ULONG64 v13; // rdx
  ULONG64 v14; // rcx
  int v15; // ebx
  __int128 v17; // [rsp+80h] [rbp-78h] BYREF
  struct tagRECT v18; // [rsp+90h] [rbp-68h] BYREF
  struct tagRECT v19; // [rsp+A0h] [rbp-58h] BYREF

  v11 = (struct tagRECT *)a5;
  v12 = (_OWORD *)a7;
  v17 = 0uLL;
  EnterSharedCrit(0LL, 1LL);
  if ( a4 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (struct tagRECT *)MmUserProbeAddress;
    v18 = *a4;
    a4 = &v18;
  }
  if ( a5 )
  {
    if ( a5 >= MmUserProbeAddress )
      v11 = (struct tagRECT *)MmUserProbeAddress;
    v19 = *v11;
    v11 = &v19;
  }
  v15 = ScrollDC(a1, a2, a3, a4, v11, a6, (struct tagRECT *)((unsigned __int64)&v17 & -(__int64)(a7 != 0)));
  if ( a7 )
  {
    v14 = MmUserProbeAddress;
    v13 = MmUserProbeAddress;
    if ( a7 >= MmUserProbeAddress )
      v12 = (_OWORD *)MmUserProbeAddress;
    *v12 = v17;
  }
  UserSessionSwitchLeaveCrit(v14, v13);
  return v15;
}
