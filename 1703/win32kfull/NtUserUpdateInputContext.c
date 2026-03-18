/*
 * XREFs of NtUserUpdateInputContext @ 0x1C00FAB40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UpdateInputContext @ 0x1C00FABE0 (UpdateInputContext.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserUpdateInputContext(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int updated; // eax
  __int64 v12; // rbx
  char v14; // [rsp+48h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v14);
  if ( (*gpsi & 4) != 0 )
  {
    v6 = HMValidateHandle(a1, 17);
    if ( v6 )
    {
      updated = UpdateInputContext(v6, a2, a3);
      goto LABEL_4;
    }
  }
  else
  {
    UserSetLastError(120LL);
  }
  updated = 0;
LABEL_4:
  v12 = updated;
  if ( !v14 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v14);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v12;
}
