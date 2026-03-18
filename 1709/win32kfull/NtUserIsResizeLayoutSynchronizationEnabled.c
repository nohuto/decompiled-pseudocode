/*
 * XREFs of NtUserIsResizeLayoutSynchronizationEnabled @ 0x1C01E89E0
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
  unsigned int v5; // ebx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v5 = 0;
  if ( v2 )
  {
    v4 = (*(_WORD *)(v2 + 82) & 0x3FFFu) - 669;
    if ( (v4 & 0xFFFFFFFD) != 0 )
    {
      v7[0] = *(_QWORD *)(gptiCurrent + 392LL);
      *(_QWORD *)(gptiCurrent + 392LL) = v7;
      v7[1] = v2;
      _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
      v5 = *(_BYTE *)(v2 + 65) & 0x80;
      ThreadUnlock1(gptiCurrent, gptiCurrent);
    }
  }
  UserSessionSwitchLeaveCrit(v4, v3);
  return v5;
}
