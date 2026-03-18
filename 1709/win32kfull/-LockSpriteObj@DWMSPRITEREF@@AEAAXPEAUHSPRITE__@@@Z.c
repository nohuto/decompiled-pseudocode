/*
 * XREFs of ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C0092094
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C0044FBC (GreTransferSpriteStateToDwmState.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C008C1C8 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEAG@Z @ 0x1C008F420 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00920C0 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ?vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z @ 0x1C00926CC (-vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C00E4468 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C00E6CC4 (-vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DWMSPRITEREF::LockSpriteObj(DWMSPRITEREF *this, HSPRITE a2)
{
  HSPRITE v3; // rcx

  if ( a2 )
  {
    v3 = a2;
    LOBYTE(a2) = 15;
    *(_QWORD *)this = HmgLock(v3, a2);
  }
}
