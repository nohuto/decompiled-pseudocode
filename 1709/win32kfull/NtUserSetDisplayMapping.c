/*
 * XREFs of NtUserSetDisplayMapping @ 0x1C01EB580
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C0099110 (HMValidateHandle.c)
 *     _SetDisplayMapping @ 0x1C01CAA18 (_SetDisplayMapping.c)
 */

__int64 __fastcall NtUserSetDisplayMapping(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r9
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v22; // rax
  char v23; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v23);
  v6 = 0;
  v7 = *(_QWORD *)(gptiCurrent + 400LL);
  if ( !gbEnforceUIPI || (unsigned int)*(_QWORD *)(v7 + 832) > 0x1FFF )
  {
    EnterDeviceInfoListCrit_(v7, v4, gbEnforceUIPI, v5);
    LOBYTE(v9) = 19;
    v12 = HMValidateHandle(a1, v9, v10, v11);
    v14 = v12;
    if ( v12 && (*(_DWORD *)(v12 + 200) & 0x80u) != 0 )
    {
      if ( (*(_BYTE *)(v12 + 64) & 0x40) != 0 )
      {
        UserSetLastError(5LL, v13);
      }
      else if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v12 + 472) + 24LL) - 6) > 1 )
      {
        v22 = ValidateHmonitor(a2);
        if ( v22 )
        {
          v6 = 1;
          if ( *(_QWORD *)(v14 + 784) != v22 )
            v6 = SetDisplayMapping(*(_QWORD *)(v14 + 472), v22);
          *(_DWORD *)(v14 + 792) = 1;
        }
        goto LABEL_11;
      }
      v15 = 5LL;
    }
    else
    {
      UserSetLastError(6LL, v13);
      v15 = 6LL;
    }
    UserSetLastError(v15, v13);
LABEL_11:
    LeaveDeviceInfoListCrit_(v17, v16, v18);
    goto LABEL_12;
  }
  EtwTraceUIPISystemError(v7, 0LL, 10LL);
  UserSetLastError(5LL, v8);
LABEL_12:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v23);
  UserSessionSwitchLeaveCrit(v20, v19);
  return v6;
}
