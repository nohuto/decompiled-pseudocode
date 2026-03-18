/*
 * XREFs of ?PopulateEffectTable@CD2DContext@@AEAAJXZ @ 0x180096D74
 * Callers:
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x1800968C8 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z @ 0x180021460 (--$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseEffectTable@CD2DContext@@AEAAXXZ @ 0x1800D82DC (-ReleaseEffectTable@CD2DContext@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::PopulateEffectTable(CD2DContext *this)
{
  int v1; // ebx
  _BYTE *v2; // rsi
  __int64 *v3; // r14
  __int64 v4; // rdi
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  v2 = &unk_1802D5334;
  v9 = 0LL;
  v3 = (__int64 *)((char *)this + 192);
  v4 = 0LL;
  while ( !*v2 )
  {
LABEL_3:
    v4 = (unsigned int)(v4 + 1);
    ++v3;
    v2 += 24;
    if ( (unsigned int)v4 >= 8 )
      goto LABEL_4;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64 *))(**((_QWORD **)this + 22) + 504LL))(
         *((_QWORD *)this + 22),
         (char *)&xmmword_1802D5324 + 24 * v4,
         &v9);
  v1 = v7;
  if ( v7 >= 0 )
  {
    v8 = v9;
    v9 = 0LL;
    *v3 = v8;
    goto LABEL_3;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x8DCu);
LABEL_4:
  if ( v1 < 0 )
    CD2DContext::ReleaseEffectTable(this);
  ReleaseInterface<IRenderTargetBitmap>(&v9);
  return (unsigned int)v1;
}
