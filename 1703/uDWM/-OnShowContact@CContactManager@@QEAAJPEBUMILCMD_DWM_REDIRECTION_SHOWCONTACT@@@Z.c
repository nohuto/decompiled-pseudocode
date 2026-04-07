/*
 * XREFs of ?OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z @ 0x18000DB08
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180031E80 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x18000DA90 (-CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationary.c)
 *     ?CheckShowContact@CContactManager@@AEAA_NW4DWM_SHOWCONTACT@@0@Z @ 0x18000DAEC (-CheckShowContact@CContactManager@@AEAA_NW4DWM_SHOWCONTACT@@0@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x180013844 (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x1800173E8 (-UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z @ 0x18006F3A4 (-UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z.c)
 *     ?UpdateShowContact@CDirectTouchVisual@@QEAAJW4DWM_SHOWCONTACT@@@Z @ 0x18008B2A4 (-UpdateShowContact@CDirectTouchVisual@@QEAAJW4DWM_SHOWCONTACT@@@Z.c)
 */

__int64 __fastcall CContactManager::OnShowContact(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_SHOWCONTACT *a2)
{
  __int64 v4; // r8
  unsigned int v5; // edx
  unsigned int v6; // r14d
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  CContactManager *v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  struct CTouchVisual *v17; // rbp
  CContactManager *v18; // rcx
  struct CTouchVisual *v19; // rbp
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  char v23; // dl
  CPenBarrelKeyVisual *v24; // rcx
  struct _RTL_CRITICAL_SECTION *v25; // [rsp+40h] [rbp+8h] BYREF

  v25 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0xFFFFFFFFLL;
  v5 = 0;
  v6 = -2147024809;
  v7 = 0xFFFFFFFFLL;
  if ( *((_DWORD *)this + 20) )
  {
    while ( *(_DWORD *)(112LL * v5 + *((_QWORD *)this + 7)) != *((_DWORD *)a2 + 1) )
    {
      if ( ++v5 >= *((_DWORD *)this + 20) )
        goto LABEL_2;
    }
    v4 = v5;
  }
LABEL_2:
  v8 = 0LL;
  if ( *((_DWORD *)this + 28) )
  {
    while ( *(_DWORD *)(*((_QWORD *)this + 11) + 40 * v8) != *((_DWORD *)a2 + 1) )
    {
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= *((_DWORD *)this + 28) )
        goto LABEL_3;
    }
    v7 = (unsigned int)v8;
  }
LABEL_3:
  if ( (int)v4 >= 0 )
  {
    v11 = (CContactManager *)*((_QWORD *)this + 7);
    v6 = 0;
    v12 = 112LL * (unsigned int)v4;
    *(_DWORD *)((char *)v11 + v12 + 40) = *((_DWORD *)a2 + 2);
    v13 = *((_QWORD *)this + 7);
    if ( *((_BYTE *)this + 324) )
    {
      v14 = *(_QWORD *)(v12 + v13 + 48);
      if ( v14 )
        CDirectTouchVisual::UpdateShowContact(v14, 4294967291LL, v4, v7);
      v15 = *(_QWORD *)(v12 + *((_QWORD *)this + 7) + 56);
      if ( v15 )
        *(_DWORD *)(v15 + 348) = -5;
    }
    else
    {
      v16 = *((unsigned int *)a2 + 2);
      if ( (_DWORD)v16 )
      {
        v20 = *(_QWORD *)(v12 + v13 + 48);
        if ( v20 )
          CDirectTouchVisual::UpdateShowContact(v20, v16, v4, v7);
        v21 = *(_QWORD *)(v12 + *((_QWORD *)this + 7) + 88);
        if ( v21 )
          CTouchDragVisual::UpdateShowContact(v21, *((unsigned int *)a2 + 2), v4, v7);
      }
      else
      {
        v17 = *(struct CTouchVisual **)(v12 + v13 + 48);
        CContactManager::StopAndRemoveFromRootNode(v11, v17);
        if ( v17 )
          CBaseObject::Release(v17);
        v19 = *(struct CTouchVisual **)(v12 + *((_QWORD *)this + 7) + 88);
        CContactManager::StopAndRemoveFromRootNode(v18, v19);
        if ( v19 )
          CBaseObject::Release(v19);
        *(_QWORD *)(v12 + *((_QWORD *)this + 7) + 48) = 0LL;
        *(_QWORD *)(v12 + *((_QWORD *)this + 7) + 88) = 0LL;
      }
      v22 = *(_QWORD *)(v12 + *((_QWORD *)this + 7) + 56);
      if ( v22 )
        *(_DWORD *)(v22 + 348) = *((_DWORD *)a2 + 2);
    }
  }
  else if ( (int)v7 >= 0 )
  {
    v6 = 0;
    *(_DWORD *)(*((_QWORD *)this + 11) + 40LL * (unsigned int)v7 + 24) = *((_DWORD *)a2 + 2);
    if ( *(_QWORD *)(*((_QWORD *)this + 11) + 40LL * (unsigned int)v7 + 8) )
    {
      _mm_lfence();
      v23 = (*((_DWORD *)a2 + 2) & 0x10) != 0;
      v24 = *(CPenBarrelKeyVisual **)(*((_QWORD *)this + 11) + 40LL * (unsigned int)v7 + 8);
      if ( *((_BYTE *)v24 + 340) != v23 )
      {
        *((_BYTE *)v24 + 340) = v23;
        CPenBarrelKeyVisual::UpdateBarrelAlpha(v24);
      }
    }
  }
  if ( !CContactManager::CheckShowContact((__int64)this, *((_DWORD *)a2 + 2), 2) )
    CContactManager::CancelStationaryAnimation(v9, *((unsigned int *)a2 + 1));
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v25);
  return v6;
}
