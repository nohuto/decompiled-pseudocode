/*
 * XREFs of sub_18007C574 @ 0x18007C574
 * Callers:
 *     sub_180026330 @ 0x180026330 (sub_180026330.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwSetInformationThread @ 0x18009AC60 (ZwSetInformationThread.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenProcessTokenEx @ 0x18009B0C0 (ZwOpenProcessTokenEx.c)
 *     ZwAdjustPrivilegesToken @ 0x18009B2E0 (ZwAdjustPrivilegesToken.c)
 *     ZwDuplicateToken @ 0x18009B300 (ZwDuplicateToken.c)
 *     ZwSetInformationObject @ 0x18009B630 (ZwSetInformationObject.c)
 */

struct _TEB *__fastcall sub_18007C574(_QWORD *a1)
{
  struct _TEB *result; // rax
  __int16 v3; // [rsp+30h] [rbp-98h] BYREF
  __int64 v4; // [rsp+38h] [rbp-90h] BYREF
  int v5; // [rsp+40h] [rbp-88h] BYREF
  __int64 v6; // [rsp+48h] [rbp-80h] BYREF
  _QWORD v7[2]; // [rsp+50h] [rbp-78h] BYREF
  int v8; // [rsp+60h] [rbp-68h] BYREF
  __int128 v9; // [rsp+68h] [rbp-60h]
  int v10; // [rsp+78h] [rbp-50h]
  __int128 v11; // [rsp+80h] [rbp-48h]
  int v12; // [rsp+90h] [rbp-38h] BYREF
  __int64 v13; // [rsp+94h] [rbp-34h]
  int v14; // [rsp+A0h] [rbp-28h] BYREF
  __int64 v15; // [rsp+A4h] [rbp-24h]
  int v16; // [rsp+ACh] [rbp-1Ch]

  v8 = 48;
  v9 = 0LL;
  v10 = 0;
  v11 = 0LL;
  *a1 = 0LL;
  result = NtCurrentTeb();
  if ( (result->ProcessEnvironmentBlock->NtGlobalFlag & 0x100000) != 0 )
  {
    result = (struct _TEB *)ZwOpenProcessTokenEx(-1LL, 2LL, 0LL, v7);
    if ( (int)result >= 0 )
    {
      v13 = 2LL;
      v12 = 12;
      *((_QWORD *)&v11 + 1) = &v12;
      if ( (int)ZwDuplicateToken(v7[0], 36LL, &v8, 0LL, 2, &v4) >= 0 )
      {
        v3 = 256;
        if ( (int)ZwSetInformationObject(v4, 4LL, &v3, 2LL) >= 0 )
        {
          if ( (int)ZwSetInformationThread(-2LL, 5LL, &v4) >= 0 )
          {
            v14 = 1;
            v7[1] = 20LL;
            v15 = 20LL;
            v16 = 2;
            if ( (int)ZwAdjustPrivilegesToken(v4, 0LL, &v14) >= 0 )
            {
              v5 = 1;
              if ( (int)ZwSetInformationThread(-2LL, 18LL, &v5) >= 0 )
              {
                *a1 = v4;
                v4 = 0LL;
              }
            }
            v6 = 0LL;
            ZwSetInformationThread(-2LL, 5LL, &v6);
          }
          if ( v4 )
          {
            v3 = 0;
            ZwSetInformationObject(v4, 4LL, &v3, 2LL);
          }
        }
        if ( v4 )
          ZwClose(v4);
      }
      return (struct _TEB *)ZwClose(v7[0]);
    }
  }
  return result;
}
