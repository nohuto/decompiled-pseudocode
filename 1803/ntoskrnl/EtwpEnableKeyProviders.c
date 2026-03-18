/*
 * XREFs of EtwpEnableKeyProviders @ 0x14062A460
 * Callers:
 *     EtwpInitializeAutoLoggers @ 0x14063DCC0 (EtwpInitializeAutoLoggers.c)
 * Callees:
 *     RtlStringCbCatW @ 0x140073A90 (RtlStringCbCatW.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1401A7B00 (ZwEnumerateKey.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlWriteRegistryValue @ 0x140579A30 (RtlWriteRegistryValue.c)
 *     RtlNtStatusToDosError @ 0x1405B74B0 (RtlNtStatusToDosError.c)
 *     EtwpEnableAutoLoggerProviders @ 0x14062A638 (EtwpEnableAutoLoggerProviders.c)
 */

void __fastcall EtwpEnableKeyProviders(int a1, __int64 a2, const wchar_t *a3, unsigned int *a4, ULONG ValueData)
{
  __int64 v6; // rax
  SIZE_T v10; // rbx
  wchar_t *PoolWithTag; // rax
  wchar_t *v12; // r12
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  wchar_t *v15; // rcx
  char *v16; // r9
  wchar_t v17; // ax
  ULONG v18; // edi
  int v19; // ebx
  unsigned __int64 v20; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-78h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-70h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-68h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-58h] BYREF

  ValueData = 0;
  v6 = -1LL;
  while ( a3[++v6] != 0 )
    ;
  v10 = (unsigned int)(2 * v6 + 104);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v10, 0x50777445u);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    return;
  v13 = (unsigned __int64)(unsigned int)v10 >> 1;
  if ( v13 )
  {
    v14 = 2147483646 - v13;
    v15 = PoolWithTag;
    v16 = (char *)((char *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\" - (char *)PoolWithTag);
    while ( v14 + v13 )
    {
      v17 = *(wchar_t *)((char *)v15 + (_QWORD)v16);
      if ( !v17 )
        break;
      *v15++ = v17;
      if ( !--v13 )
      {
        --v15;
        break;
      }
    }
    *v15 = 0;
  }
  RtlStringCbCatW(v12, v10, a3);
  RtlInitUnicodeString(&DestinationString, v12);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    goto LABEL_18;
  v18 = 0;
  do
  {
    v19 = ZwEnumerateKey(KeyHandle, v18, KeyBasicInformation, a4, 0x11Eu, &ResultLength);
    v20 = a4[3];
    if ( v20 >= 0x108 )
    {
      v19 = -2147483643;
LABEL_23:
      ValueData = RtlNtStatusToDosError(v19);
      RtlWriteRegistryValue(2u, a3, L"EnableStatus", 4u, &ValueData, 4u);
      goto LABEL_16;
    }
    if ( v19 >= 0 )
    {
      *((_WORD *)a4 + (v20 >> 1) + 8) = 0;
      EtwpEnableAutoLoggerProviders(a1);
      goto LABEL_16;
    }
    if ( v19 != -2147483622 )
      goto LABEL_23;
LABEL_16:
    ++v18;
  }
  while ( v19 >= 0 );
  ZwClose(KeyHandle);
LABEL_18:
  ExFreePoolWithTag(v12, 0);
}
