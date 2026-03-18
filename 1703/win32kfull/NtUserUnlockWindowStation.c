/*
 * XREFs of NtUserUnlockWindowStation @ 0x1C0115B30
 * Callers:
 *     <none>
 * Callees:
 *     _UnlockWindowStation @ 0x1C0115B8C (_UnlockWindowStation.c)
 */

__int64 __fastcall NtUserUnlockWindowStation(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  LOBYTE(v2) = 1;
  v3 = ValidateHwinsta(a1, v2, 0LL, &Object);
  v8 = 0;
  if ( v3 >= 0 )
  {
    v8 = UnlockWindowStation(Object);
    ObfDereferenceObject(Object);
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v8;
}
