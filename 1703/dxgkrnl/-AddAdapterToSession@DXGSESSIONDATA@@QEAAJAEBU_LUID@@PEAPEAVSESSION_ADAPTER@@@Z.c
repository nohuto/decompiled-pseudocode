/*
 * XREFs of ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C00FA980
 * Callers:
 *     ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z @ 0x1C000F968 (-SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C00A8418 (DxgkUseAdapterViewInCurrentSession.c)
 * Callees:
 *     ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x1C000D578 (--_GSESSION_ADAPTER@@QEAAPEAXI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00D79B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C00FB0A8 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 */

__int64 __fastcall DXGSESSIONDATA::AddAdapterToSession(
        DXGSESSIONDATA ***this,
        const struct _LUID *a2,
        struct SESSION_ADAPTER **a3)
{
  struct SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  struct SESSION_ADAPTER **v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rdi
  struct _LUID v14; // rax
  DXGGLOBAL *Global; // rax
  __int64 v16; // r9
  struct DXGADAPTER *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  DXGSESSIONDATA **v20; // rdx
  DXGSESSIONDATA *v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax

  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid((DXGSESSIONDATA *)this, a2);
  if ( SessionAdapterFromLuid )
  {
    ++*((_DWORD *)SessionAdapterFromLuid + 12);
    if ( a3 )
      *v7 = SessionAdapterFromLuid;
    return 0LL;
  }
  v8 = operator new(0x60uLL, 0x4B677844u, PagedPool);
  v13 = v8;
  if ( v8 )
  {
    *v8 = this;
    v14 = *a2;
    v13[2] = 0LL;
    *((_DWORD *)v13 + 12) = 0;
    *((_DWORD *)v13 + 13) = 0;
    v13[7] = 0LL;
    v13[8] = 0LL;
    *((_DWORD *)v13 + 18) = 0;
    *((_DWORD *)v13 + 19) = 0;
    v13[1] = v14;
    v13[11] = v13 + 10;
    v13[10] = v13 + 10;
  }
  else
  {
    v13 = 0LL;
  }
  if ( v13 )
  {
    Global = DXGGLOBAL::GetGlobal(v10, v9, v11, v12);
    v17 = DXGGLOBAL::ReferenceAdapterByLuid(Global, (struct _LUID)v13[1], v13 + 3, v16);
    v13[2] = v17;
    if ( v17 )
    {
      v20 = this[2318];
      v21 = (DXGSESSIONDATA *)(v13 + 4);
      if ( *v20 != (DXGSESSIONDATA *)(this + 2317) )
        __fastfail(3u);
      *(_QWORD *)v21 = this + 2317;
      v13[5] = v20;
      *v20 = v21;
      this[2318] = (DXGSESSIONDATA **)v21;
      ++*((_DWORD *)v13 + 12);
      if ( a3 )
        *a3 = (struct SESSION_ADAPTER *)v13;
      v22 = (_QWORD *)WdLogNewEntry5_WdEvent(v21);
      v22[3] = a2->HighPart;
      v22[4] = a2->LowPart;
      v22[5] = this;
      WdLogEvent5_WdEvent(v22);
      return 0LL;
    }
    v25 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
    v25[3] = *((int *)v13 + 3);
    v25[4] = *((unsigned int *)v13 + 2);
    v25[5] = -1073741811LL;
    WdLogEvent5_WdError(v25);
    SESSION_ADAPTER::`scalar deleting destructor'((SESSION_ADAPTER *)v13);
    return 3221225485LL;
  }
  else
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdLowResource(v10);
    v24[3] = a2->HighPart;
    v24[4] = a2->LowPart;
    v24[5] = this;
    WdLogEvent5_WdLowResource(v24);
    return 3221225495LL;
  }
}
