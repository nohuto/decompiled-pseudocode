/*
 * XREFs of PiSwCompleteCreate @ 0x1405BAE84
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x1405BA930 (PiSwPdoPnPDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x1400713B0 (IofCompleteRequest.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyW @ 0x1400DF4A4 (RtlStringCbCopyW.c)
 *     RtlStringCbLengthW @ 0x1400E0214 (RtlStringCbLengthW.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x14044B688 (_CmGetDeviceInterfaceReferenceString.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x14051C8E0 (_CmGetDeviceInterfaceClassGuid.c)
 *     PnpAllocatePWSTR @ 0x140524F08 (PnpAllocatePWSTR.c)
 *     PnpFreeDevPropertyArray @ 0x140526CC4 (PnpFreeDevPropertyArray.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     IoRegisterDeviceInterface @ 0x140590360 (IoRegisterDeviceInterface.c)
 *     PiSwPropertySet @ 0x1405997C8 (PiSwPropertySet.c)
 *     PiSwFreeInterfaceList @ 0x1405BB1F4 (PiSwFreeInterfaceList.c)
 *     PnpCopyDevPropertyArray @ 0x1405BB72C (PnpCopyDevPropertyArray.c)
 *     PiSwInterfaceCreate @ 0x1405E26E4 (PiSwInterfaceCreate.c)
 */

void __fastcall PiSwCompleteCreate(struct _DEVICE_OBJECT *Object)
{
  int PWSTR; // ebx
  __int64 v3; // rsi
  NTSTRSAFE_PCWSTR *v4; // r13
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
  void *v16; // r14
  __int64 *j; // rdi
  __int64 **v18; // rcx
  __int64 **v19; // rax
  __int64 v20; // rcx
  int DeviceInterfaceReferenceString; // eax
  char v22; // bl
  __int64 v23; // [rsp+38h] [rbp-D0h] BYREF
  __int64 *v24; // [rsp+40h] [rbp-C8h] BYREF
  __int64 **v25; // [rsp+48h] [rbp-C0h]
  void *v26; // [rsp+50h] [rbp-B8h] BYREF
  size_t pcbLength; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A8h] BYREF
  PCWSTR SourceString; // [rsp+68h] [rbp-A0h] BYREF
  __int64 ***v30; // [rsp+70h] [rbp-98h]
  UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  GUID InterfaceClassGuid; // [rsp+98h] [rbp-70h] BYREF
  WCHAR v34[264]; // [rsp+A8h] [rbp-60h] BYREF

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
    v4 = (NTSTRSAFE_PCWSTR *)((char *)Object->DeviceObjectExtension->DeviceNode + 40);
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0x57706E50u);
      *(_QWORD *)(v9 + 72) = 0LL;
      *(_QWORD *)(v9 + 80) = 0LL;
    }
    if ( !*(_QWORD *)(v9 + 80) )
    {
      PWSTR = PnpAllocatePWSTR(
                v4[1],
                ((unsigned __int64)*(unsigned __int16 *)v4 >> 1) + 1,
                0x57706E50u,
                (PVOID *)&SourceString);
      if ( PWSTR < 0 )
        goto LABEL_17;
      RtlInitUnicodeString((PUNICODE_STRING)(v9 + 72), SourceString);
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
            PWSTR = PiSwInterfaceCreate((NTSTRSAFE_PCWSTR)i[2]);
            if ( PWSTR < 0 )
              goto LABEL_17;
            v18 = v25;
            if ( *v25 != (__int64 *)&v24 )
              __fastfail(3u);
            v19 = (__int64 **)v30;
            *v30 = &v24;
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v16 = v26;
  if ( PWSTR >= 0 )
  {
    if ( v26 )
      PWSTR = PiSwPropertySet(v4[1], 1u, (__int64)v26, v23);
    for ( j = v24; j != (__int64 *)&v24; j = (__int64 *)*j )
    {
      PWSTR = CmGetDeviceInterfaceClassGuid(v15, j[2], &InterfaceClassGuid);
      if ( PWSTR < 0 )
        break;
      DeviceInterfaceReferenceString = CmGetDeviceInterfaceReferenceString(v20, j[2], v34, 0x104u, (unsigned int *)&v28);
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
        RtlInitUnicodeString(&DestinationString, v34);
      }
      PWSTR = IoRegisterDeviceInterface(
                v6,
                &InterfaceClassGuid,
                (PUNICODE_STRING)((unsigned __int64)&DestinationString & -(__int64)(v22 != 0)),
                &UnicodeString);
      if ( PWSTR < 0 )
        break;
      PWSTR = PiSwPropertySet((const WCHAR *)j[2], 3u, j[3], *((_DWORD *)j + 8));
      if ( PWSTR < 0 )
        break;
    }
  }
  if ( v6 )
    ObfDereferenceObject(v6);
  if ( v16 )
    PnpFreeDevPropertyArray(v23, v16, 0x57706E50u);
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
