/*
 * XREFs of MiRememberUnloadedDriver @ 0x14059D0A4
 * Callers:
 *     MiUnloadSystemImage @ 0x140515B1C (MiUnloadSystemImage.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 */

void __fastcall MiRememberUnloadedDriver(const void **a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v7; // rax
  UNICODE_STRING *v8; // rbx
  wchar_t *v9; // rax
  PVOID PoolWithTag; // rax

  v3 = a3;
  if ( *(_WORD *)a1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
    if ( MmUnloadedDrivers )
    {
      v7 = (unsigned int)MmLastUnloadedDriver;
      if ( (unsigned int)MmLastUnloadedDriver < 0x32 )
        goto LABEL_4;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x7D0uLL, 0x54446D4Du);
      MmUnloadedDrivers = PoolWithTag;
      if ( !PoolWithTag )
      {
LABEL_6:
        ExReleaseResourceLite(&PsLoadedModuleResource);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        return;
      }
      memset(PoolWithTag, 0, 0x7D0uLL);
    }
    v7 = 0LL;
    MmLastUnloadedDriver = 0;
LABEL_4:
    v8 = (UNICODE_STRING *)((char *)MmUnloadedDrivers + 40 * v7);
    RtlFreeUnicodeString(v8);
    v9 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, *(unsigned __int16 *)a1, 0x54446D4Du);
    v8->Buffer = v9;
    if ( v9 )
    {
      memmove(v9, a1[1], *(unsigned __int16 *)a1);
      v8->Length = *(_WORD *)a1;
      v8->MaximumLength = *((_WORD *)a1 + 1);
      v8[1].Buffer = (wchar_t *)(v3 + a2);
      *(_QWORD *)&v8[1].Length = a2;
      *(_QWORD *)&v8[2].Length = MEMORY[0xFFFFF78000000014];
      ++MmLastUnloadedDriver;
    }
    else
    {
      *(_DWORD *)&v8->Length = 0;
    }
    goto LABEL_6;
  }
}
