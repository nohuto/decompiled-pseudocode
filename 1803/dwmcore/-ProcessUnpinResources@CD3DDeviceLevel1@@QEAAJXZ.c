/*
 * XREFs of ?ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ @ 0x1800D7E4C
 * Callers:
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_N@Z @ 0x180046970 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_N@Z.c)
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x1800D7F68 (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::ProcessUnpinResources(CD3DDeviceLevel1 *this)
{
  __int64 v1; // rbx
  unsigned int v2; // esi
  _QWORD *v5; // r14
  int v6; // eax
  __int64 v7; // r15

  v1 = *((unsigned int *)this + 254);
  v2 = 0;
  if ( (_DWORD)v1 )
  {
    v5 = (_QWORD *)((char *)this + 992);
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 76) + 32LL))(
           *((_QWORD *)this + 76),
           *((_QWORD *)this + 124),
           (unsigned int)v1);
    v2 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x1019u);
    v7 = 0LL;
    do
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + *v5) + 16LL))(*(_QWORD *)(v7 + *v5));
      v7 += 8LL;
      --v1;
    }
    while ( v1 );
    *((_DWORD *)this + 254) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 992, 8u);
  }
  return CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)this, v2, 0);
}
