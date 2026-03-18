/*
 * XREFs of ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C008E908
 * Callers:
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C008C1C8 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C008DAAC (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C008E7F0 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     GreHintSpriteShape @ 0x1C00911BC (GreHintSpriteShape.c)
 *     ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C00E6CC4 (-vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DWMSPRITE::SetLogicalSurface(DWMSPRITE *this, HDEV a2, struct SFMLOGICALSURFACE *a3)
{
  __int64 v3; // rax
  int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rdx

  v3 = *((_QWORD *)this + 24);
  if ( v3 || !a3 )
  {
    v6 = 0;
    if ( v3 && !a3 )
    {
      *(_DWORD *)(v3 + 248) &= ~4u;
      *(_QWORD *)(v3 + 304) = 0LL;
      DEC_SHARE_REF_CNT(*((_QWORD *)this + 24));
      EtwDwmSpriteLogicalSurfUnBindEvent(*(_QWORD *)this, **((_QWORD **)this + 24));
    }
  }
  else
  {
    v6 = 1;
  }
  *((_QWORD *)this + 24) = a3;
  if ( v6 )
  {
    INC_SHARE_REF_CNT(a3);
    v7 = *(_QWORD *)this;
    *((_DWORD *)a3 + 62) |= 4u;
    v8 = *(_QWORD *)a3;
    *((_QWORD *)a3 + 38) = v7;
    EtwDwmSpriteLogicalSurfBindEvent(*(_QWORD *)this, v8);
  }
}
