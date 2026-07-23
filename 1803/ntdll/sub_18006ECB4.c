/*
 * XREFs of sub_18006ECB4 @ 0x18006ECB4
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180032530 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180034D10 (RtlpCreateProcessRegistryInfo.c)
 *     sub_18006E740 @ 0x18006E740 (sub_18006E740.c)
 *     RtlpInitializeLangRegistryInfo @ 0x18006E8F0 (RtlpInitializeLangRegistryInfo.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x18006EE10 (RtlpMuiRegLoadRegistryInfo.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18006EF00 (RtlpMuiRegFreeRegistryInfo.c)
 *     sub_18006F918 @ 0x18006F918 (sub_18006F918.c)
 *     sub_18006F938 @ 0x18006F938 (sub_18006F938.c)
 *     sub_18006FB8C @ 0x18006FB8C (sub_18006FB8C.c)
 *     sub_18006FE14 @ 0x18006FE14 (sub_18006FE14.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     ZwGetMUIRegistryInfo @ 0x18009C890 (ZwGetMUIRegistryInfo.c)
 *     RtlpMuiRegCreateRegistryInfo @ 0x1800F8C60 (RtlpMuiRegCreateRegistryInfo.c)
 */

__int64 __fastcall sub_18006ECB4(_QWORD *a1)
{
  _DWORD *v1; // rbx
  PVOID Heap; // rax
  void *v4; // rsi
  int v5; // edi
  void *RegistryInfo; // rax
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG DataSize; // [rsp+A0h] [rbp+30h] BYREF
  PVOID BaseAddress; // [rsp+A8h] [rbp+38h] BYREF
  HANDLE KeyHandle; // [rsp+B0h] [rbp+40h] BYREF
  HANDLE CurrentUserKey; // [rsp+B8h] [rbp+48h] BYREF

  v1 = 0LL;
  BaseAddress = 0LL;
  if ( !a1 || *a1 )
  {
    v5 = -1073741811;
    goto LABEL_16;
  }
  DataSize = 0;
  if ( ZwGetMUIRegistryInfo(0, &DataSize, 0LL) < 0 )
  {
LABEL_20:
    RegistryInfo = (void *)RtlpMuiRegCreateRegistryInfo();
    BaseAddress = RegistryInfo;
    v1 = RegistryInfo;
    if ( RegistryInfo )
    {
      v5 = RtlpMuiRegLoadRegistryInfo(RegistryInfo, 4095LL);
      if ( v5 >= 0 )
      {
        v5 = 0;
        v1[3] = MEMORY[0x7FFE03A4];
      }
      else
      {
        RtlpMuiRegFreeRegistryInfo(v1, 4095LL);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
        v1 = 0LL;
      }
      goto LABEL_16;
    }
LABEL_18:
    v5 = -1073741801;
    goto LABEL_16;
  }
  if ( DataSize )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, DataSize);
    v1 = BaseAddress;
    v4 = Heap;
  }
  else
  {
    v4 = 0LL;
  }
  if ( !v4 )
    goto LABEL_18;
  if ( ZwGetMUIRegistryInfo(0, &DataSize, v4) < 0
    || (int)sub_18006FE14(v4, DataSize, &BaseAddress) < 0
    || (v1 = BaseAddress, v5 = sub_18006FB8C(BaseAddress), v5 < 0) )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
    goto LABEL_20;
  }
  if ( *((_QWORD *)v1 + 5) && (int)sub_18006F938(0x2000000u, &CurrentUserKey) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration");
    KeyHandle = 0LL;
    ObjectAttributes.RootDirectory = CurrentUserKey;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlpMuiRegLoadRegistryInfo(v1, 4LL);
      ZwClose(KeyHandle);
    }
    sub_18006F918(CurrentUserKey);
  }
  RtlpMuiRegLoadRegistryInfo(v1, 568LL);
LABEL_16:
  *a1 = v1;
  return (unsigned int)v5;
}
