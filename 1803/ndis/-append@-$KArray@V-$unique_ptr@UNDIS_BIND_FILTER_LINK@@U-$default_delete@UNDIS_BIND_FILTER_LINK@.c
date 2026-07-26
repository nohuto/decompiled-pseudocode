/*
 * XREFs of ?append@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N$$QEAV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Z @ 0x1C00BEA64
 * Callers:
 *     _lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31_::operator() @ 0x1C00C90FC (_lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31_--operator().c)
 *     _lambda_ac55aedf94f20521cfbcaaf74fbc728b_::operator() @ 0x1C00FD6C8 (_lambda_ac55aedf94f20521cfbcaaf74fbc728b_--operator().c)
 * Callees:
 *     ?grow@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAA_N_K@Z @ 0x1C00BEBE4 (-grow@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@@@.c)
 */

char __fastcall Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::append(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // r8
  char result; // al
  __int64 v6; // rcx
  __int64 v7; // rdx

  if ( !(unsigned __int8)Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::grow(
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
