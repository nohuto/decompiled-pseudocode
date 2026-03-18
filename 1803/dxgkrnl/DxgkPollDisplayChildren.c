/*
 * XREFs of DxgkPollDisplayChildren @ 0x1C01683B0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0166404 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C019FE84 (-PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCEN.c)
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C01C50F8 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 */

__int64 __fastcall DxgkPollDisplayChildren(_D3DKMT_POLLDISPLAYCHILDREN *Src, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // dl
  unsigned int v9; // ebx
  DXGGLOBAL *Global; // rax
  int v11; // eax
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // r8
  _D3DKMT_POLLDISPLAYCHILDREN v16; // [rsp+30h] [rbp-F8h] BYREF
  __int64 Current; // [rsp+38h] [rbp-F0h]
  int v18; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v19; // [rsp+48h] [rbp-E0h]
  _QWORD v20[24]; // [rsp+50h] [rbp-D8h] BYREF

  memset(v20, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v20[1]);
  v20[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v20[3]) = 43;
  LOBYTE(v20[6]) = -1;
  v19 = 0LL;
  v18 = 2036;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v4, &EventProfilerEnter, v5, 2036);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v18, 2036);
  Current = (__int64)DXGPROCESS::GetCurrent(v7, v6);
  if ( a2 == 1 )
  {
    if ( (unsigned __int64)Src >= MmUserProbeAddress )
      Src = (_D3DKMT_POLLDISPLAYCHILDREN *)MmUserProbeAddress;
    v16 = *Src;
  }
  else
  {
    memmove(&v16, Src, 8uLL);
  }
  v8 = *((_BYTE *)&v16 + 4);
  if ( (*((_DWORD *)&v16 + 1) & 0xFFFFFFE0) != 0 )
  {
    v8 = *((_BYTE *)&v16 + 4) & 1;
    *((_DWORD *)&v16 + 1) = *((_BYTE *)&v16 + 4) & 1;
  }
  v9 = ((v8 & 1) != 0 ? 1 : 4) | 2;
  if ( (v8 & 0x10) == 0 )
    v9 = (v8 & 1) != 0 ? 1 : 4;
  if ( (v8 & 8) == 0 )
  {
    v11 = PollDisplayChildrenForAdapter(&v16, v9, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v20);
    goto LABEL_18;
  }
  if ( !v16.hAdapter )
  {
    Global = DXGGLOBAL::GetGlobal((v8 & 1) != 0 ? 1 : 4);
    v11 = DXGGLOBAL::PollDisplayChildrenAll(Global, &v16, v9, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v20);
LABEL_18:
    v8 = *((_BYTE *)&v16 + 4);
    v12 = v11;
    goto LABEL_19;
  }
  v12 = -1073741811;
LABEL_19:
  if ( v12 >= 0 && (v8 & 4) != 0 )
  {
    Current = -1LL;
    memset(&v20[10], 0, 0x68uLL);
    v12 = DxgkHandleMonitorEvent(-1LL, 0xFFFFFFFFLL, 5LL);
    if ( v12 == -1071774941 )
      v12 = 0;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v13, &EventProfilerExit, v14, v18);
  return (unsigned int)v12;
}
