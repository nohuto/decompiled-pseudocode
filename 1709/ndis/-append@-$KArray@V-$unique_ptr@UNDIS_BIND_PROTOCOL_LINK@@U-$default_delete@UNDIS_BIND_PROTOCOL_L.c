/*
 * XREFs of ?append@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N$$QEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C00B3E40
 * Callers:
 *     KRegKey::QueryValueMultisz__lambda_7dba7dab9bc3060b810d705c95db8e00___lambda_ec8793c82e0ed6bcee09c56382ecb370___ @ 0x1C00B154C (KRegKey--QueryValueMultisz__lambda_7dba7dab9bc3060b810d705c95db8e00___lambda_ec8793c82e0ed6bcee0.c)
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C00FAC90 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 * Callees:
 *     ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C00B3E94 (-reserve@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_.c)
 */

char __fastcall Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::append(
        unsigned int *a1,
        __int64 *a2)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  _QWORD *v6; // r8
  __int64 v7; // rcx
  char result; // al
  unsigned __int64 v9; // rdx

  v4 = a1[1] + 1;
  v5 = *a1;
  if ( v5 >= v4 )
    goto LABEL_2;
  if ( v4 < 4 )
    v4 = 4LL;
  v9 = ((unsigned int)v5 >> 1) + (unsigned int)v5;
  if ( v4 >= v9 )
    v9 = v4;
  result = Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::reserve(
             a1,
             v9);
  if ( result )
  {
LABEL_2:
    v6 = (_QWORD *)(*((_QWORD *)a1 + 1) + 8LL * a1[1]);
    if ( v6 )
    {
      v7 = *a2;
      *a2 = 0LL;
      *v6 = v7;
    }
    ++a1[1];
    return 1;
  }
  return result;
}
