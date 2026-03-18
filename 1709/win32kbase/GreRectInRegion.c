/*
 * XREFs of GreRectInRegion @ 0x1C007DAF0
 * Callers:
 *     NtGdiRectInRegion @ 0x1C00FB8C0 (NtGdiRectInRegion.c)
 *     EngRectInRgn @ 0x1C00FC8B0 (EngRectInRgn.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C004333C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0043920 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?bInside@RGNOBJ@@QEAAHPEAU_RECTL@@@Z @ 0x1C0046450 (-bInside@RGNOBJ@@QEAAHPEAU_RECTL@@@Z.c)
 */

__int64 __fastcall GreRectInRegion(struct HOBJ__ *a1, struct _RECTL *a2)
{
  unsigned int v3; // ebx
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v5, a1, 1);
  if ( a2 && v5[0] )
    LOBYTE(v3) = (unsigned int)RGNOBJ::bInside((RGNOBJ *)v5, a2) == 2;
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v5);
  return v3;
}
