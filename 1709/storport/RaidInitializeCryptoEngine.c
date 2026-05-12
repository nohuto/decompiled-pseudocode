/*
 * XREFs of RaidInitializeCryptoEngine @ 0x1C00303DC
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CB50 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0006050 (RaidAllocatePool.c)
 *     memmove @ 0x1C001F340 (memmove.c)
 *     memset @ 0x1C001F680 (memset.c)
 */

__int64 __fastcall RaidInitializeCryptoEngine(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v2; // esi
  unsigned int v5; // ebx
  PVOID Pool; // rax
  unsigned int *v7; // rbx
  void *v8; // rcx
  void *v9; // rcx
  __int64 v11; // rdx
  PVOID v12; // rax
  unsigned int i; // edi
  unsigned __int64 v14; // rcx
  unsigned int *v15; // [rsp+30h] [rbp+8h]

  v2 = 0;
  v5 = 20 * a2[5] + 12;
  if ( !*(_QWORD *)(a1 + 5696) )
  {
    Pool = RaidAllocatePool(NonPagedPoolNx, v5, 0x72436152u, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 5696) = Pool;
    if ( !Pool )
    {
      v7 = v15;
LABEL_4:
      v8 = *(void **)(a1 + 5696);
      if ( v8 )
      {
        ExFreePoolWithTag(v8, 0x72436152u);
        *(_QWORD *)(a1 + 5696) = 0LL;
      }
      v9 = (void *)*((_QWORD *)v7 + 1);
      v2 = -1056964605;
      if ( v9 )
      {
        ExFreePoolWithTag(v9, 0x72436152u);
        *(_QWORD *)(a1 + 5696) = 0LL;
      }
      return v2;
    }
  }
  memmove(*(void **)(a1 + 5696), a2, v5);
  v7 = (unsigned int *)(a1 + 5704);
  *(_DWORD *)(a1 + 5704) = a2[4];
  v11 = *(unsigned int *)(a1 + 5704);
  *(_DWORD *)(a1 + 5720) = 0;
  *(_BYTE *)(a1 + 5708) = 0;
  v12 = RaidAllocatePool(NonPagedPoolNx, v11 << 6, 0x72436152u, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 5712) = v12;
  if ( !v12 )
    goto LABEL_4;
  memset(v12, 0, (unsigned __int64)*v7 << 6);
  for ( i = 0; i < *v7; ++i )
  {
    v14 = *((_QWORD *)v7 + 1) + ((unsigned __int64)i << 6);
    *(_DWORD *)(v14 + 44) = 0;
    *(_DWORD *)v14 = i;
    InitializeSListHead((PSLIST_HEADER)(v14 + 48));
  }
  return v2;
}
