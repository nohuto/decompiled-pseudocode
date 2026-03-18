/*
 * XREFs of PiQueryResourceRequirements @ 0x1405DC08C
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1405D0A18 (PiProcessNewDeviceNode.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwSetValueKey @ 0x1401A80C0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1401A8EC0 (ZwDeleteValueKey.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x140504BB4 (_CmOpenDeviceRegKey.c)
 *     PipSetDevNodeFlags @ 0x1405D1BFC (PipSetDevNodeFlags.c)
 *     PpIrpQueryResourceRequirements @ 0x1405DC270 (PpIrpQueryResourceRequirements.c)
 */

__int64 __fastcall PiQueryResourceRequirements(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  ULONG *v4; // rbx
  unsigned int v5; // r14d
  ULONG DataSize; // esi
  int v7; // eax
  HANDLE v8; // rcx
  struct _KTHREAD *CurrentThread; // rax
  PVOID v11; // rbx
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-10h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp+30h] BYREF
  PVOID Data; // [rsp+88h] [rbp+38h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  KeyHandle = 0LL;
  v3 = PpIrpQueryResourceRequirements(v2, &Data);
  v4 = (ULONG *)Data;
  v5 = v3;
  if ( v3 < 0 )
    v4 = 0LL;
  Data = v4;
  if ( v4 )
    DataSize = *v4;
  else
    DataSize = 0;
  if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 9
    || (*(_DWORD *)(a1 + 396) & 0x2000) != 0 && (*(_DWORD *)(a1 + 404) == 3 || *(_DWORD *)(a1 + 404) == 19) )
  {
    goto LABEL_19;
  }
  v7 = CmOpenDeviceRegKey(
         *(__int64 *)&PiPnpRtlCtx,
         *(_QWORD *)(a1 + 48),
         0x14u,
         0,
         983103,
         v4 != 0LL,
         (__int64)&KeyHandle,
         0LL);
  v8 = KeyHandle;
  if ( v7 < 0 )
    v8 = 0LL;
  KeyHandle = v8;
  if ( v8 )
  {
    *(_DWORD *)&ValueName.Length = 2359330;
    ValueName.Buffer = (wchar_t *)L"BasicConfigVector";
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    v11 = Data;
    if ( Data )
    {
      ZwSetValueKey(KeyHandle, &ValueName, 0, 0xAu, Data, DataSize);
      ExAcquireFastMutex(&PiResourceListLock);
      *(_QWORD *)(a1 + 440) = v11;
      KeReleaseGuardedMutex(&PiResourceListLock);
      PipSetDevNodeFlags(a1, 512);
      Data = 0LL;
    }
    else
    {
      ZwDeleteValueKey(KeyHandle, &ValueName);
    }
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v4 = (ULONG *)Data;
LABEL_19:
    v8 = KeyHandle;
  }
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    v8 = KeyHandle;
  }
  if ( v8 )
    ZwClose(v8);
  return v5;
}
