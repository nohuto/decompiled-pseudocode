/*
 * XREFs of GetActiveHKL @ 0x1C00CD4E4
 * Callers:
 *     ?FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z @ 0x1C00CD430 (-FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z.c)
 *     EditionGetActiveHKL @ 0x1C00CD4D0 (EditionGetActiveHKL.c)
 *     EditionFinalizeKoreanImeCompStrOnMouseClick @ 0x1C0116EE0 (EditionFinalizeKoreanImeCompStrOnMouseClick.c)
 * Callees:
 *     _GetKeyboardLayout @ 0x1C00A0980 (_GetKeyboardLayout.c)
 */

__int64 __fastcall GetActiveHKL(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  if ( gpqForeground
    && ((v4 = *(_QWORD *)(gpqForeground + 112LL)) != 0
     && (v5 = *(_QWORD *)(v4 + 16)) != 0
     && (v6 = *(_QWORD *)(v5 + 416)) != 0
     || (v8 = *(_QWORD *)(gpqForeground + 120LL)) != 0
     && (v9 = *(_QWORD *)(v8 + 16)) != 0
     && (v6 = *(_QWORD *)(v9 + 416)) != 0) )
  {
    return *(_QWORD *)(v6 + 40);
  }
  else
  {
    return GetKeyboardLayout(0LL, a2, a3, a4);
  }
}
