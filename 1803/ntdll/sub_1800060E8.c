/*
 * XREFs of sub_1800060E8 @ 0x1800060E8
 * Callers:
 *     RtlCreateUserThread @ 0x180006080 (RtlCreateUserThread.c)
 *     RtlQueryProcessDebugInformation @ 0x180077500 (RtlQueryProcessDebugInformation.c)
 *     RtlWow64SuspendThread @ 0x180085460 (RtlWow64SuspendThread.c)
 *     DbgUiIssueRemoteBreakin @ 0x1800C9550 (DbgUiIssueRemoteBreakin.c)
 *     RtlCreateProcessReflection @ 0x1800D0D60 (RtlCreateProcessReflection.c)
 *     RtlSetProcessDebugInformation @ 0x1800D2E30 (RtlSetProcessDebugInformation.c)
 *     sub_1800ECAC0 @ 0x1800ECAC0 (sub_1800ECAC0.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwCreateThreadEx @ 0x18009C210 (ZwCreateThreadEx.c)
 */

__int64 __fastcall sub_1800060E8(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        _QWORD *a10,
        _OWORD *a11)
{
  __int64 v12; // rsi
  char v13; // r9
  int v14; // edx
  char v15; // al
  int v16; // r8d
  int v17; // ecx
  __int64 result; // rax
  __int64 v19; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v20; // [rsp+68h] [rbp-98h] BYREF
  int v21; // [rsp+78h] [rbp-88h] BYREF
  __int64 v22; // [rsp+80h] [rbp-80h]
  __int64 v23; // [rsp+88h] [rbp-78h]
  int v24; // [rsp+90h] [rbp-70h]
  __int64 v25; // [rsp+98h] [rbp-68h]
  __int64 v26; // [rsp+A0h] [rbp-60h]
  _QWORD v27[10]; // [rsp+B0h] [rbp-50h] BYREF

  v12 = a4;
  v13 = a3;
  v20 = 0uLL;
  if ( (a3 & 0xFFFFFFE8) != 0 )
    return 3221225485LL;
  v21 = 48;
  v24 = 512;
  v25 = a2;
  v27[1] = 65539LL;
  v14 = a3 & 1 | 2;
  v27[2] = 16LL;
  v27[0] = 40LL;
  v15 = a3;
  if ( (a3 & 2) == 0 )
    v14 = a3 & 1;
  v16 = v14 | 4;
  if ( (v15 & 4) == 0 )
    v16 = v14;
  v27[3] = &v20;
  v22 = 0LL;
  v23 = 0LL;
  v26 = 0LL;
  v17 = v16 | 0x10;
  v27[4] = 0LL;
  if ( (v13 & 0x10) == 0 )
    v17 = v16;
  result = ZwCreateThreadEx(&v19, 0x1FFFFFLL, &v21, a1, a8, a9, v17, v12, a6, a5, v27);
  if ( (int)result >= 0 )
  {
    if ( a10 )
      *a10 = v19;
    else
      ZwClose(v19);
    if ( a11 )
      *a11 = v20;
    return 0LL;
  }
  return result;
}
