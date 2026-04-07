/*
 * XREFs of ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x180070574
 * Callers:
 *     ?SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18007C988 (-SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOT.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x180027F6C (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z @ 0x180038210 (-DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z.c)
 *     ?CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z @ 0x1800384B0 (-CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z.c)
 *     ?Create@CBitmapSource@@SAJIIIIPEBXPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18006D108 (-Create@CBitmapSource@@SAJIIIIPEBXPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     McTemplateU0qp @ 0x18006D798 (McTemplateU0qp.c)
 *     ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x18007048C (-AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 */

__int64 __fastcall CIconicBitmapRegistry::BitmapReceived(
        CWindowIconic ****this,
        struct CWindowData *a2,
        int a3,
        unsigned int a4,
        LONG nNumber,
        void *a6,
        unsigned __int64 a7,
        char a8)
{
  __int64 v9; // rbp
  unsigned int v11; // ebx
  unsigned __int64 v13; // rcx
  bool v14; // r14
  HWND ShellWindowForDesktop; // rax
  LONG v16; // esi
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  LONG cx; // ebx
  unsigned int v21; // r8d
  LONG cy; // r14d
  unsigned int v23; // r9d
  int v24; // eax
  CBaseObject *v25; // rsi
  char v26; // al
  struct CBitmapSource *v27; // r8
  DWORD v29; // [rsp+40h] [rbp-38h] BYREF
  CBaseObject *v30; // [rsp+48h] [rbp-30h] BYREF
  struct tagSIZE dwProcessId; // [rsp+88h] [rbp+10h] BYREF

  v9 = a4;
  v11 = 0;
  v30 = 0LL;
  if ( GetWindowThreadProcessId(*((HWND *)a2 + 5), &v29) && a3 == v29 )
  {
    v14 = 1;
  }
  else
  {
    v14 = 0;
    ShellWindowForDesktop = CWindowList::GetShellWindowForDesktop(
                              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 57),
                              *((_QWORD *)a2 + 15));
    if ( ShellWindowForDesktop )
    {
      dwProcessId.cx = 0;
      GetWindowThreadProcessId(ShellWindowForDesktop, (LPDWORD)&dwProcessId);
      v14 = dwProcessId.cx == a3;
    }
  }
  if ( (*((_BYTE *)a2 + 594) & 1) != 0
    && (v16 = nNumber, v13 = (unsigned int)nNumber * v9, v13 <= 0xFFFFFFFF)
    && (v17 = 4LL * (unsigned int)v13, v13 = 0xFFFFFFFFLL, v17 <= 0xFFFFFFFF)
    && (v13 = (unsigned int)v17, a7 >= (unsigned int)v17)
    && v14 )
  {
    if ( CIconicBitmapRegistry::CanAcceptBitmap((CIconicBitmapRegistry *)this, a2) )
    {
      if ( (unsigned int)DwmGetIdealIconicThumbnailSize(1, &dwProcessId) )
      {
        cx = dwProcessId.cx;
        v21 = v9;
        cy = dwProcessId.cy;
        v23 = v16;
        if ( (int)v9 <= dwProcessId.cx || (int)v9 * dwProcessId.cy > v16 * dwProcessId.cx )
        {
          if ( v16 > dwProcessId.cy && (int)v9 * dwProcessId.cy > v16 * dwProcessId.cx )
          {
            v21 = MulDiv(v9, dwProcessId.cy, v16);
            v23 = cy;
          }
        }
        else
        {
          v23 = MulDiv(v16, dwProcessId.cx, v9);
          v21 = cx;
        }
        v24 = CBitmapSource::Create(
                v9,
                v16,
                v21,
                v23,
                a6,
                *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                &v30);
        v25 = v30;
        v11 = v24;
        if ( v24 >= 0 )
        {
          v26 = a8;
          v27 = v30;
          *((_BYTE *)a2 + 594) &= ~2u;
          *((_BYTE *)a2 + 594) |= 2 * (v26 & 1);
          CIconicBitmapRegistry::AcceptBitmap(this, a2, v27);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800AF068, 1u, v24, 0x24Fu);
        }
        if ( v25 )
          CBaseObject::Release(v25);
      }
      else
      {
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McTemplateU0qp(v19, &UdwmManageIconicThumbnail_Info, 1, *((_QWORD *)a2 + 5));
        v11 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800AF068, 1u, -2147467259, 0x23Eu);
      }
    }
    else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      McTemplateU0qp(v18, &UdwmManageIconicThumbnail_Info, 1, *((_QWORD *)a2 + 5));
    }
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp(v13, &UdwmManageIconicThumbnail_Info, 1, *((_QWORD *)a2 + 5));
    v11 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800AF068, 1u, -2147024809, 0x22Eu);
  }
  return v11;
}
