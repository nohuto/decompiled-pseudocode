/*
 * XREFs of ?PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C019CB40
 * Callers:
 *     ProcessQueuedMouseEvents @ 0x1C00FF6A4 (ProcessQueuedMouseEvents.c)
 *     ?xxxButtonEvent@@YAXKUtagPOINT@@PEBU_SUBPIXELS@@HK_K2PEAXPEAU_MOUSE_INPUT_DATA@@HHHHHPEAUtagUIPI_INFO_INT@@5PEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C019DD1C (-xxxButtonEvent@@YAXKUtagPOINT@@PEBU_SUBPIXELS@@HK_K2PEAXPEAU_MOUSE_INPUT_DATA@@HHHHHPEAUtagUIPI.c)
 *     ?xxxMouseWheelEvent@@YAXPEAUtagMOUSEEVENT@@UtagUIPI_INFO@@HUtagINPUT_MESSAGE_SOURCE@@IH@Z @ 0x1C019F1B4 (-xxxMouseWheelEvent@@YAXPEAUtagMOUSEEVENT@@UtagUIPI_INFO@@HUtagINPUT_MESSAGE_SOURCE@@IH@Z.c)
 * Callees:
 *     AllocateHidData @ 0x1C0002474 (AllocateHidData.c)
 *     FreeHidData @ 0x1C0004F00 (FreeHidData.c)
 *     PostInputMessage @ 0x1C0049470 (PostInputMessage.c)
 */

__int64 __fastcall PostRawMouseInput(struct tagQ *a1, int a2, __int64 a3, struct _MOUSE_INPUT_DATA *a4)
{
  struct tagQ *v6; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  InputTransform *v15; // rbp
  __int64 HidData; // rbx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 *v19; // r15
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // r13d
  __int64 v23; // rbp
  int v24; // r11d
  __int64 v25; // rdx
  __int64 v26; // r10
  __int64 v27; // r9
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rbp
  __int64 v32; // r8
  __int64 v33; // [rsp+60h] [rbp-48h]

  v6 = a1;
  if ( a4->UnitId == 0xFFFF )
    return 1LL;
  if ( a1 )
  {
    v8 = *((_QWORD *)a1 + 9);
    if ( v8 )
      v9 = *(_QWORD *)(v8 + 16);
    else
      v9 = *((_QWORD *)a1 + 7);
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 376) + 776LL);
  }
  else
  {
    v10 = 0LL;
  }
  v11 = 1LL;
  if ( v10 && (*(_DWORD *)(v10 + 100) & 1) != 0 )
  {
    v12 = *((_QWORD *)v6 + 9);
    if ( v12 )
      v13 = *(_QWORD *)(v12 + 16);
    else
      v13 = *((_QWORD *)v6 + 7);
    v14 = *(_QWORD *)(*(_QWORD *)(v13 + 376) + 776LL);
    v15 = *(InputTransform **)(v14 + 64);
    if ( v15 )
      v6 = *(struct tagQ **)(*((_QWORD *)v15 + 2) + 384LL);
    HidData = AllocateHidData(a3, 0, 24LL, 0LL, *(_QWORD *)(v14 + 64));
    if ( !HidData )
      return 0LL;
    v17 = *(_QWORD *)HidData;
    *(_WORD *)(HidData + 56) = a4->Flags & 0xFE7F;
    *(_DWORD *)(HidData + 60) = a4->Buttons;
    *(_DWORD *)(HidData + 64) = a4->RawButtons;
    *(_DWORD *)(HidData + 68) = a4->LastX;
    *(_DWORD *)(HidData + 72) = a4->LastY;
    *(_DWORD *)(HidData + 76) = a4->ExtraInformation;
    if ( (unsigned int)PostInputMessage(v6, v15, 0xFFu, 0LL, v17, a2, 0LL, a4->ExtraInformation, 0, 0LL, 0LL, 0LL) )
      v11 = 0LL;
    else
      FreeHidData(HidData);
  }
  if ( gHidCounters[1] )
  {
    v18 = 0LL;
    v19 = (__int64 *)RawInputManagerObject::gHidRequestTable[4];
    if ( v6 )
    {
      v20 = *((_QWORD *)v6 + 9);
      v21 = v20 ? *(_QWORD *)(v20 + 16) : *((_QWORD *)v6 + 7);
      v22 = *((_DWORD *)v6 + 95);
      v23 = *(_QWORD *)(v21 + 376);
      v18 = *(_QWORD *)((char *)v6 + 380);
    }
    else
    {
      v23 = 0LL;
      v22 = 0;
    }
    v33 = v23;
    if ( v19 != &RawInputManagerObject::gHidRequestTable[4] )
    {
      while ( 1 )
      {
        v24 = *((_DWORD *)v19 + 25);
        if ( (v24 & 4) != 0 )
        {
          v25 = v19[8];
          if ( v25 )
          {
            if ( *(char *)(v25 + 60) >= 0 && *(char *)(v25 + 59) >= 0 && *(_QWORD *)(v25 + 24) == grpdeskRitInput )
            {
              v26 = *(_QWORD *)(v25 + 16);
              v27 = *(_QWORD *)(v26 + 376);
              v28 = *(_QWORD *)(v27 + 824);
              if ( !gbEnforceUIPI
                || (unsigned int)v28 > v22
                || (_DWORD)v28 == v22
                && ((v29 = HIDWORD(v28), (_DWORD)v29 == HIDWORD(v18)) || (_DWORD)v29 == -1 || HIDWORD(v18) == -1)
                || *(int *)(v27 + 12) < 0 )
              {
                if ( v27 != v23 && ((v24 & 8) == 0 || v11) )
                {
                  v30 = AllocateHidData(a3, 0, 24LL, 1LL, v19[8]);
                  v31 = v30;
                  if ( !v30 )
                    return 0LL;
                  v32 = *(_QWORD *)v30;
                  *(_WORD *)(v30 + 56) = a4->Flags & 0xFE7F;
                  *(_DWORD *)(v30 + 60) = a4->Buttons;
                  *(_DWORD *)(v30 + 64) = a4->RawButtons;
                  *(_DWORD *)(v30 + 68) = a4->LastX;
                  *(_DWORD *)(v30 + 72) = a4->LastY;
                  *(_DWORD *)(v30 + 76) = a4->ExtraInformation;
                  if ( !(unsigned int)PostInputMessage(
                                        *(struct tagMLIST **)(*(_QWORD *)(v19[8] + 16) + 384LL),
                                        (InputTransform *)v19[8],
                                        0xFFu,
                                        1uLL,
                                        v32,
                                        a2,
                                        0LL,
                                        a4->ExtraInformation,
                                        0,
                                        0LL,
                                        0LL,
                                        0LL) )
                    FreeHidData(v31);
                }
              }
              else
              {
                EtwTraceUIPIInputError(v26, 0LL, v6, v18, 5);
              }
            }
          }
        }
        v19 = (__int64 *)*v19;
        if ( v19 == &RawInputManagerObject::gHidRequestTable[4] )
          break;
        v23 = v33;
      }
    }
  }
  a4->UnitId = -1;
  return 1LL;
}
