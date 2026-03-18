/*
 * XREFs of EngCreateRectRgn @ 0x1C00FC530
 * Callers:
 *     <none>
 * Callees:
 *     GreSetRegionOwner @ 0x1C0042A00 (GreSetRegionOwner.c)
 *     GreCreateRectRgn @ 0x1C006F220 (GreCreateRectRgn.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00AA27C (--0EngModeState@@QEAA@XZ.c)
 */

HANDLE __stdcall EngCreateRectRgn(INT left, INT top, INT right, INT bottom)
{
  struct HOBJ__ *RectRgn; // rax
  struct HOBJ__ *v9; // rbx
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  EngModeState::EngModeState((EngModeState *)v11);
  RectRgn = GreCreateRectRgn(left, top, right, bottom);
  v9 = RectRgn;
  if ( RectRgn )
    GreSetRegionOwner((__int64)RectRgn, 0);
  if ( v11[0] )
    *(_BYTE *)(v11[0] + 331LL) = 0;
  return v9;
}
