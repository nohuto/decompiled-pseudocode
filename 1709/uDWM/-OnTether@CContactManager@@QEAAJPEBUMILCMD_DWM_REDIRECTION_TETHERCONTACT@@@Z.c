/*
 * XREFs of ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x1800826C0
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18002ADB0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18003669C (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCDirectTouchVisual@@@Z @ 0x18003964C (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180039C50 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     McTemplateU0 @ 0x18006CEDC (McTemplateU0.c)
 *     ??$CreateTouchVisual@VCTetherVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTetherVisual@@@Z @ 0x18007FF0C (--$CreateTouchVisual@VCTetherVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTetherVisual@@@Z.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x18008427C (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?SnapToAnchor@CTetherVisual@@QEAAJXZ @ 0x180088078 (-SnapToAnchor@CTetherVisual@@QEAAJXZ.c)
 *     ?Stop@CTetherVisual@@UEAAXXZ @ 0x180088160 (-Stop@CTetherVisual@@UEAAXXZ.c)
 *     ?UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z @ 0x180088520 (-UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z.c)
 */

__int64 __fastcall CContactManager::OnTether(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_TETHERCONTACT *a2)
{
  int v4; // esi
  CBaseObject *v5; // r14
  int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rbx
  CTetherVisual *v10; // rcx
  int v11; // eax
  CContactManager *v12; // rcx
  int v13; // eax
  __int64 v14; // rsi
  int updated; // eax
  CContactManager *v16; // rcx
  __int64 v17; // rax
  CBaseObject *v18; // r14
  __int64 v19; // rax
  CDirectTouchVisual **v20; // r8
  int Touch; // eax
  CContactManager *v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rax
  unsigned int v25; // edx
  CContactManager *v26; // rcx
  unsigned int v27; // eax
  int v28; // r14d
  int v29; // eax
  CBaseObject *v30; // rcx
  struct _RTL_CRITICAL_SECTION *v31; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v32; // [rsp+70h] [rbp+30h] BYREF
  CBaseObject *v33; // [rsp+80h] [rbp+40h] BYREF
  __int64 v34; // [rsp+88h] [rbp+48h] BYREF

  v31 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = 0LL;
  v33 = 0LL;
  GetDesktopID(1LL, &v32);
  v6 = 0;
  if ( !*((_DWORD *)this + 20) )
    goto LABEL_5;
  v7 = *((_QWORD *)this + 7);
  while ( 1 )
  {
    v8 = 112LL * (unsigned int)v6;
    if ( *(_DWORD *)(v8 + v7) == *((_DWORD *)a2 + 1) )
      break;
    if ( (unsigned int)++v6 >= *((_DWORD *)this + 20) )
      goto LABEL_5;
  }
  if ( v6 < 0 || *(_DWORD *)(v7 + v8 + 4) != 1 )
  {
LABEL_5:
    v4 = -2147024809;
    goto LABEL_6;
  }
  if ( !*((_DWORD *)a2 + 2) )
  {
    v24 = *(_QWORD *)(v7 + v8 + 72);
    if ( !v24 )
    {
      v4 = -2147024809;
      goto LABEL_52;
    }
    v25 = v32;
    v26 = (CContactManager *)*((unsigned int *)this + 44);
    v34 = v24;
    v27 = (_DWORD)v26 + 1;
    if ( (int)v26 + 1 >= (unsigned int)v26 )
      v25 = (_DWORD)v26 + 1;
    v28 = v27 < (unsigned int)v26 ? 0x80070216 : 0;
    if ( v27 >= (unsigned int)v26 )
    {
      if ( v25 > *((_DWORD *)this + 43) )
      {
        v29 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 152, 8u, 1, &v34);
        v28 = v29;
        if ( v29 >= 0 )
          goto LABEL_48;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 19) + 8LL * (_QWORD)v26) = v34;
        *((_DWORD *)this + 44) = v25;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0xB5u);
    }
    if ( v28 < 0 )
    {
      CContactManager::StopAndRemoveFromRootNode(v26, *(struct CTouchVisual **)(v8 + *((_QWORD *)this + 7) + 72));
      goto LABEL_49;
    }
