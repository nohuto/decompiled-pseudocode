/*
 * XREFs of ?SetTouchTargetBounds@CVisual@@IEAAXV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004CD34
 * Callers:
 *     ?ProcessSetTouchTargetRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETTOUCHTARGETRECT@@@Z @ 0x180050AC4 (-ProcessSetTouchTargetRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETTOUCHTARGETREC.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18003862C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     _Init_thread_footer @ 0x1800DB248 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800DB2A8 (_Init_thread_header.c)
 */

void __fastcall CVisual::SetTouchTargetBounds(__int64 a1, _QWORD *a2)
{
  char **v4; // rcx
  __int64 v5; // rax

  if ( __TSS0__1__SetTouchTargetBounds_CVisual__IEAAXV__TMilRect__MUMilRectF__UMilPointAndSizeF__UNotNeeded_RectUniqueness_____Z_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 4LL) )
  {
    Init_thread_header(&__TSS0__1__SetTouchTargetBounds_CVisual__IEAAXV__TMilRect__MUMilRectF__UMilPointAndSizeF__UNotNeeded_RectUniqueness_____Z_4HA);
    if ( __TSS0__1__SetTouchTargetBounds_CVisual__IEAAXV__TMilRect__MUMilRectF__UMilPointAndSizeF__UNotNeeded_RectUniqueness_____Z_4HA == -1 )
    {
      `CVisual::SetTouchTargetBounds'::`2'::sc_defaultValue = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      Init_thread_footer(&__TSS0__1__SetTouchTargetBounds_CVisual__IEAAXV__TMilRect__MUMilRectF__UMilPointAndSizeF__UNotNeeded_RectUniqueness_____Z_4HA);
    }
  }
  v4 = (char **)(a1 + 216);
  v5 = *a2 - `CVisual::SetTouchTargetBounds'::`2'::sc_defaultValue;
  if ( *a2 == (_QWORD)`CVisual::SetTouchTargetBounds'::`2'::sc_defaultValue )
    v5 = a2[1] - *((_QWORD *)&`CVisual::SetTouchTargetBounds'::`2'::sc_defaultValue + 1);
  if ( v5 )
    CSparseStorage::SetData(v4, 27, 0x10u, a2);
  else
    *((_DWORD *)*v4 + 1) &= ~0x20u;
}
