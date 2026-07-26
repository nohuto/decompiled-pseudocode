/*
 * XREFs of ?reserve@?$KArray@V?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@$00@Rtl@@QEAA_N_K@Z @ 0x1C00C8730
 * Callers:
 *     ?grow@?$KArray@V?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@$00@Rtl@@AEAA_N_K@Z @ 0x1C00C8818 (-grow@-$KArray@V-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@$00@Rtl@@AEAA_N_K@Z.c)
 * Callees:
 *     ??_G?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00C70F0 (--_G-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z.c)
 */

char __fastcall Rtl::KArray<KRef<NDIS_BIND_FILTER_DRIVER>,1>::reserve(unsigned int *a1, unsigned __int64 a2)
{
  unsigned int v2; // esi
  unsigned int v4; // edi
  char *PoolWithTag; // r14
  unsigned int i; // edx
  char *v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rax

  v2 = a2;
  if ( *a1 >= a2 )
    return 1;
  if ( a2 < 0xFFFFFFFF )
  {
    v4 = 0;
    if ( is_mul_ok(8uLL, a2) )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 8 * a2, 0x7272414Bu);
      if ( PoolWithTag )
      {
        for ( i = 0; i < a1[1]; ++i )
        {
          v8 = &PoolWithTag[8 * i];
          if ( v8 )
          {
            v9 = *((_QWORD *)a1 + 1);
            v10 = *(_QWORD *)(v9 + 8LL * i);
            *(_QWORD *)(v9 + 8LL * i) = 0LL;
            *(_QWORD *)v8 = v10;
          }
        }
        if ( *((_QWORD *)a1 + 1) )
        {
          if ( a1[1] )
          {
            do
              KRef<NDIS_BIND_FILTER_DRIVER>::`scalar deleting destructor'((volatile signed __int32 **)(*((_QWORD *)a1 + 1) + 8LL * v4++));
            while ( v4 < a1[1] );
          }
          ExFreePoolWithTag(*((PVOID *)a1 + 1), 0x7272414Bu);
        }
        *a1 = v2;
        *((_QWORD *)a1 + 1) = PoolWithTag;
        return 1;
      }
    }
  }
  return 0;
}
