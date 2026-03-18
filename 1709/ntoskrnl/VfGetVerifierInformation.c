/*
 * XREFs of VfGetVerifierInformation @ 0x1407CA3C4
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x1407BD404 (VfSuspectDriversGetVerifierInformation.c)
 */

__int64 __fastcall VfGetVerifierInformation(void *a1, size_t Size, unsigned int *a3, int a4)
{
  unsigned int v7; // eax
  unsigned __int64 v8; // rsi
  PVOID PoolWithTag; // rbx
  unsigned int VerifierInformation; // edi
  unsigned int v11; // eax

  *a3 = 0;
  v7 = 10485760;
  if ( (unsigned int)Size <= 0xA00000 )
    v7 = Size;
  v8 = v7;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x706D5456u);
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v8);
    VerifierInformation = VfSuspectDriversGetVerifierInformation((__int64)PoolWithTag, v8, a3, (__int64)a1, a4);
    v11 = *a3;
    if ( *a3 > (unsigned int)v8 )
      v11 = v8;
    memmove(a1, PoolWithTag, v11);
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return VerifierInformation;
}
