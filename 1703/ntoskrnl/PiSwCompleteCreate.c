/*
 * XREFs of PiSwCompleteCreate @ 0x14045F814
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x14045F1F0 (PiSwPdoPnPDispatch.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x14003D760 (RtlStringCbLengthW.c)
 *     RtlStringCbCopyW @ 0x14004C84C (RtlStringCbCopyW.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     IofCompleteRequest @ 0x1400DEE40 (IofCompleteRequest.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PiSwInterfaceCreate @ 0x14045F13C (PiSwInterfaceCreate.c)
 *     PiSwFreeInterfaceList @ 0x14045FB84 (PiSwFreeInterfaceList.c)
 *     PnpCopyDevPropertyArray @ 0x1404604F4 (PnpCopyDevPropertyArray.c)
 *     PiSwPropertySet @ 0x140460E50 (PiSwPropertySet.c)
 *     PnpAllocatePWSTR @ 0x1404875B0 (PnpAllocatePWSTR.c)
 *     PnpFreeDevPropertyArray @ 0x1404B9DD0 (PnpFreeDevPropertyArray.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x1404E16A4 (_CmGetDeviceInterfaceClassGuid.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x14056C174 (_CmGetDeviceInterfaceReferenceString.c)
 *     IoRegisterDeviceInterface @ 0x1405C2650 (IoRegisterDeviceInterface.c)
 */

void __fastcall PiSwCompleteCreate(struct _DEVICE_OBJECT *Object)
{
  int PWSTR; // ebx
  __int64 v3; // rsi
  __int64 v4; // r13
  struct _KTHREAD *CurrentThread; // rax
  struct _DEVICE_OBJECT *v6; // r12
  int v7; // r8d
  _DWORD *DeviceExtension; // rax
  __int64 v9; // rdi
  void *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 *v13; // r14
  __int64 *i; // rdi
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 **j; // rdi
  __int64 **v18; // rcx
  __int64 **v19; // rax
  __int64 v20; // rcx
  int DeviceInterfaceReferenceString; // eax
  char v22; // bl
  __int64 v23; // [rsp+38h] [rbp-D0h] BYREF
  __int64 *v24; // [rsp+40h] [rbp-C8h] BYREF
  __int64 **v25; // [rsp+48h] [rbp-C0h]
  __int64 v26; // [rsp+50h] [rbp-B8h] BYREF
  size_t pcbLength; // [rsp+58h] [rbp-B0h] BYREF
  PCWSTR v28[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 ***v29; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  GUID InterfaceClassGuid; // [rsp+98h] [rbp-70h] BYREF
  WCHAR v33[264]; // [rsp+A8h] [rbp-60h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  PWSTR = 0;
  v26 = 0LL;
  v25 = &v24;
  v3 = 0LL;
  LODWORD(v23) = 0;
  v24 = (__int64 *)&v24;
  v4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  pcbLength = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  DeviceExtension = Object->DeviceExtension;
  v9 = *(_QWORD *)DeviceExtension;
  if ( *(_QWORD *)DeviceExtension )
  {
    DeviceExtension[2] &= 0xFFFFFFF9;
    v10 = *(void **)(v9 + 80);
    v4 = (__int64)Object->DeviceObjectExtension->DeviceNode + 40;
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0x57706E50u);
      *(_QWORD *)(v9 + 72) = 0LL;
      *(_QWORD *)(v9 + 80) = 0LL;
    }
    if ( !*(_QWORD *)(v9 + 80) )
    {
      PWSTR = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(v4 + 8));
      if ( PWSTR < 0 )
        goto LABEL_17;
      RtlInitUnicodeString((PUNICODE_STRING)(v9 + 72), v28[1]);
    }
    *(_DWORD *)(v9 + 4) |= 4u;
    if ( !*(_QWORD *)(v9 + 88) )
    {
      v11 = *(_QWORD *)(v9 + 144);
      if ( !v11
        || !_InterlockedExchange64((volatile __int64 *)(v11 + 104), 0LL)
        || (v3 = *(_QWORD *)(v9 + 144), *(_QWORD *)(v9 + 144) = 0LL, !v3)
        || (v12 = *(_QWORD *)(v3 + 184),
            PWSTR = RtlStringCbCopyW(
                      *(NTSTRSAFE_PWSTR *)(v3 + 24),
                      *(unsigned int *)(v12 + 8),
                      *(NTSTRSAFE_PCWSTR *)(v9 + 80)),
            PWSTR >= 0)
        && (PWSTR = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(v3 + 24), *(unsigned int *)(v12 + 8), &pcbLength), PWSTR >= 0) )
      {
        PWSTR = PnpCopyDevPropertyArray(
                  *(_DWORD *)(v9 + 176),
                  *(_QWORD *)(v9 + 168),
                  v7,
                  (unsigned int)&v23,
                  (__int64)&v26);
        if ( PWSTR >= 0 )
        {
          v13 = (__int64 *)(v9 + 184);
          for ( i = *(__int64 **)(v9 + 184); i != v13; i = (__int64 *)*i )
          {
            PWSTR = PiSwInterfaceCreate((NTSTRSAFE_PCWSTR)i[2], i[3], *((_DWORD *)i + 8), &v29);
            if ( PWSTR < 0 )
              goto LABEL_17;
            v18 = v25;
            if ( *v25 != (__int64 *)&v24 )
              __fastfail(3u);
            v19 = (__int64 **)v29;
            *v29 = &v24;
            v19[1] = (__int64 *)v18;
            *v18 = (__int64 *)v19;
            v25 = v19;
          }
          v6 = Object;
          ObfReferenceObject(Object);
        }
      }
    }
  }
  else
  {
    PWSTR = -1073741811;
  }
