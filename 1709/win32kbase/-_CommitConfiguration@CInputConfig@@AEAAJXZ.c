/*
 * XREFs of ?_CommitConfiguration@CInputConfig@@AEAAJXZ @ 0x1C0061224
 * Callers:
 *     ?_CreateLegacyConfiguration@CInputConfig@@AEAAXXZ @ 0x1C0061350 (-_CreateLegacyConfiguration@CInputConfig@@AEAAXXZ.c)
 *     ?CommitConfiguration@CInputConfig@@QEAAJXZ @ 0x1C012FC0C (-CommitConfiguration@CInputConfig@@QEAAJXZ.c)
 * Callees:
 *     ?FindMouseConfiguration@CMouseConfig@CInputConfig@@QEAAXXZ @ 0x1C0060FFC (-FindMouseConfiguration@CMouseConfig@CInputConfig@@QEAAXXZ.c)
 *     ?_FreeConfigList@CInputConfig@@AEAAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C006107C (-_FreeConfigList@CInputConfig@@AEAAXPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     Broadcast @ 0x1C0061734 (Broadcast.c)
 *     ?_UpdatePhysicalMonitors@CInputConfig@@AEAAXXZ @ 0x1C012FDD4 (-_UpdatePhysicalMonitors@CInputConfig@@AEAAXXZ.c)
 */

__int64 __fastcall CInputConfig::_CommitConfiguration(CInputConfig *this)
{
  struct CInpPushLock *v2; // rdx
  __int64 v3; // rax
  bool v4; // zf

  CInputConfig::_FreeConfigList(this, (struct _SINGLE_LIST_ENTRY *)this);
  v3 = *((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = 0LL;
  v4 = *((_BYTE *)this + 40) == 0;
  *(_QWORD *)this = v3;
  if ( v4 )
    CInputConfig::_UpdatePhysicalMonitors(this);
  CInputConfig::CMouseConfig::FindMouseConfiguration((CInputConfig *)((char *)this + 16), v2);
  Broadcast();
  return 0LL;
}
