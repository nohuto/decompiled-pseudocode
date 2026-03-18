/*
 * XREFs of NtUserSetMirrorRendering @ 0x1C01EBB30
 * Callers:
 *     <none>
 * Callees:
 *     GreDisableMirrorRendering @ 0x1C02654C8 (GreDisableMirrorRendering.c)
 *     GreEnableMirrorRendering @ 0x1C02655C4 (GreEnableMirrorRendering.c)
 */

__int64 __fastcall NtUserSetMirrorRendering(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0;
  if ( v4 )
  {
    v8 = (*(_WORD *)(v4 + 82) & 0x3FFFu) - 669;
    if ( (v8 & 0xFFFFFFFD) != 0 )
    {
      v14[0] = *(_QWORD *)(gptiCurrent + 392LL);
      *(_QWORD *)(gptiCurrent + 392LL) = v14;
      v14[1] = v4;
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      v9 = *(_QWORD *)(gpDispInfo + 32LL);
      if ( a2 )
        v10 = GreEnableMirrorRendering(v9, a1, v8, v4);
      else
        v10 = GreDisableMirrorRendering(v9, a1, v8, v4);
      v7 = v10;
      ThreadUnlock1(v12, v11);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