LABEL_17:
  ExReleaseResourceLite(&PiSwLockObj);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v16 = v26;
  if ( PWSTR >= 0 )
  {
    if ( v26 )
      PWSTR = PiSwPropertySet(*(_QWORD *)(v4 + 8), 1LL, v26, (unsigned int)v23);
    for ( j = (__int64 **)v24; j != &v24; j = (__int64 **)*j )
    {
      PWSTR = CmGetDeviceInterfaceClassGuid(v15, j[2], &InterfaceClassGuid);
      if ( PWSTR < 0 )
        break;
      DeviceInterfaceReferenceString = CmGetDeviceInterfaceReferenceString(v20, j[2], v33, 260LL, v28);
      PWSTR = DeviceInterfaceReferenceString;
      if ( DeviceInterfaceReferenceString == -1073741772 )
      {
        v22 = 0;
      }
      else
      {
        if ( DeviceInterfaceReferenceString < 0 )
          break;
        v22 = 1;
        RtlInitUnicodeString(&DestinationString, v33);
      }
      PWSTR = IoRegisterDeviceInterface(
                v6,
                &InterfaceClassGuid,
                (PUNICODE_STRING)((unsigned __int64)&DestinationString & -(__int64)(v22 != 0)),
                &UnicodeString);
      if ( PWSTR < 0 )
        break;
      PWSTR = PiSwPropertySet(j[2], 3LL, j[3], *((unsigned int *)j + 8));
      if ( PWSTR < 0 )
        break;
    }
  }
  if ( v6 )
    ObfDereferenceObject(v6);
  if ( v16 )
    PnpFreeDevPropertyArray((unsigned int)v23, v16, 1466986064LL);
  PiSwFreeInterfaceList(&v24);
  RtlFreeUnicodeString(&UnicodeString);
  if ( v3 )
  {
    if ( PWSTR < 0 )
      *(_QWORD *)(v3 + 56) = 0LL;
    else
      *(_QWORD *)(v3 + 56) = pcbLength + 2;
    *(_DWORD *)(v3 + 48) = PWSTR;
    IofCompleteRequest((PIRP)v3, 0);
  }
}
