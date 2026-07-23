/*
 * XREFs of SepInitializeSingletonAttributesStructures @ 0x14081A37C
 * Callers:
 *     SepInitializationPhase1 @ 0x1405C48E0 (SepInitializationPhase1.c)
 * Callees:
 *     RtlpCreateHashTable @ 0x14003CD28 (RtlpCreateHashTable.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 SepInitializeSingletonAttributesStructures()
{
  PEX_SPIN_LOCK v0; // rax
  int v1; // ebx
  unsigned int v2; // edi
  ULONG_PTR v3; // rax
  PVOID PoolWithTag; // rbp
  PVOID v5; // rax
  void *v6; // rsi
  _QWORD *v7; // rax
  PEX_SPIN_LOCK v8; // rcx
  ULONG_PTR v9; // r9
  unsigned int v10; // ecx
  void *v12; // rcx

  v0 = SepSingletonGlobal;
  v1 = 0;
  v2 = 0;
  *SepSingletonGlobal = 0;
  *((_DWORD *)v0 + 1) = 0;
  *((_QWORD *)v0 + 1) = 0LL;
  *((_DWORD *)v0 + 4) = 0;
  v3 = SeLuidToIndexMapping;
  *(_QWORD *)SeLuidToIndexMapping = 0LL;
  *(_QWORD *)(v3 + 8) = 0LL;
  if ( (SepTokenSingletonAttributesConfig & 3) == 3 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x74446553u);
    if ( PoolWithTag )
    {
      v5 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x600uLL, 0x74446553u);
      v6 = v5;
      if ( v5 )
      {
        memset(v5, 0, 0x600uLL);
        v7 = ExAllocatePoolWithTag(NonPagedPoolNx, 8uLL, 0x74446553u);
        v8 = SepSingletonGlobal;
        *((_QWORD *)SepSingletonGlobal + 1) = v7;
        if ( v7 )
        {
          *v7 = v6;
          ++*((_DWORD *)v8 + 1);
          if ( RtlpCreateHashTable((_RTL_DYNAMIC_HASH_TABLE **)(SeLuidToIndexMapping + 8), 0x80u, 0, 0) )
          {
            v9 = SeLuidToIndexMapping;
            *(_DWORD *)(SeLuidToIndexMapping + 16) = 64;
            *(_QWORD *)(v9 + 24) = PoolWithTag;
            v10 = *(_DWORD *)(v9 + 16);
            LOBYTE(v1) = (v10 & 0x1F) != 0;
            memset(PoolWithTag, 0, 4 * ((v10 >> 5) + v1));
            return v2;
          }
        }
        v2 = -1073741801;
        ExFreePoolWithTag(v6, 0x74446553u);
      }
      else
      {
        v2 = -1073741801;
      }
      ExFreePoolWithTag(PoolWithTag, 0x74446553u);
    }
    else
    {
      v2 = -1073741801;
    }
    v12 = (void *)*((_QWORD *)SepSingletonGlobal + 1);
    if ( v12 )
      ExFreePoolWithTag(v12, 0x74446553u);
  }
  return v2;
}
