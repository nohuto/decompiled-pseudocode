/*
 * XREFs of NtUserSetSystemCursor @ 0x1C01DFD60
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     xxxSetSystemCursor @ 0x1C0209AFC (xxxSetSystemCursor.c)
 */

__int64 __fastcall NtUserSetSystemCursor(__int64 a1)
{
  struct tagCURSOR *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebx

  EnterCrit(0LL, 1LL);
  v2 = (struct tagCURSOR *)HMValidateHandle(a1, 3);
  v7 = 0;
  if ( v2 )
    v7 = xxxSetSystemCursor(v2);
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
