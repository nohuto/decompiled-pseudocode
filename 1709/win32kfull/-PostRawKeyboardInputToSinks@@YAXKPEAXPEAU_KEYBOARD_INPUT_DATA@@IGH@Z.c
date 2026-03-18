/*
 * XREFs of ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1C00070E0
 * Callers:
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1C00FA654 (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 * Callees:
 *     AllocateHidData @ 0x1C00072D4 (AllocateHidData.c)
 *     FreeHidData @ 0x1C0009C90 (FreeHidData.c)
 *     PostInputMessage @ 0x1C009ED18 (PostInputMessage.c)
 */

void __fastcall PostRawKeyboardInputToSinks(
        int a1,
        void *a2,
        struct _KEYBOARD_INPUT_DATA *a3,
        int a4,
        unsigned __int16 a5,
        int a6)
{
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 *i; // rdi
  int v13; // r11d
  __int64 v14; // rdx
  __int64 v15; // r10
  __int64 v16; // r9
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 HidData; // rax
  __int64 v20; // rsi

  v6 = 0LL;
  v7 = 0LL;
  if ( gpqForeground )
  {
    v10 = *(_QWORD *)(gpqForeground + 120LL);
    if ( v10 )
      v11 = *(_QWORD *)(v10 + 16);
    else
      v11 = *(_QWORD *)(gpqForeground + 96LL);
    v6 = *(_QWORD *)(v11 + 400);
    v7 = *(_QWORD *)(gpqForeground + 420LL);
  }
  for ( i = (__int64 *)RawInputManagerObject::gHidRequestTable[4];
        i != &RawInputManagerObject::gHidRequestTable[4];
        i = (__int64 *)*i )
  {
    v13 = *((_DWORD *)i + 25);
    if ( (v13 & 0x40) != 0 )
    {
      v14 = i[9];
      if ( v14 )
      {
        if ( *(char *)(v14 + 60) >= 0 && *(char *)(v14 + 59) >= 0 && *(_QWORD *)(v14 + 24) == grpdeskRitInput )
        {
          if ( !v6
            || (v15 = *(_QWORD *)(v14 + 16), v16 = *(_QWORD *)(v15 + 400), v17 = *(_QWORD *)(v16 + 832), !gbEnforceUIPI)
            || (unsigned int)v17 > (unsigned int)v7
            || (_DWORD)v17 == (_DWORD)v7
            && ((v18 = HIDWORD(v17), (_DWORD)v18 == HIDWORD(v7)) || HIDWORD(v7) == -1 || (_DWORD)v18 == -1)
            || *(int *)(v16 + 12) < 0 )
          {
            if ( *(_QWORD *)(*(_QWORD *)(v14 + 16) + 400LL) != v6 && ((v13 & 0x80u) == 0 || !a6) )
            {
              HidData = AllocateHidData((_DWORD)a2, 1, 16, 1, i[9]);
              v20 = HidData;
              if ( !HidData )
                return;
              *(_WORD *)(HidData + 56) = a3->MakeCode;
              *(_WORD *)(HidData + 58) = a3->Flags;
              *(_WORD *)(HidData + 60) = a3->Reserved;
              *(_DWORD *)(HidData + 64) = a4;
              *(_WORD *)(HidData + 62) = a5;
              *(_DWORD *)(HidData + 68) = a3->ExtraInformation;
              if ( !(unsigned int)PostInputMessage(
                                    *(_QWORD *)(*(_QWORD *)(i[9] + 16) + 408LL),
                                    i[9],
                                    255LL,
                                    1LL,
                                    *(_QWORD *)HidData,
                                    a1,
                                    0LL,
                                    a3->ExtraInformation,
                                    0,
                                    0LL,
                                    a2,
                                    0LL) )
                FreeHidData(v20);
            }
          }
          else
          {
            EtwTraceUIPIInputError(v15, 0LL, gpqForeground, v7, 5);
          }
        }
      }
    }
  }
}
