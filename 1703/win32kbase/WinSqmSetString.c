/*
 * XREFs of WinSqmSetString @ 0x1C00E7780
 * Callers:
 *     ldevLoadDriver @ 0x1C005F8A0 (ldevLoadDriver.c)
 * Callees:
 *     WinSqmEventEnabled @ 0x1C0065B00 (WinSqmEventEnabled.c)
 *     ?IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z @ 0x1C0065B50 (-IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z.c)
 *     WinSqmEventWrite @ 0x1C006D1A4 (WinSqmEventWrite.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

NTSTATUS __fastcall WinSqmSetString(__int64 a1, __int64 a2, const wchar_t *a3)
{
  unsigned int v4; // edi
  ULONGLONG v5; // rsi
  NTSTATUS result; // eax
  signed __int64 v7; // rbx
  _WORD *v8; // rax
  __int16 v9; // cx
  __int64 v10; // rax
  int v11; // [rsp+28h] [rbp-E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[5]; // [rsp+38h] [rbp-D0h] BYREF
  _WORD v13[64]; // [rsp+88h] [rbp-80h] BYREF

  v11 = 8969;
  v4 = 64;
  memset(UserData, 0, 0x40uLL);
  memset(v13, 0, sizeof(v13));
  v5 = (ULONGLONG)&unk_1C0161360;
  if ( (unsigned int)IsExtendedWinSqmHandle(0LL) )
    v5 = 24LL;
  result = WinSqmEventEnabled(&SQM_SET_STRING, (void *)v5);
  if ( result )
  {
    if ( !a3 || !*a3 )
      a3 = L"(null)";
    v7 = (char *)a3 - (char *)v13;
    v8 = v13;
    do
    {
      v9 = *(_WORD *)((char *)v8 + v7);
      if ( !v9 )
        break;
      *v8 = v9;
      --v4;
      ++v8;
    }
    while ( v4 > 1 );
    *v8 = 0;
    UserData[0].Ptr = v5;
    UserData[1].Ptr = (ULONGLONG)&v11;
    *(_QWORD *)&UserData[0].Size = 16LL;
    UserData[2].Ptr = (ULONGLONG)&unk_1C018E930;
    UserData[3].Ptr = (ULONGLONG)v13;
    v10 = -1LL;
    *(_QWORD *)&UserData[1].Size = 4LL;
    *(_QWORD *)&UserData[2].Size = 4LL;
    do
      ++v10;
    while ( v13[v10] );
    UserData[3].Reserved = 0;
    UserData[3].Size = 2 * v10 + 2;
    return WinSqmEventWrite(&SQM_SET_STRING, 4u, UserData);
  }
  return result;
}
