/*
 * XREFs of PipGenerateContainerID @ 0x140453598
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1404DC8A4 (PiProcessNewDeviceNode.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140189B00 (RtlCompareMemory.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     _CmGetDeviceRegProp @ 0x1404831A0 (_CmGetDeviceRegProp.c)
 *     RtlGUIDFromString @ 0x140487DD0 (RtlGUIDFromString.c)
 *     RtlStringFromGUIDEx @ 0x1404C1BA0 (RtlStringFromGUIDEx.c)
 *     RtlCreateUnicodeString @ 0x1404C1CA0 (RtlCreateUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     ExUuidCreate @ 0x14054C980 (ExUuidCreate.c)
 */

__int64 __fastcall PipGenerateContainerID(__int64 a1, __int64 a2, char a3, const WCHAR *a4, _QWORD *a5)
{
  NTSTATUS v6; // ebx
  GUID *p_Guid; // rcx
  wchar_t *Buffer; // rdi
  unsigned int MaximumLength; // esi
  PVOID PoolWithTag; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rdx
  int DeviceRegProp; // edi
  __int64 i; // rdi
  UNICODE_STRING GuidString; // [rsp+40h] [rbp-61h] BYREF
  int v17; // [rsp+50h] [rbp-51h] BYREF
  int v18; // [rsp+54h] [rbp-4Dh] BYREF
  GUID Guid; // [rsp+58h] [rbp-49h] BYREF
  WCHAR SourceString[40]; // [rsp+70h] [rbp-31h] BYREF

  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0LL;
  v6 = 0;
  *a5 = 0LL;
  if ( !a3 )
  {
    p_Guid = (GUID *)(*(_QWORD *)(a1 + 16) + 664LL);
    goto LABEL_3;
  }
  if ( !a4 )
  {
    if ( a2 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
      v13 = *(_QWORD *)(a1 + 48);
      v17 = 78;
      DeviceRegProp = CmGetDeviceRegProp(PiPnpRtlCtx, v13, (__int64)&v18, (__int64)SourceString, (__int64)&v17, 0);
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      if ( DeviceRegProp >= 0 && v18 == 1 && RtlCreateUnicodeString(&GuidString, SourceString) )
      {
        v6 = RtlGUIDFromString(&GuidString, &Guid);
        if ( v6 >= 0 )
        {
          for ( i = *(_QWORD *)(a1 + 16); i; i = *(_QWORD *)(i + 16) )
          {
            if ( (GUID *)(i + 664) == &Guid || RtlCompareMemory((const void *)(i + 664), &Guid, 0x10uLL) == 16 )
              goto LABEL_26;
          }
LABEL_4:
          if ( v6 < 0 )
            return (unsigned int)v6;
          goto LABEL_5;
        }
LABEL_26:
        RtlFreeUnicodeString(&GuidString);
      }
    }
    v6 = ExUuidCreate(&Guid);
    if ( v6 < 0 )
      return (unsigned int)v6;
    p_Guid = &Guid;
LABEL_3:
    v6 = RtlStringFromGUIDEx(p_Guid, &GuidString, 1u);
    goto LABEL_4;
  }
  if ( !RtlCreateUnicodeString(&GuidString, a4) )
    return (unsigned int)-1073741670;
LABEL_5:
  Buffer = GuidString.Buffer;
  if ( GuidString.Buffer )
  {
    MaximumLength = GuidString.MaximumLength;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, GuidString.MaximumLength, 0x6E657050u);
    *a5 = PoolWithTag;
    if ( PoolWithTag )
      memmove(PoolWithTag, Buffer, MaximumLength);
    else
      v6 = -1073741670;
    RtlFreeUnicodeString(&GuidString);
  }
  return (unsigned int)v6;
}
