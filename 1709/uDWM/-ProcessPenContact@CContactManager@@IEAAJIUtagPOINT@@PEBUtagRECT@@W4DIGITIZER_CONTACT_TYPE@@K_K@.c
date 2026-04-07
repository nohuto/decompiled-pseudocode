/*
 * XREFs of ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180082FA4
 * Callers:
 *     ?OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z @ 0x1800814E8 (-OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z.c)
 *     ?OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z @ 0x180082394 (-OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18003669C (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@ULivePreviewVisual@@$0A@@@QEAAJPEFBULivePreviewVisual@@I@Z @ 0x1800803E0 (-AddMultipleAndSet@-$DynArray@ULivePreviewVisual@@$0A@@@QEAAJPEFBULivePreviewVisual@@I@Z.c)
 *     ?LoadPenResources@CContactManager@@AEAAXXZ @ 0x180081268 (-LoadPenResources@CContactManager@@AEAAXXZ.c)
 *     ?RemoveAt@?$DynArray@UCPenContact@@$0A@@@QEAAJI@Z @ 0x180083D64 (-RemoveAt@-$DynArray@UCPenContact@@$0A@@@QEAAJI@Z.c)
 *     ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x180083F2C (-StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z.c)
 *     ?PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ @ 0x180088804 (-PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ.c)
 *     ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x180088938 (-UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CContactManager::ProcessPenContact(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        unsigned __int64 a7)
{
  CContactManager *v10; // rcx
  unsigned int v11; // ebp
  __int64 v12; // rsi
  _QWORD *v13; // r14
  __int64 v14; // rdx
  int started; // eax
  unsigned int v16; // r8d
  struct CTouchVisual *v17; // rbx
  CContactManager *v18; // rcx
  struct CTouchVisual *v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // rdi
  CPenBarrelKeyVisual *v22; // rcx
  _DWORD v24[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v25; // [rsp+38h] [rbp-40h]
  int v26; // [rsp+48h] [rbp-30h]
  __int64 v27; // [rsp+4Ch] [rbp-2Ch]
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+98h] [rbp+20h] BYREF

  v28 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v11 = 0;
  v12 = 0LL;
  if ( !*(_DWORD *)(a1 + 112) )
    goto LABEL_5;
  v13 = (_QWORD *)(a1 + 88);
  v14 = *(_QWORD *)(a1 + 88);
  while ( *(_DWORD *)(v14 + 40 * v12) != a2 )
  {
    v12 = (unsigned int)(v12 + 1);
    if ( (unsigned int)v12 >= *(_DWORD *)(a1 + 112) )
      goto LABEL_5;
  }
  if ( (int)v12 >= 0 )
  {
    if ( a5 == 3 )
    {
      v17 = *(struct CTouchVisual **)(v14 + 40 * v12 + 8);
      CContactManager::StopAndRemoveFromRootNode(v10, v17);
      if ( v17 )
        CBaseObject::Release(v17);
      v19 = *(struct CTouchVisual **)(*v13 + 40 * v12 + 16);
      CContactManager::StopAndRemoveFromRootNode(v18, v19);
      if ( v19 )
        CBaseObject::Release(v19);
      DynArray<CPenContact,0>::RemoveAt(v13, (unsigned int)v12);
    }
    else
    {
      v20 = 5 * v12;
      v21 = *(_QWORD *)(v14 + 8 * v20 + 8);
      if ( v21 )
      {
        v22 = *(CPenBarrelKeyVisual **)(v14 + 8 * v20 + 8);
        *(_DWORD *)(v21 + 308) = a6;
        *(_QWORD *)(v21 + 300) = a3;
        CPenBarrelKeyVisual::PlaceVisuals(v22);
        CPenBarrelKeyVisual::UpdateBarrelAlpha((CPenBarrelKeyVisual *)v21);
      }
      *(_QWORD *)(*v13 + 8 * v20 + 28) = a3;
    }
  }
  else
  {
LABEL_5:
    if ( !*(_QWORD *)(a1 + 40) )
      CContactManager::LoadPenResources((CContactManager *)a1);
    v26 = -1;
    v25 = 0LL;
    v24[0] = a2;
    v24[1] = a6;
    v27 = a3;
    started = CContactManager::StartPenBarrelVisual(v10, (struct CPenContact *)v24, a7);
    v11 = started;
    if ( started >= 0 )
      DynArray<LivePreviewVisual,0>::AddMultipleAndSet(a1 + 88, (__int64)v24, v16);
    else
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0x61Eu);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v28);
  return v11;
}
