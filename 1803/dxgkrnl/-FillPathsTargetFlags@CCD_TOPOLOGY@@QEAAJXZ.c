/*
 * XREFs of ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00B2EB8
 * Callers:
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C00B2F00 (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00B2F88 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00B3948 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     DxgkGetPathsModality @ 0x1C00C4CF0 (DxgkGetPathsModality.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00F9E10 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FillPathsTargetFlags(CCD_TOPOLOGY *this)
{
  struct DXGGLOBAL *Global; // rax
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rbx
  _QWORD *v7; // rax

  Global = DXGGLOBAL::GetGlobal((__int64)this);
  v3 = DXGGLOBAL::IterateAdaptersWithCallback(Global, CCD_TOPOLOGY::_FillTargetInfoAdaptersCallback, this, 1LL);
  v5 = v3;
  if ( v3 < 0 )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdError(v4);
    v7[3] = v5;
    v7[4] = this;
    v7[5] = *((_QWORD *)this + 8);
    WdLogEvent5_WdError(v7);
  }
  return (unsigned int)v5;
}
