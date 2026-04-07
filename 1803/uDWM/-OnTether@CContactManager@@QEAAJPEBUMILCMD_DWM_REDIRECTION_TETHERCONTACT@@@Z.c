/*
 * XREFs of ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x18008B5E0
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18002A9C0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020D50 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x1800390E4 (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCDirectTouchVisual@@@Z @ 0x18003D3A8 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x18003DBA0 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0 @ 0x180073C8C (McTemplateU0.c)
 *     ??$CreateTouchVisual@VCTetherVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTetherVisual@@@Z @ 0x180089014 (--$CreateTouchVisual@VCTetherVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTetherVisual@@@Z.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x18008D36C (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?SnapToAnchor@CTetherVisual@@QEAAJXZ @ 0x180091138 (-SnapToAnchor@CTetherVisual@@QEAAJXZ.c)
 *     ?Stop@CTetherVisual@@UEAAXXZ @ 0x180091220 (-Stop@CTetherVisual@@UEAAXXZ.c)
 *     ?UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z @ 0x1800915E0 (-UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z.c)
 */

__int64 __fastcall CContactManager::OnTether(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_TETHERCONTACT *a2)
{
  int v4; // ebx
  CBaseObject *v5; // r14
  int v6; // ecx
  __int64 v7; // rdx
  __int64 v9; // rdi
  CTetherVisual *v10; // rax
  int v11; // eax
  CContactManager *v12; // rcx
  int v13; // eax
  __int64 v14; // rbx
  int updated; // eax
  CContactManager *v16; // rcx
  __int64 v17; // rax
  CBaseObject *v18; // r14
  char v19; // dl
  __int64 v20; // rcx
  CDirectTouchVisual **v21; // r8
  int Touch; // eax
  CContactManager *v23; // rcx
  __int64 v24; // r9
  unsigned int v25; // eax
  unsigned int v26; // edx
  int v27; // r14d
  CContactManager *v28; // rcx
  int v29; // eax
  volatile signed __int32 *v30; // rdx
  CBaseObject *v31; // rcx
  struct _RTL_CRITICAL_SECTION *v32; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v33; // [rsp+70h] [rbp+30h] BYREF
  CBaseObject *v34; // [rsp+80h] [rbp+40h] BYREF
  __int64 v35; // [rsp+88h] [rbp+48h] BYREF

  v32 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = 0LL;
  v34 = 0LL;
  GetDesktopID(1LL, &v33);
  v6 = 0;
  if ( !*((_DWORD *)this + 20) )
    goto LABEL_5;
  v7 = *((_QWORD *)this + 7);
  while ( *(_DWORD *)(112LL * (unsigned int)v6 + v7) != *((_DWORD *)a2 + 1) )
  {
    if ( (unsigned int)++v6 >= *((_DWORD *)this + 20) )
      goto LABEL_5;
  }
  if ( v6 < 0 || (v9 = 112LL * (unsigned int)v6, *(_DWORD *)(v9 + v7 + 4) != 1) )
  {
LABEL_5:
    v4 = -2147024809;
    goto LABEL_6;
  }
  v10 = *(CTetherVisual **)(v7 + v9 + 72);
  if ( *((_DWORD *)a2 + 2) )
  {
    if ( v10 )
    {
      CTetherVisual::UpdatePosition(v10, (const struct tagPOINT *)((char *)a2 + 12), 0LL);
      goto LABEL_6;
    }
    v11 = CreateTouchVisual<CTetherVisual>(
            *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
            v33,
            &v34);
    v4 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x3C9u);
      v5 = v34;
      goto LABEL_49;
    }
    v5 = v34;
    v13 = CContactManager::AddToTouchNode(v12, v33, (struct CVisual **)v34);
    v4 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x3CAu);
