/*
 * XREFs of ?CheckMultiplaneOverlaySupport@CDWMSwapChain@@UEAAJIPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@PEA_N1@Z @ 0x1801AFE10
 * Callers:
 *     <none>
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18001D1C0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::CheckMultiplaneOverlaySupport(
        CDWMSwapChain *this,
        __int64 a2,
        struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *a3,
        bool *a4,
        bool *a5)
{
  __int64 v5; // rcx
  int v7; // eax
  int v8; // ebx
  bool v9; // zf
  int v11; // [rsp+30h] [rbp-91h] BYREF
  int v12; // [rsp+34h] [rbp-8Dh] BYREF
  unsigned int v13; // [rsp+38h] [rbp-89h] BYREF
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+40h] [rbp-81h] BYREF

  v5 = *((_QWORD *)this + 52);
  v11 = 0;
  v12 = 0;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *, int *, int *))(*(_QWORD *)v5 + 176LL))(
         v5,
         a2,
         a3,
         &v11,
         &v12);
  v13 = v7;
  v8 = v7;
  if ( v7 == -2005270527 || v7 == -2147024809 )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = v8;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x443u);
  }
  else
  {
    v9 = v12 == 0;
    *a4 = v11 != 0;
    *a5 = !v9;
  }
  TranslateDXGIorD3DErrorInContext(v8, 0, &v13);
  return v13;
}
