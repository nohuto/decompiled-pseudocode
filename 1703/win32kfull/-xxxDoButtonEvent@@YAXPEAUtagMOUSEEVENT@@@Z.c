/*
 * XREFs of ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C019EE08
 * Callers:
 *     ProcessQueuedMouseEvents @ 0x1C00FF6A4 (ProcessQueuedMouseEvents.c)
 * Callees:
 *     ?MouseWheelRoutingFocus@@YAHXZ @ 0x1C019CAF8 (-MouseWheelRoutingFocus@@YAHXZ.c)
 *     ?xxxButtonEvent@@YAXKUtagPOINT@@PEBU_SUBPIXELS@@HK_K2PEAXPEAU_MOUSE_INPUT_DATA@@HHHHHPEAUtagUIPI_INFO_INT@@5PEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C019DD1C (-xxxButtonEvent@@YAXKUtagPOINT@@PEBU_SUBPIXELS@@HK_K2PEAXPEAU_MOUSE_INPUT_DATA@@HHHHHPEAUtagUIPI.c)
 *     ?xxxMouseWheelEvent@@YAXPEAUtagMOUSEEVENT@@UtagUIPI_INFO@@HUtagINPUT_MESSAGE_SOURCE@@IH@Z @ 0x1C019F1B4 (-xxxMouseWheelEvent@@YAXPEAUtagMOUSEEVENT@@UtagUIPI_INFO@@HUtagINPUT_MESSAGE_SOURCE@@IH@Z.c)
 */

void __fastcall xxxDoButtonEvent(struct tagMOUSEEVENT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // r12d
  __int64 v6; // rbx
  unsigned int v7; // r14d
  __int64 v8; // rax
  int v9; // esi
  int v10; // r15d
  int v11; // ebp
  int v12; // eax
  unsigned int v13; // esi
  int v14; // r15d
  bool v15; // zf
  int v16; // r12d
  int v17; // eax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  int v20; // eax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  struct tagUIPI_INFO_INT *v23; // [rsp+78h] [rbp-70h]
  _QWORD v24[11]; // [rsp+90h] [rbp-58h] BYREF
  unsigned int v25; // [rsp+F0h] [rbp+8h]
  unsigned int v26; // [rsp+F8h] [rbp+10h]
  int v27; // [rsp+100h] [rbp+18h]

  v5 = *((unsigned __int16 *)a1 + 1);
  v26 = v5;
  if ( (unsigned int)IsDwmInputThread(a1, a2, a3, a4) && (*((_DWORD *)a1 + 12) & 0x800) != 0 )
  {
    v6 = *(_QWORD *)((char *)a1 + 52);
    v7 = *((_DWORD *)a1 + 15);
  }
  else
  {
    v8 = *(_QWORD *)(gptiCurrent + 376LL);
    v6 = *(_QWORD *)(v8 + 824);
    v7 = *(int *)(v8 + 12) < 0;
  }
  v9 = *(unsigned __int16 *)a1;
  v10 = *(_WORD *)a1 & 0x800;
  v27 = v10;
  v11 = v9 & 0x400;
  GetMouseEventInputSource(a1, v24);
  v12 = 1;
  v25 = 1;
  v13 = v9 & 0xFFFFF3FF;
  if ( v13 )
  {
    v14 = HIDWORD(v6);
    do
    {
      if ( (v13 & 1) != 0 )
      {
        if ( !gbClientDoubleClickSupport || (v15 = (v5 & 1) == 0, v16 = 1, v15) )
          v16 = 0;
        xxxButtonEvent(
          v25,
          *(struct tagPOINT *)((char *)a1 + 16),
          (struct tagMOUSEEVENT *)((char *)a1 + 96),
          0LL,
          *((_DWORD *)a1 + 6),
          *((_QWORD *)a1 + 4),
          *((_QWORD *)a1 + 1),
          *((void **)a1 + 5),
          (struct _MOUSE_INPUT_DATA *)a1 + 3,
          -(*((_DWORD *)a1 + 12) & 1),
          -__CFSHR__(*((_DWORD *)a1 + 12), 6),
          -__CFSHR__(*((_DWORD *)a1 + 12), 7),
          v16,
          -__CFSHR__(*((_DWORD *)a1 + 12), 12),
          (struct tagMOUSEEVENT *)((char *)a1 + 52),
          v23,
          (struct tagINPUT_MESSAGE_SOURCE *)v24);
        v17 = *((_DWORD *)a1 + 12);
        v14 = HIDWORD(v6);
        if ( (v17 & 0x20) == 0 && (v17 & 1) != 0 )
        {
          if ( gpqForeground )
          {
            v18 = *(_QWORD *)(gpqForeground + 380LL);
            if ( gbEnforceUIPI )
            {
              if ( (unsigned int)v6 <= (unsigned int)v18 )
              {
                if ( (_DWORD)v6 != (_DWORD)v18
                  || (v19 = HIDWORD(v18), HIDWORD(v6) != (_DWORD)v19) && HIDWORD(v6) != -1 && (_DWORD)v19 != -1 )
                {
                  if ( !v7 )
                  {
LABEL_21:
                    EtwTraceUIPIInputError(gptiCurrent, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 380LL), 1);
                    return;
                  }
                }
              }
            }
          }
        }
        v5 = v26;
        v12 = v25;
      }
      if ( (v13 & 2) != 0 )
      {
        xxxButtonEvent(
          v25,
          *(struct tagPOINT *)((char *)a1 + 16),
          (struct tagMOUSEEVENT *)((char *)a1 + 96),
          1LL,
          *((_DWORD *)a1 + 6),
          *((_QWORD *)a1 + 4),
          *((_QWORD *)a1 + 1),
          *((void **)a1 + 5),
          (struct _MOUSE_INPUT_DATA *)a1 + 3,
          -(*((_DWORD *)a1 + 12) & 1),
          -__CFSHR__(*((_DWORD *)a1 + 12), 6),
          -__CFSHR__(*((_DWORD *)a1 + 12), 7),
          0,
          -__CFSHR__(*((_DWORD *)a1 + 12), 12),
          (struct tagMOUSEEVENT *)((char *)a1 + 52),
          v23,
          (struct tagINPUT_MESSAGE_SOURCE *)v24);
        v20 = *((_DWORD *)a1 + 12);
        v5 = v26;
        if ( (v20 & 0x20) == 0 && (v20 & 1) != 0 )
        {
          if ( gpqForeground )
          {
            v21 = *(_QWORD *)(gpqForeground + 380LL);
            if ( gbEnforceUIPI )
            {
              if ( (unsigned int)v6 <= (unsigned int)v21 )
              {
                if ( (_DWORD)v6 != (_DWORD)v21
                  || (v22 = HIDWORD(v21), v14 != (_DWORD)v22) && v14 != -1 && (_DWORD)v22 != -1 )
                {
                  if ( !v7 )
                    goto LABEL_21;
                }
              }
            }
          }
        }
        v12 = v25;
      }
      v5 >>= 2;
      v12 *= 2;
      v13 >>= 2;
      v26 = v5;
      v25 = v12;
    }
    while ( v13 );
    v10 = v27;
  }
  if ( (v11 || v10)
    && *((_WORD *)a1 + 1)
    && ((*((_DWORD *)a1 + 12) & 0x400) != 0 || gpqForeground || !(unsigned int)MouseWheelRoutingFocus()) )
  {
    xxxMouseWheelEvent(a1, v6, v7, v24[0], v11 != 0 ? 522 : 526, v13 & 1);
  }
}
