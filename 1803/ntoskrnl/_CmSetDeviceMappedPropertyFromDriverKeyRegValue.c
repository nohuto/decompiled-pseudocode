/*
 * XREFs of _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1405CC920
 * Callers:
 *     _CmSetDeviceMappedProperty @ 0x1405CC730 (_CmSetDeviceMappedProperty.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x14006DC90 (RtlUnalignedStringCchLengthW.c)
 *     RtlStringCchPrintfW @ 0x14009F42C (RtlStringCchPrintfW.c)
 *     RtlTimeToTimeFields @ 0x1401457D0 (RtlTimeToTimeFields.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     _CmOpenDeviceRegKey @ 0x140504BB4 (_CmOpenDeviceRegKey.c)
 *     _RegRtlSetValue @ 0x1405E2DB0 (_RegRtlSetValue.c)
 */

__int64 __fastcall CmSetDeviceMappedPropertyFromDriverKeyRegValue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        PLARGE_INTEGER Time,
        ULONG a6)
{
  DEVPROPKEY **v7; // rdx
  int v8; // r11d
  unsigned int i; // r10d
  DEVPROPKEY *v12; // r8
  DEVPROPKEY **v13; // rsi
  __int64 v14; // rcx
  int v15; // eax
  int v16; // ebx
  int v17; // eax
  __int64 v19; // rax
  __int64 v20; // [rsp+20h] [rbp-60h]
  __int64 v21; // [rsp+28h] [rbp-58h]
  HANDLE Handle; // [rsp+40h] [rbp-40h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+48h] [rbp-38h] BYREF
  wchar_t pszDest[12]; // [rsp+58h] [rbp-28h] BYREF

  Handle = 0LL;
  v7 = &off_1407FBF90;
  v8 = *(_DWORD *)(a3 + 16);
  for ( i = 0; i < 0xD; ++i )
  {
    v12 = *v7;
    v13 = v7;
    if ( v8 == (*v7)->pid )
    {
      v14 = *(_QWORD *)a3 - *(_QWORD *)&v12->fmtid.Data1;
      if ( *(_QWORD *)a3 == *(_QWORD *)&v12->fmtid.Data1 )
        v14 = *(_QWORD *)(a3 + 8) - *(_QWORD *)v12->fmtid.Data4;
      if ( !v14 )
        break;
    }
    v13 = 0LL;
    v7 += 4;
  }
  if ( !v13 )
    return (unsigned int)-1073741802;
  v15 = *((_DWORD *)v13 + 2);
  if ( a4 != v15 )
  {
    if ( a4 == 25 )
    {
      if ( v15 == 18 )
        goto LABEL_10;
    }
    else if ( a4 < 2 )
    {
      goto LABEL_10;
    }
    return (unsigned int)-1073741811;
  }
LABEL_10:
  v16 = CmOpenDeviceRegKey(a1, a2, 0x12u, 0, 2, 1, (__int64)&Handle, 0LL);
  if ( v16 >= 0 )
  {
    v17 = RegRtlSetValue(Handle, a6);
    if ( v17 == -1073741444 )
    {
      v16 = -1073741772;
    }
    else if ( v17 < 0 )
    {
      v16 = v17;
    }
    else if ( *(_DWORD *)(a3 + 16) == 2 )
    {
      v19 = *(_QWORD *)a3 - *(_QWORD *)&DEVPKEY_Device_DriverDate.fmtid.Data1;
      if ( *(_QWORD *)a3 == *(_QWORD *)&DEVPKEY_Device_DriverDate.fmtid.Data1 )
        v19 = *(_QWORD *)(a3 + 8) - *(_QWORD *)DEVPKEY_Device_DriverDate.fmtid.Data4;
      if ( !v19 )
      {
        RtlTimeToTimeFields(Time, &TimeFields);
        LODWORD(v21) = TimeFields.Year;
        LODWORD(v20) = TimeFields.Day;
        if ( RtlStringCchPrintfW(pszDest, 0xBuLL, L"%d-%d-%d", (unsigned int)TimeFields.Month, v20, v21) >= 0
          && RtlUnalignedStringCchLengthW(pszDest, 0xBuLL, (size_t *)&TimeFields) >= 0 )
        {
          RegRtlSetValue(Handle, 2 * (*(_DWORD *)&TimeFields.Year + 1));
        }
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v16;
}
