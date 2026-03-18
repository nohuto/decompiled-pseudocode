/*
 * XREFs of NtUserCopyAcceleratorTable @ 0x1C00F4FC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserCopyAcceleratorTable(__int64 a1, char *a2, int a3)
{
  unsigned __int64 v3; // rdi
  __int64 v6; // rax
  __int64 i; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 CurrentProcessWow64Process; // rax
  _BYTE v14[48]; // [rsp+38h] [rbp-30h] BYREF

  v3 = a3;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v14);
  v6 = HMValidateHandle(a1, 8);
  v11 = v6;
  if ( v6 )
  {
    if ( a2 )
    {
      if ( v3 > 0x2AAAAAAAAAAAAAAALL )
        ExRaiseAccessViolation();
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v8, i, v9, v10);
      ProbeForWrite(a2, 6 * v3, CurrentProcessWow64Process != 0 ? 1 : 4);
      if ( (int)v3 > *(_DWORD *)(v11 + 24) )
        LODWORD(v3) = *(_DWORD *)(v11 + 24);
      for ( i = 0LL; (int)i < (int)v3; i = (unsigned int)(i + 1) )
      {
        v8 = 3LL * (int)i;
        *(_BYTE *)(v11 + 2 * v8 + 29) = 0;
        *(_DWORD *)&a2[2 * v8] = *(_DWORD *)(v11 + 6LL * (int)i + 28);
        *(_WORD *)&a2[2 * v8 + 4] = *(_WORD *)(v11 + 6LL * (int)i + 32);
        a2[2 * v8] &= ~0x80u;
      }
    }
    else
    {
      LODWORD(v3) = *(_DWORD *)(v6 + 24);
    }
  }
  else
  {
    LODWORD(v3) = 0;
  }
  if ( !v14[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v14);
  }
  UserSessionSwitchLeaveCrit(v8, i, v9, v10);
  return (unsigned int)v3;
}
