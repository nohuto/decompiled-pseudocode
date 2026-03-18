/*
 * XREFs of GetActiveHKL @ 0x1C00C9A9C
 * Callers:
 *     EditionFinalizeKoreanImeCompStrOnMouseClick @ 0x1C00C71E0 (EditionFinalizeKoreanImeCompStrOnMouseClick.c)
 *     ?FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z @ 0x1C00C99F8 (-FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z.c)
 *     EditionGetActiveHKL @ 0x1C00C9A90 (EditionGetActiveHKL.c)
 *     ?xxxButtonEvent@@YAXKUtagPOINT@@PEBU_SUBPIXELS@@HK_K2PEAXPEAU_MOUSE_INPUT_DATA@@HHHHHPEAUtagUIPI_INFO_INT@@5PEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C019DD1C (-xxxButtonEvent@@YAXKUtagPOINT@@PEBU_SUBPIXELS@@HK_K2PEAXPEAU_MOUSE_INPUT_DATA@@HHHHHPEAUtagUIPI.c)
 * Callees:
 *     <none>
 */

__int64 GetActiveHKL()
{
  __int64 v0; // rax
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v4; // rax
  __int64 v5; // rax

  if ( gpqForeground
    && ((v0 = *(_QWORD *)(gpqForeground + 80LL)) != 0
     && (v1 = *(_QWORD *)(v0 + 16)) != 0
     && (v2 = *(_QWORD *)(v1 + 392)) != 0
     || (v4 = *(_QWORD *)(gpqForeground + 88LL)) != 0
     && (v5 = *(_QWORD *)(v4 + 16)) != 0
     && (v2 = *(_QWORD *)(v5 + 392)) != 0) )
  {
    return *(_QWORD *)(v2 + 40);
  }
  else
  {
    return GetKeyboardLayout(0);
  }
}
