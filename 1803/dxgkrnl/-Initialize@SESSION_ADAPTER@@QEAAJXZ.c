/*
 * XREFs of ?Initialize@SESSION_ADAPTER@@QEAAJXZ @ 0x1C01CFE34
 * Callers:
 *     ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C01CE414 (-AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FA6EC (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall SESSION_ADAPTER::Initialize(SESSION_ADAPTER *this)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rax

  Global = DXGGLOBAL::GetGlobal((__int64)this);
  v3 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)((char *)this + 8), (unsigned __int64 *)this + 3);
  *((_QWORD *)this + 2) = v3;
  if ( v3 )
    return 0LL;
  v5 = (_QWORD *)WdLogNewEntry5_WdError(v4);
  v5[3] = *((int *)this + 3);
  v5[4] = *((unsigned int *)this + 2);
  v5[5] = -1073741811LL;
  WdLogEvent5_WdError(v5);
  return 3221225485LL;
}
