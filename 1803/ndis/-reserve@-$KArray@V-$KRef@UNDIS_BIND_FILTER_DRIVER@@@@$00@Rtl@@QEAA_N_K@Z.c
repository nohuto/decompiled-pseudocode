/*
 * XREFs of ?reserve@?$KArray@V?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@$00@Rtl@@QEAA_N_K@Z @ 0x1C00B6080
 * Callers:
 *     ?grow@?$KArray@V?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@$00@Rtl@@AEAA_N_K@Z @ 0x1C00B6168 (-grow@-$KArray@V-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@$00@Rtl@@AEAA_N_K@Z.c)
 * Callees:
 *     ??_G?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00CBA50 (--_G-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z.c)
 */

char __fastcall Rtl::KArray<KRef<NDIS_BIND_FILTER_DRIVER>,1>::reserve(unsigned int *a1, unsigned __int64 a2)
{
  unsigned int v2; // esi
  unsigned int v4; // edi
  __int64 v5; // rdx
  _QWORD *PoolWithTag; // r14
  unsigned int v7; // eax
  __int64 i; // r8
  void *v9; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax

  v2 = a2;
  if ( *a1 >= a2 )
    return 1;
  if ( a2 < 0xFFFFFFFF )
  {
    v4 = 0;
    if ( is_mul_ok(8uLL, a2) )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * a2, 0x7272414Bu);
      if ( PoolWithTag )
      {
        v7 = a1[1];
        for ( i = 0LL; (unsigned int)i < v7; v7 = a1[1] )
        {
          v11 = *((_QWORD *)a1 + 1);
          v5 = (unsigned int)i;
          i = (unsigned int)(i + 1);
          v12 = *(_QWORD *)(v11 + 8 * v5);
          *(_QWORD *)(v11 + 8 * v5) = 0LL;
          PoolWithTag[v5] = v12;
        }
        v9 = (void *)*((_QWORD *)a1 + 1);
        if ( v9 )
        {
          if ( v7 )
          {
            do
              KRef<NDIS_BIND_FILTER_DRIVER>::`scalar deleting destructor'(*((_QWORD *)a1 + 1) + 8LL * v4++, v5, i);
            while ( v4 < a1[1] );
            v9 = (void *)*((_QWORD *)a1 + 1);
          }
          ExFreePoolWithTag(v9, 0x7272414Bu);
        }
        *a1 = v2;
        *((_QWORD *)a1 + 1) = PoolWithTag;
        return 1;
      }
    }
  }
  return 0;
}
