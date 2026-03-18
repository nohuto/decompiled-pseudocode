/*
 * XREFs of IsMiniportDriverCCDSupport @ 0x1C00A83AC
 * Callers:
 *     DxgkConvertDisplayConfigCScalingToDdiScaling @ 0x1C00A8320 (DxgkConvertDisplayConfigCScalingToDdiScaling.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00061DC (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00D79B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

_BOOL8 __fastcall IsMiniportDriverCCDSupport(struct _LUID *a1)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  BOOL v6; // ebx
  DXGADAPTER *v7; // r8
  __int64 v8; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  v3 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v11);
  v6 = 0;
  v7 = v3;
  if ( v3 )
  {
    v8 = *((_QWORD *)v3 + 285);
    if ( v8 )
      v6 = (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(v8 + 16)) >= 1105;
    DXGADAPTER::ReleaseReference(v7);
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v10 + 24) = a1->HighPart;
    *(_QWORD *)(v10 + 32) = a1->LowPart;
    WdLogEvent5_WdError(v10);
  }
  return v6;
}
