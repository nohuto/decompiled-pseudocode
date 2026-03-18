/*
 * XREFs of PiSwCompleteCreate @ 0x1405C59F0
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x1405C53E0 (PiSwPdoPnPDispatch.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x14006D198 (RtlStringCbCopyW.c)
 *     RtlStringCbLengthW @ 0x140075A6C (RtlStringCbLengthW.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     IofCompleteRequest @ 0x1400FA080 (IofCompleteRequest.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     PnpAllocatePWSTR @ 0x1405045F0 (PnpAllocatePWSTR.c)
 *     PnpFreeDevPropertyArray @ 0x14050AC0C (PnpFreeDevPropertyArray.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x14050AE00 (_CmGetDeviceInterfaceClassGuid.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x1405C2238 (_CmGetDeviceInterfaceReferenceString.c)
 *     PiSwFreeInterfaceList @ 0x1405C5D5C (PiSwFreeInterfaceList.c)
 *     PiSwPropertySet @ 0x1405C6324 (PiSwPropertySet.c)
 *     PnpCopyDevPropertyArray @ 0x1405C6EA4 (PnpCopyDevPropertyArray.c)
 *     IoRegisterDeviceInterface @ 0x1405F5A00 (IoRegisterDeviceInterface.c)
 *     PiSwInterfaceCreate @ 0x140646B8C (PiSwInterfaceCreate.c)
 */

void __fastcall PiSwCompleteCreate(struct _DEVICE_OBJECT *Object)
{
  size_t v1; // rbx
  __int64 v3; // r14
  struct _DEVICE_OBJECT *v4; // r12
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *DeviceExtension; // rax
  __int64 v7; // rsi
  void *v8; // rcx
  NTSTRSAFE_PCWSTR *v9; // rdi
  int PWSTR; // edi
  int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 *v14; // r15
  __int64 *i; // rsi
  __int64 v16; // rcx
  char *v17; // r15
  __int64 **j; // rsi
  __int64 **v19; // rcx
  __int64 **v20; // rax
  __int64 v21; // rcx
  int DeviceInterfaceReferenceString; // eax
  char v23; // di
  __int64 v24; // [rsp+38h] [rbp-D0h] BYREF
  __int64 *v25; // [rsp+40h] [rbp-C8h] BYREF
  __int64 **v26; // [rsp+48h] [rbp-C0h]
  char *v27; // [rsp+50h] [rbp-B8h] BYREF
  NTSTRSAFE_PCWSTR *v28; // [rsp+58h] [rbp-B0h]
  size_t pcbLength; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+68h] [rbp-A0h] BYREF
  PCWSTR SourceString; // [rsp+70h] [rbp-98h] BYREF
  __int64 ***v32; // [rsp+78h] [rbp-90h]
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  GUID InterfaceClassGuid; // [rsp+A0h] [rbp-68h] BYREF
  WCHAR v36[264]; // [rsp+B8h] [rbp-50h] BYREF

  v1 = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v3 = 0LL;
  v28 = 0LL;
  v26 = &v25;
  v4 = 0LL;
  v27 = 0LL;
  v25 = (__int64 *)&v25;
  CurrentThread = KeGetCurrentThread();
  LODWORD(v24) = 0;
  pcbLength = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  DeviceExtension = Object->DeviceExtension;
  v7 = *(_QWORD *)DeviceExtension;
  if ( *(_QWORD *)DeviceExtension )
  {
    DeviceExtension[2] &= 0xFFFFFFF9;
    v8 = *(void **)(v7 + 80);
    v9 = (NTSTRSAFE_PCWSTR *)((char *)Object->DeviceObjectExtension->DeviceNode + 40);
    v28 = v9;
    if ( v8 )
    {
      ExFreePoolWithTag(v8, 0x57706E50u);
      *(_QWORD *)(v7 + 72) = 0LL;
      *(_QWORD *)(v7 + 80) = 0LL;
    }
    PWSTR = PnpAllocatePWSTR(
              v9[1],
              ((unsigned __int64)*(unsigned __int16 *)v9 >> 1) + 1,
              0x57706E50u,
              (PVOID *)&SourceString);
    if ( PWSTR >= 0 )
    {
      RtlInitUnicodeString((PUNICODE_STRING)(v7 + 72), SourceString);
      *(_DWORD *)(v7 + 4) |= 4u;
      if ( !*(_QWORD *)(v7 + 88) )
      {
        v12 = *(_QWORD *)(v7 + 144);
        if ( !v12
          || !_InterlockedExchange64((volatile __int64 *)(v12 + 104), 0LL)
          || (v3 = *(_QWORD *)(v7 + 144), *(_QWORD *)(v7 + 144) = 0LL, !v3)
          || (v13 = *(_QWORD *)(v3 + 184),
              PWSTR = RtlStringCbCopyW(
                        *(NTSTRSAFE_PWSTR *)(v3 + 24),
                        *(unsigned int *)(v13 + 8),
                        *(NTSTRSAFE_PCWSTR *)(v7 + 80)),
              PWSTR >= 0)
          && (PWSTR = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(v3 + 24), *(unsigned int *)(v13 + 8), &pcbLength),
              PWSTR >= 0) )
        {
          PWSTR = PnpCopyDevPropertyArray(
                    *(_DWORD *)(v7 + 176),
                    *(_QWORD *)(v7 + 168),
                    v11,
                    (unsigned int)&v24,
                    (__int64)&v27);
          if ( PWSTR >= 0 )
          {
            v14 = (__int64 *)(v7 + 184);
            for ( i = *(__int64 **)(v7 + 184); i != v14; i = (__int64 *)*i )
            {
              PWSTR = PiSwInterfaceCreate((NTSTRSAFE_PCWSTR)i[2]);
              if ( PWSTR < 0 )
                goto LABEL_15;
              v19 = v26;
              if ( *v26 != (__int64 *)&v25 )
                __fastfail(3u);
              v20 = (__int64 **)v32;
              *v32 = &v25;
              v20[1] = (__int64 *)v19;
              *v19 = (__int64 *)v20;
              v26 = v20;
            }
            v4 = Object;
            ObfReferenceObject(Object);
          }
        }
      }
    }
  }
  else
  {
    PWSTR = -1073741811;
  }
