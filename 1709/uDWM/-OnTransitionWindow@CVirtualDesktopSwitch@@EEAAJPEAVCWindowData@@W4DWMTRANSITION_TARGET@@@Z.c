/*
 * XREFs of ?OnTransitionWindow@CVirtualDesktopSwitch@@EEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800944D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800955F0 (-_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimati.c)
 *     ?_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ @ 0x1800962A8 (-_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ.c)
 *     ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x18009B840 (-GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CVirtualDesktopSwitch::OnTransitionWindow(LPARAM a1, struct CWindowData *a2, __int16 a3)
{
  signed int v3; // ebx
  signed int LastError; // eax
  int DesktopThumbnail; // eax
  unsigned int v8; // ebp
  unsigned int v9; // r14d
  unsigned int v10; // r15d
  __int64 v11; // rcx
  unsigned int v12; // eax
  int v13; // eax
  unsigned int v15; // [rsp+20h] [rbp-58h]
  CBaseObject *v16; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v17; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+90h] [rbp+18h]
  CBaseObject *v19; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0;
  v16 = 0LL;
  v19 = 0LL;
  if ( (a3 & 0xFFFu) - 75 > 1 )
    return (unsigned int)v3;
  SetLastError(0);
  if ( EnumDisplayMonitors(0LL, 0LL, CVirtualDesktopSwitch::s_MonitorEnumCallback, a1) )
  {
    DesktopThumbnail = CDesktopThumbnail::GetDesktopThumbnail(&v16);
    v3 = DesktopThumbnail;
    if ( DesktopThumbnail >= 0 )
    {
      v8 = 0;
      if ( *(_DWORD *)(a1 + 176) )
      {
        v9 = v18;
        while ( 1 )
        {
          v10 = v9;
          v17 = *(struct tagRECT *)(*(_QWORD *)(a1 + 152) + 16LL * v8);
          DesktopThumbnail = CVirtualDesktopSwitch::_CreateMonitorSnapshot(
                               (CVirtualDesktopSwitch *)a1,
                               a2,
                               &v17,
                               1,
                               &v19);
          v3 = DesktopThumbnail;
          if ( DesktopThumbnail < 0 )
            break;
          v11 = *(unsigned int *)(a1 + 144);
          v12 = v11 + 1;
          v9 = v11 + 1;
          if ( (int)v11 + 1 < (unsigned int)v11 )
            v9 = v10;
          v3 = v12 < (unsigned int)v11 ? 0x80070216 : 0;
          if ( v12 >= (unsigned int)v11 )
          {
            if ( v9 > *(_DWORD *)(a1 + 140) )
            {
              v13 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 120, 8u, 1, &v19);
              v3 = v13;
              if ( v13 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xC0u);
            }
            else
            {
              *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8 * v11) = v19;
              *(_DWORD *)(a1 + 144) = v9;
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
          }
          if ( v3 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v3, 0x124Cu);
            goto LABEL_26;
          }
          v19 = 0LL;
          if ( ++v8 >= *(_DWORD *)(a1 + 176) )
            goto LABEL_23;
        }
        v15 = 4683;
      }
      else
      {
LABEL_23:
        DesktopThumbnail = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                + 4)
                                                             + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                      + 4));
        v3 = DesktopThumbnail;
        if ( DesktopThumbnail >= 0 )
          goto LABEL_26;
        v15 = 4689;
      }
    }
    else
    {
      v15 = 4676;
    }
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      DesktopThumbnail,
      v15);
LABEL_26:
    if ( v16 )
      CBaseObject::Release(v16);
    goto LABEL_28;
  }
  LastError = GetLastError();
  v3 = LastError;
  if ( LastError > 0 )
    v3 = (unsigned __int16)LastError | 0x80070000;
  if ( v3 >= 0 )
    v3 = -2003304445;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v3, 0x1243u);
LABEL_28:
  if ( v19 )
    CBaseObject::Release(v19);
  if ( v3 < 0 )
    CVirtualDesktopSwitch::_ReleasePreviousDesktopComponents((CVirtualDesktopSwitch *)a1);
  return (unsigned int)v3;
}
