/*
 * XREFs of FsFilterInit @ 0x140156CF4
 * Callers:
 *     FsRtlInitSystem @ 0x140851150 (FsRtlInitSystem.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
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
  byte_1403868A2 = 6;
  AcquireOpsEvent = 1;
  qword_1403868B0 = (__int64)&qword_1403868A8;
  qword_1403868A8 = (__int64)&qword_1403868A8;
  qword_1403868D0 = (__int64)&qword_1403868C8;
  qword_1403868C8 = (__int64)&qword_1403868C8;
  result = v0;
  dword_1403868A4 = 1;
  ReleaseOpsEvent = 1;
  byte_1403868C2 = 6;
  dword_1403868C4 = 1;
  return result;
}
