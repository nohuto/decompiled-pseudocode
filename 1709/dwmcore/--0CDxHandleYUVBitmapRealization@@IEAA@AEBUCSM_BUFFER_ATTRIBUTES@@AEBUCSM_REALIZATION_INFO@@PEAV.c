/*
 * XREFs of ??0CDxHandleYUVBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x1801D32A4
 * Callers:
 *     ?Create@CDxHandleYUVBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x1801D3498 (-Create@CDxHandleYUVBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@P.c)
 *     ?CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@QEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x1801D3574 (-CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@QEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEB.c)
 * Callees:
 *     ?CalcDisplayRestriction@CBitmapRealization@@IEBA?AVDisplayId@@HPEAUHMONITOR__@@@Z @ 0x18002AF94 (-CalcDisplayRestriction@CBitmapRealization@@IEBA-AVDisplayId@@HPEAUHMONITOR__@@@Z.c)
 *     ??0CBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x18002B1C4 (--0CBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitm.c)
 */

CDxHandleYUVBitmapRealization *__fastcall CDxHandleYUVBitmapRealization::CDxHandleYUVBitmapRealization(
        CDxHandleYUVBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        struct CDecodeBitmap *a4)
{
  CDisplaySet *v6; // rcx
  int v7; // ecx
  CDxHandleYUVBitmapRealization *result; // rax
  char v9; // [rsp+30h] [rbp+8h] BYREF

  CBitmapRealization::CBitmapRealization(this, a2, a3, a4);
  *((_QWORD *)this + 50) = 0LL;
  *(_QWORD *)this = &CDxHandleYUVBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CColorKeyBitmap::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CDxHandleYUVBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 11) = &CDxHandleYUVBitmapRealization::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 18) = &CDxHandleYUVBitmapRealization::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 49) = &CDxHandleYUVBitmapRealization::`vftable';
  *((_DWORD *)this + 102) = 0;
  v7 = *(_DWORD *)CBitmapRealization::CalcDisplayRestriction(
                    v6,
                    (struct DisplayId *)&v9,
                    *((_DWORD *)a2 + 29) & 1,
                    *((HMONITOR *)a2 + 1));
  result = this;
  *((_DWORD *)this + 102) = v7;
  return result;
}
