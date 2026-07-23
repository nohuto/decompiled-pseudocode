/*
 * XREFs of NtQuerySystemEnvironmentValue @ 0x1407C42D0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140068180 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140068300 (ExReleaseFastMutexUnsafe.c)
 *     RtlInitString @ 0x140076840 (RtlInitString.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     RtlAnsiStringToUnicodeString @ 0x140518030 (RtlAnsiStringToUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x140518490 (RtlUnicodeStringToAnsiString.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     RtlxUnicodeStringToOemSize @ 0x1407817D0 (RtlxUnicodeStringToOemSize.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQuerySystemEnvironmentValue(PUNICODE_STRING Name, PWSTR Value, ULONG Length, PULONG ReturnLength)
{
  unsigned __int16 v5; // r14
  __int64 v7; // rbx
  unsigned __int16 v8; // di
  wchar_t *v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int16 v12; // bx
  int v13; // ebx
  PVOID PoolWithTag; // rdi
  struct _KTHREAD *CurrentThread; // rax
  int EnvironmentVariable; // ebx
  NTSTATUS v17; // ebx
  char PreviousMode; // [rsp+20h] [rbp-68h]
  UNICODE_STRING UnicodeString; // [rsp+28h] [rbp-60h] BYREF
  _STRING DestinationString; // [rsp+38h] [rbp-50h] BYREF
  int v21; // [rsp+48h] [rbp-40h]
  int v22; // [rsp+4Ch] [rbp-3Ch]
  PVOID P; // [rsp+58h] [rbp-30h]

  v5 = Length;
  DestinationString.Buffer = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)Name & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = 0x7FFFFFFF0000LL;
    UnicodeString = *Name;
    v8 = _mm_cvtsi128_si32((__m128i)UnicodeString);
    if ( !v8 )
      return -1073741819;
    if ( ((__int64)UnicodeString.Buffer & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = (wchar_t *)((char *)UnicodeString.Buffer + v8);
    if ( (unsigned __int64)v10 > 0x7FFFFFFF0000LL || v10 < UnicodeString.Buffer )
      MEMORY[0x7FFFFFFF0000] = 0;
    ProbeForWrite(Value, (unsigned __int16)Length, 2u);
    if ( ReturnLength )
    {
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v7 = (__int64)ReturnLength;
      *(_WORD *)v7 = *(_WORD *)v7;
      v8 = UnicodeString.Length;
    }
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    UnicodeString = *Name;
    v8 = UnicodeString.Length;
  }
  if ( (_BYTE)NlsMbCodePageTag )
    LODWORD(v11) = RtlxUnicodeStringToOemSize(&UnicodeString);
  else
    v11 = ((unsigned __int64)v8 + 2) >> 1;
  v12 = v11;
  v22 = v11;
  DestinationString.Buffer = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v11, 0x72766E45u);
  if ( !DestinationString.Buffer )
    return -1073741670;
  DestinationString.MaximumLength = v12;
  v13 = RtlUnicodeStringToAnsiString(&DestinationString, &UnicodeString, 0);
  v21 = v13;
  if ( v13 >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x400uLL, 0x72766E45u);
    P = PoolWithTag;
    if ( PoolWithTag )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
      EnvironmentVariable = HalGetEnvironmentVariable(DestinationString.Buffer, 1024LL, PoolWithTag);
      ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      ExFreePoolWithTag(DestinationString.Buffer, 0);
      if ( EnvironmentVariable )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        return -1073741823;
      }
      else
      {
        RtlInitString(&DestinationString, (PCSZ)PoolWithTag);
        UnicodeString.Buffer = Value;
        UnicodeString.MaximumLength = v5;
        UnicodeString.Length = 0;
        v17 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 0);
        v21 = v17;
        if ( ReturnLength )
          *(_WORD *)ReturnLength = UnicodeString.Length;
        ExFreePoolWithTag(PoolWithTag, 0);
        return v17;
      }
    }
    else
    {
      ExFreePoolWithTag(DestinationString.Buffer, 0);
      return -1073741670;
    }
  }
  else
  {
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    return v13;
  }
}
