/*
 * XREFs of ?SetCellularRouting@TelephonyController@@UEAAJU_tagKSTOPOLOGY_ENDPOINTIDPAIR@@@Z @ 0x18011C0F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?Find@?$CAtlList@U_tagKSTOPOLOGY_ENDPOINTIDPAIR@@VRoutingPairsTraits@@@ATL@@QEBAPEAU__POSITION@@AEBU_tagKSTOPOLOGY_ENDPOINTIDPAIR@@PEAU3@@Z @ 0x18011A674 (-Find@-$CAtlList@U_tagKSTOPOLOGY_ENDPOINTIDPAIR@@VRoutingPairsTraits@@@ATL@@QEBAPEAU__POSITION@@.c)
 */

__int64 __fastcall TelephonyController::SetCellularRouting(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  _BYTE v9[8]; // [rsp+40h] [rbp-28h] BYREF
  GUID v10; // [rsp+48h] [rbp-20h] BYREF
  int v11; // [rsp+58h] [rbp-10h]
  int v12; // [rsp+5Ch] [rbp-Ch]

  v4 = 0;
  if ( ATL::CAtlList<_tagKSTOPOLOGY_ENDPOINTIDPAIR,RoutingPairsTraits>::Find(
         (__int64 **)(a1 + 80),
         (const struct _tagKSTOPOLOGY_ENDPOINTIDPAIR *)a2) )
  {
    v5 = (*(__int64 (__fastcall **)(CAudioResourceManager *, _QWORD, __int64, _QWORD, int, _DWORD))(*(_QWORD *)g_AudioResourceManager
                                                                                                  + 64LL))(
           g_AudioResourceManager,
           0LL,
           a2,
           *(unsigned int *)(a2 + 520),
           1,
           0);
    if ( v5 < 0 )
      return (unsigned int)v5;
    v5 = (*(__int64 (__fastcall **)(CAudioResourceManager *, _QWORD, __int64, _QWORD, int, int))(*(_QWORD *)g_AudioResourceManager
                                                                                               + 64LL))(
           g_AudioResourceManager,
           0LL,
           a2 + 524,
           *(unsigned int *)(a2 + 1044),
           1,
           1);
    if ( v5 < 0 )
    {
      return (unsigned int)v5;
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 200);
      v10 = GUID_abf25c7e_0e64_4e32_b190_d0f6d7c53e97;
      v11 = 0;
      v12 = 2;
      v7 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, __int64, int, _BYTE *))(*(_QWORD *)v6 + 24LL))(
             v6,
             &v10,
             24LL,
             a2,
             1048,
             v9);
      if ( v7 < 0 )
        return (unsigned int)v7;
    }
  }
  return v4;
}
