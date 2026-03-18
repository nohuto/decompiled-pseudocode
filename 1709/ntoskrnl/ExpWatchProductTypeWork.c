/*
 * XREFs of ExpWatchProductTypeWork @ 0x1405925B0
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     NtDeleteValueKey @ 0x140474B2C (NtDeleteValueKey.c)
 *     NtNotifyChangeKey @ 0x1404797B0 (NtNotifyChangeKey.c)
 *     NtSetValueKey @ 0x14047AFF0 (NtSetValueKey.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     NtQueryValueKey @ 0x1404A8B80 (NtQueryValueKey.c)
 *     CmOpenKey @ 0x1404AC170 (CmOpenKey.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 *     CmpLockRegistryFreezeAware @ 0x1404E3B7C (CmpLockRegistryFreezeAware.c)
 *     PsCreateSystemThreadEx @ 0x1405549A0 (PsCreateSystemThreadEx.c)
 *     NtFlushKey @ 0x14059294C (NtFlushKey.c)
 *     ExUpdateLicenseRegistry @ 0x140592BA8 (ExUpdateLicenseRegistry.c)
 */

char ExpWatchProductTypeWork()
{
  char v0; // r15
  char v1; // si
  char v2; // di
  HANDLE v3; // r14
  int v4; // eax
  NTSTATUS v5; // eax
  const wchar_t *v6; // rax
  int v7; // r8d
  int v8; // ecx
  const wchar_t *v9; // rax
  int v10; // r8d
  int v11; // ecx
  char v12; // r10
  const wchar_t *v13; // rax
  char *v14; // rdx
  int v15; // r8d
  int v16; // ecx
  __int64 v17; // rcx
  char *v18; // rcx
  unsigned __int16 v19; // ax
  int v20; // eax
  int updated; // eax
  NTSTATUS v22; // eax
  ULONG *v23; // rdi
  NTSTATUS v24; // eax
  unsigned int v25; // eax
  ULONG_PTR v26; // rdi
  char result; // al
  LARGE_INTEGER Interval; // [rsp+58h] [rbp-49h] BYREF
  UNICODE_STRING ValueName; // [rsp+60h] [rbp-41h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-29h] BYREF
  int v32; // [rsp+88h] [rbp-19h] BYREF
  __int64 v33; // [rsp+90h] [rbp-11h]
  UNICODE_STRING *p_DestinationString; // [rsp+98h] [rbp-9h]
  int v35; // [rsp+A0h] [rbp-1h]
  __int128 v36; // [rsp+A8h] [rbp+7h]
  _OWORD KeyValueInformation[2]; // [rsp+B8h] [rbp+17h] BYREF
  __int16 v38; // [rsp+D8h] [rbp+37h]

  v0 = 1;
  v1 = 0;
  v2 = 0;
  v3 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions");
  v32 = 48;
  p_DestinationString = &DestinationString;
  v33 = 0LL;
  v35 = 576;
  v36 = 0LL;
  ExAcquirePushLockSharedEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
  if ( ExpProductTypeKey )
  {
    while ( 1 )
    {
      v4 = CmOpenKey((HANDLE *)&ValueName, 131103, (__int64)&v32, 0, 0LL);
      if ( v4 != -1073741670 )
        break;
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( v4 < 0 )
      KeBugCheckEx(0x9Au, 0xDuLL, (unsigned int)v4, 0LL, 0LL);
    v3 = ExpProductTypeKey;
    ExpProductTypeKey = *(HANDLE *)&ValueName.Length;
    if ( !ExpSetupModeDetected )
    {
      RtlInitUnicodeString(&ValueName, L"ProductType");
      v5 = NtQueryValueKey(
             ExpProductTypeKey,
             &ValueName,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x22u,
             &ResultLength);
      if ( v5 == -1073741670 )
      {
        Interval.QuadPart = -10000000LL;
        do
        {
          KeDelayExecutionThread(0, 0, &Interval);
          v5 = NtQueryValueKey(
                 ExpProductTypeKey,
                 &ValueName,
                 KeyValuePartialInformation,
                 KeyValueInformation,
                 0x22u,
                 &ResultLength);
        }
        while ( v5 == -1073741670 );
      }
      if ( v5 >= 0 )
      {
        v6 = L"LanmanNT";
        do
        {
          v7 = *(const wchar_t *)((char *)v6 + (char *)KeyValueInformation + 12 - (char *)L"LanmanNT");
          v8 = *v6 - v7;
          if ( v8 )
            break;
          ++v6;
        }
        while ( v7 );
        if ( !v8 )
          goto LABEL_15;
        v9 = L"ServerNT";
        do
        {
          v10 = *(const wchar_t *)((char *)v9 + (char *)KeyValueInformation + 12 - (char *)L"ServerNT");
          v11 = *v9 - v10;
          if ( v11 )
            break;
          ++v9;
        }
        while ( v10 );
        v12 = 0;
        if ( !v11 )
LABEL_15:
          v12 = 1;
        v13 = L"WinNT";
        v14 = (char *)(ExpProductTypeValueInfo + 12);
        do
        {
          v15 = *(const wchar_t *)((char *)v13 + ExpProductTypeValueInfo + 12 - (_QWORD)L"WinNT");
          v16 = *v13 - v15;
          if ( v16 )
            break;
          ++v13;
        }
        while ( v15 );
        if ( v16 && v12 )
        {
          v17 = ExpProductTypeValueInfo;
          v0 = 0;
          *(_OWORD *)ExpProductTypeValueInfo = KeyValueInformation[0];
          *(_OWORD *)(v17 + 16) = KeyValueInformation[1];
          *(_WORD *)(v17 + 32) = v38;
        }
        v18 = (char *)((char *)KeyValueInformation + 12 - v14);
        while ( 1 )
        {
          v19 = *(_WORD *)v14;
          if ( *(_WORD *)v14 != *(_WORD *)&v18[(_QWORD)v14] )
            break;
          v14 += 2;
          if ( !v19 )
          {
            v20 = 0;
            goto LABEL_26;
          }
        }
        v20 = v19 < *(_WORD *)&v18[(_QWORD)v14] ? -1 : 1;
LABEL_26:
        v0 = v20 != 0 ? v0 : 0;
      }
      updated = ExUpdateLicenseRegistry();
      if ( updated < 0 )
        KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)updated, 1uLL, 0LL);
      CmpLockRegistryFreezeAware(1);
      v1 = 1;
      v22 = NtSetValueKey(
              ExpProductTypeKey,
              &ValueName,
              0,
              *(_DWORD *)(ExpProductTypeValueInfo + 4),
              (PVOID)(ExpProductTypeValueInfo + 12),
              *(_DWORD *)(ExpProductTypeValueInfo + 8));
      if ( v22 == -1073741670 )
      {
        Interval.QuadPart = -10000000LL;
        do
        {
          KeDelayExecutionThread(0, 0, &Interval);
          v22 = NtSetValueKey(
                  ExpProductTypeKey,
                  &ValueName,
                  0,
                  *(_DWORD *)(ExpProductTypeValueInfo + 4),
                  (PVOID)(ExpProductTypeValueInfo + 12),
                  *(_DWORD *)(ExpProductTypeValueInfo + 8));
        }
        while ( v22 == -1073741670 );
      }
      if ( v22 < 0 )
        KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v22, 1uLL, 0LL);
      v23 = (ULONG *)qword_14038D018;
      RtlInitUnicodeString(&ValueName, L"ProductSuite");
      if ( v23 )
      {
        v24 = NtSetValueKey(ExpProductTypeKey, &ValueName, 0, v23[1], v23 + 3, v23[2]);
        if ( v24 == -1073741670 )
        {
          Interval.QuadPart = -10000000LL;
          do
          {
            KeDelayExecutionThread(0, 0, &Interval);
            v24 = NtSetValueKey(
                    ExpProductTypeKey,
                    &ValueName,
                    0,
                    *((_DWORD *)qword_14038D018 + 1),
                    (char *)qword_14038D018 + 12,
                    *((_DWORD *)qword_14038D018 + 2));
          }
          while ( v24 == -1073741670 );
        }
        if ( v24 < 0 )
          KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v24, 2uLL, 0LL);
      }
      else
      {
        NtDeleteValueKey(ExpProductTypeKey, &ValueName);
      }
    }
    while ( 1 )
    {
      v25 = NtNotifyChangeKey(
              ExpProductTypeKey,
              0LL,
              ExpWatchProductTypeWorkItem,
              (PVOID)1,
              &ExpProductTypeIoSb,
              0x10000005u,
              0,
              &ExpProductTypeChangeBuffer,
              4u,
              1u);
      v26 = v25;
      if ( v25 != -1073741670 )
        break;
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( v1 )
      CmpUnlockRegistry();
    if ( (v26 & 0x80000000) != 0LL )
      KeBugCheckEx(0x9Au, 0x11uLL, v26, 4uLL, 0LL);
    v2 = v1;
    if ( !ExpSetupModeDetected )
    {
      if ( v0 )
      {
        v2 = v1;
        if ( (int)PsCreateSystemThreadEx(
                    (__int64)&ValueName,
                    0x1FFFFF,
                    0LL,
                    0LL,
                    0LL,
                    (__int64)ExpExpirationThread,
                    3221226090LL,
                    0LL,
                    0LL) >= 0 )
          ZwClose(*(HANDLE *)&ValueName.Length);
      }
    }
  }
  result = ExReleasePushLockEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
  if ( v3 )
  {
    if ( v2 )
      NtFlushKey(v3);
    return ObCloseHandle(v3, 0);
  }
  return result;
}
