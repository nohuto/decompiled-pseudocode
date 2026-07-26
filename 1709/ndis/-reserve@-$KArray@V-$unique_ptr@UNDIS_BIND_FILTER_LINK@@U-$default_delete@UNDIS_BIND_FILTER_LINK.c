/*
 * XREFs of ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C00BBFE8
 * Callers:
 *     ?grow@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAA_N_K@Z @ 0x1C00BC114 (-grow@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@@@.c)
 *     _lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31_::operator() @ 0x1C00BEC94 (_lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31_--operator().c)
 * Callees:
 *     ??_G?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@QEAAPEAXI@Z @ 0x1C0039340 (--_G-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wist.c)
 */

char __fastcall Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::reserve(
        unsigned int *a1,
        unsigned __int64 a2)
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
              wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'((NDIS_BIND_LINK_BASE **)(*((_QWORD *)a1 + 1) + 8LL * v4++));
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
