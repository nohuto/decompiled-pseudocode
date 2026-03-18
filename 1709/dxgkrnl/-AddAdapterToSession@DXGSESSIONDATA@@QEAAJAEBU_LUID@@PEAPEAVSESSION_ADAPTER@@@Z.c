/*
 * XREFs of ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C00B2EB4
 * Callers:
 *     ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z @ 0x1C0011070 (-SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C00BA360 (DxgkUseAdapterViewInCurrentSession.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x1C0008130 (--_GSESSION_ADAPTER@@QEAAPEAXI@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C008BD94 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C00B2D7C (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
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
  _QWORD *v10; // rdi
  struct _LUID v11; // rax
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v13; // rax
  __int64 v14; // rcx
  DXGSESSIONDATA **v15; // rdx
  DXGSESSIONDATA *v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rax

  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid((DXGSESSIONDATA *)this, a2);
  if ( SessionAdapterFromLuid )
  {
    ++*((_DWORD *)SessionAdapterFromLuid + 12);
    if ( a3 )
      *v7 = SessionAdapterFromLuid;
    return 0LL;
  }
  v8 = operator new(0x60uLL, 0x4B677844u, PagedPool);
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
    *((_DWORD *)v10 + 18) = 0;
    *((_DWORD *)v10 + 19) = 0;
    v10[1] = v11;
    v10[11] = v10 + 10;
    v10[10] = v10 + 10;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    Global = DXGGLOBAL::GetGlobal(v9);
    v13 = DXGGLOBAL::ReferenceAdapterByLuid(Global, (struct _LUID)v10[1], v10 + 3);
    v10[2] = v13;
    if ( v13 )
    {
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
      v17 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v17[3] = a2->HighPart;
      v17[4] = a2->LowPart;
      v17[5] = this;
      WdLogEvent5_WdEvent(v17);
      return 0LL;
    }
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v20[3] = *((int *)v10 + 3);
    v20[4] = *((unsigned int *)v10 + 2);
    v20[5] = -1073741811LL;
    WdLogEvent5_WdError(v20);
    SESSION_ADAPTER::`scalar deleting destructor'((SESSION_ADAPTER *)v10);
    return 3221225485LL;
  }
  else
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdLowResource(v9);
    v19[3] = a2->HighPart;
    v19[4] = a2->LowPart;
    v19[5] = this;
    WdLogEvent5_WdLowResource(v19);
    return 3221225495LL;
  }
}
