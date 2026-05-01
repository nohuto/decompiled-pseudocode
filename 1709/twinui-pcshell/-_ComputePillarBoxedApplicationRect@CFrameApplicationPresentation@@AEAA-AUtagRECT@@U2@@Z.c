/*
 * XREFs of ?_ComputePillarBoxedApplicationRect@CFrameApplicationPresentation@@AEAA?AUtagRECT@@U2@@Z @ 0x18006B884
 * Callers:
 *     ?ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x180069C20 (-ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPD.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall CFrameApplicationPresentation::_ComputePillarBoxedApplicationRect(
        CFrameApplicationPresentation *this,
        struct tagRECT *__return_ptr retstr,
        struct tagRECT *a3)
{
  __int64 v6; // rbp
  unsigned int v7; // r8d
  unsigned int v8; // r10d
  unsigned int v9; // r9d
  unsigned int v10; // edx
  LONG v11; // r8d
  struct tagRECT *result; // rax
  int v13; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+48h] [rbp+10h] BYREF

  v6 = **((_QWORD **)this + 15);
  if ( (int)GetSystemScaleFactorForWindow(v6, &v14) >= 0 && (int)GetOverrideScaleFactorForWindow(v6, &v13) >= 0 )
  {
    v7 = a3->right - a3->left;
    v8 = v14 * v13 / 0x64u;
    v9 = (int)(320 * v8) / 100;
    v10 = (int)(v8 << 10) / 100;
    if ( v7 <= v9 )
      goto LABEL_8;
    if ( a3->bottom - a3->top >= v10 )
      v10 = (int)(768 * v8) / 100;
    if ( v7 >= v10 )
    {
LABEL_8:
      *((_BYTE *)this + 62) = 0;
    }
    else
    {
      *((_BYTE *)this + 62) = 1;
      v11 = (v7 - v9) >> 1;
      a3->left = v11;
      a3->right = v11 + v9;
    }
  }
  result = retstr;
  *retstr = *a3;
  return result;
}
