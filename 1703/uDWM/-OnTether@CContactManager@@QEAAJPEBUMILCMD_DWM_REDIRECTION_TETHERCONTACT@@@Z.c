/*
 * XREFs of ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x18008A934
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
 *     ?UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z @ 0x18006F97C (-UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z.c)
 *     ?SnapToAnchor@CTetherVisual@@QEAAJXZ @ 0x18006F9D8 (-SnapToAnchor@CTetherVisual@@QEAAJXZ.c)
 *     TemplateEventDescriptor @ 0x1800777AC (TemplateEventDescriptor.c)
 *     ??$CreateTouchVisual@VCTetherVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTetherVisual@@@Z @ 0x180088A60 (--$CreateTouchVisual@VCTetherVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTetherVisual@@@Z.c)
 *     ?Stop@CTetherVisual@@UEAAXXZ @ 0x18008D2E0 (-Stop@CTetherVisual@@UEAAXXZ.c)
 */

__int64 __fastcall CContactManager::OnTether(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_TETHERCONTACT *a2)
{
  int v4; // esi
  CBaseObject *v5; // r14
  int v6; // edx
  __int64 v7; // r8
  __int64 v9; // rbx
  struct tagPOINT *v10; // rcx
  int v11; // eax
  CContactManager *v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rsi
  int updated; // eax
  CContactManager *v17; // rcx
  __int64 v18; // rax
  CBaseObject *v19; // r14
  __int64 v20; // rcx
  int Touch; // eax
  CContactManager *v22; // rcx
  int v23; // r9d
  unsigned int v24; // edx
  CContactManager *v25; // rcx
  unsigned int v26; // eax
  int v27; // r14d
  int v28; // eax
  CBaseObject *v29; // rcx
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
    if ( !*(_QWORD *)(v9 + v7 + 72) )
    {
      v4 = -2147024809;
      goto LABEL_52;
    }
    v24 = v31;
    v25 = (CContactManager *)*((unsigned int *)this + 44);
    v33 = *(_QWORD *)(v9 + v7 + 72);
    v26 = (_DWORD)v25 + 1;
    if ( (int)v25 + 1 >= (unsigned int)v25 )
      v24 = (_DWORD)v25 + 1;
    v27 = v26 < (unsigned int)v25 ? 0x80070216 : 0;
    if ( v26 >= (unsigned int)v25 )
    {
      if ( v24 > *((_DWORD *)this + 43) )
      {
        v28 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 152, 8u, 1, &v33);
        v27 = v28;
        if ( v28 >= 0 )
          goto LABEL_48;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v28, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 19) + 8LL * (_QWORD)v25) = v33;
        *((_DWORD *)this + 44) = v24;
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v27, 0xB5u);
    }
    if ( v27 < 0 )
    {
      CContactManager::StopAndRemoveFromRootNode(v25, *(struct CTouchVisual **)(v9 + *((_QWORD *)this + 7) + 72));
      goto LABEL_49;
    }
LABEL_48:
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + *((_QWORD *)this + 7) + 72) + 8LL));
    CTetherVisual::SnapToAnchor(*(CTetherVisual **)(v9 + *((_QWORD *)this + 7) + 72));
LABEL_49:
    v29 = *(CBaseObject **)(v9 + *((_QWORD *)this + 7) + 72);
    if ( v29 )
    {
      CBaseObject::Release(v29);
      *(_QWORD *)(v9 + *((_QWORD *)this + 7) + 72) = 0LL;
    }
    goto LABEL_6;
  }
  v10 = *(struct tagPOINT **)(v9 + v7 + 72);
  if ( v10 )
  {
    CTetherVisual::UpdatePosition(v10, (const struct tagPOINT *)((char *)a2 + 12), 0LL);
    goto LABEL_6;
  }
  v11 = CreateTouchVisual<CTetherVisual>(
          *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
          v31,
          &v32);
  v4 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x3C9u);
    v5 = v32;
    goto LABEL_52;
  }
  v5 = v32;
  v13 = CContactManager::AddToTouchNode(v12, v31, v32);
  v4 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0x3CAu);
LABEL_52:
    if ( v5 )
      CBaseObject::Release(v5);
    goto LABEL_6;
  }
  v15 = *((_QWORD *)this + 7);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    TemplateEventDescriptor(v14, (__int64)&UdwmTetherVisual_Start);
  *((_BYTE *)v5 + 416) = 1;
  updated = CTetherVisual::UpdatePosition(
              (struct tagPOINT *)v5,
              (const struct tagPOINT *)((char *)a2 + 12),
              (const struct tagPOINT *)(v9 + v15 + 8));
  v4 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x114u);
    CTetherVisual::Stop(v5);
  }
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x3CBu);
    goto LABEL_52;
  }
  *(_QWORD *)(v9 + *((_QWORD *)this + 7) + 72) = v5;
  v18 = *((_QWORD *)this + 7);
  v19 = *(CBaseObject **)(v9 + v18 + 88);
  if ( v19 )
  {
    CContactManager::StopAndRemoveFromRootNode(v17, *(struct CTouchVisual **)(v9 + v18 + 88));
    CBaseObject::Release(v19);
    *(_QWORD *)(v9 + *((_QWORD *)this + 7) + 88) = 0LL;
    *(_BYTE *)(v9 + *((_QWORD *)this + 7) + 104) = 0;
    if ( *((_BYTE *)this + 324) || *(_DWORD *)(v9 + *((_QWORD *)this + 7) + 40) )
    {
      v20 = *((_QWORD *)this + 7);
      if ( !*(_QWORD *)(v9 + v20 + 48) && !*(_QWORD *)(v9 + v20 + 96) )
      {
        Touch = CreateTouchVisual<CDirectTouchVisual>(
                  *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                  v31,
                  (CDirectTouchVisual **)(v9 + v20 + 48));
        v4 = Touch;
        if ( Touch < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, Touch, 0x3DDu);
          goto LABEL_6;
        }
        CContactManager::AddToTouchNode(v22, v31, *(struct CVisual **)(v9 + *((_QWORD *)this + 7) + 48));
      }
      if ( *((_BYTE *)this + 324) )
        v23 = CContactManager::DWMSC_PRESENTATIONMODE;
      else
        v23 = *(_DWORD *)(v9 + *((_QWORD *)this + 7) + 40);
      CDirectTouchVisual::StartDown(
        *(_QWORD *)(v9 + *((_QWORD *)this + 7) + 48),
        (const struct tagPOINT *)(v9 + *((_QWORD *)this + 7) + 8LL),
        (const struct tagRECT *)(v9 + *((_QWORD *)this + 7) + 24LL),
        v23);
    }
  }
LABEL_6:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v30);
  return (unsigned int)v4;
}
