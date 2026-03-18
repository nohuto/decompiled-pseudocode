/*
 * XREFs of ??0CSectionBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@@Z @ 0x1801B4768
 * Callers:
 *     ?Create@CSectionBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x1801B4A64 (-Create@CSectionBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_.c)
 * Callees:
 *     ??0CBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x18003704C (--0CBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAV.c)
 */

CSectionBitmapRealization *__fastcall CSectionBitmapRealization::CSectionBitmapRealization(
        CSectionBitmapRealization *this,
        const struct _GUID *a2,
        const struct CSM_BUFFER_ATTRIBUTES *a3,
        const struct CSM_REALIZATION_INFO *a4,
        const struct CSM_SYSMEM_SECTION_INFO *a5)
{
  __int64 v6; // xmm1_8
  CSectionBitmapRealization *result; // rax

  CBitmapRealization::CBitmapRealization(this, a2, a3, a4, 0LL);
  *(_QWORD *)this = &CSectionBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CSectionBitmapRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CSectionBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 13) = &CSectionBitmapRealization::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 14) = &CSectionBitmapRealization::`vftable'{for `IDeviceResource'};
  *(_OWORD *)((char *)this + 408) = *(_OWORD *)a5;
  v6 = *((_QWORD *)a5 + 2);
  result = this;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 53) = v6;
  *((_BYTE *)this + 452) = 0;
  return result;
}
