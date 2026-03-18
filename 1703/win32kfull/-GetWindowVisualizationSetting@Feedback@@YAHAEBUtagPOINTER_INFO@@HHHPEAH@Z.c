/*
 * XREFs of ?GetWindowVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@HHHPEAH@Z @ 0x1C01B6A98
 * Callers:
 *     ?ContactVisualizationWorker@@YAHKPEAX_KHK@Z @ 0x1C01B64D8 (-ContactVisualizationWorker@@YAHKPEAX_KHK@Z.c)
 * Callees:
 *     FeedbackGetWindowSetting @ 0x1C01B727C (FeedbackGetWindowSetting.c)
 *     ?GetPointerVisualization@PointerList@@YAHGPEAH@Z @ 0x1C01EA0B8 (-GetPointerVisualization@PointerList@@YAHGPEAH@Z.c)
 *     ?SetPointerVisualization@PointerList@@YAHGHPEAHH@Z @ 0x1C01EA4E4 (-SetPointerVisualization@PointerList@@YAHGHPEAHH@Z.c)
 */

_BOOL8 __fastcall Feedback::GetWindowVisualizationSetting(
        Feedback *this,
        const struct tagPOINTER_INFO *a2,
        int *a3,
        int a4,
        int *a5)
{
  int *v5; // rdi
  int v7; // eax
  BOOL v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rax
  int *v11; // r8
  unsigned __int16 v12; // dx
  _DWORD *v13; // r14
  int PointerVisualization; // eax
  _DWORD *v15; // r14
  int v16; // eax
  int v18; // [rsp+20h] [rbp-28h]
  int v19; // [rsp+58h] [rbp+10h] BYREF

  v5 = a5;
  v19 = 0;
  *a5 = 0;
  v7 = *((_DWORD *)this + 3);
  if ( (v7 & 0x10000) != 0 )
  {
    if ( (_DWORD)a3 || a4 )
    {
      v8 = 1;
      v19 = 1;
    }
    else
    {
      v8 = (_DWORD)a2 == 0;
      if ( !(_DWORD)a2 && *(_DWORD *)this == 2 )
      {
        v9 = *((_QWORD *)this + 3);
        LODWORD(a5) = 1;
        if ( v9 )
        {
          v10 = ValidateHwnd(v9);
          if ( v10 )
          {
            if ( (unsigned int)FeedbackGetWindowSetting(v10, 1LL, 1LL, &a5) )
              v8 = (int)a5;
          }
        }
      }
    }
    if ( (gdwMitConfig & 4) != 0 )
    {
      CTouchProcessor::SetPointerVisualization(gpTouchProcessor, *((_WORD *)this + 2), v8, &v19, 0);
      return v8;
    }
    v11 = &v19;
    v12 = v8;
    goto LABEL_22;
  }
  if ( (v7 & 0x40000) != 0 )
  {
    v13 = (_DWORD *)gdwMitConfig;
    if ( (gdwMitConfig & 4) != 0 )
    {
      PointerVisualization = CTouchProcessor::GetPointerVisualization(gpTouchProcessor, *((_WORD *)this + 2), v5);
      v13 = (_DWORD *)gdwMitConfig;
    }
    else
    {
      PointerVisualization = PointerList::GetPointerVisualization(
                               (PointerList *)*((unsigned __int16 *)this + 2),
                               (unsigned __int16)v5,
                               a3);
    }
    v8 = PointerVisualization;
    if ( (*v13 & 4) == 0 )
    {
      LODWORD(v11) = 0;
      v12 = 1;
LABEL_22:
      PointerList::SetPointerVisualization((PointerList *)*((unsigned __int16 *)this + 2), v12, (int)v11, 0LL, v18);
      return v8;
    }
    CTouchProcessor::SetPointerVisualization(gpTouchProcessor, *((_WORD *)this + 2), 1, 0LL, 0);
  }
  else
  {
    v8 = (_DWORD)a2 == 0;
    if ( (v7 & 4) != 0 )
    {
      v15 = (_DWORD *)gdwMitConfig;
      if ( (gdwMitConfig & 4) != 0 )
      {
        v16 = CTouchProcessor::GetPointerVisualization(gpTouchProcessor, *((_WORD *)this + 2), v5);
        v15 = (_DWORD *)gdwMitConfig;
      }
      else
      {
        v16 = PointerList::GetPointerVisualization(
                (PointerList *)*((unsigned __int16 *)this + 2),
                (unsigned __int16)v5,
                a3);
      }
      v8 = v16;
      if ( *v5 )
      {
        if ( (*v15 & 4) != 0 )
          CTouchProcessor::SetPointerVisualization(gpTouchProcessor, *((_WORD *)this + 2), v16, 0LL, 0);
        else
          PointerList::SetPointerVisualization((PointerList *)*((unsigned __int16 *)this + 2), v16, 0, 0LL, v18);
        if ( v8 )
          *v5 = 0;
      }
    }
  }
  return v8;
}
