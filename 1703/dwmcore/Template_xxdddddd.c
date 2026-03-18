/*
 * XREFs of Template_xxdddddd @ 0x180197BBC
 * Callers:
 *     ?CopySubresourceRectInternal1@CD3DDeviceLevel1@@AEAAXPEAUID3D11Resource@@IPEBUtagRECT@@0IPEBUtagPOINT@@I@Z @ 0x180077960 (-CopySubresourceRectInternal1@CD3DDeviceLevel1@@AEAAXPEAUID3D11Resource@@IPEBUtagRECT@@0IPEBUtag.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

ULONG Template_xxdddddd(__int64 a1, __int64 a2, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-79h] BYREF
  va_list v4; // [rsp+30h] [rbp-69h]
  __int64 v5; // [rsp+38h] [rbp-61h]
  va_list v6; // [rsp+40h] [rbp-59h]
  __int64 v7; // [rsp+48h] [rbp-51h]
  va_list v8; // [rsp+50h] [rbp-49h]
  __int64 v9; // [rsp+58h] [rbp-41h]
  va_list v10; // [rsp+60h] [rbp-39h]
  __int64 v11; // [rsp+68h] [rbp-31h]
  va_list v12; // [rsp+70h] [rbp-29h]
  __int64 v13; // [rsp+78h] [rbp-21h]
  va_list v14; // [rsp+80h] [rbp-19h]
  __int64 v15; // [rsp+88h] [rbp-11h]
  va_list v16; // [rsp+90h] [rbp-9h]
  __int64 v17; // [rsp+98h] [rbp-1h]
  __int64 v18; // [rsp+E0h] [rbp+47h] BYREF
  va_list va; // [rsp+E0h] [rbp+47h]
  __int64 v20; // [rsp+E8h] [rbp+4Fh] BYREF
  va_list va1; // [rsp+E8h] [rbp+4Fh]
  __int64 v22; // [rsp+F0h] [rbp+57h] BYREF
  va_list va2; // [rsp+F0h] [rbp+57h]
  __int64 v24; // [rsp+F8h] [rbp+5Fh] BYREF
  va_list va3; // [rsp+F8h] [rbp+5Fh]
  __int64 v26; // [rsp+100h] [rbp+67h] BYREF
  va_list va4; // [rsp+100h] [rbp+67h]
  __int64 v28; // [rsp+108h] [rbp+6Fh] BYREF
  va_list va5; // [rsp+108h] [rbp+6Fh]
  __int64 v30; // [rsp+110h] [rbp+77h] BYREF
  va_list va6; // [rsp+110h] [rbp+77h]
  va_list va7; // [rsp+118h] [rbp+7Fh] BYREF

  va_start(va7, a2);
  va_start(va6, a2);
  va_start(va5, a2);
  va_start(va4, a2);
  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v18 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v20 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v22 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v24 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v26 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v28 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v30 = va_arg(va7, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  v7 = 4LL;
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v4, va1);
  v5 = 8LL;
  va_copy(v6, va2);
  va_copy(v8, va3);
  va_copy(v10, va4);
  va_copy(v12, va5);
  va_copy(v14, va6);
  va_copy(v16, va7);
  v9 = 4LL;
  v11 = 4LL;
  v13 = 4LL;
  v15 = 4LL;
  v17 = 4LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_RENDEROPT_TILEABLECOPYEVENT, 8u, &UserData);
}
