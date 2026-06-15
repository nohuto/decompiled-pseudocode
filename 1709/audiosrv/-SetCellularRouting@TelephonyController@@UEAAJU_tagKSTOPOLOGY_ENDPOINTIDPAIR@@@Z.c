/*
 * XREFs of ?SetCellularRouting@TelephonyController@@UEAAJU_tagKSTOPOLOGY_ENDPOINTIDPAIR@@@Z @ 0x1800EED00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Find@?$CAtlList@U_tagKSTOPOLOGY_ENDPOINTIDPAIR@@VRoutingPairsTraits@@@ATL@@QEBAPEAU__POSITION@@AEBU_tagKSTOPOLOGY_ENDPOINTIDPAIR@@PEAU3@@Z @ 0x1800ED580 (-Find@-$CAtlList@U_tagKSTOPOLOGY_ENDPOINTIDPAIR@@VRoutingPairsTraits@@@ATL@@QEBAPEAU__POSITION@@.c)
 */

__int64 __fastcall TelephonyController::SetCellularRouting(__int64 a1, const struct _tagKSTOPOLOGY_ENDPOINTIDPAIR *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  int v6; // eax
  _BYTE v8[8]; // [rsp+40h] [rbp-28h] BYREF
  GUID v9; // [rsp+48h] [rbp-20h] BYREF
  int v10; // [rsp+58h] [rbp-10h]
  int v11; // [rsp+5Ch] [rbp-Ch]

  v4 = 0;
  if ( ATL::CAtlList<_tagKSTOPOLOGY_ENDPOINTIDPAIR,RoutingPairsTraits>::Find((__int64 **)(a1 + 80), a2) )
  {
    v5 = *(_QWORD *)(a1 + 200);
    v9 = GUID_abf25c7e_0e64_4e32_b190_d0f6d7c53e97;
    v10 = 0;
    v11 = 2;
    v6 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, const struct _tagKSTOPOLOGY_ENDPOINTIDPAIR *, int, _BYTE *))(*(_QWORD *)v5 + 24LL))(
           v5,
           &v9,
           24LL,
           a2,
           1048,
           v8);
    if ( v6 < 0 )
      return (unsigned int)v6;
  }
  return v4;
}
