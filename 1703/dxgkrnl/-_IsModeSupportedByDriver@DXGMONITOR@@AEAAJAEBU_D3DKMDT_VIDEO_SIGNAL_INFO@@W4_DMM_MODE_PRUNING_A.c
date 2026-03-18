/*
 * XREFs of ?_IsModeSupportedByDriver@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00F99A0
 * Callers:
 *     ?_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00F98E8 (-_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_A.c)
 * Callees:
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1C000D24C (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 */

__int64 __fastcall DXGMONITOR::_IsModeSupportedByDriver(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5,
        _DWORD *a6)
{
  char v6; // bp
  _QWORD *v9; // rdi
  _QWORD *v10; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  v6 = a4;
  if ( (unsigned int)(a3 - 1) > 1 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !a5 )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !a6 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v14);
  }
  v9 = (_QWORD *)(a1 + 160);
  v10 = (_QWORD *)*v9;
  if ( (_QWORD *)*v9 == v9 )
    goto LABEL_16;
  if ( v10 )
    v10 -= 12;
  if ( !v10 )
  {
LABEL_16:
    *a5 = 0;
  }
  else
  {
    while ( *((_DWORD *)v10 + 21) != 5
         || *(_DWORD *)(a2 + 12) != *((_DWORD *)v10 + 5)
         || *(_DWORD *)(a2 + 16) != *((_DWORD *)v10 + 6)
         || ((*(_BYTE *)(a2 + 48) ^ *((_BYTE *)v10 + 56)) & 7) != 0
         || !v6
         && !DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(
               (const struct _D3DDDI_RATIONAL *)(a2 + 20),
               (const struct _D3DDDI_RATIONAL *)((char *)v10 + 28),
               300) )
    {
      v10 = (_QWORD *)v10[12];
      if ( v10 != v9 )
      {
        if ( v10 )
          v10 -= 12;
        if ( v10 )
          continue;
      }
      goto LABEL_16;
    }
    *a6 = 7;
    *a5 = 1;
  }
  return 0LL;
}
