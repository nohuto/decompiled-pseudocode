/*
 * XREFs of NtUserGetWOWClass @ 0x1C01E70E0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     _GetWOWClass @ 0x1C01C5D54 (_GetWOWClass.c)
 */

char *__fastcall NtUserGetWOWClass(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ecx
  const wchar_t *v8; // rdx
  ULONG64 v9; // r8
  char *WOWClass; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  char *v13; // rbx

  EnterSharedCrit(0LL, 1LL);
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v5, v6);
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v7 = *(_DWORD *)a2;
  v8 = *(const wchar_t **)(a2 + 8);
  if ( ((unsigned __int8)v8 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v9 = (ULONG64)v8 + (unsigned __int16)v7 + 2;
  if ( v9 >= MmUserProbeAddress
    || (unsigned __int16)v7 > (unsigned __int16)HIWORD(*(_DWORD *)a2)
    || (v7 & 1) != 0
    || v9 <= (unsigned __int64)v8 )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  WOWClass = (char *)GetWOWClass(a1, v8, v9, MmUserProbeAddress);
  v13 = WOWClass;
  if ( WOWClass )
  {
    v12 = *((_QWORD *)WOWClass + 2);
    v13 = &WOWClass[-*(_QWORD *)(v12 + 16)];
  }
  UserSessionSwitchLeaveCrit(v12, v11);
  return v13;
}
