/*
 * XREFs of ?OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z @ 0x18008ACC4
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180031E80 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x180013844 (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCDirectTouchVisual@@@Z @ 0x180040C6C (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x18004146C (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x18006F080 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?SetContactPosition@CTextTetherVisual@@QEAAJAEBUtagPOINT@@AEBUtagRECT@@@Z @ 0x18006FABC (-SetContactPosition@CTextTetherVisual@@QEAAJAEBUtagPOINT@@AEBUtagRECT@@@Z.c)
 *     ?SnapToAnchor@CTextTetherVisual@@QEAAJXZ @ 0x18006FAE8 (-SnapToAnchor@CTextTetherVisual@@QEAAJXZ.c)
 *     TemplateEventDescriptor @ 0x1800777AC (TemplateEventDescriptor.c)
 *     ??$CreateTouchVisual@VCTextTetherVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTextTetherVisual@@@Z @ 0x180088B34 (--$CreateTouchVisual@VCTextTetherVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTextTetherVisual@@@Z.c)
 *     ?OnTetherAnchorChange@CTextTetherVisual@@QEAAJAEBUtagPOINT@@W4DEVICE_SCALE_FACTOR@@K@Z @ 0x18008BF90 (-OnTetherAnchorChange@CTextTetherVisual@@QEAAJAEBUtagPOINT@@W4DEVICE_SCALE_FACTOR@@K@Z.c)
 *     ?Stop@CTextTetherVisual@@UEAAXXZ @ 0x18008BFD0 (-Stop@CTextTetherVisual@@UEAAXXZ.c)
 *     ?UpdateInstructions@CTextTetherVisual@@IEAAJXZ @ 0x18008C060 (-UpdateInstructions@CTextTetherVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CContactManager::OnTextTether(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT *a2)
{
  int v4; // edi
  CBaseObject *v5; // r14
  int v6; // edx
  __int64 v7; // r8
  __int64 v9; // rbx
  CTextTetherVisual *v10; // rcx
  int v11; // eax
  CContactManager *v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int updated; // eax
  CContactManager *v16; // rcx
  __int64 v17; // rax
  CBaseObject *v18; // r14
  __int64 v19; // rcx
  int Touch; // eax
  CContactManager *v21; // rcx
  int v22; // r9d
  unsigned int v23; // edx
  CContactManager *v24; // rcx
  unsigned int v25; // eax
  int v26; // r14d
  int v27; // eax
  CBaseObject *v28; // rcx
  unsigned int v29; // [rsp+20h] [rbp-20h]
  struct _RTL_CRITICAL_SECTION *v30; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v31; // [rsp+70h] [rbp+30h] BYREF
  CBaseObject *v32; // [rsp+80h] [rbp+40h] BYREF
  __int64 v33; // [rsp+88h] [rbp+48h] BYREF

  v30 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = 0LL;
  v32 = 0LL;
  GetDesktopID(1LL, &v31);
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
  if ( !*((_DWORD *)a2 + 2) )
  {
    if ( !*(_QWORD *)(v9 + v7 + 80) )
    {
      v4 = -2147024809;
      goto LABEL_55;
    }
    v23 = v31;
    v24 = (CContactManager *)*((unsigned int *)this + 44);
    v33 = *(_QWORD *)(v9 + v7 + 80);
    v25 = (_DWORD)v24 + 1;
    if ( (int)v24 + 1 >= (unsigned int)v24 )
      v23 = (_DWORD)v24 + 1;
    v26 = v25 < (unsigned int)v24 ? 0x80070216 : 0;
    if ( v25 >= (unsigned int)v24 )
    {
      if ( v23 > *((_DWORD *)this + 43) )
      {
        v27 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 152, 8u, 1, &v33);
        v26 = v27;
        if ( v27 >= 0 )
          goto LABEL_51;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v27, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 19) + 8LL * (_QWORD)v24) = v33;
        *((_DWORD *)this + 44) = v23;
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v26, 0xB5u);
    }
    if ( v26 < 0 )
    {
      CContactManager::StopAndRemoveFromRootNode(v24, *(struct CTouchVisual **)(v9 + *((_QWORD *)this + 7) + 80));
      goto LABEL_52;
    }
LABEL_51:
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + *((_QWORD *)this + 7) + 80) + 8LL));
    CTextTetherVisual::SnapToAnchor(*(CTextTetherVisual **)(v9 + *((_QWORD *)this + 7) + 80));
LABEL_52:
    v28 = *(CBaseObject **)(v9 + *((_QWORD *)this + 7) + 80);
    if ( v28 )
    {
      CBaseObject::Release(v28);
      *(_QWORD *)(v9 + *((_QWORD *)this + 7) + 80) = 0LL;
    }
    goto LABEL_6;
  }
  v10 = *(CTextTetherVisual **)(v9 + v7 + 80);
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
          v31,
          &v32);
  v4 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x426u);
    v5 = v32;
    goto LABEL_55;
  }
  v5 = v32;
  CContactManager::AddToTouchNode(v12, v31, v32);
  v13 = CTextTetherVisual::OnTetherAnchorChange(
          v5,
          (const struct tagPOINT *)((char *)a2 + 12),
          (enum DEVICE_SCALE_FACTOR)*((_DWORD *)a2 + 6),
          *((_DWORD *)a2 + 5));
  v4 = v13;
  if ( v13 < 0 )
  {
    v29 = 1064;
LABEL_16:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, v29);
LABEL_55:
    if ( v5 )
      CBaseObject::Release(v5);
    goto LABEL_6;
  }
  v13 = CTextTetherVisual::SetContactPosition(
          v5,
          (const struct tagPOINT *)(v9 + *((_QWORD *)this + 7) + 8LL),
          (const struct tagRECT *)(v9 + *((_QWORD *)this + 7) + 24LL));
  v4 = v13;
  if ( v13 < 0 )
  {
    v29 = 1065;
    goto LABEL_16;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    TemplateEventDescriptor(v14, (__int64)&UdwmTextTetherVisual_Start);
  *((_BYTE *)v5 + 424) = 1;
  updated = CTextTetherVisual::UpdateInstructions(v5);
  v4 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0xC2u);
    CTextTetherVisual::Stop(v5);
  }
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x42Au);
    goto LABEL_55;
  }
  *(_QWORD *)(v9 + *((_QWORD *)this + 7) + 80) = v5;
  v17 = *((_QWORD *)this + 7);
  v18 = *(CBaseObject **)(v9 + v17 + 88);
  if ( v18 )
  {
    CContactManager::StopAndRemoveFromRootNode(v16, *(struct CTouchVisual **)(v9 + v17 + 88));
    CBaseObject::Release(v18);
    *(_QWORD *)(v9 + *((_QWORD *)this + 7) + 88) = 0LL;
    *(_BYTE *)(v9 + *((_QWORD *)this + 7) + 104) = 0;
    if ( *((_BYTE *)this + 324) || *(_DWORD *)(v9 + *((_QWORD *)this + 7) + 40) )
    {
      v19 = *((_QWORD *)this + 7);
      if ( !*(_QWORD *)(v9 + v19 + 48) && !*(_QWORD *)(v9 + v19 + 96) )
      {
        Touch = CreateTouchVisual<CDirectTouchVisual>(
                  *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                  v31,
                  (CDirectTouchVisual **)(v9 + v19 + 48));
        v4 = Touch;
        if ( Touch < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, Touch, 0x43Cu);
          goto LABEL_6;
        }
        CContactManager::AddToTouchNode(v21, v31, *(struct CVisual **)(v9 + *((_QWORD *)this + 7) + 48));
      }
      if ( *((_BYTE *)this + 324) )
        v22 = CContactManager::DWMSC_PRESENTATIONMODE;
      else
        v22 = *(_DWORD *)(v9 + *((_QWORD *)this + 7) + 40);
      CDirectTouchVisual::StartDown(
        *(_QWORD *)(v9 + *((_QWORD *)this + 7) + 48),
        (const struct tagPOINT *)(v9 + *((_QWORD *)this + 7) + 8LL),
        (const struct tagRECT *)(v9 + *((_QWORD *)this + 7) + 24LL),
        v22);
    }
  }
LABEL_6:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v30);
  return (unsigned int)v4;
}
