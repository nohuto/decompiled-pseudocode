/*
 * XREFs of ?Create@CColorKeyBitmap@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV1@@Z @ 0x180216BE4
 * Callers:
 *     ?Initialize@CColorKeyBitmapRealization@@MEAAJPEAVIBitmapRealization@@AEBVCColorKey@@@Z @ 0x180213900 (-Initialize@CColorKeyBitmapRealization@@MEAAJPEAVIBitmapRealization@@AEBVCColorKey@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??0CColorKeyBitmap@@IEAA@PEAVIBitmapRealization@@AEBVCColorKey@@@Z @ 0x180216950 (--0CColorKeyBitmap@@IEAA@PEAVIBitmapRealization@@AEBVCColorKey@@@Z.c)
 */

__int64 __fastcall CColorKeyBitmap::Create(
        int (__fastcall ***a1)(struct IBitmapRealization *, GUID *, __int64 *),
        const struct CColorKey *a2,
        struct CColorKeyBitmap **a3)
{
  int (__fastcall **v3)(struct IBitmapRealization *, GUID *, __int64 *); // rax
  unsigned int v6; // ebx
  CColorKeyBitmap *v8; // rax
  CColorKeyBitmap *v9; // rax
  struct CColorKeyBitmap *v10; // rdi
  const void *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  v3 = *a1;
  v6 = 0;
  v13 = 0LL;
  if ( (*v3)((struct IBitmapRealization *)a1, &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3, &v13) < 0 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x1Fu);
LABEL_8:
    v10 = 0LL;
    goto LABEL_9;
  }
  v8 = (CColorKeyBitmap *)HeapAlloc(WPF::g_processHeap, 0, 0x48uLL);
  if ( !v8 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v9 = CColorKeyBitmap::CColorKeyBitmap(v8, (struct IBitmapRealization *)a1, a2);
  v10 = v9;
  if ( !v9 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x24u);
    goto LABEL_8;
  }
  (*(void (__fastcall **)(CColorKeyBitmap *))(*(_QWORD *)v9 + 8LL))(v9);
LABEL_9:
  v14 = 0LL;
  *a3 = v10;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v14);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v13);
  return v6;
}
