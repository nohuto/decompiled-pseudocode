/*
 * XREFs of HUBID_BuildHardwareID @ 0x1C0017F7C
 * Callers:
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x1C0012410 (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBPDO_AssignPDOIds @ 0x1C006B4FC (HUBPDO_AssignPDOIds.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x1C0010A34 (RtlUnicodeStringPrintf.c)
 *     HUBID_AssignIDString @ 0x1C0017B38 (HUBID_AssignIDString.c)
 *     HUBID_GetUnknownId @ 0x1C0017EFC (HUBID_GetUnknownId.c)
 *     __security_check_cookie @ 0x1C00389B0 (__security_check_cookie.c)
 */

int __fastcall HUBID_BuildHardwareID(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _UNICODE_STRING *UnknownId; // rcx
  int v7; // eax
  unsigned int v8; // r14d
  unsigned int v9; // esi
  __int64 v10; // r8
  unsigned __int16 v11; // cx
  char v12; // al
  bool v13; // zf
  int result; // eax
  const wchar_t *v15; // rdx
  const wchar_t *v16; // rdx
  int v17; // [rsp+20h] [rbp-A9h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-99h] BYREF
  _BYTE v19[16]; // [rsp+40h] [rbp-89h] BYREF
  char v20; // [rsp+50h] [rbp-79h] BYREF

  *(_DWORD *)&DestinationString.Length = 9961472;
  DestinationString.Buffer = (wchar_t *)&v20;
  if ( a3 )
  {
    *a3 = 0LL;
    a3[1] = 0LL;
  }
  if ( (*(_DWORD *)(a1 + 1636) & 0x2002) == 0 )
  {
    UnknownId = (struct _UNICODE_STRING *)HUBID_GetUnknownId(a1);
    return HUBID_AssignIDString((const void **)UnknownId, 1, a2, (__int64)a3);
  }
  v7 = *(_DWORD *)(a1 + 1632);
  if ( (v7 & 1) != 0 && (v7 & 2) == 0 && a2 )
  {
    UnknownId = (struct _UNICODE_STRING *)(a1 + 2120);
    return HUBID_AssignIDString((const void **)UnknownId, 1, a2, (__int64)a3);
  }
  v8 = *(unsigned __int16 *)(a1 + 1996);
  v9 = *(unsigned __int16 *)(a1 + 1998);
  v10 = *(unsigned __int16 *)(a1 + 1996);
  if ( *(_WORD *)(a1 + 1990) > 0x200u )
  {
    v15 = L"USB\\VID_%04X&PID_%04X&REV_%04X&MAUSB";
    if ( (*(_DWORD *)(a1 + 1644) & 0x2000000) == 0 )
      v15 = L"USB\\VID_%04X&PID_%04X&REV_%04X";
    v17 = *(unsigned __int16 *)(a1 + 2000);
    result = RtlUnicodeStringPrintf(&DestinationString, v15, v10, *(unsigned __int16 *)(a1 + 1998), v17);
  }
  else
  {
    v11 = *(_WORD *)(a1 + 2000);
    v19[4] = 0;
    v19[0] = (v11 >> 12) + 48;
    v19[1] = (HIBYTE(v11) & 0xF) + 48;
    v12 = *(_BYTE *)(a1 + 2000) & 0xF;
    v19[2] = ((unsigned __int8)v11 >> 4) + 48;
    v13 = (*(_DWORD *)(a1 + 1644) & 0x2000000) == 0;
    v19[3] = v12 + 48;
    if ( v13 )
      result = RtlUnicodeStringPrintf(&DestinationString, L"USB\\VID_%04X&PID_%04X&REV_%S", v10, v9, v19);
    else
      result = RtlUnicodeStringPrintf(&DestinationString, L"USB\\VID_%04X&PID_%04X&REV_%S&MAUSB", v10, v9, v19);
  }
  if ( result >= 0 )
  {
    result = HUBID_AssignIDString((const void **)&DestinationString, 1, a2, (__int64)a3);
    if ( result >= 0 )
    {
      v16 = L"USB\\VID_%04X&PID_%04X&MAUSB";
      if ( (*(_DWORD *)(a1 + 1644) & 0x2000000) == 0 )
        v16 = L"USB\\VID_%04X&PID_%04X";
      result = RtlUnicodeStringPrintf(&DestinationString, v16, v8, v9);
      if ( result >= 0 )
      {
        UnknownId = &DestinationString;
        return HUBID_AssignIDString((const void **)UnknownId, 1, a2, (__int64)a3);
      }
    }
  }
  return result;
}
