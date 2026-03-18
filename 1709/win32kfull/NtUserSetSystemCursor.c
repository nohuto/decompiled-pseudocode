/*
 * XREFs of NtUserSetSystemCursor @ 0x1C01EBEE0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0099110 (HMValidateHandle.c)
 *     xxxSetSystemCursor @ 0x1C020B89C (xxxSetSystemCursor.c)
 */

__int64 __fastcall NtUserSetSystemCursor(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx

  EnterCrit(0LL, 1LL);
  LOBYTE(v4) = 3;
  v7 = HMValidateHandle(a1, v4, v5, v6);
  v10 = 0;
  if ( v7 )
    v10 = xxxSetSystemCursor(v7, a2);
  UserSessionSwitchLeaveCrit(v9, v8);
  return v10;
}
