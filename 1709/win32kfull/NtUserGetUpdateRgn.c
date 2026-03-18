/*
 * XREFs of NtUserGetUpdateRgn @ 0x1C01072D0
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetUpdateRgn @ 0x1C0107368 (xxxGetUpdateRgn.c)
 */

__int64 __fastcall NtUserGetUpdateRgn(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int UpdateRgn; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  UpdateRgn = 0;
  if ( v6 )
  {
    v13[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v13;
    v13[1] = v6;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    UpdateRgn = xxxGetUpdateRgn(v6, a2, a3);
    ThreadUnlock1(v11, v10);
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return UpdateRgn;
}
