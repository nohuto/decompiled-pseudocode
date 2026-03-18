/*
 * XREFs of ??0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@U_LUID@@@Z @ 0x1801D1CF0
 * Callers:
 *     ?Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAHAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@U_LUID@@PEAPEAVCBitmapRealization@@@Z @ 0x1800768E0 (-Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAHAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REAL.c)
 * Callees:
 *     ??0CDxHandleBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAVCDecodeBitmap@@@Z @ 0x18004D118 (--0CDxHandleBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAVC.c)
 */

CDxHandleAdvancedDirectFlipBitmapRealization *__fastcall CDxHandleAdvancedDirectFlipBitmapRealization::CDxHandleAdvancedDirectFlipBitmapRealization(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        struct _LUID a4)
{
  CDxHandleAdvancedDirectFlipBitmapRealization *result; // rax

  CDxHandleBitmapRealization::CDxHandleBitmapRealization(this, a2, a3, 1, 0LL);
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_WORD *)this + 220) = 0;
  *(_QWORD *)this = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CColorKeyBitmap::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 11) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 18) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 51) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable';
  result = this;
  *(struct _LUID *)((char *)this + 444) = a4;
  return result;
}
