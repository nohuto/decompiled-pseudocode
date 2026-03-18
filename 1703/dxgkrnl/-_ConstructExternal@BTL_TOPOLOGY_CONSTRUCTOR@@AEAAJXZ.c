/*
 * XREFs of ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C01E1480
 * Callers:
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C01DFAE4 (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C01E0D9C (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00D7FFC (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C01E070C (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExternal(
        BTL_TOPOLOGY_CONSTRUCTOR *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct DXGGLOBAL *Global; // rax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  int v10; // eax
  _QWORD *v11; // rax

  *((_WORD *)this + 5) = 0;
  Global = DXGGLOBAL::GetGlobal((__int64)this, a2, a3, a4);
  v6 = DXGGLOBAL::IterateAdaptersWithCallback(
         (__int64)Global,
         (__int64 (__fastcall *)(_QWORD *, __int64))BtlPreAcquireSharedAccess__BTL_TOPOLOGY_CONSTRUCTOR::_AddExternalPathsAdaptersCallback_1_,
         (__int64)this,
         1LL);
  v9 = v6;
  if ( v6 < 0
    || !*((_WORD *)this + 4)
    && (LOBYTE(v7) = 1,
        v10 = BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology(
                (CCD_TOPOLOGY **)this,
                v7,
                (const struct _LUID *)((char *)this + 12),
                0xFFFFFFFFLL),
        v9 = v10,
        v10 < 0) )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7);
    v11[3] = v9;
    v11[4] = *(_QWORD *)this;
    v11[5] = *(_QWORD *)(*(_QWORD *)this + 64LL);
    WdLogEvent5_WdError(v11);
  }
  return (unsigned int)v9;
}
