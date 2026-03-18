/*
 * XREFs of CiSystemInitialize @ 0x1C000D128
 * Callers:
 *     CsInitialize @ 0x1C000C194 (CsInitialize.c)
 * Callees:
 *     memset @ 0x1C0001680 (memset.c)
 *     CiSystemTerminate @ 0x1C000B334 (CiSystemTerminate.c)
 */

__int64 CiSystemInitialize()
{
  NTSTATUS SystemInformation; // eax
  SIZE_T v1; // rdi
  int v2; // ebx
  PVOID PoolWithTag; // rax

  SystemInformation = ZwQuerySystemInformation(SystemBasicInformation, &CiSystemBasicInfo, 0x40u, 0LL);
  v1 = 8LL * byte_1C0006218;
  v2 = SystemInformation;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v1, 0x74727641u);
  CiLastIdleTime = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    v2 = -1073741801;
LABEL_4:
    CiSystemTerminate();
    return (unsigned int)v2;
  }
  memset(PoolWithTag, 0, v1);
  if ( v2 < 0 )
    goto LABEL_4;
  return (unsigned int)v2;
}
