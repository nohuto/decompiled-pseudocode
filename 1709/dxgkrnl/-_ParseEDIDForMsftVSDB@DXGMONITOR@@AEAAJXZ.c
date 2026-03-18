/*
 * XREFs of ?_ParseEDIDForMsftVSDB@DXGMONITOR@@AEAAJXZ @ 0x1C0108DA0
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C010BEA0 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?EDID_V1_GetDisplayPrimaryUse@@YAJKPEBEPEAW4DISPLAY_USE_CASE@@@Z @ 0x1C0011848 (-EDID_V1_GetDisplayPrimaryUse@@YAJKPEBEPEAW4DISPLAY_USE_CASE@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_GetContiguousEDID@DXGMONITOR@@QEAAXIPEAIPEAE@Z @ 0x1C010BA54 (-_GetContiguousEDID@DXGMONITOR@@QEAAXIPEAIPEAE@Z.c)
 */

__int64 __fastcall DXGMONITOR::_ParseEDIDForMsftVSDB(DXGMONITOR *this)
{
  int v2; // esi
  unsigned int v3; // esi
  unsigned __int8 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int8 *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  char v15; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v16; // [rsp+38h] [rbp+10h] BYREF

  if ( !*((_QWORD *)this + 16) )
  {
    v12 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v12);
  }
  v2 = *((_DWORD *)this + 28);
  v16 = 0;
  v3 = v2 << 7;
  v4 = (unsigned __int8 *)operator new(v3, 0x4D677844u, PagedPool);
  v8 = v4;
  if ( v4 )
  {
    DXGMONITOR::_GetContiguousEDID(this, v3, &v16, v4);
    if ( v3 != v16 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v13);
    }
    if ( (int)EDID_V1_GetDisplayPrimaryUse(v16, v8, (enum DISPLAY_USE_CASE *)&v15) >= 0
      && (unsigned __int8)(v15 - 7) <= 1u
      && !*((_BYTE *)DXGGLOBAL::GetGlobal(v10) + 1569) )
    {
      *((_BYTE *)this + 564) = 1;
    }
    ExFreePoolWithTag(v8, 0);
  }
  else
  {
    v14 = WdLogNewEntry5_WdWarning(v6, v5, v7);
    WdLogEvent5_WdWarning(v14);
  }
  return 0LL;
}
