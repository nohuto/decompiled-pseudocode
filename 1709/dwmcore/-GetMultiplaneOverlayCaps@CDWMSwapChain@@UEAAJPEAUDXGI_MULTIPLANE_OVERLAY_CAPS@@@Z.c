/*
 * XREFs of ?GetMultiplaneOverlayCaps@CDWMSwapChain@@UEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x18002E550
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z @ 0x1800BE440 (--$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::GetMultiplaneOverlayCaps(
        CDWMSwapChain *this,
        struct DXGI_MULTIPLANE_OVERLAY_CAPS *a2)
{
  int v4; // edi
  unsigned int v6; // eax
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+30h] [rbp-B8h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 52) + 168LL))(*((_QWORD *)this + 52));
  if ( v4 == -2147024809 )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -2147024809;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x3FFu);
    *((_BYTE *)this + 585) = 0;
  }
  else
  {
    if ( *((_DWORD *)this + 141) != *(_DWORD *)a2 )
    {
      SAFE_DELETE_ARRAY<enum D2D1_POLYGON_EDGE_FLAG>((char *)this + 568);
      v6 = *(_DWORD *)a2;
      *((_DWORD *)this + 140) = *(_DWORD *)a2;
      if ( v6 > *((_DWORD *)this + 141) )
        *((_DWORD *)this + 141) = v6;
    }
    if ( (*((_DWORD *)a2 + 3) & 0x40000) != 0 )
      *((_BYTE *)this + 585) = 1;
  }
  return (unsigned int)v4;
}
