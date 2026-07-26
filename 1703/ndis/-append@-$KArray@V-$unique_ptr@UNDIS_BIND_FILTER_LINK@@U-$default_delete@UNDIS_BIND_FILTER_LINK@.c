/*
 * XREFs of ?append@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Rtl@@QEAA_N$$QEAV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Z @ 0x1C00B52C4
 * Callers:
 *     _lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31_::operator() @ 0x1C00BCC88 (_lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31_--operator().c)
 *     _lambda_ac55aedf94f20521cfbcaaf74fbc728b_::operator() @ 0x1C00F16B0 (_lambda_ac55aedf94f20521cfbcaaf74fbc728b_--operator().c)
 * Callees:
 *     ?grow@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Rtl@@AEAA_N_K@Z @ 0x1C00B5444 (-grow@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@@@.c)
 */

char __fastcall Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>>::append(
        __int64 a1,
        __int64 *a2)
{
  _QWORD *v4; // r8
  __int64 v5; // rcx

  if ( !(unsigned __int8)Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>>::grow(
                           a1,
                           (unsigned int)(*(_DWORD *)(a1 + 4) + 1)) )
    return 0;
  v4 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * *(unsigned int *)(a1 + 4));
  if ( v4 )
  {
    v5 = *a2;
    *a2 = 0LL;
    *v4 = v5;
  }
  ++*(_DWORD *)(a1 + 4);
  return 1;
}
