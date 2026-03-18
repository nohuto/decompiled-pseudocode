/*
 * XREFs of NtUserDragDetect @ 0x1C01E3E20
 * Callers:
 *     <none>
 * Callees:
 *     xxxIsDragging @ 0x1C0140348 (xxxIsDragging.c)
 */

__int64 __fastcall NtUserDragDetect(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int IsDragging; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  IsDragging = 0;
  if ( v4 )
  {
    v11[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v11;
    v11[1] = v4;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    IsDragging = xxxIsDragging(v4, a2);
    ThreadUnlock1(v9, v8);
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return IsDragging;
}
