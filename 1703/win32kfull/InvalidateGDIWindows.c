/*
 * XREFs of InvalidateGDIWindows @ 0x1C01C2B80
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C005FB68 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C006CCF4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     zzzUpdateLayeredWindow @ 0x1C009E550 (zzzUpdateLayeredWindow.c)
 *     InvalidateGDIWindows @ 0x1C01C2B80 (InvalidateGDIWindows.c)
 * Callees:
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     CalcVisRgn @ 0x1C0066160 (CalcVisRgn.c)
 *     InvalidateGDIWindows @ 0x1C01C2B80 (InvalidateGDIWindows.c)
 *     GreSetClientRgn @ 0x1C0268540 (GreSetClientRgn.c)
 */

void __fastcall InvalidateGDIWindows(__int64 a1)
{
  __int64 Prop; // rax
  int v3; // r8d
  struct EWNDOBJ *v4; // rdi
  int v5; // ecx
  unsigned int v6; // r9d
  __int64 i; // rbx
  HRGN v8; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    Prop = GetProp(a1, atomWndObj, 1);
    v4 = (struct EWNDOBJ *)Prop;
    if ( Prop )
    {
      v5 = *(_DWORD *)(Prop + 184);
      v8 = 0LL;
      if ( (v5 & 0x20) != 0 )
        v6 = v3 | (4 * (*(_BYTE *)(a1 + 71) & 4));
      else
        v6 = 24;
      CalcVisRgn(&v8, a1, (struct tagWND *)a1, v6);
      GreSetClientRgn(v4);
    }
    for ( i = *(_QWORD *)(a1 + 112); i; i = *(_QWORD *)(i + 88) )
      InvalidateGDIWindows(i);
  }
}
