/*
 * XREFs of ??0CDxHandleBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAVCDecodeBitmap@@@Z @ 0x180045618
 * Callers:
 *     ?Create@CDxHandleBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x180082D0C (-Create@CDxHandleBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAV.c)
 *     ?CreateFromGDISharedSurfaceHandle@CDxHandleBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVCBitmapRealization@@@Z @ 0x1800C5E5C (-CreateFromGDISharedSurfaceHandle@CDxHandleBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVCBitmapReali.c)
 *     ??0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@U_LUID@@@Z @ 0x180213B90 (--0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZA.c)
 *     ??0CDxHandleStereoBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x1802149C0 (--0CDxHandleStereoBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@.c)
 * Callees:
 *     ?CalcDisplayRestriction@CBitmapRealization@@IEBA?AVDisplayId@@HPEAUHMONITOR__@@@Z @ 0x1800493C8 (-CalcDisplayRestriction@CBitmapRealization@@IEBA-AVDisplayId@@HPEAUHMONITOR__@@@Z.c)
 *     ??0CBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x180049798 (--0CBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitm.c)
 */

CDxHandleBitmapRealization *__fastcall CDxHandleBitmapRealization::CDxHandleBitmapRealization(
        CDxHandleBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        char a4,
        struct CDecodeBitmap *a5)
{
  __int64 v8; // rcx
  int v9; // ecx
  CDxHandleBitmapRealization *result; // rax
  char v11; // [rsp+48h] [rbp+20h] BYREF

  CBitmapRealization::CBitmapRealization(this, a2, a3, a5);
  *((_QWORD *)this + 49) = 0LL;
  *(_QWORD *)this = &CDxHandleBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CDxHandleBitmapRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 11) = &CDxHandleBitmapRealization::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 18) = &CDxHandleBitmapRealization::`vftable'{for `IBitmapRealization'};
  *((_DWORD *)this + 100) = 0;
  *((_BYTE *)this + 404) = a4;
  *((_BYTE *)this + 405) = 1;
  v9 = *(_DWORD *)CBitmapRealization::CalcDisplayRestriction(v8, &v11, *((_DWORD *)a2 + 29) & 1, *((_QWORD *)a2 + 1));
  result = this;
  *((_DWORD *)this + 100) = v9;
  return result;
}
