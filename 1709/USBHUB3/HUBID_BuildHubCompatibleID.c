/*
 * XREFs of HUBID_BuildHubCompatibleID @ 0x1C0018310
 * Callers:
 *     HUBID_BuildCompatibleID @ 0x1C0018754 (HUBID_BuildCompatibleID.c)
 * Callees:
 *     HUBID_AssignIDString @ 0x1C0017B38 (HUBID_AssignIDString.c)
 *     __security_check_cookie @ 0x1C00389B0 (__security_check_cookie.c)
 */

__int64 __fastcall HUBID_BuildHubCompatibleID(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  int v4; // ecx
  int *v5; // rcx
  int v6; // [rsp+20h] [rbp-19h] BYREF
  __int128 *v7; // [rsp+28h] [rbp-11h]
  int v8; // [rsp+30h] [rbp-9h] BYREF
  __int128 *v9; // [rsp+38h] [rbp-1h]
  __int128 v10; // [rsp+40h] [rbp+7h] BYREF
  __int64 v11; // [rsp+50h] [rbp+17h]
  int v12; // [rsp+58h] [rbp+1Fh]
  __int128 v13; // [rsp+60h] [rbp+27h] BYREF
  __int64 v14; // [rsp+70h] [rbp+37h]
  int v15; // [rsp+78h] [rbp+3Fh]

  v12 = *(_DWORD *)L"B";
  v9 = &v10;
  v15 = *(_DWORD *)L"B";
  v10 = *(_OWORD *)L"USB\\USB20_HUB";
  v7 = &v13;
  result = 0LL;
  v11 = *(_QWORD *)L"0_HUB";
  v8 = 1835034;
  v14 = *(_QWORD *)L"0_HUB";
  v6 = 1835034;
  v13 = *(_OWORD *)L"USB\\USB30_HUB";
  if ( a3 )
  {
    *a3 = 0LL;
    a3[1] = 0LL;
  }
  v4 = *(_DWORD *)(a1 + 172);
  if ( v4 > 0 )
  {
    if ( v4 <= 2 )
    {
      v5 = &v8;
    }
    else
    {
      if ( v4 != 3 )
        return result;
      v5 = &v6;
    }
    return HUBID_AssignIDString((const void **)v5, 2, a2, (__int64)a3);
  }
  return result;
}
