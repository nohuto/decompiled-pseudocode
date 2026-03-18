/*
 * XREFs of ??$GetTypeSpecificResource@V?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CK@@@@@YAJPEAVCResource@@W4MIL_RESOURCE_TYPE@@PEAPEAV?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CK@@@@Z @ 0x1800BDD48
 * Callers:
 *     ?GetOpacity@CLegacyMilBrush@@KAJNPEAV?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CK@@@PEAM@Z @ 0x18007D6CC (-GetOpacity@CLegacyMilBrush@@KAJNPEAV-$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CK@@@PEAM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetTypeSpecificResource<TValueResource<double,MILCMD_DOUBLERESOURCE,42>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  *a3 = 0LL;
  if ( a1 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, 42LL) )
    {
      *a3 = a1;
    }
    else
    {
      v3 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x32u);
    }
  }
  return v3;
}
