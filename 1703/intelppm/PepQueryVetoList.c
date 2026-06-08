/*
 * XREFs of PepQueryVetoList @ 0x1C0020000
 * Callers:
 *     QueryPepCapabilites @ 0x1C001DD8C (QueryPepCapabilites.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004AA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004EC0 (memset.c)
 *     PepQueryName @ 0x1C002EF50 (PepQueryName.c)
 */

__int64 __fastcall PepQueryVetoList(__int64 a1)
{
  unsigned int Name; // edi
  SIZE_T v4; // rdi
  unsigned int *PoolWithTag; // rax
  unsigned int *v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // esi
  unsigned int i; // esi
  void *v10; // rcx
  unsigned int v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0;
  if ( (int)PoFxProcessorNotification(*(_QWORD *)(a1 + 1088), 24LL, &v11) >= 0 && v11 )
  {
    v4 = 16 * v11 + 8;
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x72637250u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v4);
      *v6 = v11;
      v7 = 0LL;
      if ( v11 )
      {
        while ( 1 )
        {
          v8 = v7 + 1;
          Name = PepQueryName(a1, (unsigned int)(v7 + 1), 25LL, &v6[4 * v7 + 2]);
          if ( Name )
            break;
          v7 = v8;
          if ( v8 >= *v6 )
            goto LABEL_10;
        }
      }
      else
      {
LABEL_10:
        Name = ((__int64 (__fastcall *)(unsigned int *))qword_1C0015FD8)(v6);
        if ( !Name )
        {
          qword_1C0016300 = (__int64)v6;
          v6 = 0LL;
        }
      }
      if ( v6 )
      {
        for ( i = 0; i < *v6; ++i )
        {
          v10 = *(void **)&v6[4 * i + 4];
          if ( v10 )
            ExFreePoolWithTag(v10, 0x72637250u);
        }
        ExFreePoolWithTag(v6, 0x72637250u);
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
