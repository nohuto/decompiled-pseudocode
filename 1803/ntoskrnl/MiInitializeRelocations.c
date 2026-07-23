/*
 * XREFs of MiInitializeRelocations @ 0x14089DB74
 * Callers:
 *     MiInitSystem @ 0x14089C128 (MiInitSystem.c)
 * Callees:
 *     ExGenRandom @ 0x1400692A0 (ExGenRandom.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 MiInitializeRelocations()
{
  PVOID PoolWithTag; // rax
  PVOID v1; // rax
  PVOID v2; // rax
  unsigned int *v3; // rax
  unsigned int v4; // r8d
  __int64 result; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x500uLL, 0x69526D4Du);
  if ( !PoolWithTag )
    return 0LL;
  dword_1403CB430 = 10240;
  qword_1403CB438 = (__int64)PoolWithTag;
  memset(PoolWithTag, 0, 0x500uLL);
  v1 = ExAllocatePoolWithTag(PagedPool, 0x500uLL, 0x69526D4Du);
  if ( !v1 )
    return 0LL;
  dword_1403CB448 = 10240;
  qword_1403CB450 = (__int64)v1;
  memset(v1, 0, 0x500uLL);
  v2 = ExAllocatePoolWithTag(PagedPool, 0x10000uLL, 0x69526D4Du);
  if ( !v2 )
    return 0LL;
  dword_1403CB458 = 0x7FFFF;
  qword_1403CB460 = (__int64)v2;
  memset(v2, 0, 0x10000uLL);
  v3 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x500uLL, 0x69526D4Du);
  if ( !v3 )
    return 0LL;
  Destination.SizeOfBitMap = 10240;
  Destination.Buffer = v3;
  memset(v3, 0, 0x500uLL);
  dword_1403CB424 = (unsigned __int8)ExGenRandom(1);
  dword_1403CB440 = (unsigned int)ExGenRandom(1) % 0x2800;
  v4 = ExGenRandom(1);
  result = 1LL;
  dword_1403CB444 = v4 % 0x7FFFF;
  return result;
}
