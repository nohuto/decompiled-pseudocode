/*
 * XREFs of EtwTiLogProtectExecVm @ 0x1404C9998
 * Callers:
 *     NtProtectVirtualMemory @ 0x14051D2E0 (NtProtectVirtualMemory.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwProviderEnabled @ 0x14007D750 (EtwProviderEnabled.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     EtwpTiFillProcessIdentity @ 0x14070F99C (EtwpTiFillProcessIdentity.c)
 */

BOOLEAN __fastcall EtwTiLogProtectExecVm(_KPROCESS *a1, __int64 a2, __int64 a3, int a4, char a5)
{
  BOOLEAN result; // al
  const EVENT_DESCRIPTOR *v7; // rdi
  REGHANDLE v8; // r14
  _KPROCESS *Process; // rbx
  unsigned int v10; // eax
  struct _KTHREAD *CurrentThread; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  REGHANDLE v18; // rcx
  _BYTE v19[8]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v20[8]; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v22[34]; // [rsp+50h] [rbp-B0h]
  __int64 v23; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v24; // [rsp+1B0h] [rbp+B0h] BYREF
  int v25; // [rsp+1B8h] [rbp+B8h] BYREF

  v25 = a4;
  v24 = a3;
  v23 = a2;
  result = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x20uLL);
  if ( result )
  {
    v7 = (const EVENT_DESCRIPTOR *)&THREATINT_PROTECTVM_REMOTE;
    v8 = EtwThreatIntProvRegHandle;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process == a1 )
      v7 = &THREATINT_PROTECTVM_LOCAL;
    result = EtwEventEnabled(EtwThreatIntProvRegHandle, v7);
    if ( result )
    {
      if ( Process != a1 || (result = EtwProviderEnabled(v8, 0, 0x200uLL)) != 0 )
      {
        v10 = EtwpTiFillProcessIdentity(&UserData, Process, v19);
        CurrentThread = KeGetCurrentThread();
        v12 = 2LL * v10;
        *(&UserData.Reserved + 2 * v12) = 0;
        *(&UserData.Ptr + v12) = (ULONGLONG)CurrentThread + 1600;
        *(&UserData.Size + 2 * v12) = 4;
        HIDWORD(v22[v12 + 1]) = 0;
        v22[v12] = CurrentThread + 1;
        LODWORD(v22[v12 + 1]) = 8;
        v13 = EtwpTiFillProcessIdentity(&UserData + v10 + 2, a1, v20) + v10 + 2;
        v14 = 2LL * v13;
        *(&UserData.Reserved + 2 * v14) = 0;
        *(&UserData.Ptr + v14) = (ULONGLONG)&v23;
        *(&UserData.Size + 2 * v14) = 8;
        v15 = 2LL * (v13 + 1);
        *(&UserData.Reserved + 2 * v15) = 0;
        *(&UserData.Ptr + v15) = (ULONGLONG)&v24;
        *(&UserData.Size + 2 * v15) = 8;
        v16 = v13 + 2;
        v13 += 3;
        v16 *= 2LL;
        *(&UserData.Reserved + 2 * v16) = 0;
        *(&UserData.Ptr + v16) = (ULONGLONG)&v25;
        *(&UserData.Size + 2 * v16) = 4;
        v17 = 2LL * v13;
        *(&UserData.Reserved + 2 * v17) = 0;
        *(&UserData.Ptr + v17) = (ULONGLONG)&a5;
        v18 = EtwThreatIntProvRegHandle;
        *(&UserData.Size + 2 * v17) = 4;
        return EtwWrite(v18, v7, 0LL, v13 + 1, &UserData);
      }
    }
  }
  return result;
}
