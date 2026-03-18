/*
 * XREFs of ?ReadLinearityData@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@U_UNICODE_STRING@@PEAX@Z @ 0x1C0013784
 * Callers:
 *     RetrieveCalibrationData @ 0x1C0013720 (RetrieveCalibrationData.c)
 * Callees:
 *     ?ReadLinearityDataImp@@YAHPEAXU_UNICODE_STRING@@W4tagCALIBRATION_TYPE@@PEAKPEAPEAE@Z @ 0x1C0013A54 (-ReadLinearityDataImp@@YAHPEAXU_UNICODE_STRING@@W4tagCALIBRATION_TYPE@@PEAKPEAPEAE@Z.c)
 *     RtlStringCchCopyNW @ 0x1C0013AC8 (RtlStringCchCopyNW.c)
 *     ?GetDeviceId@@YAJU_UNICODE_STRING@@PEAPEAG1@Z @ 0x1C0013B54 (-GetDeviceId@@YAJU_UNICODE_STRING@@PEAPEAG1@Z.c)
 */

__int64 __fastcall ReadLinearityData(struct tagHID_POINTER_DEVICE_INFO *a1, struct _UNICODE_STRING *a2, void *a3)
{
  PWSTR Buffer; // r13
  unsigned int v5; // edi
  const WCHAR *v7; // rsi
  __int64 v8; // rax
  _QWORD *v9; // rbx
  __int64 v10; // r14
  size_t v11; // rdi
  wchar_t *v12; // rax
  int v13; // r15d
  void *v14; // rcx
  struct _UNICODE_STRING v16; // [rsp+30h] [rbp-79h] BYREF
  struct _UNICODE_STRING v17; // [rsp+40h] [rbp-69h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-59h] BYREF
  struct _UNICODE_STRING v19; // [rsp+80h] [rbp-29h] BYREF
  struct _UNICODE_STRING v20; // [rsp+90h] [rbp-19h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-9h] BYREF
  struct _UNICODE_STRING v22; // [rsp+B0h] [rbp+7h] BYREF
  struct _UNICODE_STRING v23; // [rsp+C0h] [rbp+17h] BYREF
  void *KeyHandle; // [rsp+118h] [rbp+6Fh] BYREF
  STRSAFE_PCNZWCH pszSrc; // [rsp+128h] [rbp+7Fh] BYREF

  Buffer = a2->Buffer;
  *(_QWORD *)&v19.Length = 0LL;
  v5 = 0;
  v19.Buffer = 0LL;
  v7 = 0LL;
  v8 = Win32AllocPoolZInit(88LL, 2020635477LL);
  v9 = (_QWORD *)v8;
  if ( !v8 )
    return v5;
  v10 = v8 + 8;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\TabletPC\\LinearityData");
  RtlInitUnicodeString(&v22, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\TabletPC");
  RtlInitUnicodeString(&v20, L"LinearityData");
  v17 = v20;
  v5 = ReadLinearityDataImp(a3, &v17, 1LL, v10, v9);
  if ( v5 )
    goto LABEL_27;
  if ( Buffer )
  {
    v16 = *a2;
    pszSrc = 0LL;
    *(_QWORD *)&v17.Length = 0LL;
    if ( (int)GetDeviceId(&v16, (unsigned __int16 **)&pszSrc, (unsigned __int16 **)&v17) >= 0 )
    {
      v11 = (__int64)(*(_QWORD *)&v17.Length - (_QWORD)pszSrc) >> 1;
      v12 = (wchar_t *)Win32AllocPool(2 * v11 + 2, 2020635477LL);
      v7 = v12;
      if ( v12 )
      {
        RtlStringCchCopyNW(v12, v11 + 1, pszSrc, v11);
        RtlInitUnicodeString(&v19, v7);
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
        {
          v16 = v19;
          v5 = ReadLinearityDataImp(KeyHandle, &v16, 1LL, v10, v9);
          ZwClose(KeyHandle);
          if ( v5 )
            goto LABEL_16;
        }
      }
    }
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v22;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  v13 = 0;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
  {
    v14 = a3;
    KeyHandle = a3;
  }
  else
  {
    v14 = KeyHandle;
    v13 = 1;
  }
  v16 = v20;
  v5 = ReadLinearityDataImp(v14, &v16, 1LL, v10, v9);
  if ( v13 )
    ZwClose(KeyHandle);
  if ( v5
    || (RtlInitUnicodeString(&v16, L"UserLinearityData"),
        v17 = v16,
        (v5 = ReadLinearityDataImp(a3, &v17, 2LL, v10, v9)) != 0) )
  {
LABEL_16:
    if ( v7 )
      Win32FreePool(v7);
    if ( !v5 )
      goto LABEL_19;
LABEL_27:
    *((_QWORD *)a1 + 40) = v9;
    return v5;
  }
  if ( v7 )
  {
    RtlInitUnicodeString(&v16, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\TabletPC\\UserLinearityData");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &v16;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString(&v17, v7);
      v23 = v17;
      v5 = ReadLinearityDataImp(KeyHandle, &v23, 2LL, v10, v9);
      ZwClose(KeyHandle);
    }
    goto LABEL_16;
  }
LABEL_19:
  if ( *v9 )
  {
    Win32FreePool(*v9);
    *v9 = 0LL;
  }
  Win32FreePool(v9);
  return v5;
}
