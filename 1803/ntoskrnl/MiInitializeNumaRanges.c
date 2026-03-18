/*
 * XREFs of MiInitializeNumaRanges @ 0x14016F75C
 * Callers:
 *     MiAddPhysicalMemory @ 0x14074A438 (MiAddPhysicalMemory.c)
 *     MiInitNucleus @ 0x140898D68 (MiInitNucleus.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
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
  PVOID PoolWithTag; // rax
  int v10; // r8d
  __int64 v11; // rcx
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
    v4 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD **, unsigned int *))off_140397D98[0])(30LL, v1, v2, v0);
    if ( v4 < 0 )
      break;
    if ( !v0 )
      goto LABEL_11;
    if ( v1 == *v0 )
    {
      if ( !v1 )
      {
        if ( v3 )
          ExFreePoolWithTag(v3, 0);
        v13 = 0LL;
      }
      goto LABEL_11;
    }
    v1 = *v0;
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0);
      v1 = *v0;
    }
    if ( !v1 )
    {
      v13 = 0LL;
      v4 = 0;
LABEL_11:
      v5 = ExAcquireSpinLockExclusive(&dword_1403CB420);
      v3 = (void *)qword_1403CB6B0;
      v6 = v5;
      if ( qword_1403CB6B0 && !byte_1403CB698 )
      {
        byte_1403CB698 = 1;
        v3 = 0LL;
      }
      v7 = (__int64)v13;
      if ( v13 )
      {
        v10 = 0;
        if ( *v13 != -1LL )
        {
          v11 = 0LL;
          do
          {
            if ( *(_DWORD *)(v11 + v7 + 8) >= (unsigned int)(unsigned __int16)KeNumberNodes )
            {
              *(_DWORD *)(v11 + v7 + 8) = 0;
              v7 = (__int64)v13;
            }
            v11 = 16LL * (unsigned int)++v10;
          }
          while ( *(_QWORD *)(v11 + v7) != -1LL );
        }
      }
      dword_1403CB694 = 0;
      qword_1403CB6B0 = v7;
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CB420);
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
