/*
 * XREFs of ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180013918
 * Callers:
 *     ?OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z @ 0x180013ABC (-OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z.c)
 *     ?OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z @ 0x180089A7C (-OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x180013844 (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x1800173E8 (-UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RemoveAt@?$DynArray@UCPenContact@@$0A@@@QEAAJI@Z @ 0x18006E754 (-RemoveAt@-$DynArray@UCPenContact@@$0A@@@QEAAJI@Z.c)
 *     ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x180070414 (-StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z.c)
 *     ?LoadPenResources@CContactManager@@AEAAXXZ @ 0x1800705D4 (-LoadPenResources@CContactManager@@AEAAXXZ.c)
 *     ?AddMultipleAndSet@?$DynArray@ULivePreviewVisual@@$0A@@@QEAAJPEFBULivePreviewVisual@@I@Z @ 0x180074F5C (-AddMultipleAndSet@-$DynArray@ULivePreviewVisual@@$0A@@@QEAAJPEFBULivePreviewVisual@@I@Z.c)
 *     ?PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ @ 0x18008D924 (-PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ.c)
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
  __int64 v12; // rdi
  int started; // eax
  struct CTouchVisual *v15; // rbx
  _QWORD *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rsi
  struct CTouchVisual *v19; // rbx
  CContactManager *v20; // rcx
  __int64 v21; // rdi
  CPenBarrelKeyVisual *v22; // rcx
  _DWORD v23[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v24; // [rsp+38h] [rbp-40h]
  int v25; // [rsp+48h] [rbp-30h]
  __int64 v26; // [rsp+4Ch] [rbp-2Ch]
  struct _RTL_CRITICAL_SECTION *v27; // [rsp+98h] [rbp+20h] BYREF

  v27 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v11 = 0;
  v12 = 0LL;
  if ( !*(_DWORD *)(a1 + 112) )
    goto LABEL_2;
  v16 = (_QWORD *)(a1 + 88);
  v17 = *(_QWORD *)(a1 + 88);
  while ( 1 )
  {
    v10 = (CContactManager *)(5 * v12);
    if ( *(_DWORD *)(v17 + 40 * v12) == a2 )
      break;
    v12 = (unsigned int)(v12 + 1);
    if ( (unsigned int)v12 >= *(_DWORD *)(a1 + 112) )
      goto LABEL_2;
  }
  if ( (int)v12 >= 0 )
  {
    v18 = 5 * v12;
    if ( a5 == 3 )
    {
      v19 = *(struct CTouchVisual **)(v17 + 40 * v12 + 8);
      CContactManager::StopAndRemoveFromRootNode(v10, v19);
      if ( v19 )
        CBaseObject::Release(v19);
      v15 = *(struct CTouchVisual **)(*v16 + 40 * v12 + 16);
      CContactManager::StopAndRemoveFromRootNode(v20, v15);
      if ( v15 )
        CBaseObject::Release(v15);
      DynArray<CPenContact,0>::RemoveAt(v16, (unsigned int)v12);
    }
    else
    {
      v21 = *(_QWORD *)(v17 + 40 * v12 + 8);
      if ( v21 )
      {
        v22 = *(CPenBarrelKeyVisual **)(v17 + 8 * v18 + 8);
        *(_DWORD *)(v21 + 308) = a6;
        *(_QWORD *)(v21 + 300) = a3;
        CPenBarrelKeyVisual::PlaceVisuals(v22);
        CPenBarrelKeyVisual::UpdateBarrelAlpha((CPenBarrelKeyVisual *)v21);
      }
      *(_QWORD *)(*v16 + 8 * v18 + 28) = a3;
    }
  }
  else
  {
LABEL_2:
    if ( !*(_QWORD *)(a1 + 40) )
      CContactManager::LoadPenResources((CContactManager *)a1);
    v25 = -1;
    v24 = 0LL;
    v23[0] = a2;
    v23[1] = a6;
    v26 = a3;
    started = CContactManager::StartPenBarrelVisual(v10, (struct CPenContact *)v23, a7);
    v11 = started;
    if ( started < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, started, 0x61Eu);
    else
      DynArray<LivePreviewVisual,0>::AddMultipleAndSet(a1 + 88, v23);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v27);
  return v11;
}
