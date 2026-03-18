/*
 * XREFs of VslQuerySecureKernelProfileInformation @ 0x1401F2494
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14011D9FC (HvlQueryVsmConnection.c)
 *     VslpUnlockPagesForTransfer @ 0x140159CE0 (VslpUnlockPagesForTransfer.c)
 *     VslpLockPagesForTransfer @ 0x140159D24 (VslpLockPagesForTransfer.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall VslQuerySecureKernelProfileInformation(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  __int64 v7; // rdx
  int v8; // ecx
  unsigned int v9; // r8d
  __int64 result; // rax
  NTSTATUS v11; // edi
  unsigned int v12; // [rsp+20h] [rbp-F8h]
  _QWORD v13[10]; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE v14[8]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v15; // [rsp+88h] [rbp-90h]
  __int64 v16; // [rsp+90h] [rbp-88h]
  __int64 v17; // [rsp+98h] [rbp-80h]

  if ( !HvlQueryVsmConnection(0LL) )
    return 3224698910LL;
  if ( a3 > 0x1FA000 )
    return 3221225476LL;
  if ( a3 )
  {
    result = VslpLockPagesForTransfer((__int64)v13, v7, v9, 2, v8 & v12);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    memset(v13, 0, 0x48uLL);
  }
  v16 = v13[0];
  v17 = v13[7];
  v15 = a1;
  v11 = VslpEnterIumSecureMode(2u, 55LL, 0, (__int64)v14);
  if ( v11 >= 0 )
    *a4 = v16;
  if ( a3 )
    VslpUnlockPagesForTransfer((__int64)v13);
  return (unsigned int)v11;
}
