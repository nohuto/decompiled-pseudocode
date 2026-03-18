/*
 * XREFs of NtUserDestroyInputContext @ 0x1C0135750
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     DestroyInputContext @ 0x1C01357D4 (DestroyInputContext.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserDestroyInputContext(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // rbx
  char v10; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v10);
  if ( (*gpsi & 4) != 0 )
  {
    v2 = HMValidateHandle(a1, 17);
    if ( v2 )
    {
      v7 = DestroyInputContext(v2);
      goto LABEL_4;
    }
  }
  else
  {
    UserSetLastError(120LL);
  }
  v7 = 0;
LABEL_4:
  v8 = v7;
  if ( !v10 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v10);
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v8;
}
