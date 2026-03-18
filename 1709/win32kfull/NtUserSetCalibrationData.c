/*
 * XREFs of NtUserSetCalibrationData @ 0x1C01EAFA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C0099110 (HMValidateHandle.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     _SetCalibrationData @ 0x1C01B6C80 (_SetCalibrationData.c)
 */

__int64 __fastcall NtUserSetCalibrationData(__int64 a1, unsigned int a2, volatile void *a3, int a4)
{
  SIZE_T v6; // r14
  void *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rsi
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 CurrentProcessWow64Process; // rax
  void *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  char v31; // [rsp+50h] [rbp+8h] BYREF

  v6 = a2;
  v8 = 0LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v31);
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
    v12 = *(_QWORD *)(gptiCurrent + 400LL);
    v9 = gbEnforceUIPI;
    if ( gbEnforceUIPI && (unsigned int)*(_QWORD *)(v12 + 832) <= 0x1FFF )
      goto LABEL_11;
  }
  else
  {
    v12 = *(_QWORD *)(gptiCurrent + 400LL);
    v9 = gbEnforceUIPI;
    if ( gbEnforceUIPI && (unsigned int)*(_QWORD *)(v12 + 832) <= 0x2FFF )
    {
LABEL_11:
      EtwTraceUIPISystemError(v12, 0LL, 11LL);
      v13 = 5LL;
LABEL_32:
      v20 = 0;
      UserSetLastError(v13, v9);
      goto LABEL_33;
    }
  }
  if ( (unsigned int)v6 > 0xCA0 )
  {
LABEL_31:
    v13 = 87LL;
    goto LABEL_32;
  }
  EnterDeviceInfoListCrit_(v12, v9, v10, v11);
  LOBYTE(v14) = 19;
  v17 = HMValidateHandle(a1, v14, v15, v16);
  v19 = v17;
  if ( v17 )
  {
    if ( (*(_BYTE *)(v17 + 64) & 0x40) != 0 )
    {
      UserSetLastError(6LL, v18);
      v20 = 0;
      UserSetLastError(0LL, v21);
      goto LABEL_27;
    }
    v25 = *(_QWORD *)(v17 + 472);
    if ( (*(_DWORD *)(v17 + 200) & 0x80u) != 0 && (unsigned int)(*(_DWORD *)(v25 + 24) - 6) > 1 )
    {
      if ( a3 )
      {
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v25);
        ProbeForRead(a3, v6, CurrentProcessWow64Process != 0 ? 1 : 4);
        v27 = (void *)Win32AllocPoolWithQuota(v6, 1633907541LL);
        v8 = v27;
        if ( !v27 )
          ExRaiseStatus(-1073741801);
        memmove(v27, (const void *)a3, v6);
      }
      v20 = SetCalibrationData(v19, (unsigned int)v6, v8, a4);
      goto LABEL_27;
    }
  }
  UserSetLastError(6LL, v18);
  v20 = 0;
LABEL_27:
  if ( v8 && !v20 )
    Win32FreePool(v8, v22, v24);
  LeaveDeviceInfoListCrit_(v23, v22, v24);
LABEL_33:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v31);
  UserSessionSwitchLeaveCrit(v29, v28);
  return v20;
}
