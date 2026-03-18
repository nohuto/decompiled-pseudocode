/*
 * XREFs of ??0CBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x180049798
 * Callers:
 *     ??0CDxHandleBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAVCDecodeBitmap@@@Z @ 0x180045618 (--0CDxHandleBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAVC.c)
 *     ??0CSectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@@Z @ 0x1800812BC (--0CSectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_.c)
 *     ?Create@CD2DBitmapCacheSourceRealization@@SAJPEAVID2DBitmapCacheSource@@PEAPEAVCBitmapRealization@@@Z @ 0x1800B8334 (-Create@CD2DBitmapCacheSourceRealization@@SAJPEAVID2DBitmapCacheSource@@PEAPEAVCBitmapRealizatio.c)
 *     ??0CDxHandleYUVBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x1802151D4 (--0CDxHandleYUVBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAV.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?AddHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z @ 0x1801DDC8C (-AddHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z.c)
 */

CBitmapRealization *__fastcall CBitmapRealization::CBitmapRealization(
        CBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        struct CDecodeBitmap *a4)
{
  __int128 v5; // xmm1

  *(_QWORD *)this = &CD2DBitmapCache::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CD2DBitmapCacheSourceRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CD2DBitmapCache::`vftable'{for `IDeviceResourceNotify'};
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 12) = (char *)this + 128;
  *((_QWORD *)this + 13) = (char *)this + 128;
  *((_DWORD *)this + 28) = 2;
  *(_QWORD *)((char *)this + 116) = 2LL;
  *(_OWORD *)((char *)this + 152) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 168) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 184) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)this + 200) = *((_OWORD *)a2 + 3);
  *(_OWORD *)((char *)this + 216) = *((_OWORD *)a2 + 4);
  *(_OWORD *)((char *)this + 232) = *((_OWORD *)a2 + 5);
  *(_OWORD *)((char *)this + 248) = *((_OWORD *)a2 + 6);
  *((_QWORD *)this + 33) = *((_QWORD *)a2 + 14);
  *((_OWORD *)this + 17) = *(_OWORD *)a3;
  v5 = *((_OWORD *)a3 + 1);
  *((_BYTE *)this + 304) = 0;
  *((_OWORD *)this + 18) = v5;
  *((_QWORD *)this + 39) = (char *)this + 320;
  *((_DWORD *)this + 80) = 0;
  *((_QWORD *)this + 48) = a4;
  if ( a4 )
    (*(void (__fastcall **)(struct CDecodeBitmap *))(*(_QWORD *)a4 + 8LL))(a4);
  if ( (*((_DWORD *)this + 67) & 0x100) != 0 )
    CD3DDeviceManager::AddHwProtectedEntity(
      (CD3DDeviceManager *)&g_D3DDeviceManager,
      *(struct _LUID *)((char *)this + 288));
  return this;
}
