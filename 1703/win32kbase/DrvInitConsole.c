/*
 * XREFs of DrvInitConsole @ 0x1C009C8CC
 * Callers:
 *     InitVideo @ 0x1C009C744 (InitVideo.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C0043750 (DrvUpdateGraphicsDeviceList.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvInitConsole(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // esi
  _DWORD *v3; // rdi
  unsigned int v4; // eax
  unsigned __int64 i; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int8 *v8; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+90h] [rbp+20h] BYREF
  void *KeyHandle; // [rsp+98h] [rbp+28h] BYREF

  v1 = 0;
  v2 = 0;
  KeyHandle = 0LL;
  if ( !gProtocolType )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"SystemStartOptions");
      if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength) == -1073741789
        && ResultLength > 0x10 )
      {
        v3 = PALLOCMEM2(ResultLength, 1886221383LL, 0);
        if ( v3 )
        {
          if ( ZwQueryValueKey(
                 KeyHandle,
                 &DestinationString,
                 KeyValuePartialInformation,
                 v3,
                 ResultLength,
                 &ResultLength) >= 0 )
          {
            v4 = v3[2];
            if ( v4 >= 0x12 )
            {
              for ( i = (unsigned __int64)(v3 + 3); i <= (unsigned __int64)v3 + v4 - 6; i += 2LL )
              {
                v6 = *(_QWORD *)i - 0x45005300410042LL;
                if ( *(_QWORD *)i == 0x45005300410042LL )
                {
                  v6 = *(_QWORD *)(i + 8) - 0x45004400490056LL;
                  if ( *(_QWORD *)(i + 8) == 0x45004400490056LL )
                    v6 = *(unsigned __int16 *)(i + 16) - 79LL;
                }
                if ( !v6 )
                {
                  v2 = 1;
                  break;
                }
              }
            }
          }
          Win32FreePool((__int64)v3);
        }
      }
      ZwClose(KeyHandle);
    }
  }
  v7 = WdLogNewEntry5_WdTrace(a1);
  WdLogEvent5_WdTrace(v7);
  gbBaseVideo = v2;
  LODWORD(gcMaximumAdapterCount) = ((__int64 (*)(void))qword_1C018B7B0)();
  gpAdapterLuids = (struct _LUID *)PALLOCMEM2((unsigned int)(8 * gcMaximumAdapterCount), 1634492743LL, 1);
  v8 = (unsigned __int8 *)PALLOCMEM2((unsigned int)gcMaximumAdapterCount, 1634492743LL, 1);
  gpDevicesPerLuid = v8;
  if ( !gpAdapterLuids || !v8 )
    return 3221225495LL;
  LOBYTE(v1) = gProtocolType == 0;
  DrvUpdateGraphicsDeviceList(1LL, v1);
  return 0LL;
}
