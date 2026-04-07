/*
 * XREFs of ?_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18006B544
 * Callers:
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180034AFC (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?_CollectWindows@CLivePreview@@AEAAJXZ @ 0x18006A81C (-_CollectWindows@CLivePreview@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     ?GetLivePreviewWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z @ 0x180078810 (-GetLivePreviewWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N@Z.c)
 */

char __fastcall CLivePreview::_IsEligibleForLivePreview(CLivePreview *this, const struct CWindowData *a2)
{
  char v2; // di
  char v4; // al
  HWND v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // xmm0_8
  RECT rcSrc1; // [rsp+20h] [rbp-40h] BYREF
  RECT rcSrc2; // [rsp+30h] [rbp-30h] BYREF
  struct tagRECT rcDst; // [rsp+40h] [rbp-20h] BYREF

  v2 = 0;
  if ( (*((_BYTE *)a2 + 594) & 0x20) == 0 )
  {
    if ( *((_QWORD *)a2 + 50) )
    {
      v4 = *((_BYTE *)a2 + 592);
      if ( (v4 & 1) != 0 && (*((_BYTE *)a2 + 596) & 1) == 0 && (v4 & 4) == 0 && (*((_DWORD *)a2 + 25) & 0x20000000) == 0 )
      {
        if ( *((_QWORD *)a2 + 5) )
        {
          v5 = (HWND)*((_QWORD *)a2 + 5);
          if ( v5 != GetDesktopWindow() && v5 != *((HWND *)CDesktopManager::s_pDesktopManagerInstance + 80) )
          {
            CTopLevelWindow::GetLivePreviewWindowRect(*((CTopLevelWindow **)a2 + 50), &rcSrc1, 1);
            v6 = *(_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 404);
            v7 = _mm_srli_si128(*(__m128i *)((char *)CDesktopManager::s_pDesktopManagerInstance + 404), 8).m128i_u64[0];
            rcSrc2.left = *(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 404);
            rcSrc2.top = HIDWORD(v6);
            rcSrc2.bottom = HIDWORD(v6) + HIDWORD(v7);
            rcSrc2.right = v7 + v6;
            if ( IntersectRect(&rcDst, &rcSrc1, &rcSrc2) )
            {
              if ( rcSrc1.right - rcSrc1.left >= 1 )
                return rcSrc1.bottom - rcSrc1.top >= 1;
            }
          }
        }
      }
    }
  }
  return v2;
}
