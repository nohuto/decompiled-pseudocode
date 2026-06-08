/*
 * XREFs of PepQueryVetoList @ 0x1C002C48C
 * Callers:
 *     QueryPepCapabilites @ 0x1C002AFA8 (QueryPepCapabilites.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000C910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000CC80 (memset.c)
 *     PepQueryName @ 0x1C002C5BC (PepQueryName.c)
 */

__int64 __fastcall PepQueryVetoList(__int64 a1)
{
  unsigned int Name; // edi
  SIZE_T v3; // rdi
  unsigned int *PoolWithTag; // rax
  unsigned int *v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // esi
  unsigned int i; // esi
  void *v9; // rcx
  unsigned int v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0;
  if ( (int)PoFxProcessorNotification(*(_QWORD *)(a1 + 1088), 24LL, &v11) >= 0 && v11 )
  {
    v3 = 16 * v11 + 8;
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x72637250u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v3);
      *v5 = v11;
      v6 = 0LL;
      if ( v11 )
      {
        while ( 1 )
        {
          v7 = v6 + 1;
          Name = PepQueryName(a1, (unsigned int)(v6 + 1), 25LL, &v5[4 * v6 + 2]);
          if ( Name )
            break;
          v6 = v7;
          if ( v7 >= *v5 )
            goto LABEL_9;
        }
      }
      else
      {
LABEL_9:
        Name = ((__int64 (__fastcall *)(unsigned int *))qword_1C0011658)(v5);
        if ( !Name )
        {
          qword_1C0011980 = (__int64)v5;
          v5 = 0LL;
        }
      }
      if ( v5 )
      {
        for ( i = 0; i < *v5; ++i )
        {
          v9 = *(void **)&v5[4 * i + 4];
          if ( v9 )
            ExFreePoolWithTag(v9, 0x72637250u);
        }
        ExFreePoolWithTag(v5, 0x72637250u);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return 0;
  }
  return Name;
}
