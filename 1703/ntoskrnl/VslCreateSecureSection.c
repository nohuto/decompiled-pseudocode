/*
 * XREFs of VslCreateSecureSection @ 0x140687940
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     MmSizeOfMdl @ 0x1401228F0 (MmSizeOfMdl.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     VslpLockPagesForTransfer @ 0x1401EDEB8 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1401EE0D4 (VslpUnlockPagesForTransfer.c)
 */

__int64 __fastcall VslCreateSecureSection(_QWORD *a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 result; // rax
  SIZE_T v10; // rax
  NTSTATUS v11; // ebx
  unsigned __int64 v12[8]; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE v13[8]; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+78h] [rbp-A0h]
  int v15; // [rsp+80h] [rbp-98h]
  unsigned __int64 v16; // [rsp+88h] [rbp-90h]
  __int64 v17; // [rsp+90h] [rbp-88h]
  unsigned __int64 v18; // [rsp+98h] [rbp-80h]

  *a1 = 0LL;
  if ( (a5 & 0xFFFFFFFE) != 0 )
    return 3221225716LL;
  if ( (a5 & 1) == 0 && ((*(_DWORD *)(a3 + 40) & 0xFFF) != 0 || *(_DWORD *)(a3 + 44)) )
    return 3221225713LL;
  v10 = MmSizeOfMdl((PVOID)*(unsigned int *)(a3 + 44), *(unsigned int *)(a3 + 40));
  if ( v10 > 0xFFFFFFFF )
    return 3221225713LL;
  result = VslpLockPagesForTransfer(v12, a3, v10, 0, 0);
  if ( (int)result >= 0 )
  {
    v16 = v12[0];
    v18 = v12[7];
    v14 = *(_QWORD *)(a2 + 720);
    v15 = a4;
    v11 = VslpEnterIumSecureMode(1, 50LL, 0LL, (__int64)v13);
    VslpUnlockPagesForTransfer((__int64)v12);
    if ( v11 >= 0 )
      *a1 = v17;
    return (unsigned int)v11;
  }
  return result;
}
