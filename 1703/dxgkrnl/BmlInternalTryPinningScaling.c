/*
 * XREFs of BmlInternalTryPinningScaling @ 0x1C00F2BC4
 * Callers:
 *     BmlPinPathContentScaling @ 0x1C00F2B0C (BmlPinPathContentScaling.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?QueryDxgDmmVidPnTopologyInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x1C00E4A7C (-QueryDxgDmmVidPnTopologyInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C00E4E80 (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 *     ?BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C00F65C4 (-BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_P.c)
 */

__int64 __fastcall BmlInternalTryPinningScaling(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  VIDPN_MGR *v4; // rsi
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT v5; // ebx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING AdapterDefaultScaling; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 result; // rax
  __int64 v14; // rax
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v15; // [rsp+58h] [rbp+10h] BYREF

  v4 = *(VIDPN_MGR **)(a2 + 48);
  v5 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT)a4;
  AdapterDefaultScaling = (int)a3;
  if ( (_DWORD)a3 == 253 )
    AdapterDefaultScaling = (unsigned int)VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(a2 + 48), a2, a3, a4);
  if ( BmlIsSupportedPathScaling(AdapterDefaultScaling, v5) )
  {
    VIDPN_MGR::QueryDxgDmmVidPnTopologyInterface(v4, &v15, v11, v12);
    result = (*((__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, char))v15 + 8))(
               (a2 + 96) & -(__int64)(a2 != -289),
               *(unsigned int *)(*(_QWORD *)a1 + 24LL),
               *(unsigned int *)(*(_QWORD *)a1 + 28LL),
               (unsigned int)AdapterDefaultScaling,
               1);
    if ( (_DWORD)result == -1071774907 )
      return 3223192326LL;
  }
  else
  {
    v14 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
    *(_QWORD *)(v14 + 24) = AdapterDefaultScaling;
    WdLogEvent5_WdWarning(v14);
    return 3223192326LL;
  }
  return result;
}
