/*
 * XREFs of PiDevCfgClearDeviceMigrationNode @ 0x1406991C4
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x14059389C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140699B70 (PiDevCfgFindDeviceMigrationNode.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     PnpValidateMultiSzData @ 0x14014FC5C (PnpValidateMultiSzData.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14017F900 (ZwDeleteValueKey.c)
 *     memset @ 0x140192D80 (memset.c)
 *     _SysCtxRegOpenKey @ 0x140484048 (_SysCtxRegOpenKey.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     RtlpQueryRegistryValues @ 0x14055642C (RtlpQueryRegistryValues.c)
 *     _RegRtlDeletePathInternal @ 0x1407422EC (_RegRtlDeletePathInternal.c)
 */

__int64 __fastcall PiDevCfgClearDeviceMigrationNode(__int64 *a1, const WCHAR *a2)
{
  __int64 v3; // rdx
  __int64 v5; // rcx
  int v6; // eax
  int RegistryValues; // r14d
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r9
  void *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9
  wchar_t *Buffer; // rbx
  __int64 *v16; // rdi
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rax
  int v23; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING v26; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE v28; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v30[28]; // [rsp+80h] [rbp-80h] BYREF

  v3 = a1[1];
  Handle = 0LL;
  KeyHandle = 0LL;
  v28 = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  *(_DWORD *)&v26.Length = 0;
  v26.Buffer = 0LL;
  v23 = 0;
  if ( *(_QWORD *)&PiPnpRtlCtx )
    v5 = **(_QWORD **)&PiPnpRtlCtx;
  else
    v5 = 0LL;
  v6 = SysCtxRegOpenKey(v5, v3, (__int64)a2, 0, 0x20019u, (__int64)&Handle);
  RegistryValues = v6;
  if ( v6 == -1073741772 )
  {
LABEL_5:
    RegistryValues = 0;
    goto LABEL_59;
  }
  if ( v6 >= 0 )
  {
    memset(v30, 0, sizeof(v30));
    v30[2] = L"ClassGuid";
    LODWORD(v30[4]) = 0x1000000;
    LODWORD(v30[1]) = 288;
    v30[3] = &UnicodeString;
    LODWORD(v30[15]) = 288;
    v30[9] = L"LocationPaths";
    LODWORD(v30[11]) = 117440512;
    v30[10] = &v26;
    v30[16] = L"Persist";
    v30[17] = &v23;
    LODWORD(v30[8]) = 304;
    LODWORD(v30[18]) = 0x4000000;
    RegistryValues = RtlpQueryRegistryValues(3221225472LL, (const WCHAR *)Handle, (__int64)v30, 0LL);
    if ( RegistryValues >= 0 )
    {
      if ( !UnicodeString.Length && UnicodeString.Buffer )
        RtlFreeUnicodeString(&UnicodeString);
      if ( v26.Buffer && !(unsigned __int8)PnpValidateMultiSzData(v26.Buffer, v26.Length) )
        RtlFreeUnicodeString(&v26);
      if ( v23 )
        goto LABEL_5;
      ZwClose(Handle);
      v9 = a1[1];
      Handle = 0LL;
      if ( *(_QWORD *)&PiPnpRtlCtx && **(_QWORD **)&PiPnpRtlCtx )
        v10 = *(_QWORD *)(**(_QWORD **)&PiPnpRtlCtx + 8LL);
      else
        v10 = 0LL;
      LOBYTE(v8) = 1;
      RegRtlDeletePathInternal(v9, a2, v8, v10);
      v11 = (void *)a1[3];
      if ( v11 && RtlInitUnicodeStringEx(&DestinationString, a2) >= 0 )
        ZwDeleteValueKey(v11, &DestinationString);
      v12 = a1[2];
      if ( v12 && UnicodeString.Buffer )
      {
        v13 = 0LL;
        if ( *(_QWORD *)&PiPnpRtlCtx )
          v13 = **(_QWORD **)&PiPnpRtlCtx;
        if ( (int)SysCtxRegOpenKey(v13, v12, (__int64)UnicodeString.Buffer, 0, 0xF003Fu, (__int64)&KeyHandle) >= 0 )
        {
          if ( RtlInitUnicodeStringEx(&DestinationString, a2) >= 0 )
            ZwDeleteValueKey(KeyHandle, &DestinationString);
          ZwClose(KeyHandle);
        }
        if ( *(_QWORD *)&PiPnpRtlCtx && **(_QWORD **)&PiPnpRtlCtx )
          v14 = *(_QWORD *)(**(_QWORD **)&PiPnpRtlCtx + 8LL);
        else
          v14 = 0LL;
        RegRtlDeletePathInternal(a1[2], UnicodeString.Buffer, 0LL, v14);
      }
      Buffer = v26.Buffer;
      if ( v26.Buffer )
      {
        v16 = a1 + 4;
        if ( !a1[4] )
        {
          v17 = 0LL;
          if ( *(_QWORD *)&PiPnpRtlCtx )
            v17 = **(_QWORD **)&PiPnpRtlCtx;
          v18 = SysCtxRegOpenKey(v17, *a1, (__int64)L"Locations", 0, 0xF003Fu, (__int64)(a1 + 4));
          if ( v18 == -1073741772 )
          {
            *v16 = 0LL;
          }
          else if ( v18 < 0 )
          {
            RegistryValues = v18;
            goto LABEL_59;
          }
          Buffer = v26.Buffer;
          if ( !*v16 )
            goto LABEL_59;
        }
        while ( *Buffer )
        {
          v19 = 0LL;
          if ( *(_QWORD *)&PiPnpRtlCtx )
            v19 = **(_QWORD **)&PiPnpRtlCtx;
          if ( (int)SysCtxRegOpenKey(v19, *v16, (__int64)Buffer, 0, 0xF003Fu, (__int64)&v28) >= 0 )
          {
            if ( RtlInitUnicodeStringEx(&DestinationString, a2) >= 0 )
              ZwDeleteValueKey(v28, &DestinationString);
            ZwClose(v28);
          }
          if ( *(_QWORD *)&PiPnpRtlCtx && **(_QWORD **)&PiPnpRtlCtx )
            v20 = *(_QWORD *)(**(_QWORD **)&PiPnpRtlCtx + 8LL);
          else
            v20 = 0LL;
          RegRtlDeletePathInternal(*v16, Buffer, 0LL, v20);
          v21 = -1LL;
          do
            ++v21;
          while ( Buffer[v21] );
          Buffer += v21 + 1;
        }
      }
    }
  }
LABEL_59:
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&v26);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)RegistryValues;
}
