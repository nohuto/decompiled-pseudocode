/*
 * XREFs of ?GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z @ 0x1C01A9A20
 * Callers:
 *     ?HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C00A68C0 (-HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A9B80 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ?RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z @ 0x1C00A6A84 (-RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00EA570 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00EA5C0 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00EA638 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 */

__int64 __fastcall GetUnusedVidpnSourceId(struct CCD_TOPOLOGY *this, const struct _LUID *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v6; // r8
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int i; // ebx
  unsigned int j; // edi
  __int64 v11; // rax
  unsigned __int16 v12; // cx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rcx
  __int64 v14; // rax
  unsigned __int16 v15; // cx
  unsigned int k; // esi
  __int64 v17; // rcx
  unsigned __int16 v18; // ax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v19; // rcx
  __int64 v20; // rax
  unsigned __int16 v21; // dx
  unsigned __int16 v22; // ax
  struct _D3DKMT_GETPATHSMODALITY *v24[8]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v25; // [rsp+60h] [rbp-28h]
  int v26; // [rsp+74h] [rbp-14h]

  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v24, 8u, 0);
  v26 |= 1u;
  CCD_BTL::RetrieveActiveTopologyNoRetryNeeded(v5, v4, v6, (struct CCD_TOPOLOGY *)v24);
  for ( i = 0; i < 0x10; ++i )
  {
    for ( j = 0; ; ++j )
    {
      v11 = *((_QWORD *)this + 8);
      v12 = v11 ? *(_WORD *)(v11 + 20) : 0;
      if ( j >= v12 )
        break;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, j, v7, v8);
      if ( *((_DWORD *)PathDescriptor + 4) == a2->LowPart
        && *((_DWORD *)PathDescriptor + 5) == a2->HighPart
        && i == *((_DWORD *)PathDescriptor + 6) )
      {
        break;
      }
    }
    v14 = *((_QWORD *)this + 8);
    if ( v14 )
      v15 = *(_WORD *)(v14 + 20);
    else
      v15 = 0;
    if ( j >= v15 )
    {
      for ( k = 0; ; ++k )
      {
        v17 = v25;
        v18 = v25 ? *(_WORD *)(v25 + 20) : 0;
        if ( k >= v18 )
          break;
        v19 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v24, k, v7, v8);
        if ( (*(_QWORD *)v19 & 0x1000000000LL) != 0
          && *((_DWORD *)v19 + 4) == a2->LowPart
          && *((_DWORD *)v19 + 5) == a2->HighPart
          && i == *((_DWORD *)v19 + 6) )
        {
          v17 = v25;
          break;
        }
      }
      v20 = *((_QWORD *)this + 8);
      v21 = v20 ? *(_WORD *)(v20 + 20) : 0;
      if ( j >= v21 )
      {
        v22 = v17 ? *(_WORD *)(v17 + 20) : 0;
        if ( k >= v22 )
          break;
      }
    }
  }
  CCD_TOPOLOGY::~CCD_TOPOLOGY(v24);
  return i;
}
