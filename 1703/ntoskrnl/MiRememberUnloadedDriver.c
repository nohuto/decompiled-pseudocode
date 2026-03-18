/*
 * XREFs of MiRememberUnloadedDriver @ 0x140583894
 * Callers:
 *     MiUnloadSystemImage @ 0x1404B29B4 (MiUnloadSystemImage.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 */

void __fastcall MiRememberUnloadedDriver(const void **a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  struct _KTHREAD *CurrentThread; // rsi
  char *v7; // r8
  __int64 v8; // rax
  UNICODE_STRING *v9; // rbx
  wchar_t *v10; // rax
  PVOID PoolWithTag; // rax

  v3 = a3;
  if ( *(_WORD *)a1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)&PsLoadedModuleResource, 1u);
    v7 = (char *)MmUnloadedDrivers;
    if ( MmUnloadedDrivers )
    {
      v8 = (unsigned int)MmLastUnloadedDriver;
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
        ExReleaseResourceLite((PERESOURCE)&PsLoadedModuleResource);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        return;
      }
      memset(PoolWithTag, 0, 0x7D0uLL);
      v7 = (char *)MmUnloadedDrivers;
    }
    v8 = 0LL;
    MmLastUnloadedDriver = 0;
LABEL_4:
    v9 = (UNICODE_STRING *)&v7[40 * v8];
    RtlFreeUnicodeString(v9);
    v10 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, *(unsigned __int16 *)a1, 0x54446D4Du);
    v9->Buffer = v10;
    if ( v10 )
    {
      memmove(v10, a1[1], *(unsigned __int16 *)a1);
      v9->Length = *(_WORD *)a1;
      v9->MaximumLength = *((_WORD *)a1 + 1);
      v9[1].Buffer = (wchar_t *)(v3 + a2);
      *(_QWORD *)&v9[1].Length = a2;
      *(_QWORD *)&v9[2].Length = MEMORY[0xFFFFF78000000014];
      ++MmLastUnloadedDriver;
    }
    else
    {
      *(_DWORD *)&v9->Length = 0;
    }
    goto LABEL_6;
  }
}
