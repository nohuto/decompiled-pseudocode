/*
 * XREFs of ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C00BF14C
 * Callers:
 *     KRegKey::QueryValueMultisz__lambda_7dba7dab9bc3060b810d705c95db8e00___lambda_ec8793c82e0ed6bcee09c56382ecb370___ @ 0x1C00BA960 (KRegKey--QueryValueMultisz__lambda_7dba7dab9bc3060b810d705c95db8e00___lambda_ec8793c82e0ed6bcee0.c)
 *     ?grow@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAA_N_K@Z @ 0x1C00BF234 (-grow@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_LIN.c)
 *     KRegKey::QueryValueMultisz__lambda_43d9c6f647151fdb2f2362c6d885aaea___lambda_ac55aedf94f20521cfbcaaf74fbc728b___ @ 0x1C00FD518 (KRegKey--QueryValueMultisz__lambda_43d9c6f647151fdb2f2362c6d885aaea___lambda_ac55aedf94f20521cfb.c)
 * Callees:
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00B3770 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00E77E8 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

char __fastcall Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::reserve(
        unsigned int *a1,
        unsigned __int64 a2)
{
  unsigned int v2; // edi
  _QWORD *PoolWithTag; // r14
  unsigned int v5; // eax
  __int64 i; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rsi
  NDIS_BIND_LINK_BASE *v11; // rbp
  volatile signed __int32 *Miniport; // rcx

  v2 = a2;
  if ( *a1 >= a2 )
    return 1;
  if ( a2 < 0xFFFFFFFF && is_mul_ok(8uLL, a2) )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * a2, 0x7272414Bu);
    if ( PoolWithTag )
    {
      v5 = a1[1];
      for ( i = 0LL; (unsigned int)i < v5; v5 = a1[1] )
      {
        v7 = *((_QWORD *)a1 + 1);
        v8 = *(_QWORD *)(v7 + 8 * i);
        *(_QWORD *)(v7 + 8 * i) = 0LL;
        PoolWithTag[i] = v8;
        i = (unsigned int)(i + 1);
      }
      v9 = (_QWORD *)*((_QWORD *)a1 + 1);
      if ( v9 )
      {
        v10 = 0LL;
        if ( v5 )
        {
          do
          {
            v9 = (_QWORD *)*((_QWORD *)a1 + 1);
            v11 = (NDIS_BIND_LINK_BASE *)v9[v10];
            if ( v11 )
            {
              Miniport = (volatile signed __int32 *)v11[1].BindState.Miniport;
              if ( Miniport )
              {
                if ( !_InterlockedDecrement(Miniport + 12) )
                  KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)Miniport);
              }
              NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v11);
              ExFreePoolWithTag(v11, 0x4C745042u);
              v9 = (_QWORD *)*((_QWORD *)a1 + 1);
            }
            v10 = (unsigned int)(v10 + 1);
          }
          while ( (unsigned int)v10 < a1[1] );
        }
        ExFreePoolWithTag(v9, 0x7272414Bu);
      }
      *a1 = v2;
      *((_QWORD *)a1 + 1) = PoolWithTag;
      return 1;
    }
  }
  return 0;
}
