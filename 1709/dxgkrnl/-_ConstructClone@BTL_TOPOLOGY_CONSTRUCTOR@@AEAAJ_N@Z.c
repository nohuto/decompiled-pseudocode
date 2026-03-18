/*
 * XREFs of ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C01FAFA0
 * Callers:
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C01F95F4 (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C01FB08C (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C00083E4 (IsInternalVideoOutput.c)
 *     ?SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z @ 0x1C01F7E08 (-SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C01FA7C4 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C01FB6F4 (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C01FB900 (-_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ConstructClone(BTL_TOPOLOGY_CONSTRUCTOR *this, char a2)
{
  __int64 result; // rax
  unsigned __int16 v5; // di
  __int64 v6; // rsi
  unsigned int v7; // r9d
  int v8; // eax
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rax

  result = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(this);
  v5 = 0;
  if ( (int)result >= 0 )
  {
    if ( *((_BYTE *)this + 60) )
    {
      *((_BYTE *)this + 10) = 1;
      result = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtendSecondPath(this, a2);
      LODWORD(v6) = result;
      if ( (int)result < 0 )
        return result;
    }
    else
    {
      v7 = *((_DWORD *)this + 5);
      *((_BYTE *)this + 10) = 0;
      v8 = BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology(
             (CCD_TOPOLOGY **)this,
             a2,
             (const struct _LUID *)((char *)this + 12),
             v7);
      v6 = v8;
      if ( v8 < 0 )
      {
        v10 = (_QWORD *)WdLogNewEntry5_WdError(v9);
        v10[3] = v6;
        v10[4] = *((int *)this + 4);
        v10[5] = *((unsigned int *)this + 3);
        v10[6] = *((unsigned int *)this + 5);
        v10[7] = *(_QWORD *)(*(_QWORD *)this + 64LL);
        WdLogEvent5_WdError(v10);
        return (unsigned int)v6;
      }
      if ( IsInternalVideoOutput(*((_DWORD *)this + 7)) )
      {
        v11 = *(_QWORD *)(*(_QWORD *)this + 64LL);
        if ( v11 )
          v5 = *(_WORD *)(v11 + 20);
        if ( v5 >= 2u )
          LODWORD(v6) = CCD_TOPOLOGY::SwapPathsDescriptors(*(CCD_TOPOLOGY **)this, 0, 1u);
      }
    }
    *((_BYTE *)this + 11) = 1;
    return (unsigned int)v6;
  }
  return result;
}
