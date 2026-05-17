/*
 * XREFs of sub_180013164 @ 0x180013164
 * Callers:
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwSetInformationThread @ 0x1800A54A0 (ZwSetInformationThread.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenProcessTokenEx @ 0x1800A5900 (ZwOpenProcessTokenEx.c)
 *     ZwAdjustPrivilegesToken @ 0x1800A5B20 (ZwAdjustPrivilegesToken.c)
 *     ZwDuplicateToken @ 0x1800A5B40 (ZwDuplicateToken.c)
 *     ZwSetInformationObject @ 0x1800A5E70 (ZwSetInformationObject.c)
 */

struct _TEB *__fastcall sub_180013164(_QWORD *a1)
{
  struct _TEB *result; // rax
  int v3; // [rsp+20h] [rbp-A8h]
  __int64 v4; // [rsp+28h] [rbp-A0h]
  __int16 v5; // [rsp+30h] [rbp-98h] BYREF
  __int64 v6; // [rsp+38h] [rbp-90h] BYREF
  int v7; // [rsp+40h] [rbp-88h] BYREF
  __int64 v8; // [rsp+48h] [rbp-80h] BYREF
  _QWORD v9[2]; // [rsp+50h] [rbp-78h] BYREF
  int v10; // [rsp+60h] [rbp-68h] BYREF
  __int128 v11; // [rsp+68h] [rbp-60h]
  int v12; // [rsp+78h] [rbp-50h]
  __int128 v13; // [rsp+80h] [rbp-48h]
  int v14; // [rsp+90h] [rbp-38h] BYREF
  __int64 v15; // [rsp+94h] [rbp-34h]
  int v16; // [rsp+A0h] [rbp-28h] BYREF
  __int64 v17; // [rsp+A4h] [rbp-24h]
  int v18; // [rsp+ACh] [rbp-1Ch]

  v10 = 48;
  v11 = 0LL;
  v12 = 0;
  v13 = 0LL;
  *a1 = 0LL;
  result = NtCurrentTeb();
  if ( (result->ProcessEnvironmentBlock->NtGlobalFlag & 0x100000) != 0 )
  {
    result = (struct _TEB *)ZwOpenProcessTokenEx(-1LL, 2LL, 0LL, v9);
    if ( (int)result >= 0 )
    {
      v15 = 2LL;
      v14 = 12;
      *((_QWORD *)&v13 + 1) = &v14;
      if ( (int)ZwDuplicateToken(v9[0], 36LL, &v10) >= 0 )
      {
        v5 = 256;
        if ( (int)((__int64 (__fastcall *)(__int64, __int64, __int16 *, __int64, int, __int64 *))ZwSetInformationObject)(
                    v6,
                    4LL,
                    &v5,
                    2LL,
                    2,
                    &v6) >= 0 )
        {
          if ( (int)ZwSetInformationThread(-2LL, 5LL, &v6) >= 0 )
          {
            v16 = 1;
            v9[1] = 20LL;
            v17 = 20LL;
            v18 = 2;
            if ( (int)ZwAdjustPrivilegesToken(v6, 0LL, &v16, 16LL, 0LL, 0LL) >= 0 )
            {
              v7 = 1;
              if ( (int)ZwSetInformationThread(-2LL, 18LL, &v7) >= 0 )
              {
                *a1 = v6;
                v6 = 0LL;
              }
            }
            v8 = 0LL;
            ZwSetInformationThread(-2LL, 5LL, &v8);
          }
          if ( v6 )
          {
            v5 = 0;
            ((void (__fastcall *)(__int64, __int64, __int16 *, __int64, int, __int64))ZwSetInformationObject)(
              v6,
              4LL,
              &v5,
              2LL,
              v3,
              v4);
          }
        }
        if ( v6 )
          ZwClose(v6);
      }
      return (struct _TEB *)ZwClose(v9[0]);
    }
  }
  return result;
}
