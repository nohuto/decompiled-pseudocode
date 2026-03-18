/*
 * XREFs of ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C01CE414
 * Callers:
 *     ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z @ 0x1C0032E28 (-SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C01D1304 (DxgkUseAdapterViewInCurrentSession.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x1C0036400 (--_GSESSION_ADAPTER@@QEAAPEAXI@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C00A2578 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?Initialize@SESSION_ADAPTER@@QEAAJXZ @ 0x1C01CFE34 (-Initialize@SESSION_ADAPTER@@QEAAJXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::AddAdapterToSession(
        DXGSESSIONDATA ***this,
        const struct _LUID *a2,
        struct SESSION_ADAPTER **a3)
{
  struct SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  struct SESSION_ADAPTER **v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  struct _LUID v11; // rax
  _QWORD *v12; // rax
  int v14; // r14d
  DXGSESSIONDATA **v15; // rdx
  DXGSESSIONDATA *v16; // rcx
  _QWORD *v17; // rax

  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid((DXGSESSIONDATA *)this, a2);
  if ( SessionAdapterFromLuid )
  {
    ++*((_DWORD *)SessionAdapterFromLuid + 12);
    if ( v7 )
      *v7 = SessionAdapterFromLuid;
  }
  else
  {
    v8 = operator new[](0x68uLL, 0x4B677844u, PagedPool);
    v10 = v8;
    if ( v8 )
    {
      *v8 = this;
      v11 = *a2;
      v10[2] = 0LL;
      *((_DWORD *)v10 + 12) = 0;
      *((_DWORD *)v10 + 13) = 0;
      v10[7] = 0LL;
      v10[8] = 0LL;
      v10[9] = 0LL;
      *((_DWORD *)v10 + 20) = 0;
      *((_DWORD *)v10 + 21) = 0;
      v10[1] = v11;
      v10[12] = v10 + 11;
      v10[11] = v10 + 11;
    }
    else
    {
      v10 = 0LL;
    }
    if ( !v10 )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdLowResource(v9);
      v12[3] = a2->HighPart;
      v12[4] = a2->LowPart;
      v12[5] = this;
      WdLogEvent5_WdLowResource(v12);
      return 3221225495LL;
    }
    v14 = SESSION_ADAPTER::Initialize((SESSION_ADAPTER *)v10);
    if ( v14 < 0 )
    {
      SESSION_ADAPTER::`scalar deleting destructor'((SESSION_ADAPTER *)v10);
      return (unsigned int)v14;
    }
    v15 = this[2319];
    v16 = (DXGSESSIONDATA *)(v10 + 4);
    if ( *v15 != (DXGSESSIONDATA *)(this + 2318) )
      __fastfail(3u);
    *(_QWORD *)v16 = this + 2318;
    v10[5] = v15;
    *v15 = v16;
    this[2319] = (DXGSESSIONDATA **)v16;
    ++*((_DWORD *)v10 + 12);
    if ( a3 )
      *a3 = (struct SESSION_ADAPTER *)v10;
    v17 = (_QWORD *)WdLogNewEntry5_WdEvent(v16, v15);
    v17[3] = a2->HighPart;
    v17[4] = a2->LowPart;
    v17[5] = this;
    WdLogEvent5_WdEvent(v17);
  }
  return 0LL;
}
