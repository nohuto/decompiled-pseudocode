/*
 * XREFs of MiInitializeNumaRanges @ 0x1401379AC
 * Callers:
 *     MiAddPhysicalMemory @ 0x1406DF4C8 (MiAddPhysicalMemory.c)
 *     MmInitNucleus @ 0x14082CC5C (MmInitNucleus.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 MiInitializeNumaRanges()
{
  unsigned int *v0; // rsi
  unsigned int v1; // edi
  _QWORD **v2; // r8
  void *v3; // rbx
  int v4; // ebp
  KIRQL v5; // al
  KIRQL v6; // di
  __int64 v7; // rdx
  int v8; // r8d
  __int64 v9; // rcx
  PVOID PoolWithTag; // rax
  char v12; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v13; // [rsp+58h] [rbp+10h] BYREF

  if ( MmPhysicalMemoryBlock )
  {
    v0 = (unsigned int *)&v12;
    v1 = 0;
  }
  else
  {
    v0 = 0LL;
    v1 = 16;
  }
  v2 = &v13;
  v3 = 0LL;
  while ( 1 )
  {
    v4 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD **, unsigned int *))off_140354F48[0])(30LL, v1, v2, v0);
    if ( v4 < 0 )
      break;
    if ( !v0 )
      goto LABEL_8;
    if ( v1 == *v0 )
    {
      if ( !v1 )
      {
        if ( v3 )
          ExFreePoolWithTag(v3, 0);
        v13 = 0LL;
      }
      goto LABEL_8;
    }
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    v1 = *v0;
    if ( !*v0 )
    {
      v13 = 0LL;
      v4 = 0;
LABEL_8:
      v5 = ExAcquireSpinLockExclusive(&dword_140388280);
      v3 = (void *)qword_140388518;
      v6 = v5;
      if ( qword_140388518 && !byte_140388500 )
      {
        byte_140388500 = 1;
        v3 = 0LL;
      }
      v7 = (__int64)v13;
      if ( v13 )
      {
        v8 = 0;
        if ( *v13 != -1LL )
        {
          v9 = 0LL;
          do
          {
            if ( *(_DWORD *)(v9 + v7 + 8) >= (unsigned int)(unsigned __int16)KeNumberNodes )
            {
              *(_DWORD *)(v9 + v7 + 8) = 0;
              v7 = (__int64)v13;
            }
            v9 = 16LL * (unsigned int)++v8;
          }
          while ( *(_QWORD *)(v9 + v7) != -1LL );
        }
      }
      dword_1403884FC = 0;
      qword_140388518 = v7;
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388280);
      __writecr8(v6);
      break;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v1, 0x20206D4Du);
    v3 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    v13 = PoolWithTag;
    v2 = (_QWORD **)PoolWithTag;
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return (unsigned int)v4;
}
