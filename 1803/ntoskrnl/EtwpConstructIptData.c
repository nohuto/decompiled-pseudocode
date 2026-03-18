/*
 * XREFs of EtwpConstructIptData @ 0x1407B9514
 * Callers:
 *     EtwpUpdateProcessorTraceConfiguration @ 0x1407B95B4 (EtwpUpdateProcessorTraceConfiguration.c)
 * Callees:
 *     ExGetExtensionTable @ 0x14009C120 (ExGetExtensionTable.c)
 *     ZwLoadDriver @ 0x1401A9480 (ZwLoadDriver.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpConstructIptData(__int64 a1)
{
  NTSTATUS Driver; // eax
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rbx
  unsigned __int64 ExtensionTable; // rax

  Driver = ZwLoadDriver(&DriverServiceName);
  if ( (int)(Driver + 0x80000000) >= 0 && Driver != -1073741554 )
    return 3221226092LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x69777445u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  memset(PoolWithTag, 0, 0x28uLL);
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)EtwpHwTraceExtensionHost);
  v5[2] = ExtensionTable;
  if ( !ExtensionTable )
  {
    ExFreePoolWithTag(v5, 0);
    return 3221226092LL;
  }
  *(_QWORD *)(a1 + 1016) = v5;
  return 0LL;
}
