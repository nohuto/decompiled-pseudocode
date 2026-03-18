/*
 * XREFs of NtUserSetThreadInputBlocked @ 0x1C0068C40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C0069314 (-RegisterStack@UserAtomicCheck@@AEAAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetThreadInputBlocked(int a1, int a2)
{
  __int64 v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // eax
  char v12; // [rsp+40h] [rbp+18h] BYREF

  v4 = 1LL;
  EnterCrit(0LL, 1LL);
  v12 = 0;
  ++gdwInAtomicOperation;
  UserAtomicCheck::RegisterStack((UserAtomicCheck *)&v12);
  if ( a1 == 4096 )
  {
    v7 = 0x8000LL;
    v8 = gptiCurrent;
    v9 = *(_DWORD *)(gptiCurrent + 1096LL);
    if ( a2 )
    {
      if ( (v9 & 0x8000) == 0 )
      {
        v10 = v9 | 0x8000;
LABEL_5:
        *(_DWORD *)(gptiCurrent + 1096LL) = v10;
        goto LABEL_6;
      }
    }
    else if ( (v9 & 0x8000) != 0 )
    {
      v10 = v9 & 0xFFFF7FFF;
      goto LABEL_5;
    }
  }
  UserSetLastError(87LL);
  v4 = 0LL;
LABEL_6:
  if ( !v12 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v12);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v5, v6);
  return v4;
}
