/*
 * XREFs of DxgkPollDisplayChildren @ 0x1C0180A30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C01028B0 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017EDA8 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AAEF8 (-PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCEN.c)
 */

__int64 __fastcall DxgkPollDisplayChildren(_D3DKMT_POLLDISPLAYCHILDREN *Src, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r8
  char v8; // dl
  __int64 v9; // rcx
  unsigned int v10; // ebx
  DXGGLOBAL *Global; // rax
  int v12; // eax
  int v13; // ebx
  _D3DKMT_POLLDISPLAYCHILDREN v15; // [rsp+30h] [rbp-E8h] BYREF
  __int64 Current; // [rsp+38h] [rbp-E0h]
  _QWORD v17[10]; // [rsp+40h] [rbp-D8h] BYREF
  _BYTE v18[112]; // [rsp+90h] [rbp-88h] BYREF

  memset(v17, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v17[1]);
  v17[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v17[3]) = 43;
  LOBYTE(v17[6]) = -1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v5, &EventProfilerEnter, v6, 2036);
  Current = (__int64)DXGPROCESS::GetCurrent(v5, v4);
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
  v8 = *((_BYTE *)&v15 + 4);
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
    Global = DXGGLOBAL::GetGlobal(v9);
    v12 = DXGGLOBAL::PollDisplayChildrenAll(Global, &v15, v10, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v17);
LABEL_18:
    v8 = *((_BYTE *)&v15 + 4);
    v13 = v12;
    goto LABEL_19;
  }
  v13 = -1073741811;
LABEL_19:
  if ( v13 >= 0 && (v8 & 4) != 0 )
  {
    Current = -1LL;
    memset(v18, 0, 0x68uLL);
    v13 = DxgkHandleMonitorEvent((struct _LUID)-1LL, 0xFFFFFFFF, 5u, 2LL, (__int64)v18);
    if ( v13 == -1071774941 )
      v13 = 0;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v9, &EventProfilerExit, v7, 2036);
  return (unsigned int)v13;
}
