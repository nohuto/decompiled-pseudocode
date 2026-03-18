/*
 * XREFs of ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C01CC128
 * Callers:
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C01C5E10 (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     McTemplateK0ppqq @ 0x1C0028924 (McTemplateK0ppqq.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00903E0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00FC108 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1C01C57BC (-AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z.c)
 *     ?GetAdapterLuid@OUTPUTDUPL_MGR@@QEAA?AU_LUID@@XZ @ 0x1C01C633C (-GetAdapterLuid@OUTPUTDUPL_MGR@@QEAA-AU_LUID@@XZ.c)
 *     ?Initialize@DXGDXGIKEYEDMUTEX@@QEAAJPEAX@Z @ 0x1C01C6C70 (-Initialize@DXGDXGIKEYEDMUTEX@@QEAAJPEAX@Z.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C01C783C (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ??0DDAMetaData@@QEAA@II@Z @ 0x1C01CB390 (--0DDAMetaData@@QEAA@II@Z.c)
 *     ?Initialize@DDAMetaData@@QEAAHII@Z @ 0x1C01CC03C (-Initialize@DDAMetaData@@QEAAHII@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::Initialize(OUTPUTDUPL_CONTEXT *this, const struct _D3DKMT_CREATE_OUTPUTDUPL *a2)
{
  __int64 v4; // rcx
  DXGSESSIONMGR *v5; // rdi
  unsigned int CurrentProcessSessionId; // eax
  __int64 v7; // r8
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v9; // rax
  OUTPUTDUPL_SESSION_MGR *v11; // rdi
  struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *v12; // r8
  __int64 *AdapterLuid; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // ebp
  UINT KeyedMutexCount; // eax
  char *v19; // rax
  __int64 v20; // rcx
  DXGDXGIKEYEDMUTEX *v21; // rdi
  __int64 v22; // rcx
  int v23; // edi
  __int64 v24; // r8
  struct DXGPROCESS *Current; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // ebp
  _QWORD *i; // r14
  DDAMetaData *v31; // rax
  __int64 v32; // rdx
  DDAMetaData *v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  _QWORD *v37; // rdi
  __int64 v38; // rax
  _QWORD v39[2]; // [rsp+40h] [rbp-48h] BYREF
  int v40; // [rsp+50h] [rbp-38h]
  char v41; // [rsp+A0h] [rbp+18h] BYREF

  v5 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this) + 73);
  if ( v5 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v4);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v5, CurrentProcessSessionId, v7);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v9 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v9 + 24) = 1226LL;
LABEL_6:
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
  v11 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)SessionDataForSpecifiedSession + 1);
  if ( !v11 )
  {
    v9 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v9 + 24) = 1233LL;
    goto LABEL_6;
  }
  v12 = 0LL;
  *((_DWORD *)this + 4) = a2->VidPnSourceId;
  if ( *((_DWORD *)this + 81) && !*((_DWORD *)this + 82) )
  {
    AdapterLuid = (__int64 *)OUTPUTDUPL_MGR::GetAdapterLuid(*((OUTPUTDUPL_MGR **)this + 37), (__int64)&v41);
    v12 = (struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *)v39;
    v14 = *AdapterLuid;
    v40 = *((_DWORD *)this + 4);
    v39[0] = *((_QWORD *)this + 4);
    v39[1] = v14;
  }
  if ( !(unsigned int)OUTPUTDUPL_SESSION_MGR::AddRef(v11, *((struct _EPROCESS **)this + 3), v12) )
    return 3221225643LL;
  v17 = 0;
  *((_DWORD *)this + 76) = 1;
  KeyedMutexCount = a2->KeyedMutexCount;
  *((_DWORD *)this + 10) = KeyedMutexCount;
  if ( KeyedMutexCount )
  {
    while ( 1 )
    {
      v19 = (char *)operator new(0x90uLL, 0x674D444Fu, PagedPool);
      v21 = (DXGDXGIKEYEDMUTEX *)v19;
      if ( v19 )
      {
        *(_QWORD *)v19 = 0LL;
        *((_QWORD *)v19 + 1) = 0LL;
        *((_QWORD *)v19 + 11) = 0LL;
        *((_DWORD *)v19 + 24) = 0;
        *((_QWORD *)v19 + 13) = 0LL;
        *((_QWORD *)v19 + 14) = 0LL;
        *((_QWORD *)v19 + 15) = 0LL;
        *((_DWORD *)v19 + 32) = 0;
        memset(v19 + 16, 0, 0x48uLL);
      }
      else
      {
        v21 = 0LL;
      }
      *((_QWORD *)this + v17 + 6) = v21;
      if ( !v21 )
        goto LABEL_46;
      v23 = DXGDXGIKEYEDMUTEX::Initialize(v21, a2->KeyedMutexs[v17].hSharedSurfaceNt);
      if ( v23 < 0 )
        break;
      v23 = DXGDXGIKEYEDMUTEX::OpenLocalMutex(*((_QWORD *)this + v17 + 6), 1, v24);
      if ( v23 < 0 )
      {
        v28 = WdLogNewEntry5_WdError(v16);
        *(_QWORD *)(v28 + 24) = 1284LL;
LABEL_26:
        WdLogEvent5_WdError(v28);
        return (unsigned int)v23;
      }
      if ( ++v17 >= *((_DWORD *)this + 10) )
        goto LABEL_22;
    }
    v28 = WdLogNewEntry5_WdError(v22);
    *(_QWORD *)(v28 + 24) = 1277LL;
    goto LABEL_26;
  }
LABEL_22:
  Current = DXGPROCESS::GetCurrent(v16, v15);
  if ( Current )
    v27 = *((_QWORD *)Current + 12);
  else
    v27 = 0LL;
  if ( !v27 )
  {
    v9 = WdLogNewEntry5_WdError(v26);
    *(_QWORD *)(v9 + 24) = 1293LL;
    goto LABEL_6;
  }
  v29 = 0;
  for ( i = (_QWORD *)((char *)this + 160); ; i += 12 )
  {
    v31 = (DDAMetaData *)operator new(0x50uLL, 0x674D444Fu, PagedPool);
    v33 = v31 ? DDAMetaData::DDAMetaData(v31, v32) : 0LL;
    *(i - 10) = v33;
    if ( !v33 || !(unsigned int)DDAMetaData::Initialize(v33) )
      break;
    v34 = operator new(0x10uLL, 0x674D444Fu, PagedPool);
    v37 = v34;
    if ( v34 )
    {
      *v34 = 0LL;
      v34[1] = 0LL;
      AUTOEXPANDALLOCATION::GetBuffer((PVOID *)v34, 0x4000u, 0);
    }
    else
    {
      v37 = 0LL;
    }
    *i = v37;
    if ( !v37 || !*v37 )
    {
      v38 = WdLogNewEntry5_WdLowResource(v35);
      *(_QWORD *)(v38 + 24) = 0x4000LL;
      *(_QWORD *)(v38 + 32) = a2->VidPnSourceId;
      goto LABEL_47;
    }
    if ( (unsigned int)++v29 >= 2 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0ppqq(
          a2->hAdapter,
          &EventOutputDuplicationCreate,
          v36,
          this,
          a2->hAdapter,
          a2->VidPnSourceId,
          a2->KeyedMutexCount);
      return 0LL;
    }
  }
LABEL_46:
  v38 = WdLogNewEntry5_WdLowResource(v20);
  *(_QWORD *)(v38 + 24) = a2->VidPnSourceId;
LABEL_47:
  WdLogEvent5_WdLowResource(v38);
  return 3221225495LL;
}
