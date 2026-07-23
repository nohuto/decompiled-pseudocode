/*
 * XREFs of RtlpCreateHashTable @ 0x140102000
 * Callers:
 *     RtlCreateHashTable @ 0x140101FE0 (RtlCreateHashTable.c)
 *     SepBuildCapPolicyTable @ 0x140159584 (SepBuildCapPolicyTable.c)
 *     RtlCreateHashTableEx @ 0x14015D120 (RtlCreateHashTableEx.c)
 *     SepInitializeSingletonAttributesStructures @ 0x14084AB48 (SepInitializeSingletonAttributesStructures.c)
 * Callees:
 *     RtlpInitializeSecondLevelDir @ 0x14010217C (RtlpInitializeSecondLevelDir.c)
 *     RtlpAllocateSecondLevelDir @ 0x14010219C (RtlpAllocateSecondLevelDir.c)
 *     RtlDeleteHashTable @ 0x140124E50 (RtlDeleteHashTable.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

char __fastcall RtlpCreateHashTable(_RTL_DYNAMIC_HASH_TABLE **a1, unsigned int a2, unsigned int a3, int a4)
{
  unsigned int v4; // ebp
  _RTL_DYNAMIC_HASH_TABLE *PoolWithTag; // rbx
  int v10; // esi
  __int64 v11; // rax
  void *v12; // r8
  unsigned int v14; // ebp
  char v15; // cl
  unsigned int v16; // ebp
  int v17; // r14d
  PVOID v18; // rax
  PVOID v19; // rsi
  __int64 v20; // rdi
  __int64 SecondLevelDir; // rax
  __int64 v22; // rdx
  __int64 v23; // r8

  v4 = a2 - 1;
  if ( ((a2 - 1) & a2) != 0 || a2 - 128 > 0x7FFF00 )
    return 0;
  PoolWithTag = *a1;
  v10 = 0;
  if ( !*a1 )
  {
    PoolWithTag = (_RTL_DYNAMIC_HASH_TABLE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x62615448u);
    if ( !PoolWithTag )
      return 0;
    v10 = 1;
  }
  memset(PoolWithTag, 0, sizeof(_RTL_DYNAMIC_HASH_TABLE));
  PoolWithTag->Pivot = 0;
  PoolWithTag->Shift = a3;
  PoolWithTag->Flags = a4 | v10;
  PoolWithTag->TableSize = a2;
  PoolWithTag->DivisorMask = v4;
  if ( a2 > 0x80 )
  {
    _BitScanReverse(&v14, a2 + 127);
    v15 = v14;
    v16 = v14 - 7;
    v17 = (a2 + 127) ^ (1 << v15);
    v18 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x62615448u);
    v19 = v18;
    if ( v18 )
    {
      memset(v18, 0, 0x80uLL);
      v20 = 0LL;
      PoolWithTag->Directory = v19;
      while ( 1 )
      {
        SecondLevelDir = RtlpAllocateSecondLevelDir((unsigned int)v20);
        if ( !SecondLevelDir )
          break;
        if ( (unsigned int)v20 >= v16 )
          v22 = (unsigned int)(v17 + 1);
        else
          v22 = (unsigned int)(1 << (v20 + 7));
        RtlpInitializeSecondLevelDir(SecondLevelDir, v22);
        *((_QWORD *)v19 + v20) = v23;
        v20 = (unsigned int)(v20 + 1);
        if ( (unsigned int)v20 > v16 )
          goto LABEL_7;
      }
    }
    goto LABEL_18;
  }
  v11 = RtlpAllocateSecondLevelDir(0LL);
  if ( !v11 )
  {
LABEL_18:
    RtlDeleteHashTable(PoolWithTag);
    return 0;
  }
  RtlpInitializeSecondLevelDir(v11, PoolWithTag->TableSize);
  PoolWithTag->Directory = v12;
LABEL_7:
  *a1 = PoolWithTag;
  return 1;
}
