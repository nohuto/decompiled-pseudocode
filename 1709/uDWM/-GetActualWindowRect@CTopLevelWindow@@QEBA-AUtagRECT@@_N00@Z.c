/*
 * XREFs of ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x180065940
 * Callers:
 *     ?IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x180076F64 (-IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x18007728C (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?GetLivePreviewWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z @ 0x180078810 (-GetLivePreviewWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N@Z.c)
 *     ?GetWindowBounds@CWindowList@@UEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x18007B820 (-GetWindowBounds@CWindowList@@UEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
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
  int v5; // esi
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // r10
  __int64 v12; // r11
  int v13; // ecx
  int v14; // eax
  int v15; // edx
  int v16; // r8d
  int v17; // eax

  v5 = 0;
  *retstr = *(struct tagRECT *)(*((_QWORD *)this + 90) + 48LL);
  if ( a3 )
    OffsetRect(retstr, -retstr->left, -retstr->top);
  if ( (*((_BYTE *)this + 240) & 8) == 0 || (v9 = 636LL, !a4) )
    v9 = 620LL;
  retstr->left += *(_DWORD *)((char *)this + v9);
  retstr->right -= *(_DWORD *)((char *)this + v9 + 4);
  retstr->top += *(_DWORD *)((char *)this + v9 + 8);
  retstr->bottom -= *(_DWORD *)((char *)this + v9 + 12);
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
          v13 = *((_DWORD *)this + 151) - *(_DWORD *)((char *)this + v9) - *(_DWORD *)(v10 + 24);
          v14 = 0;
          v15 = *((_DWORD *)this + 152) - *(_DWORD *)((char *)this + v9 + 4) - *(_DWORD *)(v11 + 24);
          v16 = *((_DWORD *)this + 154) - *(_DWORD *)((char *)this + v9 + 12) - *(_DWORD *)(v12 + 28);
          if ( v13 >= 0 )
            v14 = v13;
          retstr->left += v14;
          v17 = 0;
          if ( v15 >= 0 )
            v17 = v15;
          retstr->right -= v17;
          if ( v16 >= 0 )
            v5 = v16;
          retstr->bottom -= v5;
        }
      }
    }
  }
  return retstr;
}
