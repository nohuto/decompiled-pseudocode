/*
 * XREFs of ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C019C3C4
 * Callers:
 *     EditionFinalizeKoreanImeCompStrOnMouseClick @ 0x1C00C71E0 (EditionFinalizeKoreanImeCompStrOnMouseClick.c)
 *     ?xxxButtonEvent@@YAXKUtagPOINT@@PEBU_SUBPIXELS@@HK_K2PEAXPEAU_MOUSE_INPUT_DATA@@HHHHHPEAUtagUIPI_INFO_INT@@5PEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C019DD1C (-xxxButtonEvent@@YAXKUtagPOINT@@PEBU_SUBPIXELS@@HK_K2PEAXPEAU_MOUSE_INPUT_DATA@@HHHHHPEAUtagUIPI.c)
 * Callees:
 *     PostInputMessage @ 0x1C0049470 (PostInputMessage.c)
 *     _PostMessage @ 0x1C00B3950 (_PostMessage.c)
 *     GetAppImeCompatFlags @ 0x1C00CA6F4 (GetAppImeCompatFlags.c)
 */

void __fastcall FinalizeKoreanImeCompStrOnMouseClick(struct tagWND *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  char v3; // [rsp+70h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 2);
  if ( !*(_QWORD *)(gpqForeground + 72LL) && (GetAppImeCompatFlags(v1) & 0x400000) == 0 )
  {
    if ( *(_WORD *)(v1 + 552) <= 0x400u )
    {
      SetSystemInputSource(&v3);
      PostInputMessage(
        gpqForeground,
        0LL,
        0,
        0x101uLL,
        229LL,
        0,
        0LL,
        0LL,
        0,
        (struct tagINPUT_MESSAGE_SOURCE *)&v3,
        0LL,
        0LL);
    }
    else
    {
      v2 = *(_QWORD *)(v1 + 696);
      if ( v2 )
      {
        if ( *(char *)(v2 + 60) >= 0 )
          PostMessage(v2, 647LL, 32LL, 0LL);
      }
    }
  }
}
