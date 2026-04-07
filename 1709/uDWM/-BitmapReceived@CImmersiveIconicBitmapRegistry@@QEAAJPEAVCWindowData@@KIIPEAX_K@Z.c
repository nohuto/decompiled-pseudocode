/*
 * XREFs of ?BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z @ 0x180070F7C
 * Callers:
 *     ?SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18007C988 (-SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOT.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x180027F6C (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CBitmapSource@@SAJIIIIPEBXPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18006D108 (-Create@CBitmapSource@@SAJIIIIPEBXPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     McTemplateU0qp @ 0x18006D798 (McTemplateU0qp.c)
 *     ?_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x1800716CC (-_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 */

__int64 __fastcall CImmersiveIconicBitmapRegistry::BitmapReceived(
        CImmersiveIconicBitmapRegistry *this,
        struct CWindowData *a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6,
        unsigned __int64 a7)
{
  __int64 v9; // rbp
  unsigned __int64 v11; // rcx
  bool v12; // bl
  HWND ShellWindowForDesktop; // rax
  unsigned __int64 v14; // rax
  _DWORD *v15; // r14
  int v16; // eax
  CBaseObject *v17; // rsi
  unsigned int v18; // ebx
  struct CBitmapSource *v19; // r8
  DWORD v21; // [rsp+40h] [rbp-38h] BYREF
  CBaseObject *v22; // [rsp+48h] [rbp-30h] BYREF
  DWORD dwProcessId; // [rsp+88h] [rbp+10h] BYREF

  v22 = 0LL;
  v9 = a4;
  if ( GetWindowThreadProcessId(*((HWND *)a2 + 5), &v21) && a3 == v21 )
  {
    v12 = 1;
  }
  else
  {
    v12 = 0;
    ShellWindowForDesktop = CWindowList::GetShellWindowForDesktop(
                              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 57),
                              *((_QWORD *)a2 + 15));
    if ( ShellWindowForDesktop )
    {
      dwProcessId = 0;
      GetWindowThreadProcessId(ShellWindowForDesktop, &dwProcessId);
      v12 = dwProcessId == a3;
    }
  }
  if ( (*((_BYTE *)a2 + 594) & 1) != 0
    && (v11 = a5 * v9, v11 <= 0xFFFFFFFF)
    && (v14 = 4LL * (unsigned int)v11, v11 = 0xFFFFFFFFLL, v14 <= 0xFFFFFFFF)
    && (v11 = (unsigned int)v14, a7 >= (unsigned int)v14)
    && v12 )
  {
    v15 = a6;
    v16 = CBitmapSource::Create(
            v9,
            a5,
            v9,
            a5,
            a6,
            *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
            &v22);
    v17 = v22;
    v18 = v16;
    if ( v16 >= 0 )
    {
      v19 = v22;
      *((_DWORD *)a2 + 42) = *v15 & 0xFF00 | ((unsigned __int8)*v15 << 16) | (unsigned __int8)BYTE2(*v15);
      CImmersiveIconicBitmapRegistry::_AcceptBitmap(this, a2, v19);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800AF068, 1u, v16, 0x173u);
    }
    if ( v17 )
      CBaseObject::Release(v17);
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp(v11, &UdwmManageIconicThumbnail_Info, 1, *((_QWORD *)a2 + 5));
    v18 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800AF068, 1u, -2147024809, 0x16Fu);
  }
  return v18;
}
