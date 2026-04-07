/*
 * XREFs of ?OnTransitionWindow@CVirtualDesktopSwitch@@EEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x18009CBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020D50 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x18009DCD0 (-_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimati.c)
 *     ?_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ @ 0x18009E5E4 (-_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ.c)
 *     ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800A3C18 (-GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CVirtualDesktopSwitch::OnTransitionWindow(LPARAM a1, struct CWindowData *a2, __int16 a3)
{
  signed int v3; // ebx
  signed int LastError; // eax
  int DesktopThumbnail; // eax
  unsigned int v8; // ebp
  unsigned int v9; // r14d
  __int64 v10; // rcx
  unsigned int v11; // eax
  int v12; // eax
  unsigned int v14; // [rsp+20h] [rbp-58h]
  CBaseObject *v15; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v16; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+90h] [rbp+18h]
  CBaseObject *v18; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0;
  v15 = 0LL;
  v18 = 0LL;
  if ( (a3 & 0xFFFu) - 75 > 1 )
    return (unsigned int)v3;
  SetLastError(0);
  if ( EnumDisplayMonitors(0LL, 0LL, CVirtualDesktopSwitch::s_MonitorEnumCallback, a1) )
  {
    DesktopThumbnail = CDesktopThumbnail::GetDesktopThumbnail(&v15);
    v3 = DesktopThumbnail;
    if ( DesktopThumbnail >= 0 )
    {
      v8 = 0;
      if ( *(_DWORD *)(a1 + 176) )
      {
        v9 = v17;
        while ( 1 )
        {
          v16 = *(struct tagRECT *)(*(_QWORD *)(a1 + 152) + 16LL * v8);
          DesktopThumbnail = CVirtualDesktopSwitch::_CreateMonitorSnapshot(
                               (CVirtualDesktopSwitch *)a1,
                               a2,
                               &v16,
                               1,
                               &v18);
          v3 = DesktopThumbnail;
          if ( DesktopThumbnail < 0 )
            break;
          v10 = *(unsigned int *)(a1 + 144);
          v11 = v10 + 1;
          if ( (int)v10 + 1 >= (unsigned int)v10 )
            v9 = v10 + 1;
          v3 = v11 < (unsigned int)v10 ? 0x80070216 : 0;
          if ( v11 >= (unsigned int)v10 )
          {
            if ( v9 > *(_DWORD *)(a1 + 140) )
            {
              v12 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 120, 8, 1, &v18);
              v3 = v12;
              if ( v12 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0xC0u);
            }
            else
            {
              *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8 * v10) = v18;
              *(_DWORD *)(a1 + 144) = v9;
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0xB5u);
          }
          if ( v3 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1LL,
              v3,
              0x124Cu);
            goto LABEL_26;
          }
          v18 = 0LL;
          if ( ++v8 >= *(_DWORD *)(a1 + 176) )
            goto LABEL_23;
        }
        v14 = 4683;
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
        v14 = 4689;
      }
    }
    else
    {
      v14 = 4676;
    }
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
      1LL,
      DesktopThumbnail,
      v14);
LABEL_26:
    if ( v15 )
      CBaseObject::Release(v15);
    goto LABEL_28;
  }
  LastError = GetLastError();
  v3 = LastError;
  if ( LastError > 0 )
    v3 = (unsigned __int16)LastError | 0x80070000;
  if ( v3 >= 0 )
    v3 = -2003304445;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v3, 0x1243u);
LABEL_28:
  if ( v18 )
    CBaseObject::Release(v18);
  if ( v3 < 0 )
    CVirtualDesktopSwitch::_ReleasePreviousDesktopComponents((CVirtualDesktopSwitch *)a1);
  return (unsigned int)v3;
}
