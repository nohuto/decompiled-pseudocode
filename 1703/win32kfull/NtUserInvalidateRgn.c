/*
 * XREFs of NtUserInvalidateRgn @ 0x1C00FF4B0
 * Callers:
 *     <none>
 * Callees:
 *     xxxRedrawWindow @ 0x1C0065644 (xxxRedrawWindow.c)
 */

__int64 __fastcall NtUserInvalidateRgn(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v11 = 0;
  if ( v6 )
  {
    v15[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v15;
    v15[1] = v6;
    ++*(_DWORD *)(v6 + 8);
    v11 = xxxRedrawWindow((struct tagWND *)v6, 0LL, a2, a3 != 0 ? 5 : 1);
    ThreadUnlock1(v13, v12);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v11;
}
