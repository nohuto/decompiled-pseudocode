/*
 * XREFs of ?append@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N$$QEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C00BEFA0
 * Callers:
 *     _lambda_ec8793c82e0ed6bcee09c56382ecb370_::operator() @ 0x1C00BB60C (_lambda_ec8793c82e0ed6bcee09c56382ecb370_--operator().c)
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C00FD7B4 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 * Callees:
 *     ?grow@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAA_N_K@Z @ 0x1C00BF234 (-grow@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_LIN.c)
 */

char __fastcall Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::append(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // r8
  char result; // al
  __int64 v6; // rcx
  __int64 v7; // rdx

  if ( !(unsigned __int8)Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::grow(
                           a1,
                           (unsigned int)(*(_DWORD *)(a1 + 4) + 1)) )
    return 0;
  v4 = *(unsigned int *)(a1 + 4);
  result = 1;
  v6 = *a2;
  v7 = *(_QWORD *)(a1 + 8);
  *a2 = 0LL;
  *(_QWORD *)(v7 + 8 * v4) = v6;
  ++*(_DWORD *)(a1 + 4);
  return result;
}
