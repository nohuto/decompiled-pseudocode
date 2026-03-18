/*
 * XREFs of ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1C0254ADC
 * Callers:
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0254FCC (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     GreDrawEscape @ 0x1C0255A14 (GreDrawEscape.c)
 *     ?SpSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z @ 0x1C0259980 (-SpSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?GreUnTearDownSprites@@YAXPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C0258DBC (-GreUnTearDownSprites@@YAXPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C027A314 (-bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 *     ?bBmpUndoMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C027A364 (-bBmpUndoMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C027CB84 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 *     ?bUndoMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C027CD78 (-bUndoMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

void __fastcall DEVEXCLUDERECT::~DEVEXCLUDERECT(__int64 **this)
{
  DEVEXCLUDERECT *v1; // r8
  __int64 *v2; // rcx
  struct SURFACE *v3; // rdi
  int v4; // r9d
  __int64 v5; // rcx
  __int64 *v6; // rcx
  struct SURFACE *v7; // rbx
  __int64 v8; // rcx

  v1 = (DEVEXCLUDERECT *)this;
  if ( *(_DWORD *)this )
  {
    v2 = this[4];
    v3 = 0LL;
    v4 = 0x4000;
    if ( v2 )
    {
      v5 = *v2;
      if ( (*(_DWORD *)(v5 + 36) & 0x4000) != 0 && *(struct PDEV **)(v5 + 48) == gpRedirDev )
      {
        v3 = *(struct SURFACE **)(v5 + 512);
        if ( v3 )
          bUndoMakeOpaque(*(struct SURFACE **)(v5 + 512));
      }
    }
    v6 = (__int64 *)*((_QWORD *)v1 + 4);
    v7 = 0LL;
    if ( v6 )
    {
      v8 = *v6;
      if ( (v4 & *(_DWORD *)(v8 + 36)) != 0 && *(struct PDEV **)(v8 + 48) == gpBmpDev )
      {
        v7 = *(struct SURFACE **)(v8 + 512);
        if ( v7 )
          bBmpUndoMakeOpaque(*(struct SURFACE **)(v8 + 512));
      }
    }
    GreUnTearDownSprites(*((HDEV *)v1 + 1), (struct _RECTL *)v1 + 1, (int)v1);
    if ( v7 )
      bBmpMakeOpaque(v7);
    if ( v3 )
      bMakeOpaque(v3);
  }
}
