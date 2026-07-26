/*
 * XREFs of ?insertSortedUnique@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Rtl@@QEAA_N$$QEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@P6A_NAEBV34@1@Z@Z @ 0x1C00B187C
 * Callers:
 *     _lambda_ec8793c82e0ed6bcee09c56382ecb370_::operator() @ 0x1C00B14E4 (_lambda_ec8793c82e0ed6bcee09c56382ecb370_--operator().c)
 * Callees:
 *     ?append@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Rtl@@QEAA_N$$QEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C00B1828 (-append@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_L.c)
 *     ?insertAt@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Rtl@@QEAA_N_K$$QEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C00B1B18 (-insertAt@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL.c)
 */

char __fastcall Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>>::insertSortedUnique(
        __int64 a1,
        __int64 *a2)
{
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 v5; // rbx

  v3 = 0LL;
  if ( !*(_DWORD *)(a1 + 4) )
    return Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>>::append(
             a1,
             a2);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(*a2 + 80) + 8LL;
  while ( *(_QWORD *)(*(_QWORD *)v4 + 80LL) + 8LL < v5 )
  {
    ++v3;
    v4 += 8LL;
    if ( v3 >= *(unsigned int *)(a1 + 4) )
      return Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>>::append(
               a1,
               a2);
  }
  if ( v5 >= *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v3) + 80LL) + 8LL )
    return 1;
  else
    return Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>>::insertAt(
             a1,
             v3,
             a2);
}
