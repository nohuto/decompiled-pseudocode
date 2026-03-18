/*
 * XREFs of FsFilterInit @ 0x140182FA0
 * Callers:
 *     FsRtlInitSystem @ 0x1408C1C40 (FsRtlInitSystem.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 FsFilterInit()
{
  unsigned int v0; // ebx
  __int64 result; // rax

  v0 = 0;
  AcquireOpsReservePool = ExAllocatePoolWithTag(NonPagedPoolNx, 0x3C8uLL, 0x676D5346u);
  if ( !AcquireOpsReservePool )
    v0 = -1073741670;
  ReleaseOpsReservePool = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0x3C8uLL, 0x676D5346u);
  if ( !ReleaseOpsReservePool )
  {
    ExFreePoolWithTag(AcquireOpsReservePool, 0x676D5346u);
    v0 = -1073741670;
  }
  byte_1403C9DA2 = 6;
  AcquireOpsEvent = 1;
  qword_1403C9DB0 = (__int64)&qword_1403C9DA8;
  qword_1403C9DA8 = (__int64)&qword_1403C9DA8;
  qword_1403C9DD0 = (__int64)&qword_1403C9DC8;
  qword_1403C9DC8 = (__int64)&qword_1403C9DC8;
  result = v0;
  dword_1403C9DA4 = 1;
  ReleaseOpsEvent = 1;
  byte_1403C9DC2 = 6;
  dword_1403C9DC4 = 1;
  return result;
}
