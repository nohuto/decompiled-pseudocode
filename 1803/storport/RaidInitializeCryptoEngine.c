/*
 * XREFs of RaidInitializeCryptoEngine @ 0x1C002A560
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0002880 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007658 (RaidAllocatePool.c)
 *     memmove @ 0x1C0017E00 (memmove.c)
 *     memset @ 0x1C0018140 (memset.c)
 */

__int64 __fastcall RaidInitializeCryptoEngine(__int64 a1, unsigned __int16 *a2)
{
  void *v3; // rcx
  unsigned int v4; // esi
  size_t v6; // rbx
  PVOID Pool; // rax
  unsigned int *v8; // rbx
  void *v9; // rcx
  void *v10; // rcx
  __int64 v12; // rdx
  PVOID v13; // rax
  unsigned int i; // edi
  unsigned __int64 v15; // rcx
  unsigned int *v16; // [rsp+30h] [rbp+8h]

  v3 = *(void **)(a1 + 5696);
  v4 = 0;
  v6 = 20 * (unsigned int)a2[5] + 12;
  if ( !v3 )
  {
    Pool = RaidAllocatePool(NonPagedPoolNx, (unsigned int)v6, 0x72436152u, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 5696) = Pool;
    v3 = Pool;
    if ( !Pool )
    {
      v8 = v16;
LABEL_4:
      v9 = *(void **)(a1 + 5696);
      if ( v9 )
      {
        ExFreePoolWithTag(v9, 0x72436152u);
        *(_QWORD *)(a1 + 5696) = 0LL;
      }
      v10 = (void *)*((_QWORD *)v8 + 1);
      v4 = -1056964605;
      if ( v10 )
      {
        ExFreePoolWithTag(v10, 0x72436152u);
        *(_QWORD *)(a1 + 5696) = 0LL;
      }
      return v4;
    }
  }
  memmove(v3, a2, v6);
  v8 = (unsigned int *)(a1 + 5704);
  *(_DWORD *)(a1 + 5704) = a2[4];
  v12 = *(unsigned int *)(a1 + 5704);
  *(_DWORD *)(a1 + 5720) = 0;
  *(_BYTE *)(a1 + 5708) = 0;
  v13 = RaidAllocatePool(NonPagedPoolNx, v12 << 6, 0x72436152u, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 5712) = v13;
  if ( !v13 )
    goto LABEL_4;
  memset(v13, 0, (unsigned __int64)*v8 << 6);
  for ( i = 0; i < *v8; ++i )
  {
    v15 = *((_QWORD *)v8 + 1) + ((unsigned __int64)i << 6);
    *(_DWORD *)(v15 + 44) = 0;
    *(_DWORD *)v15 = i;
    InitializeSListHead((PSLIST_HEADER)(v15 + 48));
  }
  return v4;
}
