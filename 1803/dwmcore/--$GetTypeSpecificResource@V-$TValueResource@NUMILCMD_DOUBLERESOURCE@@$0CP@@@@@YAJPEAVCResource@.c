/*
 * XREFs of ??$GetTypeSpecificResource@V?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CP@@@@@YAJPEAVCResource@@W4MIL_RESOURCE_TYPE@@PEAPEAV?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CP@@@@Z @ 0x1800C3CD0
 * Callers:
 *     ?GetOpacity@CLegacyMilBrush@@KAJNPEAV?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CP@@@PEAM@Z @ 0x1800B5998 (-GetOpacity@CLegacyMilBrush@@KAJNPEAV-$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CP@@@PEAM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetTypeSpecificResource<TValueResource<double,MILCMD_DOUBLERESOURCE,47>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  *a3 = 0LL;
  if ( a1 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, 47LL) )
    {
      *a3 = a1;
    }
    else
    {
      v3 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x32u);
    }
  }
  return v3;
}
