/*
 * XREFs of ?Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z @ 0x1802135FC
 * Callers:
 *     ?CreateSectionBitmap@CGdiSpriteBitmap@@IEAAJPEAXII@Z @ 0x180094624 (-CreateSectionBitmap@CGdiSpriteBitmap@@IEAAJPEAXII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorKeyBitmapRealization::Create(
        struct IBitmapRealization *a1,
        const struct CColorKey *a2,
        struct IBitmapRealization **a3)
{
  char *v6; // rax
  __int64 v7; // rbx
  struct IBitmapRealization *v8; // rsi
  char *v9; // rcx
  char *v10; // rax
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // ebx
  const void *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  v17 = 0LL;
  *a3 = 0LL;
  v6 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0xA0uLL);
  v7 = (__int64)v6;
  if ( !v6 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  *((_DWORD *)v6 + 2) = 0;
  v8 = (struct IBitmapRealization *)(v6 + 144);
  *((_QWORD *)v6 + 4) = 0LL;
  v9 = v6;
  *((_QWORD *)v6 + 5) = 0LL;
  *((_QWORD *)v6 + 6) = 0LL;
  *((_QWORD *)v6 + 7) = 0LL;
  *((_QWORD *)v6 + 8) = 0LL;
  *((_QWORD *)v6 + 9) = 0LL;
  *((_DWORD *)v6 + 20) = 0;
  v10 = v6 + 128;
  *(_QWORD *)(v7 + 96) = v10;
  *(_QWORD *)(v7 + 104) = v10;
  *(_DWORD *)(v7 + 112) = 2;
  *(_QWORD *)(v7 + 116) = 2LL;
  *(_QWORD *)v7 = &CColorKeyBitmapRealization::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(v7 + 16) = &CD2DBitmapCacheSourceRealization::`vftable'{for `ID2DBitmapCache'};
  *(_QWORD *)(v7 + 24) = &CColorKeyBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(v7 + 88) = &CColorKeyBitmapRealization::`vftable'{for `CDeviceResource'};
  *(_QWORD *)(v7 + 144) = &CColorKeyBitmapRealization::`vftable'{for `IBitmapRealization'};
  *(_QWORD *)(v7 + 152) = 0LL;
  v11 = *(_QWORD *)v7;
  v16 = v7;
  (*(void (__fastcall **)(char *))(v11 + 8))(v9);
  v12 = (*(__int64 (__fastcall **)(__int64, struct IBitmapRealization *, const struct CColorKey *))(*(_QWORD *)v7 + 40LL))(
          v7,
          a1,
          a2);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x20u);
  }
  else
  {
    v16 = 0LL;
    *a3 = v8;
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v16);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v17);
  return v13;
}
