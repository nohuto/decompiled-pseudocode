/*
 * XREFs of NtUserBroadcastThemeChangeEvent @ 0x1C010F140
 * Callers:
 *     <none>
 * Callees:
 *     PostEventMessageEx @ 0x1C0049DE8 (PostEventMessageEx.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserBroadcastThemeChangeEvent(__int64 a1, __int64 a2)
{
  int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 i; // rdi
  __int64 j; // rbx
  char v12; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v12);
  for ( i = gppiList; i; i = *(_QWORD *)(i + 344) )
  {
    for ( j = *(_QWORD *)(i + 288); j; j = *(_QWORD *)(j + 584) )
    {
      if ( *(_DWORD *)(j + 780) )
      {
        PostEventMessageEx(j, *(_QWORD *)(j + 384), 0x19u, 0LL, 0, a1, a2, 0LL);
        v4 = 1;
      }
    }
  }
  if ( !v12 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v12);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v4;
}
