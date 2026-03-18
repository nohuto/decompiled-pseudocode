/*
 * XREFs of CreateMiniNtBootKey @ 0x1408317D0
 * Callers:
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExTryToAcquireFastMutex @ 0x140022150 (ExTryToAcquireFastMutex.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     swprintf_s @ 0x14016EB70 (swprintf_s.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14017E2E0 (ZwCreateKey.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

char CreateMiniNtBootKey()
{
  NTSTATUS v0; // ebx
  wchar_t *PoolWithTag; // rax
  wchar_t *v2; // rdi
  char result; // al
  struct _KTHREAD *CurrentThread; // rax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-29h] BYREF
  struct _FAST_MUTEX FastMutex; // [rsp+80h] [rbp+7h] BYREF
  ULONG Disposition; // [rsp+E0h] [rbp+67h] BYREF
  HANDLE KeyHandle; // [rsp+E8h] [rbp+6Fh] BYREF
  HANDLE Handle; // [rsp+F0h] [rbp+77h] BYREF

  v0 = 0;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x74696E49u);
  v2 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_9;
  swprintf_s(PoolWithTag, 0x100uLL, L"%s\\Control", CmRegistryMachineSystemCurrentControlSet.Buffer);
  v2[255] = 0;
  RtlInitUnicodeString(&DestinationString, v2);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v0 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( v0 < 0 )
    goto LABEL_9;
  RtlInitUnicodeString(&DestinationString, L"MiniNT");
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v0 = ZwCreateKey(&Handle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 1u, &Disposition);
  if ( v0 >= 0 )
    ZwClose(Handle);
  ZwClose(KeyHandle);
  if ( v0 < 0 )
LABEL_9:
    KeBugCheckEx(0x32u, v0, 6uLL, 0LL, 0LL);
  ExFreePoolWithTag(v2, 0);
  result = InitForceInline;
  if ( InitForceInline == 1 )
  {
    ExTryToAcquireFastMutex(&FastMutex);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    KeGetCurrentIrql();
    result = 2;
    __writecr8(2uLL);
  }
  return result;
}
