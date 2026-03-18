/*
 * XREFs of ?GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z @ 0x1C01C561C
 * Callers:
 *     ?HMDDisplayOnOff@@YAJPEAVDXGADAPTER@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C01C5780 (-HMDDisplayOnOff@@YAJPEAVDXGADAPTER@@IW4_HMD_POWER_REQUEST@@@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C5C40 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00B35B8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00B3600 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00B3678 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z @ 0x1C0227A28 (-RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z.c)
 */

__int64 __fastcall GetUnusedVidpnSourceId(struct CCD_TOPOLOGY *this, const struct _LUID *a2)
{
  bool v4; // dl
  bool v5; // cl
  bool v6; // r8
  unsigned int i; // ebx
  unsigned int j; // edi
  __int64 v9; // rcx
  unsigned __int16 v10; // ax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rcx
  unsigned __int16 v12; // ax
  unsigned int k; // esi
  __int64 v14; // rcx
  unsigned __int16 v15; // ax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v16; // rcx
  __int64 v17; // rax
  unsigned __int16 v18; // dx
  unsigned __int16 v19; // ax
  _BYTE v21[64]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v22; // [rsp+60h] [rbp-28h]
  int v23; // [rsp+74h] [rbp-14h]

  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v21, 8u, 0);
  v23 |= 1u;
  CCD_BTL::RetrieveActiveTopologyNoRetryNeeded(v5, v4, v6, (struct CCD_TOPOLOGY *)v21);
  for ( i = 0; i < 0x10; ++i )
  {
    for ( j = 0; ; ++j )
    {
      v9 = *((_QWORD *)this + 8);
      v10 = v9 ? *(_WORD *)(v9 + 20) : 0;
      if ( j >= v10 )
        break;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, j);
      if ( *((_DWORD *)PathDescriptor + 4) == a2->LowPart
        && *((_DWORD *)PathDescriptor + 5) == a2->HighPart
        && i == *((_DWORD *)PathDescriptor + 6) )
      {
        v9 = *((_QWORD *)this + 8);
        break;
      }
    }
    if ( v9 )
      v12 = *(_WORD *)(v9 + 20);
    else
      v12 = 0;
    if ( j >= v12 )
    {
      for ( k = 0; ; ++k )
      {
        v14 = v22;
        v15 = v22 ? *(_WORD *)(v22 + 20) : 0;
        if ( k >= v15 )
          break;
        v16 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v21, k);
        if ( (*(_QWORD *)v16 & 0x1000000000LL) != 0
          && *((_DWORD *)v16 + 4) == a2->LowPart
          && *((_DWORD *)v16 + 5) == a2->HighPart
          && i == *((_DWORD *)v16 + 6) )
        {
          v14 = v22;
          break;
        }
      }
      v17 = *((_QWORD *)this + 8);
      v18 = v17 ? *(_WORD *)(v17 + 20) : 0;
      if ( j >= v18 )
      {
        v19 = v14 ? *(_WORD *)(v14 + 20) : 0;
        if ( k >= v19 )
          break;
      }
    }
  }
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v21);
  return i;
}
