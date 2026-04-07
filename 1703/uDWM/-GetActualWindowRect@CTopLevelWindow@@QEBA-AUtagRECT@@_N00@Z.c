/*
 * XREFs of ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x18000BDB0
 * Callers:
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x18000AE30 (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?GetLivePreviewWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z @ 0x1800806D8 (-GetLivePreviewWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N@Z.c)
 *     ?GetWindowBounds@CWindowList@@UEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180083E00 (-GetWindowBounds@CWindowList@@UEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall CTopLevelWindow::GetActualWindowRect(
        CTopLevelWindow *this,
        struct tagRECT *__return_ptr retstr,
        char a3,
        char a4,
        bool a5)
{
  __int64 v8; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // r11
  int v13; // edx
  int v14; // ecx
  int v15; // eax

  *retstr = *(struct tagRECT *)(*((_QWORD *)this + 90) + 48LL);
  if ( a3 )
    OffsetRect(retstr, -retstr->left, -retstr->top);
  if ( (*((_BYTE *)this + 240) & 8) == 0 || (v8 = 636LL, !a4) )
    v8 = 620LL;
  retstr->left += *(_DWORD *)((char *)this + v8);
  retstr->right -= *(_DWORD *)((char *)this + v8 + 4);
  retstr->top += *(_DWORD *)((char *)this + v8 + 8);
  retstr->bottom -= *(_DWORD *)((char *)this + v8 + 12);
  if ( a5 )
  {
    v10 = *((_QWORD *)this + 40);
    if ( v10 )
    {
      v11 = *((_QWORD *)this + 41);
      if ( v11 )
      {
        v12 = *((_QWORD *)this + 43);
        if ( v12 )
        {
          v13 = *((_DWORD *)this + 151) - *(_DWORD *)((char *)this + v8) - *(_DWORD *)(v10 + 24);
          if ( v13 < 0 )
            v13 = 0;
          v14 = *((_DWORD *)this + 152) - *(_DWORD *)((char *)this + v8 + 4) - *(_DWORD *)(v11 + 24);
          if ( v14 < 0 )
            v14 = 0;
          v15 = *((_DWORD *)this + 154) - *(_DWORD *)((char *)this + v8 + 12) - *(_DWORD *)(v12 + 28);
          if ( v15 < 0 )
            v15 = 0;
          retstr->left += v13;
          retstr->right -= v14;
          retstr->bottom -= v15;
        }
      }
    }
  }
  return retstr;
}
