/*
 * XREFs of ??1EPALOBJ@@QEAA@XZ @ 0x1C008A1E8
 * Callers:
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C00899BC (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00E662C (zzzUpdateWindowsAfterModeChange.c)
 *     RecreateRedirectionBitmap @ 0x1C00E6938 (RecreateRedirectionBitmap.c)
 *     NtGdiEngDeleteSurface @ 0x1C0121AF0 (NtGdiEngDeleteSurface.c)
 *     GreCreateHalftonePalette @ 0x1C0292144 (GreCreateHalftonePalette.c)
 *     NtGdiResizePalette @ 0x1C0292950 (NtGdiResizePalette.c)
 * Callees:
 *     <none>
 */

void __fastcall EPALOBJ::~EPALOBJ(EPALOBJ *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)this;
  if ( v1 )
    DEC_SHARE_REF_CNT(v1);
}
