/*
 * XREFs of NtUserIsResizeLayoutSynchronizationEnabled @ 0x1C01DC800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserIsResizeLayoutSynchronizationEnabled(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // r8
  unsigned __int8 v8; // bl
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v2;
  if ( v2 )
  {
    v4 = (*(_WORD *)(v2 + 82) & 0x3FFFu) - 669;
    if ( (v4 & 0xFFFFFFFD) != 0 )
    {
      v10[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v10;
      v10[1] = v2;
      ++*(_DWORD *)(v2 + 8);
      v8 = *(_BYTE *)(v2 + 65);
      ThreadUnlock1(gptiCurrent, gptiCurrent);
      v6 = v8 & 0x80;
    }
  }
  UserSessionSwitchLeaveCrit(v4, v3, v7, v5);
  return v6;
}