LABEL_48:
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v8 + *((_QWORD *)this + 7) + 72) + 8LL));
    CTetherVisual::SnapToAnchor(*(CTetherVisual **)(v8 + *((_QWORD *)this + 7) + 72));
LABEL_49:
    v30 = *(CBaseObject **)(v8 + *((_QWORD *)this + 7) + 72);
    if ( v30 )
    {
      CBaseObject::Release(v30);
      *(_QWORD *)(v8 + *((_QWORD *)this + 7) + 72) = 0LL;
    }
    goto LABEL_6;
  }
  v10 = *(CTetherVisual **)(v7 + v8 + 72);
  if ( v10 )
  {
    CTetherVisual::UpdatePosition(v10, (const struct tagPOINT *)((char *)a2 + 12), 0LL);
    goto LABEL_6;
  }
  v11 = CreateTouchVisual<CTetherVisual>(
          *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
          v32,
          &v33);
  v4 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x3C9u);
    v5 = v33;
    goto LABEL_52;
  }
  v5 = v33;
  v13 = CContactManager::AddToTouchNode(v12, v32, (struct CVisual **)v33);
  v4 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x3CAu);
LABEL_52:
    if ( v5 )
      CBaseObject::Release(v5);
    goto LABEL_6;
  }
  v14 = *((_QWORD *)this + 7);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmTetherVisual_Start);
  *((_BYTE *)v5 + 416) = 1;
  updated = CTetherVisual::UpdatePosition(
              v5,
              (const struct tagPOINT *)((char *)a2 + 12),
              (const struct tagPOINT *)(v8 + v14 + 8));
  v4 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x114u);
    CTetherVisual::Stop(v5);
  }
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x3CBu);
    goto LABEL_52;
  }
  *(_QWORD *)(v8 + *((_QWORD *)this + 7) + 72) = v5;
  v17 = *((_QWORD *)this + 7);
  v18 = *(CBaseObject **)(v8 + v17 + 88);
  if ( v18 )
  {
    CContactManager::StopAndRemoveFromRootNode(v16, *(struct CTouchVisual **)(v8 + v17 + 88));
    CBaseObject::Release(v18);
    *(_QWORD *)(v8 + *((_QWORD *)this + 7) + 88) = 0LL;
    *(_BYTE *)(v8 + *((_QWORD *)this + 7) + 104) = 0;
    if ( *((_BYTE *)this + 324) || *(_DWORD *)(v8 + *((_QWORD *)this + 7) + 40) )
    {
      v19 = *((_QWORD *)this + 7);
      v20 = (CDirectTouchVisual **)(v8 + v19 + 48);
      if ( !*v20 && !*(_QWORD *)(v8 + v19 + 96) )
      {
        Touch = CreateTouchVisual<CDirectTouchVisual>(
                  *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                  v32,
                  v20);
        v4 = Touch;
        if ( Touch < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Touch, 0x3DDu);
          goto LABEL_6;
        }
        CContactManager::AddToTouchNode(v22, v32, *(struct CVisual ***)(v8 + *((_QWORD *)this + 7) + 48));
      }
      if ( *((_BYTE *)this + 324) )
        v23 = (unsigned int)CContactManager::DWMSC_PRESENTATIONMODE;
      else
        v23 = *(unsigned int *)(v8 + *((_QWORD *)this + 7) + 40);
      CDirectTouchVisual::StartDown(
        *(_QWORD *)(v8 + *((_QWORD *)this + 7) + 48),
        v8 + *((_QWORD *)this + 7) + 8LL,
        v8 + *((_QWORD *)this + 7) + 24LL,
        v23);
    }
  }
LABEL_6:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v31);
  return (unsigned int)v4;
}
