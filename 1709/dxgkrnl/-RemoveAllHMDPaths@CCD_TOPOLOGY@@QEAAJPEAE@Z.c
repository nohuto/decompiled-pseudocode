/*
 * XREFs of ?RemoveAllHMDPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z @ 0x1C00DBF50
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00DBC2C (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DBCCC (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C00F9C30 (-HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z.c)
 * Callees:
 *     ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x1C00DC588 (-ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::RemoveAllHMDPaths(__int64 this, unsigned __int8 *a2)
{
  unsigned __int16 v2; // r8
  unsigned int v4; // r10d
  unsigned int v5; // ebx
  CCD_TOPOLOGY *v6; // rdi
  __int64 v7; // r9
  unsigned __int16 v8; // ax
  __int128 *v9; // rdx
  __int64 v11; // rax
  _OWORD *v12; // r11
  __int128 v13; // xmm0
  __int64 v14; // rax

  v2 = 0;
  v4 = 0;
  v5 = 0;
  v6 = (CCD_TOPOLOGY *)this;
  while ( 1 )
  {
    v7 = *((_QWORD *)v6 + 8);
    v8 = v7 ? *(_WORD *)(v7 + 20) : 0;
    if ( v4 >= v8 )
      break;
    v9 = (__int128 *)(264LL * v4 + v7 + 48);
    this = 0x1000000000LL;
    if ( (*(_QWORD *)v9 & 0x1000000000LL) != 0 )
    {
      *a2 = 1;
    }
    else
    {
      if ( v4 != v5 )
      {
        this = 264LL * v5;
        v11 = 2LL;
        v12 = (_OWORD *)(this + v7 + 48);
        do
        {
          v13 = *v9;
          v9 += 8;
          *v12 = v13;
          v12 += 8;
          *(v12 - 7) = *(v9 - 7);
          *(v12 - 6) = *(v9 - 6);
          *(v12 - 5) = *(v9 - 5);
          *(v12 - 4) = *(v9 - 4);
          *(v12 - 3) = *(v9 - 3);
          *(v12 - 2) = *(v9 - 2);
          *(v12 - 1) = *(v9 - 1);
          --v11;
        }
        while ( v11 );
        *(_QWORD *)v12 = *(_QWORD *)v9;
      }
      ++v5;
    }
    ++v4;
  }
  if ( *a2 )
  {
    if ( v7 )
      v2 = *(_WORD *)(v7 + 22);
    if ( v5 > v2 )
    {
      v14 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v14);
    }
    *(_WORD *)(*((_QWORD *)v6 + 8) + 20LL) = v5;
    CCD_TOPOLOGY::ClearModalitySetId(v6);
  }
  return 0LL;
}
