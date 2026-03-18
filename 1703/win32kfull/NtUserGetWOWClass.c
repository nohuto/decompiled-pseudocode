/*
 * XREFs of NtUserGetWOWClass @ 0x1C01DAE90
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     _GetWOWClass @ 0x1C01C3038 (_GetWOWClass.c)
 */

char *__fastcall NtUserGetWOWClass(__int64 a1, int *a2)
{
  int v4; // ecx
  const wchar_t *v5; // rdx
  unsigned __int64 v6; // r8
  char *WOWClass; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char *v12; // rbx

  EnterSharedCrit(0LL, 1LL);
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    a2 = (int *)W32UserProbeAddress;
  v4 = *a2;
  v5 = (const wchar_t *)*((_QWORD *)a2 + 1);
  if ( ((unsigned __int8)v5 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v6 = (unsigned __int64)v5 + (unsigned __int16)v4 + 2;
  if ( v6 >= W32UserProbeAddress
    || (unsigned __int16)v4 > (unsigned __int16)HIWORD(*a2)
    || (v4 & 1) != 0
    || v6 <= (unsigned __int64)v5 )
  {
    *W32UserProbeAddress = 0;
  }
  WOWClass = (char *)GetWOWClass(a1, v5);
  v12 = WOWClass;
  if ( WOWClass )
  {
    v9 = *((_QWORD *)WOWClass + 2);
    v12 = &WOWClass[-*(_QWORD *)(v9 + 16)];
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v12;
}
