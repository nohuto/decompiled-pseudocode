/*
 * XREFs of IsMiniportDriverCCDSupport @ 0x1C00E55FC
 * Callers:
 *     DxgkConvertDisplayConfigCScalingToDdiScaling @ 0x1C00E5570 (DxgkConvertDisplayConfigCScalingToDdiScaling.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002730 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C008BD94 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

_BOOL8 __fastcall IsMiniportDriverCCDSupport(struct _LUID *a1)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v3; // rax
  __int64 v4; // rcx
  BOOL v5; // ebx
  DXGADAPTER *v6; // r8
  __int64 v7; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v3 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v10);
  v5 = 0;
  v6 = v3;
  if ( v3 )
  {
    v7 = *((_QWORD *)v3 + 288);
    if ( v7 )
      v5 = (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(v7 + 16)) >= 1105;
    DXGADAPTER::ReleaseReferenceNoTracking(v6);
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v9 + 24) = a1->HighPart;
    *(_QWORD *)(v9 + 32) = a1->LowPart;
    WdLogEvent5_WdError(v9);
  }
  return v5;
}
