/*
 * XREFs of DxgkPollDisplayChildren @ 0x1C017D060
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017AFF8 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0195CFC (-PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCEN.c)
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C01A9568 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 */

__int64 __fastcall DxgkPollDisplayChildren(_D3DKMT_POLLDISPLAYCHILDREN *Src, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  DXGGLOBAL *Global; // rax
  int v12; // eax
  int v13; // ebx
  _D3DKMT_POLLDISPLAYCHILDREN v15; // [rsp+30h] [rbp-D8h] BYREF
  __int64 Current; // [rsp+38h] [rbp-D0h]
  _QWORD v17[22]; // [rsp+40h] [rbp-C8h] BYREF

  memset(v17, 0, 0x40uLL);
  EtwActivityIdControl(3u, (LPGUID)&v17[1]);
  v17[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v17[3]) = 43;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v4, &EventProfilerEnter, v5, 2036);
  Current = (__int64)DXGPROCESS::GetCurrent(v4);
  if ( a2 == 1 )
  {
    if ( (unsigned __int64)Src >= MmUserProbeAddress )
      Src = (_D3DKMT_POLLDISPLAYCHILDREN *)MmUserProbeAddress;
    v15 = *Src;
  }
  else
  {
    memmove(&v15, Src, 8uLL);
  }
  v8 = *((unsigned int *)&v15 + 1);
  if ( (*((_DWORD *)&v15 + 1) & 0xFFFFFFE0) != 0 )
  {
    v8 = *((_BYTE *)&v15 + 4) & 1;
    *((_DWORD *)&v15 + 1) = *((_BYTE *)&v15 + 4) & 1;
  }
  v9 = (v8 & 1) != 0 ? 1 : 4;
  v10 = ((v8 & 1) != 0 ? 1 : 4) | 2;
  if ( (v8 & 0x10) == 0 )
    v10 = (v8 & 1) != 0 ? 1 : 4;
  if ( (v8 & 8) == 0 )
  {
    v12 = PollDisplayChildrenForAdapter(&v15, v10, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v17);
    goto LABEL_18;
  }
  if ( !v15.hAdapter )
  {
    Global = DXGGLOBAL::GetGlobal(v9, v8, v6, v7);
    v12 = DXGGLOBAL::PollDisplayChildrenAll(Global, &v15, v10, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v17);
LABEL_18:
    LOBYTE(v8) = *((_BYTE *)&v15 + 4);
    v13 = v12;
    goto LABEL_19;
  }
  v13 = -1073741811;
LABEL_19:
  if ( v13 >= 0 && (v8 & 4) != 0 )
  {
    Current = -1LL;
    memset(&v17[8], 0, 0x70uLL);
    v13 = DxgkHandleMonitorEvent(-1LL, 0xFFFFFFFFLL, 5LL);
    if ( v13 == -1071774941 )
      v13 = 0;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v9, &EventProfilerExit, v6, 2036);
  return (unsigned int)v13;
}
