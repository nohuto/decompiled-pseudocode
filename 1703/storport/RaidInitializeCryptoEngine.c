/*
 * XREFs of RaidInitializeCryptoEngine @ 0x1C002F548
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B3F0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C00058A4 (RaidAllocatePool.c)
 *     memmove @ 0x1C001EE40 (memmove.c)
 *     memset @ 0x1C001F180 (memset.c)
 */

__int64 __fastcall RaidInitializeCryptoEngine(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v2; // edi
  __int64 v5; // rsi
  unsigned int v6; // ebx
  PVOID Pool; // rax
  unsigned int *v8; // rbx
  __int64 v9; // rax
  PVOID v10; // rax
  void *v11; // rcx
  void *v12; // rcx
  __int64 i; // rdx
  __int64 v14; // rcx
  unsigned int *v16; // [rsp+40h] [rbp+8h]

  v2 = 0;
  v5 = **(_QWORD **)(a1 - 16);
  v6 = 20 * a2[5] + 12;
  if ( !*(_QWORD *)(v5 + 5696) )
  {
    Pool = RaidAllocatePool(NonPagedPoolNx, v6, 0x72436152u, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(v5 + 5696) = Pool;
    if ( !Pool )
    {
      v8 = v16;
LABEL_5:
      v11 = *(void **)(v5 + 5696);
      v2 = -1056964605;
      if ( v11 )
      {
        ExFreePoolWithTag(v11, 0x72436152u);
        *(_QWORD *)(v5 + 5696) = 0LL;
      }
      v12 = (void *)*((_QWORD *)v8 + 1);
      if ( v12 )
      {
        ExFreePoolWithTag(v12, 0x72436152u);
        *(_QWORD *)(v5 + 5696) = 0LL;
      }
      return v2;
    }
  }
  memmove(*(void **)(v5 + 5696), a2, v6);
  v8 = (unsigned int *)(v5 + 5704);
  *(_DWORD *)(v5 + 5704) = a2[4];
  v9 = *(unsigned int *)(v5 + 5704);
  *(_DWORD *)(v5 + 5720) = 0;
  *(_BYTE *)(v5 + 5708) = 0;
  v10 = RaidAllocatePool(NonPagedPoolNx, 48 * v9, 0x72436152u, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(v5 + 5712) = v10;
  if ( !v10 )
    goto LABEL_5;
  memset(v10, 0, 48LL * *v8);
  for ( i = 0LL; (unsigned int)i < *v8; *(_BYTE *)(v14 + 44) = 0 )
  {
    v14 = *(_QWORD *)(v5 + 5712) + 48 * i;
    *(_DWORD *)v14 = i;
    i = (unsigned int)(i + 1);
  }
  return v2;
}
