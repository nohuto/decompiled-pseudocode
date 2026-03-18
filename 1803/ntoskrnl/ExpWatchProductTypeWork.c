/*
 * XREFs of ExpWatchProductTypeWork @ 0x140579DB0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     NtDeleteValueKey @ 0x14049ACA0 (NtDeleteValueKey.c)
 *     CmpLockRegistryFreezeAware @ 0x14049BC3C (CmpLockRegistryFreezeAware.c)
 *     NtNotifyChangeKey @ 0x1404A2684 (NtNotifyChangeKey.c)
 *     NtSetValueKey @ 0x1404A3E60 (NtSetValueKey.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x14052AC40 (PsCreateSystemThreadEx.c)
 *     NtFlushKey @ 0x14057A130 (NtFlushKey.c)
 *     ExUpdateLicenseRegistry @ 0x14057A3E4 (ExUpdateLicenseRegistry.c)
 *     NtQueryValueKey @ 0x14059DE50 (NtQueryValueKey.c)
 *     CmOpenKey @ 0x1405AD380 (CmOpenKey.c)
 */

char ExpWatchProductTypeWork()
{
  char v0; // r15
  char v1; // si
  char v2; // di
  HANDLE v3; // r14
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // eax
  NTSTATUS v7; // eax
  const wchar_t *v8; // rax
  int v9; // r8d
  int v10; // ecx
  const wchar_t *v11; // rax
  int v12; // r8d
  int v13; // ecx
  char v14; // r10
  const wchar_t *v15; // rax
  char *v16; // rdx
  int v17; // r8d
  int v18; // ecx
  char *v19; // rcx
  unsigned __int16 v20; // ax
  int v21; // eax
  int updated; // eax
  NTSTATUS v23; // eax
  ULONG *v24; // rdi
  NTSTATUS v25; // eax
  unsigned int v26; // eax
  ULONG_PTR v27; // rdi
  char result; // al
  __int64 v29; // rcx
  LARGE_INTEGER Interval; // [rsp+58h] [rbp-49h] BYREF
  UNICODE_STRING ValueName; // [rsp+60h] [rbp-41h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-29h] BYREF
  int v34; // [rsp+88h] [rbp-19h] BYREF
  __int64 v35; // [rsp+90h] [rbp-11h]
  UNICODE_STRING *p_DestinationString; // [rsp+98h] [rbp-9h]
  int v37; // [rsp+A0h] [rbp-1h]
  __int128 v38; // [rsp+A8h] [rbp+7h]
  _OWORD KeyValueInformation[2]; // [rsp+B8h] [rbp+17h] BYREF
  __int16 v40; // [rsp+D8h] [rbp+37h]

  v0 = 1;
  v1 = 0;
  v2 = 0;
  v3 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions");
  v34 = 48;
  p_DestinationString = &DestinationString;
  v35 = 0LL;
  v37 = 576;
  v38 = 0LL;
  ExAcquirePushLockSharedEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
  if ( ExpProductTypeKey )
  {
    while ( 1 )
    {
      v6 = CmOpenKey((unsigned int)&ValueName, 131103, (unsigned int)&v34, 0, 0LL);
      if ( v6 != -1073741670 )
        break;
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( v6 < 0 )
      KeBugCheckEx(0x9Au, 0xDuLL, (unsigned int)v6, 0LL, 0LL);
    v3 = ExpProductTypeKey;
    ExpProductTypeKey = *(HANDLE *)&ValueName.Length;
    if ( !ExpSetupModeDetected )
    {
      RtlInitUnicodeString(&ValueName, L"ProductType");
      v7 = NtQueryValueKey(
             ExpProductTypeKey,
             &ValueName,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x22u,
             &ResultLength);
      if ( v7 == -1073741670 )
      {
        Interval.QuadPart = -10000000LL;
        do
        {
          KeDelayExecutionThread(0, 0, &Interval);
          v7 = NtQueryValueKey(
                 ExpProductTypeKey,
                 &ValueName,
                 KeyValuePartialInformation,
                 KeyValueInformation,
                 0x22u,
                 &ResultLength);
        }
        while ( v7 == -1073741670 );
      }
      if ( v7 >= 0 )
      {
        v8 = L"LanmanNT";
        do
        {
          v9 = *(const wchar_t *)((char *)v8 + (char *)KeyValueInformation + 12 - (char *)L"LanmanNT");
          v10 = *v8 - v9;
          if ( v10 )
            break;
          ++v8;
        }
        while ( v9 );
        if ( !v10 )
          goto LABEL_47;
        v11 = L"ServerNT";
        do
        {
          v12 = *(const wchar_t *)((char *)v11 + (char *)KeyValueInformation + 12 - (char *)L"ServerNT");
          v13 = *v11 - v12;
          if ( v13 )
            break;
          ++v11;
        }
        while ( v12 );
        v14 = 0;
        if ( !v13 )
LABEL_47:
          v14 = 1;
        v15 = L"WinNT";
        v16 = (char *)(ExpProductTypeValueInfo + 12);
        do
        {
          v17 = *(const wchar_t *)((char *)v15 + ExpProductTypeValueInfo + 12 - (_QWORD)L"WinNT");
          v18 = *v15 - v17;
          if ( v18 )
            break;
          ++v15;
        }
        while ( v17 );
        if ( v18 && v14 )
        {
          v29 = ExpProductTypeValueInfo;
          v0 = 0;
          *(_OWORD *)ExpProductTypeValueInfo = KeyValueInformation[0];
          *(_OWORD *)(v29 + 16) = KeyValueInformation[1];
          *(_WORD *)(v29 + 32) = v40;
        }
        v19 = (char *)((char *)KeyValueInformation + 12 - v16);
        while ( 1 )
        {
          v20 = *(_WORD *)v16;
          if ( *(_WORD *)v16 != *(_WORD *)&v19[(_QWORD)v16] )
            break;
          v16 += 2;
          if ( !v20 )
          {
            v21 = 0;
            goto LABEL_23;
          }
        }
        v21 = v20 < *(_WORD *)&v19[(_QWORD)v16] ? -1 : 1;
LABEL_23:
        v0 = v21 != 0 ? v0 : 0;
      }
      updated = ExUpdateLicenseRegistry();
      if ( updated < 0 )
        KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)updated, 1uLL, 0LL);
      CmpLockRegistryFreezeAware(1);
      v1 = 1;
      v23 = NtSetValueKey(
              ExpProductTypeKey,
              &ValueName,
              0,
              *(_DWORD *)(ExpProductTypeValueInfo + 4),
              (PVOID)(ExpProductTypeValueInfo + 12),
              *(_DWORD *)(ExpProductTypeValueInfo + 8));
      if ( v23 == -1073741670 )
      {
        Interval.QuadPart = -10000000LL;
        do
        {
          KeDelayExecutionThread(0, 0, &Interval);
          v23 = NtSetValueKey(
                  ExpProductTypeKey,
                  &ValueName,
                  0,
                  *(_DWORD *)(ExpProductTypeValueInfo + 4),
                  (PVOID)(ExpProductTypeValueInfo + 12),
                  *(_DWORD *)(ExpProductTypeValueInfo + 8));
        }
        while ( v23 == -1073741670 );
      }
      if ( v23 < 0 )
        KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v23, 1uLL, 0LL);
      v24 = (ULONG *)qword_1403D1308;
      RtlInitUnicodeString(&ValueName, L"ProductSuite");
      if ( v24 )
      {
        v25 = NtSetValueKey(ExpProductTypeKey, &ValueName, 0, v24[1], v24 + 3, v24[2]);
        if ( v25 == -1073741670 )
        {
          Interval.QuadPart = -10000000LL;
          do
          {
            KeDelayExecutionThread(0, 0, &Interval);
            v25 = NtSetValueKey(
                    ExpProductTypeKey,
                    &ValueName,
                    0,
                    *((_DWORD *)qword_1403D1308 + 1),
                    (char *)qword_1403D1308 + 12,
                    *((_DWORD *)qword_1403D1308 + 2));
          }
          while ( v25 == -1073741670 );
        }
        if ( v25 < 0 )
          KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v25, 2uLL, 0LL);
      }
      else
      {
        NtDeleteValueKey(ExpProductTypeKey, &ValueName);
      }
    }
    while ( 1 )
    {
      v26 = NtNotifyChangeKey(
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
      v27 = v26;
      if ( v26 != -1073741670 )
        break;
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( v1 )
      CmpUnlockRegistry();
    if ( (v27 & 0x80000000) != 0LL )
      KeBugCheckEx(0x9Au, 0x11uLL, v27, 4uLL, 0LL);
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
  result = ExReleasePushLockEx((ULONG_PTR)&ExpKeyManipLock, 0LL, v4, v5);
  if ( v3 )
  {
    if ( v2 )
      NtFlushKey(v3);
    return ObCloseHandle(v3, 0);
  }
  return result;
}
