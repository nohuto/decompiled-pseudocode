/*
 * XREFs of ?SetHardwareProtection@CHwFullScreenRenderTarget@@UEAAJ_N@Z @ 0x1801F2360
 * Callers:
 *     ?SetHardwareProtection@CHwFullScreenRenderTarget@@WNI@EAAJ_N@Z @ 0x1800DE430 (-SetHardwareProtection@CHwFullScreenRenderTarget@@WNI@EAAJ_N@Z.c)
 *     ?SetHardwareProtection@CHDRConversionRenderTarget@@UEAAJ_N@Z @ 0x1801F3D10 (-SetHardwareProtection@CHDRConversionRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??1CComputeScribbleRenderer@@QEAA@XZ @ 0x1802189AC (--1CComputeScribbleRenderer@@QEAA@XZ.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::SetHardwareProtection(CHwFullScreenRenderTarget *this, char a2)
{
  __int64 v4; // rdx
  CComputeScribbleRenderer *v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx

  if ( (*(unsigned __int8 (__fastcall **)(CHwFullScreenRenderTarget *))(*(_QWORD *)this + 32LL))(this) )
  {
    if ( a2 )
    {
      v5 = (CComputeScribbleRenderer *)*((_QWORD *)this + 71);
      *((_QWORD *)this + 71) = 0LL;
      if ( v5 )
      {
        CComputeScribbleRenderer::~CComputeScribbleRenderer(v5);
        operator delete(v5);
      }
    }
    LOBYTE(v4) = a2;
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 31) + 232LL))(*((_QWORD *)this + 31), v4);
    v7 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x32Bu);
  }
  else
  {
    return (unsigned int)-2003292404;
  }
  return v7;
}