LABEL_15:
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v17 = v27;
  if ( PWSTR >= 0 )
  {
    if ( v27 )
      PWSTR = PiSwPropertySet(v28[1], 1LL, v27, (unsigned int)v24);
    for ( j = (__int64 **)v25; j != &v25; j = (__int64 **)*j )
    {
      PWSTR = CmGetDeviceInterfaceClassGuid(v16, (__int64)j[2], &InterfaceClassGuid);
      if ( PWSTR < 0 )
        break;
      DeviceInterfaceReferenceString = CmGetDeviceInterfaceReferenceString(
                                         v21,
                                         (__int64)j[2],
                                         v36,
                                         0x104u,
                                         (unsigned int *)&v30);
      PWSTR = DeviceInterfaceReferenceString;
      if ( DeviceInterfaceReferenceString == -1073741772 )
      {
        v23 = 0;
      }
      else
      {
        if ( DeviceInterfaceReferenceString < 0 )
          break;
        v23 = 1;
        RtlInitUnicodeString(&DestinationString, v36);
      }
      PWSTR = IoRegisterDeviceInterface(
                v4,
                &InterfaceClassGuid,
                (PUNICODE_STRING)((unsigned __int64)&DestinationString & -(__int64)(v23 != 0)),
                &UnicodeString);
      if ( PWSTR < 0 )
        break;
      PWSTR = PiSwPropertySet(j[2], 3LL, j[3], *((unsigned int *)j + 8));
      if ( PWSTR < 0 )
        break;
    }
  }
  if ( v4 )
    ObfDereferenceObject(v4);
  if ( v17 )
    PnpFreeDevPropertyArray(v24, v17, 0x57706E50u);
  PiSwFreeInterfaceList(&v25);
  RtlFreeAnsiString(&UnicodeString);
  if ( v3 )
  {
    if ( PWSTR >= 0 )
      v1 = pcbLength + 2;
    *(_QWORD *)(v3 + 56) = v1;
    *(_DWORD *)(v3 + 48) = PWSTR;
    IofCompleteRequest((PIRP)v3, 0);
  }
}
