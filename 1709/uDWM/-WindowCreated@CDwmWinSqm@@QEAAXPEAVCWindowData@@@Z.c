/*
 * XREFs of ?WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z @ 0x18007D97C
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180026880 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180031238 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18003583C (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     memset_0 @ 0x180045938 (memset_0.c)
 *     ?AdjustTimeScaledCount@CDwmWinSqm@@AEAAXXZ @ 0x18007D5F4 (-AdjustTimeScaledCount@CDwmWinSqm@@AEAAXXZ.c)
 *     ?GetAppName@CDwmWinSqm@@QEAAJPEAVCWindowData@@PEAG_K12@Z @ 0x18007D678 (-GetAppName@CDwmWinSqm@@QEAAJPEAVCWindowData@@PEAG_K12@Z.c)
 *     ?RecordAppName@CDwmWinSqm@@QEAAXPEAGK@Z @ 0x18007D7C0 (-RecordAppName@CDwmWinSqm@@QEAAXPEAGK@Z.c)
 *     ?RecordMinimizedWndRatio@CDwmWinSqm@@QEAAXXZ @ 0x18007D8A4 (-RecordMinimizedWndRatio@CDwmWinSqm@@QEAAXXZ.c)
 *     ?TestCounter@CDwmWinSqm@@AEAA_NXZ @ 0x18007D95C (-TestCounter@CDwmWinSqm@@AEAA_NXZ.c)
 */

void __fastcall CDwmWinSqm::WindowCreated(CDwmWinSqm *this, struct CWindowData *a2)
{
  CDwmWinSqm *v3; // rcx
  CDwmWinSqm *v4; // rcx
  __int64 v5; // r9
  CDwmWinSqm *v6; // rcx
  __int64 WindowDpiAwarenessContext; // rax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // edi
  __int64 v11; // rcx
  unsigned int v12; // ebx
  unsigned int v13; // eax
  unsigned int v14; // edi
  __int64 v15; // rcx
  CDwmWinSqm *v16; // rcx
  size_t String2[16]; // [rsp+30h] [rbp-2A8h] BYREF
  unsigned __int16 v18[264]; // [rsp+B0h] [rbp-228h] BYREF

  memset_0(String2, 0, sizeof(String2));
  memset_0(v18, 0, 0x20AuLL);
  CDwmWinSqm::AdjustTimeScaledCount(v3);
  ++dword_1800C2504;
  if ( (*((_DWORD *)a2 + 25) & 0x20000000) != 0 )
    ++dword_1800C2500;
  if ( (int)CDwmWinSqm::GetAppName(v4, a2, (unsigned __int16 *)String2, v5, v18) >= 0 )
  {
    WindowDpiAwarenessContext = GetWindowDpiAwarenessContext(*((_QWORD *)a2 + 5));
    if ( (unsigned int)GetAwarenessFromDpiAwarenessContext(WindowDpiAwarenessContext) )
    {
      v8 = dword_1800C1FF4;
      v9 = 10;
      if ( !byte_1800C1FF0 )
        v9 = dword_1800C1FF4;
      v10 = 0;
      if ( v9 )
      {
        while ( lstrcmpW(&g_DwmWinSqmInstance[64 * (unsigned __int64)v10], (LPCWSTR)String2) )
        {
          if ( ++v10 >= v9 )
          {
            v8 = dword_1800C1FF4;
            goto LABEL_11;
          }
        }
      }
      else
      {
LABEL_11:
        StringCchCopyW(&g_DwmWinSqmInstance[64 * (unsigned __int64)v8], 0x40uLL, String2);
        if ( (unsigned int)dword_1800C1FF4 >= 9 )
        {
          dword_1800C1FF4 = 0;
          v11 = (unsigned __int8)byte_1800C1FF0;
          if ( !byte_1800C1FF0 )
            v11 = 1LL;
          byte_1800C1FF0 = v11;
        }
        else
        {
          ++dword_1800C1FF4;
        }
        CDwmWinSqm::RecordAppName((CDwmWinSqm *)v11, (unsigned __int16 *)String2, 0xD0Au);
      }
    }
    else if ( (unsigned int)GetDpiForSystem() > 0x78
           && (unsigned __int8)CDesktopManager::CheckAnyPreference(1u)
           && (*((double *)CDesktopManager::s_pDesktopManagerInstance + 55) != 1.0
            || *((double *)CDesktopManager::s_pDesktopManagerInstance + 56) != 1.0) )
    {
      v12 = 10;
      v13 = dword_1800C24FC;
      if ( !byte_1800C24F8 )
        v12 = dword_1800C24FC;
      v14 = 0;
      if ( v12 )
      {
        while ( lstrcmpW(&word_1800C1FF8[64 * (unsigned __int64)v14], (LPCWSTR)String2) )
        {
          if ( ++v14 >= v12 )
          {
            v13 = dword_1800C24FC;
            goto LABEL_27;
          }
        }
      }
      else
      {
LABEL_27:
        StringCchCopyW(&word_1800C1FF8[64 * (unsigned __int64)v13], 0x40uLL, String2);
        if ( (unsigned int)dword_1800C24FC >= 9 )
        {
          dword_1800C24FC = 0;
          v15 = (unsigned __int8)byte_1800C24F8;
          if ( !byte_1800C24F8 )
            v15 = 1LL;
          byte_1800C24F8 = v15;
        }
        else
        {
          ++dword_1800C24FC;
        }
        CDwmWinSqm::RecordAppName((CDwmWinSqm *)v15, (unsigned __int16 *)String2, 0xD12u);
      }
      WinSqmIncrementDWORD(0LL, 3347LL, 1LL);
    }
  }
  if ( CDwmWinSqm::TestCounter(v6) )
    CDwmWinSqm::RecordMinimizedWndRatio(v16);
}
