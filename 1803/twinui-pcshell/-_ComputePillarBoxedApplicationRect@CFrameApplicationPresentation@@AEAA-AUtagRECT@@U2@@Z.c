/*
 * XREFs of ?_ComputePillarBoxedApplicationRect@CFrameApplicationPresentation@@AEAA?AUtagRECT@@U2@@Z @ 0x180137D2C
 * Callers:
 *     ?_ComputeDesiredApplicationRect@CFrameApplicationPresentation@@AEAAJPEAUtagRECT@@@Z @ 0x180014734 (-_ComputeDesiredApplicationRect@CFrameApplicationPresentation@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?GetScaleFactorForWindow@@YAJPEAUHWND__@@PEAI@Z @ 0x180136EDC (-GetScaleFactorForWindow@@YAJPEAUHWND__@@PEAI@Z.c)
 */

struct tagRECT *__fastcall CFrameApplicationPresentation::_ComputePillarBoxedApplicationRect(
        CFrameApplicationPresentation *this,
        struct tagRECT *__return_ptr retstr,
        struct tagRECT *a3)
{
  unsigned int v6; // r8d
  unsigned int v7; // r9d
  unsigned int v8; // edx
  LONG v9; // r8d
  struct tagRECT *result; // rax
  unsigned int v11; // [rsp+30h] [rbp+8h] BYREF

  if ( (int)GetScaleFactorForWindow(**((HWND **)this + 14), &v11) >= 0 )
  {
    v6 = a3->right - a3->left;
    v7 = (int)(320 * v11) / 100;
    v8 = (int)(v11 << 10) / 100;
    if ( v6 <= v7 )
      goto LABEL_7;
    if ( a3->bottom - a3->top >= v8 )
      v8 = (int)(768 * v11) / 100;
    if ( v6 >= v8 )
    {
LABEL_7:
      *((_BYTE *)this + 54) = 0;
    }
    else
    {
      *((_BYTE *)this + 54) = 1;
      v9 = (v6 - v7) >> 1;
      a3->left = v9;
      a3->right = v9 + v7;
    }
  }
  result = retstr;
  *retstr = *a3;
  return result;
}
