/*
 * XREFs of RtlImpersonateSelfEx @ 0x18007F940
 * Callers:
 *     RtlAcquirePrivilege @ 0x18007F6E0 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelf @ 0x18007F930 (RtlImpersonateSelf.c)
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwSetInformationThread @ 0x1800A54A0 (ZwSetInformationThread.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenProcessTokenEx @ 0x1800A5900 (ZwOpenProcessTokenEx.c)
 *     ZwDuplicateToken @ 0x1800A5B40 (ZwDuplicateToken.c)
 */

__int64 __fastcall RtlImpersonateSelfEx(int a1, int a2, _QWORD *a3)
{
  int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp-19h] BYREF
  __int64 v8; // [rsp+38h] [rbp-11h] BYREF
  int v9; // [rsp+40h] [rbp-9h] BYREF
  __int64 v10; // [rsp+48h] [rbp-1h]
  __int64 v11; // [rsp+50h] [rbp+7h]
  int v12; // [rsp+58h] [rbp+Fh]
  __int64 v13; // [rsp+60h] [rbp+17h]
  _DWORD *v14; // [rsp+68h] [rbp+1Fh]
  _DWORD v15[2]; // [rsp+70h] [rbp+27h] BYREF
  __int16 v16; // [rsp+78h] [rbp+2Fh]

  if ( !a3 && a2 )
    return 3221225712LL;
  v10 = 0LL;
  v11 = 0LL;
  v13 = 0LL;
  v15[1] = a1;
  v12 = 512;
  v14 = v15;
  v9 = 48;
  v15[0] = 12;
  v16 = 1;
  v5 = ZwOpenProcessTokenEx(-1LL, 2LL, 512LL, &v8);
  if ( v5 >= 0 )
  {
    v5 = ZwDuplicateToken(v8, a2 | 4u, &v9);
    if ( v5 >= 0 )
    {
      v5 = ZwSetInformationThread(-2LL, 5LL, &v7);
      if ( v5 >= 0 && a3 )
        *a3 = v7;
      else
        ZwClose(v7);
    }
    ZwClose(v8);
  }
  return (unsigned int)v5;
}
