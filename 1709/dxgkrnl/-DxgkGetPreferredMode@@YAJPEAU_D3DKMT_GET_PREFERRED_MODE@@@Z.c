/*
 * XREFs of ?DxgkGetPreferredMode@@YAJPEAU_D3DKMT_GET_PREFERRED_MODE@@@Z @ 0x1C0171480
 * Callers:
 *     DxgkEscape @ 0x1C009EC60 (DxgkEscape.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00082C0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C008BD94 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00F58D8 (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?DmmGetMonitorSupportsHDR@@YAJPEAXIPEAE@Z @ 0x1C01EC54C (-DmmGetMonitorSupportsHDR@@YAJPEAXIPEAE@Z.c)
 */

__int64 __fastcall DxgkGetPreferredMode(struct _D3DKMT_GET_PREFERRED_MODE *a1)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v3; // rax
  __int64 v4; // rcx
  DXGADAPTER *v5; // rsi
  _QWORD *v6; // rax
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rcx
  _QWORD *v10; // rax
  int PreferredMonitorSourceModeOnTarget; // eax
  __int64 v12; // rcx
  int MonitorSupportsHDR; // eax
  D3DKMDT_2DREGION ActiveSize; // rax
  bool v15; // zf
  _BYTE v17[8]; // [rsp+28h] [rbp-59h] BYREF
  _BYTE v18[32]; // [rsp+30h] [rbp-51h] BYREF
  _BYTE v19[40]; // [rsp+50h] [rbp-31h] BYREF
  struct _D3DKMDT_MONITOR_SOURCE_MODE v20; // [rsp+78h] [rbp-9h] BYREF
  unsigned __int64 v21; // [rsp+E8h] [rbp+67h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v3 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)a1, &v21);
  v5 = v3;
  if ( v3 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v17, v3, 0LL);
    DXGADAPTER::ReleaseReferenceNoTracking(v5);
    v8 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v17);
    v7 = v8;
    if ( v8 >= 0 )
    {
      if ( *((_QWORD *)v5 + 288) )
      {
        PreferredMonitorSourceModeOnTarget = DmmGetPreferredMonitorSourceModeOnTarget(v5, *((_DWORD *)a1 + 2), &v20);
        v7 = PreferredMonitorSourceModeOnTarget;
        if ( PreferredMonitorSourceModeOnTarget >= 0 )
        {
          MonitorSupportsHDR = DmmGetMonitorSupportsHDR(v5, *((_DWORD *)a1 + 2), (unsigned __int8 *)&v21);
          v7 = MonitorSupportsHDR;
          if ( MonitorSupportsHDR >= 0 )
          {
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)v17);
            ActiveSize = v20.VideoSignalInfo.ActiveSize;
            *((_DWORD *)a1 + 8) = 0;
            v15 = (_BYTE)v21 == 0;
            *(D3DKMDT_2DREGION *)((char *)a1 + 12) = ActiveSize;
            *(D3DDDI_RATIONAL *)((char *)a1 + 20) = v20.VideoSignalInfo.VSyncFreq;
            *((_DWORD *)a1 + 7) = v20.VideoSignalInfo.AdditionalSignalInfo;
            if ( !v15 )
              *((_DWORD *)a1 + 8) |= 1u;
            goto LABEL_14;
          }
        }
        v10 = (_QWORD *)WdLogNewEntry5_WdError(v12);
        v10[3] = *((int *)a1 + 1);
        v10[4] = *(unsigned int *)a1;
        v10[5] = *((unsigned int *)a1 + 2);
        v10[6] = v7;
LABEL_11:
        WdLogEvent5_WdError(v10);
LABEL_14:
        COREACCESS::~COREACCESS((COREACCESS *)v19);
        COREACCESS::~COREACCESS((COREACCESS *)v18);
        return (unsigned int)v7;
      }
      v10 = (_QWORD *)WdLogNewEntry5_WdError(v9);
      v7 = -1073741811LL;
    }
    else
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    }
    v10[3] = *((int *)a1 + 1);
    v10[4] = *(unsigned int *)a1;
    v10[5] = v7;
    goto LABEL_11;
  }
  v6 = (_QWORD *)WdLogNewEntry5_WdError(v4);
  LODWORD(v7) = -1073741811;
  v6[3] = *((int *)a1 + 1);
  v6[4] = *(unsigned int *)a1;
  v6[5] = -1073741811LL;
  WdLogEvent5_WdError(v6);
  return (unsigned int)v7;
}
