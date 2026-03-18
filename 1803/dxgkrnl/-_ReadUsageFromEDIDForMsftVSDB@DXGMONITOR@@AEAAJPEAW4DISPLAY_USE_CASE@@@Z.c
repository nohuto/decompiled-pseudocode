/*
 * XREFs of ?_ReadUsageFromEDIDForMsftVSDB@DXGMONITOR@@AEAAJPEAW4DISPLAY_USE_CASE@@@Z @ 0x1C023B2AC
 * Callers:
 *     ?_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@@Z @ 0x1C0235A50 (-_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?EDID_V1_GetDisplayPrimaryUse@@YAJKPEBEPEAW4DISPLAY_USE_CASE@@@Z @ 0x1C0047D04 (-EDID_V1_GetDisplayPrimaryUse@@YAJKPEBEPEAW4DISPLAY_USE_CASE@@@Z.c)
 *     ?_GetContiguousEDID@DXGMONITOR@@QEAAXIPEAIPEAE@Z @ 0x1C0239C38 (-_GetContiguousEDID@DXGMONITOR@@QEAAXIPEAIPEAE@Z.c)
 */

__int64 __fastcall DXGMONITOR::_ReadUsageFromEDIDForMsftVSDB(DXGMONITOR *this, enum DISPLAY_USE_CASE *a2)
{
  __int64 v4; // rax
  int v5; // edi
  unsigned int v6; // edi
  unsigned __int8 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int8 *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int DisplayPrimaryUse; // ebx
  __int64 v15; // rax
  unsigned int v17; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 18) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = *((_DWORD *)this + 32);
  v17 = 0;
  v6 = v5 << 7;
  v7 = (unsigned __int8 *)operator new[](v6, 0x4D677844u, PagedPool);
  v11 = v7;
  if ( v7 )
  {
    DXGMONITOR::_GetContiguousEDID(this, v6, &v17, v7);
    if ( v6 != v17 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v12);
      WdLogEvent5_WdAssertion(v13);
    }
    DisplayPrimaryUse = EDID_V1_GetDisplayPrimaryUse(v17, v11, a2);
    operator delete[](v11);
  }
  else
  {
    v15 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    WdLogEvent5_WdWarning(v15);
    return (unsigned int)-1073741801;
  }
  return DisplayPrimaryUse;
}
