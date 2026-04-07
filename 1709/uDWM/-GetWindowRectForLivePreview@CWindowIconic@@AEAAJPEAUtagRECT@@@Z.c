/*
 * XREFs of ?GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z @ 0x18007D318
 * Callers:
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180037414 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x18007B644 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 *     ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x18007B8E4 (-GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z.c)
 */

__int64 __fastcall CWindowIconic::GetWindowRectForLivePreview(CWindowIconic *this, struct tagRECT *a2)
{
  unsigned int v3; // esi
  __int64 v4; // rcx
  struct CWindowData *MDIOwner; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __m128i v10; // xmm1
  LONG left; // edx
  int WindowRestoreRect; // eax

  v3 = 0;
  v4 = *((_QWORD *)this + 9);
  if ( (*(_BYTE *)(v4 + 594) & 1) == 0 || (MDIOwner = CWindowData::GetMDIOwner((HWND *)v4)) == 0LL )
    MDIOwner = (struct CWindowData *)*((_QWORD *)this + 9);
  v7 = *((_QWORD *)MDIOwner + 53);
  if ( v7 )
  {
    MDIOwner = *(struct CWindowData **)(v7 + 32);
    *a2 = *((struct tagRECT *)MDIOwner + 3);
  }
  else
  {
    WindowRestoreRect = CWindowData::GetWindowRestoreRect(MDIOwner, a2, 1);
    v3 = WindowRestoreRect;
    if ( WindowRestoreRect < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, WindowRestoreRect, 0x1B5u);
      return v3;
    }
  }
  if ( *((_DWORD *)this + 4) == 2 )
  {
    v8 = *((_QWORD *)this + 3);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 24);
      v10 = _mm_cvtsi32_si128(HIDWORD(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 32) + 104LL)));
      a2->left += (int)(float)((float)((float)(int)*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                               + 32)
                                                             + 104LL)
                                     * *((float *)MDIOwner + 43))
                             + (float)*((int *)MDIOwner + 16));
      left = a2->left;
      a2->top += (int)(float)((float)(_mm_cvtepi32_ps(v10).m128_f32[0] * *((float *)MDIOwner + 44))
                            + (float)*((int *)MDIOwner + 18));
      a2->bottom = a2->top + HIDWORD(v9);
      a2->right = left + v9;
      AdjustWindowRectEx(a2, *(_DWORD *)(*((_QWORD *)this + 10) + 100LL), 0, 0);
    }
  }
  return v3;
}
