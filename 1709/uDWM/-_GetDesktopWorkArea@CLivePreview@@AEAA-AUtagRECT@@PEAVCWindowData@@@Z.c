/*
 * XREFs of ?_GetDesktopWorkArea@CLivePreview@@AEAA?AUtagRECT@@PEAVCWindowData@@@Z @ 0x18006B410
 * Callers:
 *     ?_GetCoverageStateOfWindow@CLivePreview@@AEAA?AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z @ 0x18006B2A0 (-_GetCoverageStateOfWindow@CLivePreview@@AEAA-AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall CLivePreview::_GetDesktopWorkArea(
        CLivePreview *this,
        struct tagRECT *__return_ptr retstr,
        HWND *a3)
{
  HMONITOR v5; // r10
  __int64 v6; // r9
  __int64 i; // rdx
  __int64 v8; // r8
  struct tagRECT *v9; // r8

  *(_QWORD *)&retstr->left = 0LL;
  *(_QWORD *)&retstr->right = 0LL;
  if ( a3 )
  {
    if ( *((_QWORD *)this + 69) )
    {
      v5 = MonitorFromWindow(a3[5], 0);
      if ( v5 )
      {
        v6 = *((_QWORD *)this + 69);
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v6 + 40); i = (unsigned int)(i + 1) )
        {
          v8 = *(_QWORD *)(v6 + 16) + 24 * i;
          if ( v8 && v5 == *(HMONITOR *)(v8 + 16) )
          {
            if ( (unsigned int)i >= *(_DWORD *)(v6 + 40) )
              v9 = 0LL;
            else
              v9 = (struct tagRECT *)(*(_QWORD *)(v6 + 16) + 24 * i);
            *retstr = *v9;
          }
        }
      }
    }
  }
  return retstr;
}
