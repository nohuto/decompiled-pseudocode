/*
 * XREFs of ?OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z @ 0x180082A50
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
 *     ??$CreateTouchVisual@VCTextTetherVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTextTetherVisual@@@Z @ 0x18007FFE0 (--$CreateTouchVisual@VCTextTetherVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTextTetherVisual@@@Z.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x18008427C (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?OnTetherAnchorChange@CTextTetherVisual@@QEAAJAEBUtagPOINT@@W4DEVICE_SCALE_FACTOR@@K@Z @ 0x180085480 (-OnTetherAnchorChange@CTextTetherVisual@@QEAAJAEBUtagPOINT@@W4DEVICE_SCALE_FACTOR@@K@Z.c)
 *     ?SetContactPosition@CTextTetherVisual@@QEAAJAEBUtagPOINT@@AEBUtagRECT@@@Z @ 0x1800854B4 (-SetContactPosition@CTextTetherVisual@@QEAAJAEBUtagPOINT@@AEBUtagRECT@@@Z.c)
 *     ?SnapToAnchor@CTextTetherVisual@@QEAAJXZ @ 0x1800854E0 (-SnapToAnchor@CTextTetherVisual@@QEAAJXZ.c)
 *     ?Stop@CTextTetherVisual@@UEAAXXZ @ 0x1800855D0 (-Stop@CTextTetherVisual@@UEAAXXZ.c)
 *     ?UpdateInstructions@CTextTetherVisual@@IEAAJXZ @ 0x180085670 (-UpdateInstructions@CTextTetherVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CContactManager::OnTextTether(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT *a2)
{
  int v4; // edi
  CBaseObject *v5; // r14
  int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rbx
  CTextTetherVisual *v10; // rcx
  int v11; // eax
  CContactManager *v12; // rcx
  int v13; // eax
  int updated; // eax
  CContactManager *v15; // rcx
  __int64 v16; // rax
  CBaseObject *v17; // r14
  __int64 v18; // rax
  CDirectTouchVisual **v19; // r8
  int Touch; // eax
  CContactManager *v21; // rcx
  __int64 v22; // r9
  __int64 v23; // rax
  unsigned int v24; // edx
  CContactManager *v25; // rcx
  unsigned int v26; // eax
  int v27; // r14d
  int v28; // eax
  CBaseObject *v29; // rcx
  unsigned int v30; // [rsp+20h] [rbp-20h]
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
    v23 = *(_QWORD *)(v7 + v8 + 80);
    if ( !v23 )
    {
      v4 = -2147024809;
      goto LABEL_55;
    }
    v24 = v32;
    v25 = (CContactManager *)*((unsigned int *)this + 44);
    v34 = v23;
    v26 = (_DWORD)v25 + 1;
    if ( (int)v25 + 1 >= (unsigned int)v25 )
      v24 = (_DWORD)v25 + 1;
    v27 = v26 < (unsigned int)v25 ? 0x80070216 : 0;
    if ( v26 >= (unsigned int)v25 )
    {
      if ( v24 > *((_DWORD *)this + 43) )
      {
        v28 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 152, 8u, 1, &v34);
        v27 = v28;
        if ( v28 >= 0 )
          goto LABEL_51;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 19) + 8LL * (_QWORD)v25) = v34;
        *((_DWORD *)this + 44) = v24;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0xB5u);
    }
    if ( v27 < 0 )
    {
      CContactManager::StopAndRemoveFromRootNode(v25, *(struct CTouchVisual **)(v8 + *((_QWORD *)this + 7) + 80));
      goto LABEL_52;
    }
LABEL_51:
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v8 + *((_QWORD *)this + 7) + 80) + 8LL));
    CTextTetherVisual::SnapToAnchor(*(CTextTetherVisual **)(v8 + *((_QWORD *)this + 7) + 80));
LABEL_52:
    v29 = *(CBaseObject **)(v8 + *((_QWORD *)this + 7) + 80);
    if ( v29 )
    {
      CBaseObject::Release(v29);
      *(_QWORD *)(v8 + *((_QWORD *)this + 7) + 80) = 0LL;
    }
    goto LABEL_6;
  }
  v10 = *(CTextTetherVisual **)(v7 + v8 + 80);
  if ( v10 )
  {
    CTextTetherVisual::OnTetherAnchorChange(
      v10,
      (const struct tagPOINT *)((char *)a2 + 12),
      *((enum DEVICE_SCALE_FACTOR *)a2 + 6),
      *((_DWORD *)a2 + 5));
    goto LABEL_6;
  }
  v11 = CreateTouchVisual<CTextTetherVisual>(
          *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
          v32,
          &v33);
  v4 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x426u);
    v5 = v33;
    goto LABEL_55;
  }
  v5 = v33;
  CContactManager::AddToTouchNode(v12, v32, (struct CVisual **)v33);
  v13 = CTextTetherVisual::OnTetherAnchorChange(
          v5,
          (const struct tagPOINT *)((char *)a2 + 12),
          (enum DEVICE_SCALE_FACTOR)*((_DWORD *)a2 + 6),
          *((_DWORD *)a2 + 5));
  v4 = v13;
  if ( v13 < 0 )
  {
    v30 = 1064;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, v30);
LABEL_55:
    if ( v5 )
      CBaseObject::Release(v5);
    goto LABEL_6;
  }
  v13 = CTextTetherVisual::SetContactPosition(
          v5,
          (const struct tagPOINT *)(v8 + *((_QWORD *)this + 7) + 8LL),
          (const struct tagRECT *)(v8 + *((_QWORD *)this + 7) + 24LL));
  v4 = v13;
  if ( v13 < 0 )
  {
    v30 = 1065;
    goto LABEL_16;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmTextTetherVisual_Start);
  *((_BYTE *)v5 + 424) = 1;
  updated = CTextTetherVisual::UpdateInstructions(v5);
  v4 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0xC2u);
    CTextTetherVisual::Stop(v5);
  }
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x42Au);
    goto LABEL_55;
  }
  *(_QWORD *)(v8 + *((_QWORD *)this + 7) + 80) = v5;
  v16 = *((_QWORD *)this + 7);
  v17 = *(CBaseObject **)(v8 + v16 + 88);
  if ( v17 )
  {
    CContactManager::StopAndRemoveFromRootNode(v15, *(struct CTouchVisual **)(v8 + v16 + 88));
    CBaseObject::Release(v17);
    *(_QWORD *)(v8 + *((_QWORD *)this + 7) + 88) = 0LL;
    *(_BYTE *)(v8 + *((_QWORD *)this + 7) + 104) = 0;
    if ( *((_BYTE *)this + 324) || *(_DWORD *)(v8 + *((_QWORD *)this + 7) + 40) )
    {
      v18 = *((_QWORD *)this + 7);
      v19 = (CDirectTouchVisual **)(v8 + v18 + 48);
      if ( !*v19 && !*(_QWORD *)(v8 + v18 + 96) )
      {
        Touch = CreateTouchVisual<CDirectTouchVisual>(
                  *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                  v32,
                  v19);
        v4 = Touch;
        if ( Touch < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Touch, 0x43Cu);
          goto LABEL_6;
        }
        CContactManager::AddToTouchNode(v21, v32, *(struct CVisual ***)(v8 + *((_QWORD *)this + 7) + 48));
      }
      if ( *((_BYTE *)this + 324) )
        v22 = (unsigned int)CContactManager::DWMSC_PRESENTATIONMODE;
      else
        v22 = *(unsigned int *)(v8 + *((_QWORD *)this + 7) + 40);
      CDirectTouchVisual::StartDown(
        *(_QWORD *)(v8 + *((_QWORD *)this + 7) + 48),
        v8 + *((_QWORD *)this + 7) + 8LL,
        v8 + *((_QWORD *)this + 7) + 24LL,
        v22);
    }
  }
LABEL_6:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v31);
  return (unsigned int)v4;
}
