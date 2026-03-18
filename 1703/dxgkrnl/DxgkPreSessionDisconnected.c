/*
 * XREFs of DxgkPreSessionDisconnected @ 0x1C00A6870
 * Callers:
 *     <none>
 * Callees:
 *     ?HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C00A68C0 (-HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C00DD6DC (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 */

void __fastcall DxgkPreSessionDisconnected(char a1)
{
  int v1; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v6; // rax
  int v7; // [rsp+38h] [rbp+10h] BYREF
  int v8; // [rsp+3Ch] [rbp+14h]

  if ( a1 )
  {
    v8 = -1;
    v7 = -1;
    v1 = HMDDisplayOnOff(&v7, 0xFFFFFFFFLL, 2LL);
    v4 = v1;
    if ( v1 < 0 )
    {
      v6 = WdLogNewEntry5_WdError(v3, v2);
      *(_QWORD *)(v6 + 24) = v4;
      WdLogEvent5_WdError(v6);
    }
    Global = DXGGLOBAL::GetGlobal();
    DXGSESSIONMGR::SetConsoleSession(*((DXGSESSIONMGR **)Global + 73), 0);
  }
}
