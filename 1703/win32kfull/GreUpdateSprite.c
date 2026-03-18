/*
 * XREFs of GreUpdateSprite @ 0x1C0025B2C
 * Callers:
 *     UpdateSprite @ 0x1C0025A10 (UpdateSprite.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C006D990 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C009EE10 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C00A0C2C (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1C01C18F0 (-zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C024C6A8 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x1C025A244 (-bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z.c)
 *     bMoveDevDragRect @ 0x1C02664B0 (bMoveDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1C0266704 (bMoveDevPreviewRect.c)
 * Callees:
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C006DDF0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 */

__int64 __fastcall GreUpdateSprite(
        HDEV a1,
        HWND a2,
        void *a3,
        HDC a4,
        struct tagPOINT *a5,
        struct tagSIZE *a6,
        HDC a7,
        struct tagPOINT *a8,
        unsigned int a9,
        struct _BLENDFUNCTION *a10,
        unsigned int a11,
        struct tagRECT *a12,
        struct tagMINIWINDOWINFO *a13,
        int a14,
        int a15)
{
  NTSTATUS v20; // eax
  unsigned int v21; // ecx
  _QWORD Parameter[8]; // [rsp+88h] [rbp-79h] BYREF
  unsigned int v23; // [rsp+C8h] [rbp-39h]
  struct _BLENDFUNCTION *v24; // [rsp+D0h] [rbp-31h]
  unsigned int v25; // [rsp+D8h] [rbp-29h]
  struct tagRECT *v26; // [rsp+E0h] [rbp-21h]
  struct tagMINIWINDOWINFO *v27; // [rsp+E8h] [rbp-19h]
  int v28; // [rsp+F0h] [rbp-11h]
  int v29; // [rsp+F4h] [rbp-Dh]
  unsigned int v30; // [rsp+F8h] [rbp-9h]

  if ( !(unsigned int)GreStackExpansionRequired(0x2000LL) )
    return GreUpdateSpriteInternal(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
  Parameter[4] = a5;
  Parameter[5] = a6;
  Parameter[6] = a7;
  Parameter[7] = a8;
  v23 = a9;
  v24 = a10;
  v25 = a11;
  v26 = a12;
  v27 = a13;
  v28 = a14;
  v29 = a15;
  Parameter[0] = a1;
  Parameter[1] = a2;
  Parameter[2] = a3;
  Parameter[3] = a4;
  v30 = 0;
  v20 = KeExpandKernelStackAndCalloutEx(GreUpdateSpriteCallout, Parameter, 0x2000uLL, 1u, 0LL);
  v21 = v30;
  if ( v20 < 0 )
    return 0;
  return v21;
}
