/*
 * XREFs of DpiMiracastQueryMiracastSupportForFDO @ 0x1C008C3D4
 * Callers:
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C008C2A0 (DxgkMiracastQueryMiracastSupportInternal.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001278 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C00012A0 (DpiCheckForOutstandingD3Requests.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00061DC (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 */

__int64 __fastcall DpiMiracastQueryMiracastSupportForFDO(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // ebp
  DXGADAPTER *v9; // rcx
  int DriverVersion; // eax
  _WORD *v11; // r8
  int v12; // r9d
  __int64 v14; // rax
  __int64 v15; // rax
  char v16; // al

  v2 = 0;
  *(_DWORD *)a2 = 0;
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(a1 + 483) )
    DpiCheckForOutstandingD3Requests(a1);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 168), 1u);
  v6 = *(_QWORD *)(a1 + 3704);
  if ( !v6 )
    goto LABEL_15;
  v7 = *(_QWORD *)(v6 + 2280);
  if ( v7 )
  {
    v8 = *(unsigned __int8 *)(v7 + 134);
    if ( !*(_QWORD *)(v6 + 2288) )
    {
      v15 = WdLogNewEntry5_WdError(v7, v5);
      *(_QWORD *)(v15 + 24) = 1054LL;
      WdLogEvent5_WdError(v15);
    }
    if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(a1 + 3704)) >= 2000 && v8 )
      *(_BYTE *)a2 = 1;
    DriverVersion = DXGADAPTER::GetDriverVersion(v9);
    if ( DriverVersion >= v12 && *(_DWORD *)(a1 + 2864) >= 2u && v11 && *v11 && v8 )
      *(_BYTE *)(a2 + 1) = 1;
    if ( *(_DWORD *)(a1 + 3064) != -1 && *(_WORD *)(a1 + 4544) )
    {
      v16 = *(_BYTE *)(a1 + 3060) & 1;
      *(_BYTE *)(a2 + 2) = 1;
      *(_BYTE *)(a2 + 3) = v16;
    }
LABEL_15:
    if ( *(_BYTE *)(a1 + 483) )
      DpiEnableD3Requests(*(_QWORD *)(a1 + 24));
    goto LABEL_17;
  }
  v14 = WdLogNewEntry5_WdError(0LL, v5);
  *(_QWORD *)(v14 + 24) = 1031LL;
  WdLogEvent5_WdError(v14);
  if ( *(_BYTE *)(a1 + 483) )
    DpiEnableD3Requests(*(_QWORD *)(a1 + 24));
  v2 = -1073741811;
LABEL_17:
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 168));
  KeLeaveCriticalRegion();
  return v2;
}
