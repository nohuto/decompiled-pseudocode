/*
 * XREFs of ?Create@CD2DBitmapCacheSourceRealization@@SAJPEAVID2DBitmapCacheSource@@PEAPEAVCBitmapRealization@@@Z @ 0x180086D24
 * Callers:
 *     ?GetCurrentRenderingRealization@CBitmapResource@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x18008D770 (-GetCurrentRenderingRealization@CBitmapResource@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 * Callees:
 *     ??0CBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x18002B1C4 (--0CBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitm.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmapCacheSourceRealization::Create(
        struct ID2DBitmapCacheSource *a1,
        struct CBitmapRealization **a2)
{
  unsigned int v4; // edi
  CBitmapRealization *v5; // rax
  struct CBitmapRealization *v6; // rbx
  _DWORD v8[8]; // [rsp+30h] [rbp-D8h] BYREF
  _DWORD v9[32]; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD v10[4]; // [rsp+D0h] [rbp-38h] BYREF

  v4 = 0;
  (*(void (__fastcall **)(struct ID2DBitmapCacheSource *, _DWORD *))(*(_QWORD *)a1 + 24LL))(a1, v10);
  memset_0(v9, 0, 0x78uLL);
  v9[0] = v10[1];
  v9[11] = v10[2];
  memset_0(v8, 0, sizeof(v8));
  v8[0] = (*(unsigned __int8 (__fastcall **)(struct ID2DBitmapCacheSource *))(*(_QWORD *)a1 + 72LL))(a1) != 0;
  v5 = (CBitmapRealization *)HeapAlloc(WPF::g_processHeap, 0, 0x188uLL);
  v6 = v5;
  if ( v5 )
  {
    CBitmapRealization::CBitmapRealization(
      v5,
      (const struct CSM_BUFFER_ATTRIBUTES *)v9,
      (const struct CSM_REALIZATION_INFO *)v8,
      0LL);
    *(_QWORD *)v6 = &CD2DBitmapCacheSourceRealization::`vftable'{for `CMILCOMBase'};
    *((_QWORD *)v6 + 2) = &CD2DBitmapCacheSourceRealization::`vftable'{for `ID2DBitmapCache'};
    *((_QWORD *)v6 + 3) = &CD2DBitmapCacheSourceRealization::`vftable'{for `IDeviceResourceNotify'};
    *((_QWORD *)v6 + 11) = &CD2DBitmapCacheSourceRealization::`vftable'{for `CDeviceResource'};
    *((_QWORD *)v6 + 18) = &CD2DBitmapCacheSourceRealization::`vftable'{for `IBitmapRealization'};
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    (*(void (__fastcall **)(_QWORD *, struct ID2DBitmapCacheSource *))(*((_QWORD *)v6 + 2) + 24LL))(
      (_QWORD *)v6 + 2,
      a1);
    *a2 = v6;
    (*(void (__fastcall **)(struct CBitmapRealization *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x18u);
  }
  return v4;
}
