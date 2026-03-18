/*
 * XREFs of xxxActivateKeyboardLayout @ 0x1C0078D20
 * Callers:
 *     <none>
 * Callees:
 *     ThreadUnlock1 @ 0x1C0026B00 (ThreadUnlock1.c)
 *     HKLtoPKL @ 0x1C0079610 (HKLtoPKL.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C007A180 (xxxInternalActivateKeyboardLayout.c)
 *     ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x1C012CE7C (-ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z.c)
 */

struct tagKL *__fastcall xxxActivateKeyboardLayout(struct tagWINDOWSTATION *a1, __int64 a2, char a3)
{
  struct tagTHREADINFO *v3; // rsi
  struct tagKL *result; // rax
  struct tagKL *v7; // rbx
  __int64 v8; // rbx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = gptiCurrent;
  result = (struct tagKL *)HKLtoPKL(gptiCurrent, a2);
  v7 = result;
  if ( result )
  {
    if ( (a3 & 8) != 0 )
      ReorderKeyboardLayouts(a1, result);
    v9[0] = *((_QWORD *)v3 + 46);
    *((_QWORD *)v3 + 46) = v9;
    v9[1] = v7;
    ++*((_DWORD *)v7 + 2);
    v8 = xxxInternalActivateKeyboardLayout(v7);
    ThreadUnlock1();
    return (struct tagKL *)v8;
  }
  return result;
}
