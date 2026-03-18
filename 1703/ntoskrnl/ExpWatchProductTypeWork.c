/*
 * XREFs of ExpWatchProductTypeWork @ 0x140455830
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     NtFlushKey @ 0x140455BC8 (NtFlushKey.c)
 *     ExUpdateLicenseRegistry @ 0x140455E24 (ExUpdateLicenseRegistry.c)
 *     NtSetValueKey @ 0x14048EDA0 (NtSetValueKey.c)
 *     NtNotifyChangeKey @ 0x140491EB8 (NtNotifyChangeKey.c)
 *     NtDeleteValueKey @ 0x1404CE698 (NtDeleteValueKey.c)
 *     CmpLockRegistryFreezeAware @ 0x1404D8558 (CmpLockRegistryFreezeAware.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     NtQueryValueKey @ 0x1405074B0 (NtQueryValueKey.c)
 *     CmOpenKey @ 0x14052CA30 (CmOpenKey.c)
 *     PsCreateSystemThreadEx @ 0x1405679C0 (PsCreateSystemThreadEx.c)
 */

NTSTATUS ExpWatchProductTypeWork()
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
  char v12; // r11
  __int64 v13; // rdx
  const wchar_t *v14; // rax
  char *v15; // rcx
  int v16; // r9d
  int v17; // r8d
  char *v18; // rdx
  unsigned __int16 v19; // ax
  int v20; // eax
  int updated; // eax
  __int64 v22; // rcx
  NTSTATUS v23; // eax
  ULONG *v24; // rdi
  NTSTATUS v25; // eax
  unsigned int v26; // eax
  ULONG_PTR v27; // rdi
  NTSTATUS result; // eax
  LARGE_INTEGER Interval; // [rsp+58h] [rbp-49h] BYREF
  UNICODE_STRING ValueName; // [rsp+60h] [rbp-41h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-29h] BYREF
  int v33; // [rsp+88h] [rbp-19h] BYREF
  __int64 v34; // [rsp+90h] [rbp-11h]
  UNICODE_STRING *p_DestinationString; // [rsp+98h] [rbp-9h]
  int v36; // [rsp+A0h] [rbp-1h]
  __int128 v37; // [rsp+A8h] [rbp+7h]
  _OWORD KeyValueInformation[2]; // [rsp+B8h] [rbp+17h] BYREF
  __int16 v39; // [rsp+D8h] [rbp+37h]

  v0 = 1;
  v1 = 0;
  v2 = 0;
  v3 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions");
  v33 = 48;
  p_DestinationString = &DestinationString;
  v34 = 0LL;
  v36 = 576;
  v37 = 0LL;
  ExAcquirePushLockSharedEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
  if ( ExpProductTypeKey )
  {
    while ( 1 )
    {
      v4 = CmOpenKey((unsigned int)&ValueName, 131103, (unsigned int)&v33, 0, 0LL);
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
        v13 = ExpProductTypeValueInfo;
        v14 = L"WinNT";
        v15 = (char *)(ExpProductTypeValueInfo + 12);
        do
        {
          v16 = *(const wchar_t *)((char *)v14 + ExpProductTypeValueInfo + 12 - (_QWORD)L"WinNT");
          v17 = *v14 - v16;
          if ( v17 )
            break;
          ++v14;
        }
        while ( v16 );
        if ( v17 && v12 )
        {
          v0 = 0;
          *(_OWORD *)ExpProductTypeValueInfo = KeyValueInformation[0];
          *(_OWORD *)(v13 + 16) = KeyValueInformation[1];
          *(_WORD *)(v13 + 32) = v39;
        }
        v18 = (char *)((char *)KeyValueInformation + 12 - v15);
        while ( 1 )
        {
          v19 = *(_WORD *)v15;
          if ( *(_WORD *)v15 != *(_WORD *)&v18[(_QWORD)v15] )
            break;
          v15 += 2;
          if ( !v19 )
          {
            v20 = 0;
            goto LABEL_26;
          }
        }
        v20 = v19 < *(_WORD *)&v18[(_QWORD)v15] ? -1 : 1;
LABEL_26:
        v0 = v20 != 0 ? v0 : 0;
      }
      updated = ExUpdateLicenseRegistry();
      if ( updated < 0 )
        KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)updated, 1uLL, 0LL);
      LOBYTE(v22) = 1;
      CmpLockRegistryFreezeAware(v22);
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
      v24 = (ULONG *)qword_14036EDE8;
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
                    *((_DWORD *)qword_14036EDE8 + 1),
                    (char *)qword_14036EDE8 + 12,
                    *((_DWORD *)qword_14036EDE8 + 2));
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
                    (unsigned int)&ValueName,
                    0x1FFFFF,
                    0,
                    0,
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
