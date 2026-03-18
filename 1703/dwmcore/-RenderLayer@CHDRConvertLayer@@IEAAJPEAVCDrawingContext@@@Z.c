/*
 * XREFs of ?RenderLayer@CHDRConvertLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180157E20
 * Callers:
 *     ?RestoreState@CHDRConvertLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180157EF0 (-RestoreState@CHDRConvertLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18000F938 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x18012D0E8 (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 */

__int64 __fastcall CHDRConvertLayer::RenderLayer(CHDRConvertLayer *this, struct CDrawingContext *a2)
{
  int v2; // r8d
  int v5; // edx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  _DWORD v10[4]; // [rsp+30h] [rbp-28h] BYREF

  v2 = *((_DWORD *)this + 5);
  v10[0] = *((_DWORD *)this + 4);
  v10[2] = *((_DWORD *)this + 6) + v10[0];
  v5 = *((_DWORD *)this + 7);
  v10[1] = v2;
  v10[3] = v2 + v5;
  v6 = CDrawingContext::FlushD2D(a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x6Eu);
  }
  else
  {
    if ( g_LockAndReadLayer )
      CDrawingContext::ReadTexture(a2);
    v8 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 14) + 488LL))(*((_QWORD *)this + 14), v10);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x79u);
  }
  return v7;
}
