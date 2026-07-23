/*
 * XREFs of BapdWriteEtwEvents @ 0x14014CABC
 * Callers:
 *     BapdpProcessEtwEvents @ 0x14015964C (BapdpProcessEtwEvents.c)
 *     PopBootLoaderTraceProcess @ 0x140577ADC (PopBootLoaderTraceProcess.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     BapdpParseEventParts @ 0x14014CDF8 (BapdpParseEventParts.c)
 *     BapdRegisterEtwProvider @ 0x14014CE90 (BapdRegisterEtwProvider.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140181740 (ZwUpdateWnfStateData.c)
 *     BapdpWriteEventDataToRegistry @ 0x14040F264 (BapdpWriteEventDataToRegistry.c)
 *     EtwUnregister @ 0x140589010 (EtwUnregister.c)
 *     EtwSetInformation @ 0x1405892A0 (EtwSetInformation.c)
 */

__int64 __fastcall BapdWriteEtwEvents(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  REGHANDLE v3; // r13
  REGHANDLE v4; // rsi
  REGHANDLE v5; // rdi
  NTSTATUS v6; // r15d
  int v7; // eax
  int *v8; // r12
  _QWORD *v9; // r14
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v15; // rcx
  GUID *v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  bool v19; // zf
  const WCHAR *v20; // rdx
  char v21; // [rsp+48h] [rbp-49h]
  ULONG UserDataCount[2]; // [rsp+50h] [rbp-41h] BYREF
  REGHANDLE v23; // [rsp+58h] [rbp-39h] BYREF
  REGHANDLE RegHandle; // [rsp+60h] [rbp-31h] BYREF
  GUID *v25; // [rsp+68h] [rbp-29h]
  unsigned __int64 v26; // [rsp+70h] [rbp-21h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-9h] BYREF

  RegHandle = 0LL;
  v26 = a1 + (unsigned int)a2;
  *(_QWORD *)UserDataCount = 0LL;
  v2 = a1;
  v25 = &NullGuid;
  LOBYTE(a2) = 1;
  v23 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = BapdRegisterEtwProvider(&BOOTENV_ETW_PROVIDER, a2, &RegHandle);
  if ( v6 >= 0 )
  {
    v21 = 0;
    v7 = BapdRegisterEtwProvider(&BOOT_PROVIDER_GUID, 0LL, UserDataCount);
    v4 = *(_QWORD *)UserDataCount;
    v6 = v7;
    if ( v7 >= 0 )
    {
      while ( v2 < v26 )
      {
        if ( *(_DWORD *)(v2 + 8) == 6 )
        {
          v8 = (int *)(v2 + 68);
          BapdpParseEventParts(v2 + 48, v2 + 68, *(_DWORD *)(v2 + 64), (unsigned int)&UserData, (__int64)UserDataCount);
          v9 = (_QWORD *)(v2 + 32);
          v10 = *(_QWORD *)(v2 + 32);
          v11 = BOOTENV_ETW_PROVIDER - v10;
          if ( BOOTENV_ETW_PROVIDER == v10 )
            v11 = 0x1E535E959809A5BBLL - *(_QWORD *)(v2 + 40);
          if ( v11 )
          {
            v15 = BOOT_PROVIDER_GUID - v10;
            if ( BOOT_PROVIDER_GUID == v10 )
              v15 = 0x6B3FAED6A2C303F9LL - *(_QWORD *)(v2 + 40);
            if ( v15 )
            {
              v16 = v25;
              v17 = *(_QWORD *)&v25->Data1 - v10;
              if ( *(_QWORD *)&v25->Data1 == v10 )
                v17 = *(_QWORD *)v25->Data4 - *(_QWORD *)(v2 + 40);
              if ( v17 )
              {
                if ( v5 )
                {
                  EtwUnregister(v5);
                  v23 = 0LL;
                }
                LOBYTE(v16) = *(_BYTE *)(v2 + 51) != 11;
                v18 = BapdRegisterEtwProvider(v2 + 32, v16, &v23);
                v5 = v23;
                v6 = v18;
                if ( v18 < 0 )
                  break;
                v19 = *(_BYTE *)(v2 + 51) == 11;
                v3 = v23;
                v25 = (GUID *)(v2 + 32);
                if ( v19 )
                  EtwSetInformation(v23, EventProviderSetTraits, (PVOID)UserData.Ptr, UserData.Size);
              }
            }
            else
            {
              v3 = v4;
              if ( !v21 && *(_BYTE *)(v2 + 51) == 11 )
              {
                EtwSetInformation(v4, EventProviderSetTraits, (PVOID)UserData.Ptr, UserData.Size);
                v21 = 1;
              }
            }
          }
          else
          {
            v3 = RegHandle;
          }
          if ( EtwEventEnabled(v3, (PCEVENT_DESCRIPTOR)(v2 + 48)) )
          {
            v6 = EtwWriteEx(
                   v3,
                   (PCEVENT_DESCRIPTOR)(v2 + 48),
                   0LL,
                   0,
                   (LPCGUID)((v2 + 16) & -(__int64)(*(_BYTE *)(v2 + 15) != 0)),
                   0LL,
                   UserDataCount[0],
                   &UserData);
            if ( v6 < 0 )
              break;
          }
          v12 = BOOTENV_ETW_PROVIDER - *v9;
          if ( BOOTENV_ETW_PROVIDER == *v9 )
            v12 = 0x1E535E959809A5BBLL - *(_QWORD *)(v2 + 40);
          if ( !v12 )
          {
            v13 = *(unsigned __int16 *)(v2 + 48);
            switch ( v13 )
            {
              case 11:
                v20 = L"POSTTime";
LABEL_39:
                RtlInitUnicodeString(&DestinationString, v20);
                BapdpWriteEventDataToRegistry((PVOID)(v2 + 68));
                break;
              case 20:
                if ( !*v8 )
                  ZwUpdateWnfStateData(&WNF_BOOT_DIRTY_SHUTDOWN, 0LL, 0, 0LL, 0LL, 0, 0);
                break;
              case 16:
              case 29:
                ExBootAppFailureStatus = *v8;
                break;
              case 32:
                v20 = L"BootmgrUserInputTime";
                goto LABEL_39;
              default:
                break;
            }
          }
        }
        v2 = (*(unsigned int *)(v2 + 4) + v2 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      }
    }
  }
  if ( RegHandle )
    EtwUnregister(RegHandle);
  if ( v4 )
    EtwUnregister(v4);
  if ( v5 )
    EtwUnregister(v5);
  return (unsigned int)v6;
}
