/*
 * XREFs of NtUserAssociateInputContext @ 0x1C0103D80
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     AssociateInputContextEx @ 0x1C0103E3C (AssociateInputContextEx.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserAssociateInputContext(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  unsigned int v12; // ebx
  char v14; // [rsp+48h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v14);
  v8 = ValidateHwnd(a1);
  if ( v8 )
  {
    if ( (*gpsi & 4) != 0 )
    {
      if ( !a2 )
      {
        v11 = 0LL;
LABEL_5:
        v12 = AssociateInputContextEx(v8, v11, a3);
        goto LABEL_6;
      }
      v11 = HMValidateHandle(a2, 17);
      if ( v11 )
        goto LABEL_5;
    }
    else
    {
      UserSetLastError(120LL);
    }
  }
  v12 = 2;
LABEL_6:
  if ( !v14 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v14);
  }
  UserSessionSwitchLeaveCrit(v7, v6, v9, v10);
  return v12;
}