LABEL_49:
      if ( v5 )
        CBaseObject::Release(v5);
      goto LABEL_6;
    }
    v14 = *((_QWORD *)this + 7);
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0(Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmTetherVisual_Start);
    *((_BYTE *)v5 + 416) = 1;
    updated = CTetherVisual::UpdatePosition(
                v5,
                (const struct tagPOINT *)((char *)a2 + 12),
                (const struct tagPOINT *)(v9 + v14 + 8));
    v4 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x114u);
      CTetherVisual::Stop(v5);
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x3CBu);
      goto LABEL_49;
    }
    *(_QWORD *)(v9 + *((_QWORD *)this + 7) + 72) = v5;
    v17 = *((_QWORD *)this + 7);
    v18 = *(CBaseObject **)(v9 + v17 + 88);
    if ( v18 )
    {
      CContactManager::StopAndRemoveFromRootNode(v16, *(struct CTouchVisual **)(v9 + v17 + 88));
      CBaseObject::Release(v18);
      *(_QWORD *)(v9 + *((_QWORD *)this + 7) + 88) = 0LL;
      *(_BYTE *)(v9 + *((_QWORD *)this + 7) + 104) = 0;
      v19 = *((_BYTE *)this + 324);
      if ( v19 || *(_DWORD *)(v9 + *((_QWORD *)this + 7) + 40) )
      {
        v20 = *((_QWORD *)this + 7);
        v21 = (CDirectTouchVisual **)(v20 + v9 + 48);
        if ( !*v21 && !*(_QWORD *)(v20 + v9 + 96) )
        {
          Touch = CreateTouchVisual<CDirectTouchVisual>(
                    *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                    v33,
                    v21);
          v4 = Touch;
          if ( Touch < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Touch, 0x3DDu);
            goto LABEL_6;
          }
          CContactManager::AddToTouchNode(v23, v33, *(struct CVisual ***)(v9 + *((_QWORD *)this + 7) + 48));
          v19 = *((_BYTE *)this + 324);
          v20 = *((_QWORD *)this + 7);
        }
        v24 = (unsigned int)CContactManager::DWMSC_PRESENTATIONMODE;
        if ( !v19 )
          v24 = *(unsigned int *)(v20 + v9 + 40);
        CDirectTouchVisual::StartDown(*(_QWORD *)(v20 + v9 + 48), v20 + v9 + 8, v20 + v9 + 24, v24);
      }
    }
  }
  else
  {
    if ( !v10 )
    {
      v4 = -2147024809;
      goto LABEL_49;
    }
    v35 = *(_QWORD *)(v7 + v9 + 72);
    v25 = *((_DWORD *)this + 44);
    v26 = v25 + 1;
    v27 = v25 + 1 < v25 ? 0x80070216 : 0;
    if ( v25 + 1 >= v25 )
    {
      if ( v26 > *((_DWORD *)this + 43) )
      {
        v29 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 152, 8, 1, &v35);
        v27 = v29;
        if ( v29 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v29, 0xC0u);
      }
      else
      {
        v28 = (CContactManager *)*((unsigned int *)this + 44);
        *(_QWORD *)(*((_QWORD *)this + 19) + 8LL * (_QWORD)v28) = v35;
        *((_DWORD *)this + 44) = v26;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0xB5u);
    }
    v30 = *(volatile signed __int32 **)(v9 + *((_QWORD *)this + 7) + 72);
    if ( v27 < 0 )
    {
      CContactManager::StopAndRemoveFromRootNode(v28, (struct CTouchVisual *)v30);
    }
    else
    {
      _InterlockedIncrement(v30 + 2);
      CTetherVisual::SnapToAnchor(*(CTetherVisual **)(v9 + *((_QWORD *)this + 7) + 72));
    }
    v31 = *(CBaseObject **)(v9 + *((_QWORD *)this + 7) + 72);
    if ( v31 )
    {
      CBaseObject::Release(v31);
      *(_QWORD *)(v9 + *((_QWORD *)this + 7) + 72) = 0LL;
    }
  }
LABEL_6:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v32);
  return (unsigned int)v4;
}
