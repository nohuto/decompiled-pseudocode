/*
 * XREFs of ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C009D48C
 * Callers:
 *     vSpDwmMigrateSpriteLSurfReferenceWrap @ 0x1C009D480 (vSpDwmMigrateSpriteLSurfReferenceWrap.c)
 * Callees:
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C002574C (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C00265B8 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C0026890 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C0026A6C (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C0026AE8 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C009D63C (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     DwmAsyncUpdateSprite @ 0x1C009D7AC (DwmAsyncUpdateSprite.c)
 */

void __fastcall vSpDwmMigrateSpriteLSurfReference(
        HDEV a1,
        struct SFMLOGICALSURFACE *this,
        struct SURFACE *a3,
        struct SFMLOGICALSURFACE *a4)
{
  struct _SURFOBJ *v4; // rbp
  unsigned __int64 v7; // r12
  HSPRITE v8; // rdx
  HDEV v10; // rdx
  DWMSPRITE *v11; // rdi
  HDEV v12; // rdx
  __int64 v13; // rsi
  void *v14; // rax
  __int64 v15; // rax
  int v16; // [rsp+60h] [rbp-58h] BYREF
  DWMSPRITE *v17; // [rsp+68h] [rbp-50h] BYREF
  _QWORD v18[9]; // [rsp+70h] [rbp-48h] BYREF
  unsigned int v19; // [rsp+C8h] [rbp+10h] BYREF
  unsigned int v20; // [rsp+D0h] [rbp+18h] BYREF

  v4 = (struct _SURFOBJ *)((char *)a3 + 24);
  v7 = 0LL;
  v8 = (HSPRITE)*((_QWORD *)this + 38);
  v17 = 0LL;
  DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v17, v8);
  v11 = v17;
  if ( v17 )
  {
    DWMSPRITE::SetLogicalSurface(v17, v10, 0LL);
    DWMSPRITE::SetLogicalSurface(v11, v12, a4);
    SFMLOGICALSURFACE::SetShape(this, a1, 0LL);
    SFMLOGICALSURFACE::SetShape(a4, a1, v4);
    if ( *((_QWORD *)a4 + 17) )
    {
      v18[0] = *((_QWORD *)a4 + 17);
      RGNOBJ::vSet((RGNOBJ *)v18);
      *((_DWORD *)a4 + 64) &= ~2u;
    }
    *((_DWORD *)a4 + 64) |= 8u;
    SFMLOGICALSURFACE::StartSfmStateTracking(a4, a1, gpSfmState);
    SFMLOGICALSURFACE::GetRedirectionInfo(a4, (enum _HLSURF_REDIRECTIONSTYLE *)&v16, &v20, &v19, 0LL, 0LL);
    v13 = *((_QWORD *)v11 + 19);
    *((_QWORD *)v11 + 19) = 0LL;
    v14 = (void *)UserReferenceDwmApiPort();
    DwmAsyncUpdateSprite(v14, (__int64)v11 + 72, 0LL, v16, v20, v19, *((_DWORD *)v11 + 32), v13);
    v15 = *((_QWORD *)a4 + 24);
    if ( v15 )
      v7 = *(_QWORD *)(v15 + 8);
    bSpDwmNotifyDirty(*(HSPRITE *)v11, a4, 2u, v7);
    *((_DWORD *)a4 + 64) &= ~8u;
    _InterlockedDecrement((volatile signed __int32 *)v11 + 3);
  }
}
