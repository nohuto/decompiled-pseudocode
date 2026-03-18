/*
 * XREFs of ?_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C01FB828
 * Callers:
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C01FB08C (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C008B884 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C00D99E4 (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00DA7C8 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C00DC53C (-SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00E0CC8 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ConstructFromFirmwareRecommendedVidPn(CCD_TOPOLOGY **this)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v3; // rcx
  int v5; // ebx
  _DWORD *v7[3]; // [rsp+20h] [rbp-50h] BYREF
  int v8; // [rsp+38h] [rbp-38h] BYREF
  __int64 v9; // [rsp+40h] [rbp-30h]
  __int64 v10; // [rsp+48h] [rbp-28h]
  __int64 v11; // [rsp+50h] [rbp-20h]
  __int16 v12; // [rsp+58h] [rbp-18h]
  __int64 v13; // [rsp+60h] [rbp-10h]
  __int64 v14; // [rsp+68h] [rbp-8h]

  Global = DXGGLOBAL::GetGlobal((__int64)this);
  if ( (int)DXGGLOBAL::IterateAdaptersWithCallback(
              (__int64)Global,
              (__int64 (__fastcall *)(_QWORD *, __int64))BtlPreAcquireSharedAccess__BTL_TOPOLOGY_CONSTRUCTOR::_AddFirmwareRecommendedPathsToTopology_1_,
              (__int64)this,
              1) < 0 )
    return 3221226021LL;
  v3 = *((_QWORD *)*this + 8);
  if ( !(v3 ? *(_WORD *)(v3 + 20) : 0) )
    return 3221226021LL;
  v8 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v11 = 0LL;
  v12 = 0;
  CCD_BTL::Global(v3);
  v7[0] = &v8;
  v7[1] = 0LL;
  v7[2] = 0LL;
  v5 = CCD_BTL_CONNECTIVITY_COLLECTOR::operator()(v7);
  if ( v5 >= 0 )
    v5 = CCD_TOPOLOGY::SetConnectivityHash(*this, (const struct CCD_SET_STRING_ID *)&v8);
  CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v8);
  return (unsigned int)v5;
}
