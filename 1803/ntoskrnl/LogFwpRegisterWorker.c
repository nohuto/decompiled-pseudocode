/*
 * XREFs of LogFwpRegisterWorker @ 0x14083C890
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1401A7860 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401A80C0 (ZwSetValueKey.c)
 */

int LogFwpRegisterWorker()
{
  int result; // eax
  NTSTATUS v1; // eax
  HANDLE v2; // rcx
  int v3; // ebx
  int *v4; // rbx
  HANDLE KeyHandle; // [rsp+40h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp+Fh] BYREF
  int Data; // [rsp+B8h] [rbp+6Fh] BYREF
  ULONG Disposition; // [rsp+C0h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp+7Fh] BYREF

  KeyHandle = 0LL;
  Handle = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"BGFX");
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v1 = ZwCreateKey(&Handle, 0x20019u, &ObjectAttributes, 0, 0LL, 1u, &Disposition);
    v2 = KeyHandle;
    if ( v1 >= 0 )
    {
      v3 = dword_1403D1870;
      ZwClose(KeyHandle);
      RtlInitUnicodeString(&DestinationString, L"Resume");
      Data = (v3 & 0x100000) != 0;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"Width");
      Data = qword_1403D1888;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"Height");
      Data = HIDWORD(qword_1403D1888);
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"BPP");
      Data = dword_1403D1820;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"LogoSize");
      Data = Size;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"ProgressFrames");
      Data = dword_1403D1868;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"ProgressMemory");
      Data = dword_14039D810;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"ProgressProlog");
      Data = 1000000 * qword_1403D1878 / qword_14039B980;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"ProgressLow");
      Data = 1000000 * qword_14039B978 / qword_14039B980;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"ProgressHigh");
      Data = 1000000 * qword_1403D1818 / qword_14039B980;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      v4 = (int *)qword_14039D820;
      if ( qword_14039D820 )
      {
        RtlInitUnicodeString(&DestinationString, L"ResidentSize");
        Data = *v4;
        ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      }
      RtlInitUnicodeString(&DestinationString, L"ProgressTotal");
      Data = 1000000 * qword_1403D1860 / qword_14039B980;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"ProgressManual");
      Data = 1000000 * qword_1403D1850 / qword_14039B980;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeProlog");
      Data = 1000000 * qword_1403D1880 / qword_14039B980;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeOverlap");
      Data = dword_1403D18A0;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeIo");
      Data = dword_1403D186C;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeCpu");
      Data = dword_1403D1838;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeFrames");
      Data = dword_1403D183C;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeMemory");
      Data = dword_14039D80C;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeLow");
      Data = 1000000 * qword_14039B988 / qword_14039B980;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeHigh");
      Data = 1000000 * qword_1403D1828 / qword_14039B980;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeTotal");
      Data = 1000000 * qword_1403D1848 / qword_14039B980;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"AnimationTotal");
      Data = 1000000 * qword_1403D1840 / qword_14039B980;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"CompressBitmaps");
      Data = 1000000 * qword_1403E9AD0 / qword_14039B980;
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      v2 = Handle;
    }
    return ZwClose(v2);
  }
  return result;
}
