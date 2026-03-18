/*
 * XREFs of FsFilterInit @ 0x14015EAC4
 * Callers:
 *     FsRtlInitSystem @ 0x140819368 (FsRtlInitSystem.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
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
  byte_14036A902 = 6;
  AcquireOpsEvent = 1;
  qword_14036A910 = (__int64)&qword_14036A908;
  qword_14036A908 = (__int64)&qword_14036A908;
  qword_14036A930 = (__int64)&qword_14036A928;
  qword_14036A928 = (__int64)&qword_14036A928;
  result = v0;
  dword_14036A904 = 1;
  ReleaseOpsEvent = 1;
  byte_14036A922 = 6;
  dword_14036A924 = 1;
  return result;
}
