/*
 * XREFs of ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C01B236C
 * Callers:
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C01AC3B8 (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     Template_ppqq @ 0x1C003875C (Template_ppqq.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00A63E0 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00DD7A0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1C01ABD70 (-AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z.c)
 *     ?GetAdapterLuid@OUTPUTDUPL_MGR@@QEAA?AU_LUID@@XZ @ 0x1C01AC8E4 (-GetAdapterLuid@OUTPUTDUPL_MGR@@QEAA-AU_LUID@@XZ.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C01ADD08 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ??0DDAMetaData@@QEAA@II@Z @ 0x1C01B15D0 (--0DDAMetaData@@QEAA@II@Z.c)
 *     ?Initialize@DDAMetaData@@QEAAHII@Z @ 0x1C01B2280 (-Initialize@DDAMetaData@@QEAAHII@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::Initialize(
        OUTPUTDUPL_CONTEXT *this,
        const struct _D3DKMT_CREATE_OUTPUTDUPL *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  DXGSESSIONMGR *v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v15; // rax
  OUTPUTDUPL_SESSION_MGR *v17; // rsi
  struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *v18; // r8
  __int64 *AdapterLuid; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // ebp
  UINT KeyedMutexCount; // eax
  unsigned int *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int *v28; // rsi
  unsigned int v29; // r8d
  unsigned int v30; // r9d
  __int64 v31; // rdx
  int v32; // esi
  struct DXGPROCESS *Current; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // ebp
  _QWORD *i; // r14
  DDAMetaData *v40; // rax
  DDAMetaData *v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r8
  _QWORD *v45; // rsi
  __int64 v46; // rax
  _QWORD v47[2]; // [rsp+40h] [rbp-48h] BYREF
  int v48; // [rsp+50h] [rbp-38h]
  char v49; // [rsp+A0h] [rbp+18h] BYREF

  v8 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2, a3, a4) + 73);
  if ( v8 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7, v6, v9, v10);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                       v8,
                                       CurrentProcessSessionId,
                                       v12,
                                       v13);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v15 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v15 + 24) = 1226LL;
LABEL_6:
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  v17 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)SessionDataForSpecifiedSession + 1);
  if ( !v17 )
  {
    v15 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v15 + 24) = 1233LL;
    goto LABEL_6;
  }
  v18 = 0LL;
  *((_DWORD *)this + 4) = a2->VidPnSourceId;
  if ( *((_DWORD *)this + 81) && !*((_DWORD *)this + 82) )
  {
    AdapterLuid = (__int64 *)OUTPUTDUPL_MGR::GetAdapterLuid(*((OUTPUTDUPL_MGR **)this + 37), (__int64)&v49);
    v18 = (struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *)v47;
    v20 = *AdapterLuid;
    v48 = *((_DWORD *)this + 4);
    v47[0] = *((_QWORD *)this + 4);
    v47[1] = v20;
  }
  if ( !(unsigned int)OUTPUTDUPL_SESSION_MGR::AddRef(v17, *((struct _EPROCESS **)this + 3), v18, v10) )
    return 3221225643LL;
  v22 = 0;
  *((_DWORD *)this + 76) = 1;
  KeyedMutexCount = a2->KeyedMutexCount;
  *((_DWORD *)this + 10) = KeyedMutexCount;
  if ( KeyedMutexCount )
  {
    while ( 1 )
    {
      v24 = (unsigned int *)operator new(0x98uLL, 0x674D444Fu, PagedPool);
      v28 = v24;
      if ( v24 )
      {
        v29 = *((_DWORD *)&a2->KeyedMutexs[0].hSharedSurfaceNt + 3 * v22);
        v30 = *((_DWORD *)&a2->KeyedMutexs[0].hSharedSurfaceNt + 3 * v22 + 1);
        *v24 = *((_DWORD *)&a2->KeyedMutexs[1].hSharedSurfaceNt + 3 * v22);
        v24[1] = v29;
        v24[2] = v30;
        *((_QWORD *)v24 + 2) = 0LL;
        *((_QWORD *)v24 + 12) = 0LL;
        v24[26] = 0;
        *((_QWORD *)v24 + 14) = 0LL;
        *((_QWORD *)v24 + 15) = 0LL;
        *((_QWORD *)v24 + 16) = 0LL;
        v24[34] = 0;
        memset(v24 + 6, 0, 0x48uLL);
      }
      else
      {
        v28 = 0LL;
      }
      *((_QWORD *)this + v22 + 6) = v28;
      if ( !v28 )
        break;
      v32 = DXGDXGIKEYEDMUTEX::OpenLocalMutex(v28, 1LL, v26, v27);
      if ( v32 < 0 )
      {
        v37 = WdLogNewEntry5_WdError(v21, v31);
        *(_QWORD *)(v37 + 24) = 1279LL;
        WdLogEvent5_WdError(v37);
        return (unsigned int)v32;
      }
      if ( ++v22 >= *((_DWORD *)this + 10) )
        goto LABEL_21;
    }
  }
  else
  {
LABEL_21:
    Current = DXGPROCESS::GetCurrent(v21);
    if ( Current )
      v36 = *((_QWORD *)Current + 9);
    else
      v36 = 0LL;
    if ( !v36 )
    {
      v15 = WdLogNewEntry5_WdError(v35, v34);
      *(_QWORD *)(v15 + 24) = 1288LL;
      goto LABEL_6;
    }
    v38 = 0;
    for ( i = (_QWORD *)((char *)this + 160); ; i += 12 )
    {
      v40 = (DDAMetaData *)operator new(0x50uLL, 0x674D444Fu, PagedPool);
      v41 = v40 ? DDAMetaData::DDAMetaData(v40) : 0LL;
      *(i - 10) = v41;
      if ( !v41 || !(unsigned int)DDAMetaData::Initialize(v41) )
        break;
      v42 = operator new(0x10uLL, 0x674D444Fu, PagedPool);
      v45 = v42;
      if ( v42 )
      {
        *v42 = 0LL;
        v42[1] = 0LL;
        AUTOEXPANDALLOCATION::GetBuffer((PVOID *)v42, 0x4000u, 0);
      }
      else
      {
        v45 = 0LL;
      }
      *i = v45;
      if ( !v45 || !*v45 )
      {
        v46 = WdLogNewEntry5_WdLowResource(v43);
        *(_QWORD *)(v46 + 24) = 0x4000LL;
        *(_QWORD *)(v46 + 32) = a2->VidPnSourceId;
        goto LABEL_44;
      }
      if ( (unsigned int)++v38 >= 2 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_ppqq(
            a2->hAdapter,
            &EventOutputDuplicationCreate,
            v44,
            this,
            a2->hAdapter,
            a2->VidPnSourceId,
            a2->KeyedMutexCount);
        return 0LL;
      }
    }
  }
  v46 = WdLogNewEntry5_WdLowResource(v25);
  *(_QWORD *)(v46 + 24) = a2->VidPnSourceId;
LABEL_44:
  WdLogEvent5_WdLowResource(v46);
  return 3221225495LL;
}
