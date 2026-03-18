/*
 * XREFs of VslQuerySecureKernelProfileInformation @ 0x1401ED628
 * Callers:
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14002F528 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     VslpLockPagesForTransfer @ 0x1401EDEB8 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1401EE0D4 (VslpUnlockPagesForTransfer.c)
 */

__int64 __fastcall VslQuerySecureKernelProfileInformation(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  int v7; // edx
  char v8; // cl
  int v9; // r8d
  __int64 result; // rax
  NTSTATUS v11; // edi
  char v12; // [rsp+20h] [rbp-E8h]
  _QWORD v13[8]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v14[8]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v15; // [rsp+78h] [rbp-90h]
  __int64 v16; // [rsp+80h] [rbp-88h]
  __int64 v17; // [rsp+88h] [rbp-80h]

  if ( !HvlQueryVsmConnection(0LL) )
    return 3224698910LL;
  if ( a3 > 0x1FA000 )
    return 3221225476LL;
  if ( a3 )
  {
    result = VslpLockPagesForTransfer((unsigned int)v13, v7, v9, 2, v8 & v12);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    memset(v13, 0, sizeof(v13));
  }
  v16 = v13[0];
  v17 = v13[7];
  v15 = a1;
  v11 = VslpEnterIumSecureMode(1, 48LL, 0LL, (__int64)v14);
  if ( v11 >= 0 )
    *a4 = v16;
  if ( a3 )
    VslpUnlockPagesForTransfer(v13);
  return (unsigned int)v11;
}
