/*
 * XREFs of ?CheckMultiplaneOverlaySupport@CDWMSwapChain@@UEAAJIPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@PEA_N1@Z @ 0x18019D0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18008F260 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::CheckMultiplaneOverlaySupport(
        CDWMSwapChain *this,
        __int64 a2,
        struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *a3,
        bool *a4,
        bool *a5)
{
  __int64 v5; // rcx
  int v7; // edi
  int v8; // eax
  bool v9; // al
  bool v10; // zf
  unsigned int v12; // [rsp+30h] [rbp-91h] BYREF
  int v13; // [rsp+34h] [rbp-8Dh] BYREF
  int v14; // [rsp+38h] [rbp-89h] BYREF
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+40h] [rbp-81h] BYREF

  v5 = *((_QWORD *)this + 38);
  v12 = 0;
  v7 = 0;
  v13 = 0;
  v14 = 0;
  if ( !v5 )
    goto LABEL_8;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *, int *, int *))(*(_QWORD *)v5 + 176LL))(
         v5,
         a2,
         a3,
         &v13,
         &v14);
  v12 = v8;
  v7 = v8;
  if ( v8 == -2005270527 || v8 == -2147024809 )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = v7;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  if ( v7 >= 0 )
  {
    v9 = 1;
    if ( v13 )
    {
LABEL_9:
      v10 = v14 == 0;
      *a4 = v9;
      *a5 = !v10;
      goto LABEL_10;
    }
LABEL_8:
    v9 = 0;
    goto LABEL_9;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x50Fu);
LABEL_10:
  TranslateDXGIorD3DErrorInContext(v7, 0, &v12);
  return v12;
}
