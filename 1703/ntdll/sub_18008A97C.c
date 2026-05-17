/*
 * XREFs of sub_18008A97C @ 0x18008A97C
 * Callers:
 *     sub_180109220 @ 0x180109220 (sub_180109220.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180040170 (RtlInitUnicodeStringEx.c)
 *     sub_18005D1A4 @ 0x18005D1A4 (sub_18005D1A4.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     sub_18005DF88 @ 0x18005DF88 (sub_18005DF88.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 */

__int64 __fastcall sub_18008A97C(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  NTSTATUS v5; // eax
  __int64 v6; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v7[24]; // [rsp+38h] [rbp-18h] BYREF
  int v8; // [rsp+70h] [rbp+20h] BYREF
  int v9; // [rsp+74h] [rbp+24h]
  int v10; // [rsp+78h] [rbp+28h] BYREF
  int v11; // [rsp+80h] [rbp+30h] BYREF
  int v12; // [rsp+88h] [rbp+38h] BYREF

  v9 = HIDWORD(a1);
  v6 = 0LL;
  v2 = 0;
  v8 = 0;
  if ( a2 )
  {
    if ( (unsigned int)sub_18005D1A4(&v6, &v10, (__int64)L"System\\CurrentControlSet\\Control\\CMF\\LatestIndex") )
    {
      if ( v10 != 1 && (int)RtlInitUnicodeStringEx((__int64)v7, (__int64)L"SYSTEM") >= 0 )
      {
        v11 = 4;
        if ( (int)sub_18005DF88(v6, (__int64)v7, &v12, &v8, &v11) >= 0 && v12 == 4 )
        {
          v2 = 1;
          *a2 = v8;
        }
      }
    }
    if ( v6 )
    {
      v5 = ZwClose(v6);
      RtlNtStatusToDosError(v5);
    }
    return v2;
  }
  else
  {
    RtlSetLastWin32Error(0x57u);
    return 0LL;
  }
}
