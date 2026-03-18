/*
 * XREFs of VslDebugReadWriteSecureProcess @ 0x140687BB0
 * Callers:
 *     MmCopyVirtualMemory @ 0x1405181F0 (MmCopyVirtualMemory.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     VslpLockPagesForTransfer @ 0x1401EDEB8 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1401EE0D4 (VslpUnlockPagesForTransfer.c)
 */

__int64 __fastcall VslDebugReadWriteSecureProcess(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int8 a5,
        _QWORD *a6)
{
  __int64 v6; // r15
  unsigned __int64 v7; // rbx
  BOOL v10; // ecx
  unsigned int v11; // r14d
  __int64 result; // rax
  __int64 v13; // rax
  NTSTATUS v14; // r15d
  unsigned __int64 v16[8]; // [rsp+40h] [rbp-99h] BYREF
  _BYTE v17[8]; // [rsp+80h] [rbp-59h] BYREF
  __int64 v18; // [rsp+88h] [rbp-51h]
  __int64 v19; // [rsp+90h] [rbp-49h]
  __int64 v20; // [rsp+98h] [rbp-41h]
  unsigned __int64 v21; // [rsp+A0h] [rbp-39h]
  unsigned __int64 v22; // [rsp+A8h] [rbp-31h]
  __int64 v23; // [rsp+B0h] [rbp-29h]

  v6 = a1;
  v7 = a4;
  *a6 = 0LL;
  v10 = a5 != 0;
  if ( !a4 )
    return 0LL;
  while ( 1 )
  {
    v11 = 2072576 - (a3 & 0xFFF);
    if ( v11 > v7 )
      v11 = v7;
    result = VslpLockPagesForTransfer(v16, a3, v11, v10, 0);
    if ( (int)result < 0 )
      break;
    v13 = *(_QWORD *)(v6 + 720);
    v23 = 0LL;
    v18 = v13;
    v20 = a5;
    v21 = v16[0];
    v22 = v16[7];
    v19 = a2;
    v14 = VslpEnterIumSecureMode(1, 37LL, 0LL, (__int64)v17);
    VslpUnlockPagesForTransfer((__int64)v16);
    *a6 += v23;
    if ( v14 < 0 )
      return (unsigned int)v14;
    v10 = a5 != 0;
    v6 = a1;
    a2 += v11;
    a3 += v11;
    v7 -= v11;
    if ( !v7 )
      return 0LL;
  }
  return result;
}
