/*
 * XREFs of xxxActivateKeyboardLayout @ 0x1C00710E0
 * Callers:
 *     <none>
 * Callees:
 *     ThreadUnlock1 @ 0x1C0047950 (ThreadUnlock1.c)
 *     HKLtoPKL @ 0x1C00719E0 (HKLtoPKL.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C00725C0 (xxxInternalActivateKeyboardLayout.c)
 *     ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x1C012C420 (-ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z.c)
 */

struct tagKL *__fastcall xxxActivateKeyboardLayout(
        struct tagWINDOWSTATION *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  struct tagTHREADINFO *v4; // rsi
  struct tagKL *result; // rax
  struct tagKL *v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = gptiCurrent;
  result = (struct tagKL *)HKLtoPKL(gptiCurrent, a2);
  v9 = result;
  if ( result )
  {
    if ( (a3 & 8) != 0 )
      ReorderKeyboardLayouts(a1, result);
    v15[0] = *((_QWORD *)v4 + 49);
    *((_QWORD *)v4 + 49) = v15;
    v15[1] = v9;
    _InterlockedIncrement((volatile signed __int32 *)v9 + 2);
    v10 = xxxInternalActivateKeyboardLayout(v9, a3, a4);
    ThreadUnlock1(v12, v11, v13, v14);
    return (struct tagKL *)v10;
  }
  return result;
}
