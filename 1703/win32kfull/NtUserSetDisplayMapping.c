/*
 * XREFs of NtUserSetDisplayMapping @ 0x1C01DF390
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _SetDisplayMapping @ 0x1C01A7E94 (_SetDisplayMapping.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetDisplayMapping(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  char v20; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v20);
  v4 = *(_QWORD *)(gptiCurrent + 376LL);
  if ( gbEnforceUIPI && (unsigned int)*(_QWORD *)(v4 + 824) <= 0x1FFF )
  {
    EtwTraceUIPISystemError(v4, 0LL, 10LL);
    v5 = 0;
    UserSetLastError(5LL);
    goto LABEL_18;
  }
  EnterDeviceInfoListCrit_(v4);
  v10 = HMValidateHandle(a1, 19);
  v14 = v10;
  if ( !v10 || (*(_DWORD *)(v10 + 200) & 0x80u) == 0 )
  {
    UserSetLastError(6LL);
    v15 = 6LL;
LABEL_6:
    v5 = 0;
    UserSetLastError(v15);
    goto LABEL_17;
  }
  if ( (*(_BYTE *)(v10 + 64) & 0x40) != 0 )
  {
    UserSetLastError(5LL);
    v15 = 5LL;
    goto LABEL_6;
  }
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v10 + 472) + 24LL) - 6) <= 1 )
  {
    UserSetLastError(5LL);
  }
  else
  {
    v17 = ValidateHmonitor(a2, v11, v12, v13);
    if ( v17 )
    {
      v18 = *(_QWORD *)(v14 + 472);
      v5 = 1;
      if ( *(_QWORD *)(v18 + 288) != v17 )
        v5 = SetDisplayMapping(v18, v17);
      v16 = *(_QWORD *)(v14 + 472);
      *(_DWORD *)(v16 + 876) = 1;
      goto LABEL_17;
    }
  }
  v5 = 0;
LABEL_17:
  LeaveDeviceInfoListCrit_(v16);
LABEL_18:
  if ( !v20 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v20);
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v5;
}
