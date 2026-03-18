/*
 * XREFs of ?CreatePrimitiveProperties@CD2DContext@@MEAAJPEAPEAVCD2DPrimitiveProperties@@@Z @ 0x18000FDB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z @ 0x18004BDD4 (--0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x1800CE0F0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::CreatePrimitiveProperties(CD2DContext *this, struct CD2DPrimitiveProperties **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdi
  struct CD2DResourceManager *v7; // rsi
  CD2DResource *v8; // rax
  CD2DResource *v9; // rbx
  void *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 23) + 40LL))(*((_QWORD *)this + 23), &v12);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xA03u);
  }
  else
  {
    v6 = v12;
    v7 = (struct CD2DResourceManager *)*((_QWORD *)this + 18);
    v8 = (CD2DResource *)WPF::ProcessHeapImpl::AllocClear(0x70uLL);
    v9 = v8;
    if ( !v8 )
    {
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
      __debugbreak();
    }
    CD2DResource::CD2DResource(v8, v7, 0);
    *((_QWORD *)v9 + 13) = v6;
    *((_QWORD *)v9 + 2) = &CSecondaryD2DBitmap::`vftable'{for `IDeviceResource'};
    *(_QWORD *)v9 = &CD2DEffect::`vftable'{for `CMILCOMBase'};
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    *a2 = v9;
    (*(void (__fastcall **)(CD2DResource *))(*(_QWORD *)v9 + 8LL))(v9);
    v5 = 0;
  }
  ReleaseInterface<IBitmapLock>(&v12);
  return v5;
}
