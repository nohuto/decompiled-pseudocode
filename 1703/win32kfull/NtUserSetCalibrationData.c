/*
 * XREFs of NtUserSetCalibrationData @ 0x1C01DEE80
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     _SetCalibrationData @ 0x1C01B3D04 (_SetCalibrationData.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetCalibrationData(__int64 a1, unsigned int a2, volatile void *a3, int a4)
{
  SIZE_T v6; // r14
  void *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rsi
  int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 CurrentProcessWow64Process; // rax
  void *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  char v26; // [rsp+50h] [rbp+8h] BYREF

  v6 = a2;
  v8 = 0LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v26);
  if ( !a1 || (unsigned int)(a4 - 1) > 2 )
    goto LABEL_31;
  if ( (_DWORD)v6 )
  {
    if ( !a3 )
      goto LABEL_31;
  }
  else if ( a3 || a4 == 1 )
  {
    goto LABEL_31;
  }
  if ( a4 == 3 )
  {
    v9 = *(_QWORD *)(gptiCurrent + 376LL);
    if ( gbEnforceUIPI && (unsigned int)*(_QWORD *)(v9 + 824) <= 0x1FFF )
      goto LABEL_11;
  }
  else
  {
    v9 = *(_QWORD *)(gptiCurrent + 376LL);
    if ( gbEnforceUIPI && (unsigned int)*(_QWORD *)(v9 + 824) <= 0x2FFF )
    {
LABEL_11:
      EtwTraceUIPISystemError(v9, 0LL, 11LL);
      v10 = 5LL;
LABEL_32:
      v16 = 0;
      UserSetLastError(v10);
      goto LABEL_33;
    }
  }
  if ( (unsigned int)v6 > 0xCA0 )
  {
LABEL_31:
    v10 = 87LL;
    goto LABEL_32;
  }
  EnterDeviceInfoListCrit_(v9);
  v11 = HMValidateHandle(a1, 19);
  v15 = v11;
  if ( v11 )
  {
    if ( (*(_BYTE *)(v11 + 64) & 0x40) != 0 )
    {
      UserSetLastError(6LL);
      v16 = 0;
      UserSetLastError(0LL);
      goto LABEL_27;
    }
    v18 = *(_QWORD *)(v11 + 472);
    if ( (*(_DWORD *)(v11 + 200) & 0x80u) != 0 && (unsigned int)(*(_DWORD *)(v18 + 24) - 6) > 1 )
    {
      if ( a3 )
      {
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v18, v12, v13, v14);
        ProbeForRead(a3, v6, CurrentProcessWow64Process != 0 ? 1 : 4);
        v20 = (void *)Win32AllocPoolWithQuota(v6, 1633907541LL);
        v8 = v20;
        if ( !v20 )
          ExRaiseStatus(-1073741801);
        memmove(v20, (const void *)a3, v6);
      }
      v16 = SetCalibrationData(v15, v6, v8, a4);
      goto LABEL_27;
    }
  }
  UserSetLastError(6LL);
  v16 = 0;
LABEL_27:
  if ( v8 && !v16 )
    Win32FreePool(v8);
  LeaveDeviceInfoListCrit_(v17);
LABEL_33:
  if ( !v26 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v26);
  }
  UserSessionSwitchLeaveCrit(v22, v21, v23, v24);
  return v16;
}
