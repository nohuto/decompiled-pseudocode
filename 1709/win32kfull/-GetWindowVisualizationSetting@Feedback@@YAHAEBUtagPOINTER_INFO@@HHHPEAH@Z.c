/*
 * XREFs of ?GetWindowVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@HHHPEAH@Z @ 0x1C01BBDB0
 * Callers:
 *     ?ContactVisualizationWorker@@YAHKPEAX_KHK@Z @ 0x1C01BB688 (-ContactVisualizationWorker@@YAHKPEAX_KHK@Z.c)
 * Callees:
 *     FeedbackGetWindowSetting @ 0x1C01BC5F4 (FeedbackGetWindowSetting.c)
 *     ?GetPointerVisualization@PointerList@@YAHGPEAH@Z @ 0x1C01F6050 (-GetPointerVisualization@PointerList@@YAHGPEAH@Z.c)
 *     ?SetPointerVisualization@PointerList@@YAHGHPEAHH@Z @ 0x1C01F63FC (-SetPointerVisualization@PointerList@@YAHGHPEAHH@Z.c)
 */

_BOOL8 __fastcall Feedback::GetWindowVisualizationSetting(
        Feedback *this,
        const struct tagPOINTER_INFO *a2,
        int *a3,
        int a4,
        int *a5)
{
  int *v5; // rsi
  int v7; // eax
  BOOL v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  int *v13; // r8
  unsigned __int16 v14; // dx
  int PointerVisualization; // eax
  int v16; // eax
  int v18; // [rsp+20h] [rbp-18h]
  int v19; // [rsp+48h] [rbp+10h] BYREF

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
    if ( v8 )
    {
      if ( (unsigned int)(*(_DWORD *)this - 2) <= 1 )
      {
        v11 = *((_QWORD *)this + 3);
        if ( v11 )
        {
          v12 = ValidateHwnd(v11);
          if ( v12 )
          {
            if ( (unsigned int)FeedbackGetWindowSetting(v12, 13LL, 1LL, &a5) && (_DWORD)a5 )
            {
              v8 = 0;
              v19 = 0;
            }
          }
        }
      }
    }
    if ( (gdwMitConfig & 4) != 0 )
    {
      CTouchProcessor::SetPointerVisualization(gpTouchProcessor, *((_WORD *)this + 2), v8, &v19, 0);
      return v8;
    }
    v13 = &v19;
    v14 = v8;
    goto LABEL_29;
  }
  if ( (v7 & 0x40000) != 0 )
  {
    if ( (gdwMitConfig & 4) != 0 )
      PointerVisualization = CTouchProcessor::GetPointerVisualization(gpTouchProcessor, *((_WORD *)this + 2), v5);
    else
      PointerVisualization = PointerList::GetPointerVisualization(
                               (PointerList *)*((unsigned __int16 *)this + 2),
                               (unsigned __int16)v5,
                               a3);
    v8 = PointerVisualization;
    if ( (gdwMitConfig & 4) == 0 )
    {
      LODWORD(v13) = 0;
      v14 = 1;
LABEL_29:
      PointerList::SetPointerVisualization((PointerList *)*((unsigned __int16 *)this + 2), v14, (int)v13, 0LL, v18);
      return v8;
    }
    CTouchProcessor::SetPointerVisualization(gpTouchProcessor, *((_WORD *)this + 2), 1, 0LL, 0);
  }
  else
  {
    v8 = (_DWORD)a2 == 0;
    if ( (v7 & 4) != 0 )
    {
      v16 = (gdwMitConfig & 4) != 0
          ? CTouchProcessor::GetPointerVisualization(gpTouchProcessor, *((_WORD *)this + 2), v5)
          : PointerList::GetPointerVisualization(
              (PointerList *)*((unsigned __int16 *)this + 2),
              (unsigned __int16)v5,
              a3);
      v8 = v16;
      if ( *v5 )
      {
        if ( (gdwMitConfig & 4) != 0 )
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
