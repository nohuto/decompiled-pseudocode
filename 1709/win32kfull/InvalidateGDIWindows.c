/*
 * XREFs of InvalidateGDIWindows @ 0x1C01C5894
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00624E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0071F0C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     zzzUpdateLayeredWindow @ 0x1C008D65C (zzzUpdateLayeredWindow.c)
 *     InvalidateGDIWindows @ 0x1C01C5894 (InvalidateGDIWindows.c)
 * Callees:
 *     CalcVisRgn @ 0x1C006A5C0 (CalcVisRgn.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     InvalidateGDIWindows @ 0x1C01C5894 (InvalidateGDIWindows.c)
 *     GreSetClientRgn @ 0x1C0267300 (GreSetClientRgn.c)
 */

void __fastcall InvalidateGDIWindows(__int64 a1)
{
  __int64 Prop; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  struct EWNDOBJ *v5; // rdi
  int v6; // ecx
  unsigned int v7; // r9d
  __int64 i; // rbx
  HRGN v9; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    Prop = GetProp(a1, atomWndObj, 1);
    v5 = (struct EWNDOBJ *)Prop;
    if ( Prop )
    {
      v6 = *(_DWORD *)(Prop + 184);
      v9 = 0LL;
      if ( (v6 & 0x20) != 0 )
        v7 = v4 | (4 * (*(_BYTE *)(a1 + 71) & 4));
      else
        v7 = 24;
      CalcVisRgn(&v9, a1, (struct tagWND *)a1, v7);
      GreSetClientRgn(v5);
    }
    for ( i = *(_QWORD *)(a1 + 112); i; i = *(_QWORD *)(i + 88) )
      InvalidateGDIWindows(i, v3, v4);
  }
}
