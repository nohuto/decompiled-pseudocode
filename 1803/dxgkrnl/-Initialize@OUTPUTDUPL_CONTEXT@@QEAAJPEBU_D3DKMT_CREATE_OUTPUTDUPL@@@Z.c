/*
 * XREFs of ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C01D2364
 * Callers:
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C01C8A30 (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     McTemplateK0ppqq @ 0x1C00334E0 (McTemplateK0ppqq.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C01A8AC0 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1C01C8244 (-AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z.c)
 *     ?GetAdapterLuid@OUTPUTDUPL_MGR@@QEAA?AU_LUID@@XZ @ 0x1C01C916C (-GetAdapterLuid@OUTPUTDUPL_MGR@@QEAA-AU_LUID@@XZ.c)
 *     ?Initialize@DXGDXGIKEYEDMUTEX@@QEAAJPEAX@Z @ 0x1C01C9AA0 (-Initialize@DXGDXGIKEYEDMUTEX@@QEAAJPEAX@Z.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C01CA964 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ??0DDAMetaData@@QEAA@II@Z @ 0x1C01D15C0 (--0DDAMetaData@@QEAA@II@Z.c)
 *     ?Initialize@DDAMetaData@@QEAAHII@Z @ 0x1C01D2278 (-Initialize@DDAMetaData@@QEAAHII@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::Initialize(OUTPUTDUPL_CONTEXT *this, const struct _D3DKMT_CREATE_OUTPUTDUPL *a2)
{
  __int64 v4; // rcx
  DXGSESSIONMGR *v5; // rdi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v8; // rax
  struct DXGFASTMUTEX **v10; // rdi
  struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *v11; // r8
  __int64 *AdapterLuid; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // ebp
  UINT KeyedMutexCount; // eax
  char *v18; // rax
  __int64 v19; // rcx
  DXGDXGIKEYEDMUTEX *v20; // rdi
  __int64 v21; // rcx
  int v22; // edi
  __int64 v23; // r8
  struct DXGPROCESS *Current; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // ebp
  _QWORD *i; // r14
  DDAMetaData *v30; // rax
  __int64 v31; // rdx
  DDAMetaData *v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  _QWORD *v36; // rdi
  __int64 v37; // rax
  _QWORD v38[2]; // [rsp+40h] [rbp-48h] BYREF
  int v39; // [rsp+50h] [rbp-38h]
  char v40; // [rsp+A0h] [rbp+18h] BYREF

  v5 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this) + 74);
  if ( v5 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v4);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v5, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v8 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v8 + 24) = 1226LL;
LABEL_6:
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
  v10 = (struct DXGFASTMUTEX **)*((_QWORD *)SessionDataForSpecifiedSession + 1);
  if ( !v10 )
  {
    v8 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v8 + 24) = 1233LL;
    goto LABEL_6;
  }
  v11 = 0LL;
  *((_DWORD *)this + 4) = a2->VidPnSourceId;
  if ( *((_DWORD *)this + 81) && !*((_DWORD *)this + 82) )
  {
    AdapterLuid = (__int64 *)OUTPUTDUPL_MGR::GetAdapterLuid(*((OUTPUTDUPL_MGR **)this + 37), (__int64)&v40);
    v11 = (struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *)v38;
    v13 = *AdapterLuid;
    v39 = *((_DWORD *)this + 4);
    v38[0] = *((_QWORD *)this + 4);
    v38[1] = v13;
  }
  if ( !(unsigned int)OUTPUTDUPL_SESSION_MGR::AddRef(v10, *((struct _EPROCESS **)this + 3), v11) )
    return 3221225643LL;
  v16 = 0;
  *((_DWORD *)this + 76) = 1;
  KeyedMutexCount = a2->KeyedMutexCount;
  *((_DWORD *)this + 10) = KeyedMutexCount;
  if ( KeyedMutexCount )
  {
    while ( 1 )
    {
      v18 = (char *)operator new[](0x90uLL, 0x674D444Fu, PagedPool);
      v20 = (DXGDXGIKEYEDMUTEX *)v18;
      if ( v18 )
      {
        *(_QWORD *)v18 = 0LL;
        *((_QWORD *)v18 + 1) = 0LL;
        *((_QWORD *)v18 + 11) = 0LL;
        *((_DWORD *)v18 + 24) = 0;
        *((_QWORD *)v18 + 13) = 0LL;
        *((_QWORD *)v18 + 14) = 0LL;
        *((_QWORD *)v18 + 15) = 0LL;
        *((_DWORD *)v18 + 32) = 0;
        memset(v18 + 16, 0, 0x48uLL);
      }
      else
      {
        v20 = 0LL;
      }
      *((_QWORD *)this + v16 + 6) = v20;
      if ( !v20 )
        goto LABEL_46;
      v22 = DXGDXGIKEYEDMUTEX::Initialize(v20, a2->KeyedMutexs[v16].hSharedSurfaceNt);
      if ( v22 < 0 )
        break;
      v22 = DXGDXGIKEYEDMUTEX::OpenLocalMutex(*((_QWORD *)this + v16 + 6), 1, v23);
      if ( v22 < 0 )
      {
        v27 = WdLogNewEntry5_WdError(v15);
        *(_QWORD *)(v27 + 24) = 1284LL;
LABEL_26:
        WdLogEvent5_WdError(v27);
        return (unsigned int)v22;
      }
      if ( ++v16 >= *((_DWORD *)this + 10) )
        goto LABEL_22;
    }
    v27 = WdLogNewEntry5_WdError(v21);
    *(_QWORD *)(v27 + 24) = 1277LL;
    goto LABEL_26;
  }
LABEL_22:
  Current = DXGPROCESS::GetCurrent(v15, v14);
  if ( Current )
    v26 = *((_QWORD *)Current + 13);
  else
    v26 = 0LL;
  if ( !v26 )
  {
    v8 = WdLogNewEntry5_WdError(v25);
    *(_QWORD *)(v8 + 24) = 1293LL;
    goto LABEL_6;
  }
  v28 = 0;
  for ( i = (_QWORD *)((char *)this + 160); ; i += 12 )
  {
    v30 = (DDAMetaData *)operator new[](0x50uLL, 0x674D444Fu, PagedPool);
    v32 = v30 ? DDAMetaData::DDAMetaData(v30, v31) : 0LL;
    *(i - 10) = v32;
    if ( !v32 || !(unsigned int)DDAMetaData::Initialize(v32) )
      break;
    v33 = operator new[](0x10uLL, 0x674D444Fu, PagedPool);
    v36 = v33;
    if ( v33 )
    {
      *v33 = 0LL;
      v33[1] = 0LL;
      AUTOEXPANDALLOCATION::GetBuffer((const void **)v33, 0x4000u, 0);
    }
    else
    {
      v36 = 0LL;
    }
    *i = v36;
    if ( !v36 || !*v36 )
    {
      v37 = WdLogNewEntry5_WdLowResource(v34);
      *(_QWORD *)(v37 + 24) = 0x4000LL;
      *(_QWORD *)(v37 + 32) = a2->VidPnSourceId;
      goto LABEL_47;
    }
    if ( (unsigned int)++v28 >= 2 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0ppqq(
          a2->hAdapter,
          &EventOutputDuplicationCreate,
          v35,
          this,
          a2->hAdapter,
          a2->VidPnSourceId,
          a2->KeyedMutexCount);
      return 0LL;
    }
  }
LABEL_46:
  v37 = WdLogNewEntry5_WdLowResource(v19);
  *(_QWORD *)(v37 + 24) = a2->VidPnSourceId;
LABEL_47:
  WdLogEvent5_WdLowResource(v37);
  return 3221225495LL;
}
