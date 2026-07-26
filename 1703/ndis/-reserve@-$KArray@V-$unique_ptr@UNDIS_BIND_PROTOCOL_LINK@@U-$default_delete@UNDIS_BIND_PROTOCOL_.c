/*
 * XREFs of ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Rtl@@QEAA_N_K@Z @ 0x1C00B1904
 * Callers:
 *     KRegKey::QueryValueMultisz__lambda_7dba7dab9bc3060b810d705c95db8e00___lambda_ec8793c82e0ed6bcee09c56382ecb370___ @ 0x1C00B09E0 (KRegKey--QueryValueMultisz__lambda_7dba7dab9bc3060b810d705c95db8e00___lambda_ec8793c82e0ed6bcee0.c)
 *     ?grow@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Rtl@@AEAA_N_K@Z @ 0x1C00B19EC (-grow@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_LIN.c)
 *     KRegKey::QueryValueMultisz__lambda_43d9c6f647151fdb2f2362c6d885aaea___lambda_ac55aedf94f20521cfbcaaf74fbc728b___ @ 0x1C00F1500 (KRegKey--QueryValueMultisz__lambda_43d9c6f647151fdb2f2362c6d885aaea___lambda_ac55aedf94f20521cfb.c)
 * Callees:
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00BFCC4 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00DBF50 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

char __fastcall Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>>::reserve(
        unsigned int *a1,
        unsigned __int64 a2)
{
  unsigned int v2; // edi
  char *PoolWithTag; // r14
  __int64 i; // rdx
  char *v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 j; // rsi
  NDIS_BIND_LINK_BASE *v10; // rbp
  volatile signed __int32 *Miniport; // rcx

  v2 = a2;
  if ( *a1 >= a2 )
    return 1;
  if ( a2 < 0xFFFFFFFF && is_mul_ok(8uLL, a2) )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 8 * a2, 0x7272414Bu);
    if ( PoolWithTag )
    {
      for ( i = 0LL; (unsigned int)i < a1[1]; i = (unsigned int)(i + 1) )
      {
        v6 = &PoolWithTag[8 * i];
        if ( v6 )
        {
          v7 = *((_QWORD *)a1 + 1);
          v8 = *(_QWORD *)(v7 + 8 * i);
          *(_QWORD *)(v7 + 8 * i) = 0LL;
          *(_QWORD *)v6 = v8;
        }
      }
      if ( *((_QWORD *)a1 + 1) )
      {
        for ( j = 0LL; (unsigned int)j < a1[1]; j = (unsigned int)(j + 1) )
        {
          v10 = *(NDIS_BIND_LINK_BASE **)(*((_QWORD *)a1 + 1) + 8 * j);
          if ( v10 )
          {
            Miniport = (volatile signed __int32 *)v10[1].BindState.Miniport;
            if ( Miniport )
            {
              if ( !_InterlockedDecrement(Miniport + 14) )
                KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)Miniport);
            }
            NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v10);
            ExFreePoolWithTag(v10, 0x4C745042u);
          }
        }
        ExFreePoolWithTag(*((PVOID *)a1 + 1), 0x7272414Bu);
      }
      *a1 = v2;
      *((_QWORD *)a1 + 1) = PoolWithTag;
      return 1;
    }
  }
  return 0;
}
