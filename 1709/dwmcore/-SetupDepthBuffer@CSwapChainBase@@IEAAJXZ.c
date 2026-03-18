/*
 * XREFs of ?SetupDepthBuffer@CSwapChainBase@@IEAAJXZ @ 0x1801B31CC
 * Callers:
 *     ?SetHardwareProtection@CDWMSwapChain@@UEAAJ_N@Z @ 0x1801B0910 (-SetHardwareProtection@CDWMSwapChain@@UEAAJ_N@Z.c)
 *     ?Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z @ 0x1801B2AB0 (-Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18001D1C0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSwapChainBase::SetupDepthBuffer(CSwapChainBase *this)
{
  int v1; // eax
  __int64 v3; // rdi
  __int64 v4; // rbx
  unsigned __int8 v5; // al
  signed int v6; // eax
  int v7; // ebx
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  v1 = *((_DWORD *)this + 30);
  v15 = 0LL;
  v3 = *((unsigned int *)this + 100);
  LODWORD(v14) = v1;
  HIDWORD(v14) = *((_DWORD *)this + 31);
  v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 80LL);
  v5 = (*(__int64 (__fastcall **)(CSwapChainBase *))(*(_QWORD *)this + 224LL))(this);
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64 *))(**(_QWORD **)(v4 + 168) + 56LL))(
         *(_QWORD *)(v4 + 168),
         v14,
         v5,
         &v15);
  LODWORD(v14) = v6;
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18021C088, 9u, v6, 0x171u);
  TranslateDXGIorD3DErrorInContext(v7, 0, &v14);
  if ( (int)v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0x71u);
  }
  else if ( (_DWORD)v3 )
  {
    v8 = 0LL;
    v9 = v3;
    do
    {
      v10 = v15;
      v11 = *(_QWORD *)(v8 + *((_QWORD *)this + 47));
      v12 = *(_QWORD *)(v11 + 224);
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      *(_QWORD *)(v11 + 224) = v10;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v8 += 8LL;
      --v9;
    }
    while ( v9 );
  }
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return (unsigned int)v14;
}
