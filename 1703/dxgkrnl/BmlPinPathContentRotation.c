/*
 * XREFs of BmlPinPathContentRotation @ 0x1C00F2724
 * Callers:
 *     BmlPinNextBestTargetMode @ 0x1C00F24D8 (BmlPinNextBestTargetMode.c)
 * Callees:
 *     ?GetRotationSupport@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0009124 (-GetRotationSupport@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000A7DC (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?QueryDxgDmmVidPnTopologyInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x1C00E4A7C (-QueryDxgDmmVidPnTopologyInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z.c)
 *     ?BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C00F2A78 (-BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT.c)
 */

__int64 __fastcall BmlPinPathContentRotation(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v4; // rdi
  DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 result; // rax
  __int64 v14; // rax
  char v15; // [rsp+20h] [rbp-18h]
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v16; // [rsp+40h] [rbp+8h] BYREF
  _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT v17; // [rsp+50h] [rbp+18h] BYREF

  v4 = 104LL * a3;
  v17 = 0;
  Path = DMMVIDPNTOPOLOGY::FindPath(
           (DMMVIDPNTOPOLOGY *)(a2 + 96),
           *(_DWORD *)(*(_QWORD *)(v4 + a1 + 16) + 24LL),
           *(_DWORD *)(*(_QWORD *)(v4 + a1 + 16) + 28LL));
  DMMVIDPNPRESENTPATH::GetRotationSupport(Path, &v17, v7, v8);
  if ( BmlIsSupportedPathRotation(*(enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)(v4 + a1 + 28), v17) )
  {
    VIDPN_MGR::QueryDxgDmmVidPnTopologyInterface(*(VIDPN_MGR **)(a2 + 48), &v16, v11, v12);
    v15 = 1;
    result = (*((__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, char))v16 + 10))(
               (a2 + 96) & -(__int64)(a2 != -289),
               *(unsigned int *)(*(_QWORD *)(v4 + a1 + 16) + 24LL),
               *(unsigned int *)(*(_QWORD *)(v4 + a1 + 16) + 28LL),
               *(unsigned int *)(v4 + a1 + 28),
               v15);
    if ( (int)result < 0 )
    {
      ++*(_DWORD *)(v4 + a1 + 84);
      *(_DWORD *)(v4 + a1 + 88) = result;
    }
    if ( (_DWORD)result == -1071774907 )
      return 3223192326LL;
  }
  else
  {
    v14 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
    *(_QWORD *)(v14 + 24) = *(int *)(v4 + a1 + 28);
    WdLogEvent5_WdWarning(v14);
    return 3223192326LL;
  }
  return result;
}
