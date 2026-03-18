/*
 * XREFs of ?DxgkGetPreferredMode@@YAJPEAU_D3DKMT_GET_PREFERRED_MODE@@@Z @ 0x1C016DCB0
 * Callers:
 *     DxgkEscape @ 0x1C00D0150 (DxgkEscape.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00078D0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00A2674 (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00D79B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DmmGetMonitorSupportsHDR@@YAJPEAXIPEAE@Z @ 0x1C01D2304 (-DmmGetMonitorSupportsHDR@@YAJPEAXIPEAE@Z.c)
 */

__int64 __fastcall DxgkGetPreferredMode(struct _D3DKMT_GET_PREFERRED_MODE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  DXGGLOBAL *Global; // rax
  __int64 v6; // r9
  struct DXGADAPTER *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  DXGADAPTER *v10; // rsi
  _QWORD *v11; // rax
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  int PreferredMonitorSourceModeOnTarget; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int MonitorSupportsHDR; // eax
  D3DKMDT_2DREGION ActiveSize; // rax
  bool v22; // zf
  _BYTE v24[8]; // [rsp+28h] [rbp-59h] BYREF
  _BYTE v25[32]; // [rsp+30h] [rbp-51h] BYREF
  _BYTE v26[40]; // [rsp+50h] [rbp-31h] BYREF
  struct _D3DKMDT_MONITOR_SOURCE_MODE v27; // [rsp+78h] [rbp-9h] BYREF
  unsigned __int64 v28; // [rsp+E8h] [rbp+67h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2, a3, a4);
  v7 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)a1, &v28, v6);
  v10 = v7;
  if ( v7 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v24, v7, 0LL);
    DXGADAPTER::ReleaseReference(v10);
    v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v24);
    v12 = v13;
    if ( v13 >= 0 )
    {
      if ( *((_QWORD *)v10 + 285) )
      {
        PreferredMonitorSourceModeOnTarget = DmmGetPreferredMonitorSourceModeOnTarget(v10, *((_DWORD *)a1 + 2), &v27);
        v12 = PreferredMonitorSourceModeOnTarget;
        if ( PreferredMonitorSourceModeOnTarget >= 0 )
        {
          MonitorSupportsHDR = DmmGetMonitorSupportsHDR(v10, *((_DWORD *)a1 + 2), (unsigned __int8 *)&v28);
          v12 = MonitorSupportsHDR;
          if ( MonitorSupportsHDR >= 0 )
          {
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)v24);
            ActiveSize = v27.VideoSignalInfo.ActiveSize;
            *((_DWORD *)a1 + 8) = 0;
            v22 = (_BYTE)v28 == 0;
            *(D3DKMDT_2DREGION *)((char *)a1 + 12) = ActiveSize;
            *(D3DDDI_RATIONAL *)((char *)a1 + 20) = v27.VideoSignalInfo.VSyncFreq;
            *((_DWORD *)a1 + 7) = v27.VideoSignalInfo.AdditionalSignalInfo;
            if ( !v22 )
              *((_DWORD *)a1 + 8) |= 1u;
            goto LABEL_14;
          }
        }
        v16 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
        v16[3] = *((int *)a1 + 1);
        v16[4] = *(unsigned int *)a1;
        v16[5] = *((unsigned int *)a1 + 2);
        v16[6] = v12;
LABEL_11:
        WdLogEvent5_WdError(v16);
LABEL_14:
        COREACCESS::~COREACCESS((COREACCESS *)v26);
        COREACCESS::~COREACCESS((COREACCESS *)v25);
        return (unsigned int)v12;
      }
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14);
      v12 = -1073741811LL;
    }
    else
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14);
    }
    v16[3] = *((int *)a1 + 1);
    v16[4] = *(unsigned int *)a1;
    v16[5] = v12;
    goto LABEL_11;
  }
  v11 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
  LODWORD(v12) = -1073741811;
  v11[3] = *((int *)a1 + 1);
  v11[4] = *(unsigned int *)a1;
  v11[5] = -1073741811LL;
  WdLogEvent5_WdError(v11);
  return (unsigned int)v12;
}
