/*
 * XREFs of BiConvertQualifiedPartitionToBootEnvironment @ 0x1407E2000
 * Callers:
 *     BiConvertElementToRegistryData @ 0x1406093F4 (BiConvertElementToRegistryData.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiConvertQualifiedPartitionToBootEnvironment(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v5; // ebx
  char *PoolWithTag; // rax
  char *v7; // rdi
  int v8; // eax

  if ( a2 >= 0x3C )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x4B444342u);
    v5 = 0;
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x48uLL);
      *(_QWORD *)v7 = 6LL;
      *((_DWORD *)v7 + 2) = 72;
      *((_DWORD *)v7 + 8) = 0;
      v8 = *(_DWORD *)(a1 + 20);
      if ( v8 )
      {
        if ( v8 != 1 )
        {
          v5 = -1073741811;
          ExFreePoolWithTag(v7, 0x4B444342u);
          return v5;
        }
        *((_DWORD *)v7 + 9) = 0;
        *(_OWORD *)(v7 + 40) = *(_OWORD *)(a1 + 28);
        *((_OWORD *)v7 + 1) = *(_OWORD *)(a1 + 44);
      }
      else
      {
        *((_DWORD *)v7 + 9) = 1;
        *((_DWORD *)v7 + 10) = *(_DWORD *)(a1 + 28);
        *((_QWORD *)v7 + 2) = *(_QWORD *)(a1 + 32);
      }
      *a3 = v7;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
