/*
 * XREFs of Isoch_MappingLoop @ 0x1C00264C4
 * Callers:
 *     Isoch_MapTransfers @ 0x1C00263C0 (Isoch_MapTransfers.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0019530 (WPP_RECORDER_SF_ddL.c)
 *     TR_AttemptStateChange @ 0x1C0020004 (TR_AttemptStateChange.c)
 *     Isoch_MapStage @ 0x1C00260E4 (Isoch_MapStage.c)
 *     Isoch_PrepareStage @ 0x1C0026610 (Isoch_PrepareStage.c)
 *     Isoch_RetrieveNextStage @ 0x1C00277A0 (Isoch_RetrieveNextStage.c)
 */

__int64 __fastcall Isoch_MappingLoop(_QWORD *a1, char a2)
{
  int i; // edi
  __int64 v5; // rcx
  char NextStage; // al
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]
  __int64 v12; // [rsp+38h] [rbp-10h]

  for ( i = 0; ; ++i )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v5 = a1[7];
      LODWORD(v12) = i;
      LODWORD(v11) = *(_DWORD *)(v5 + 144);
      LODWORD(v10) = *(unsigned __int8 *)(a1[6] + 135LL);
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v5 + 80),
        5u,
        0xEu,
        0x41u,
        (__int64)&WPP_f9020e9f93d73638c8a5c21896bb3fa5_Traceguids,
        v10,
        v11,
        v12);
    }
    a1[43] = 0LL;
    NextStage = Isoch_RetrieveNextStage(a1);
    v8 = (__int64)a1;
    if ( !NextStage )
      return TR_AttemptStateChange(v8, 3, 2);
    LOBYTE(v7) = a2;
    result = Isoch_PrepareStage(a1, v7);
    if ( (_DWORD)result != 1 )
      break;
LABEL_12:
    ;
  }
  if ( (_DWORD)result == 3 )
    return result;
  v8 = (__int64)a1;
  if ( (_DWORD)result != 2 )
  {
    if ( (_DWORD)result == 4 )
      return TR_AttemptStateChange(v8, 3, 2);
    result = Isoch_MapStage((__int64)a1, a2);
    if ( (_DWORD)result == 2 )
      return result;
    v8 = (__int64)a1;
    if ( (_DWORD)result != 4 )
    {
      result = TR_AttemptStateChange((__int64)a1, 3, 3);
      if ( (_DWORD)result != 3 )
        return result;
      goto LABEL_12;
    }
  }
  result = TR_AttemptStateChange(v8, 3, 4);
  if ( (_DWORD)result == 3 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
             WdfDriverGlobals,
             a1[40],
             -100000000LL);
  return result;
}
