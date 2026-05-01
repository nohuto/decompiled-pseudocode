/*
 * XREFs of ?InitLayoutEnv@ImmersiveApplicationLayout@@YAXPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x18030512C
 * Callers:
 *     ?GetCurrentLayoutEnvironment@TabletModePositioner@@AEAAJPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1802C6CB4 (-GetCurrentLayoutEnvironment@TabletModePositioner@@AEAAJPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ??0CAppLayout@@QEAA@XZ @ 0x180311E28 (--0CAppLayout@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ImmersiveApplicationLayout::InitLayoutEnv(
        ImmersiveApplicationLayout *this,
        struct LAYOUT_ENVIRONMENT_DETAILS *a2)
{
  SetRectEmpty((LPRECT)this);
  SetRectEmpty((LPRECT)((char *)this + 24));
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 4) = 100;
}
