/*
 * XREFs of ??0CBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x18003704C
 * Callers:
 *     ??0CDxHandleBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x18007A3B0 (--0CDxHandleBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_IN.c)
 *     ??0CSectionBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@@Z @ 0x1801B4768 (--0CSectionBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INF.c)
 *     ??0CDxHandleYUVBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x1801B6554 (--0CDxHandleYUVBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?AddHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z @ 0x18019578C (-AddHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z.c)
 */

CBitmapRealization *__fastcall CBitmapRealization::CBitmapRealization(
        CBitmapRealization *this,
        const struct _GUID *a2,
        const struct CSM_BUFFER_ATTRIBUTES *a3,
        const struct CSM_REALIZATION_INFO *a4,
        struct CDecodeBitmap *a5)
{
  __int128 v6; // xmm0
  __int128 v7; // xmm1

  *(_QWORD *)this = &CD2DBitmapCache::`vftable'{for `CMILCOMBase'};
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = &CD2DBitmapCache::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CD2DBitmapCache::`vftable'{for `IDeviceResourceNotify'};
  v6 = (__int128)*a2;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_OWORD *)this + 2) = v6;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *(_QWORD *)this = &CBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CDxHandleBitmapRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 13) = &CBitmapRealization::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 14) = &CBitmapRealization::`vftable'{for `IDeviceResource'};
  *(_OWORD *)((char *)this + 120) = *(_OWORD *)a3;
  *(_OWORD *)((char *)this + 136) = *((_OWORD *)a3 + 1);
  *(_OWORD *)((char *)this + 152) = *((_OWORD *)a3 + 2);
  *(_OWORD *)((char *)this + 168) = *((_OWORD *)a3 + 3);
  *(_OWORD *)((char *)this + 184) = *((_OWORD *)a3 + 4);
  *(_OWORD *)((char *)this + 200) = *((_OWORD *)a3 + 5);
  *(_OWORD *)((char *)this + 216) = *((_OWORD *)a3 + 6);
  *((_QWORD *)this + 29) = *((_QWORD *)a3 + 14);
  *((_OWORD *)this + 15) = *(_OWORD *)a4;
  v7 = *((_OWORD *)a4 + 1);
  *((_BYTE *)this + 272) = 0;
  *((_OWORD *)this + 16) = v7;
  *((_QWORD *)this + 35) = (char *)this + 288;
  *((_DWORD *)this + 72) = 0;
  *((_QWORD *)this + 45) = (char *)this + 392;
  *((_QWORD *)this + 46) = (char *)this + 392;
  *((_DWORD *)this + 94) = 2;
  *(_QWORD *)((char *)this + 380) = 2LL;
  *((_QWORD *)this + 44) = a5;
  if ( a5 )
    (*(void (__fastcall **)(struct CDecodeBitmap *))(*(_QWORD *)a5 + 8LL))(a5);
  if ( (*((_DWORD *)this + 59) & 0x100) != 0 )
    CD3DDeviceManager::AddHwProtectedEntity(
      (CD3DDeviceManager *)&g_D3DDeviceManager,
      *(struct _LUID *)((char *)this + 256));
  return this;
}
