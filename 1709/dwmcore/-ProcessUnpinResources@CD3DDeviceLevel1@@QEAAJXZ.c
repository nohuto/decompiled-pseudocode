/*
 * XREFs of ?ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ @ 0x1800202C4
 * Callers:
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x18002174C (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z @ 0x18002BF40 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
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
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 76) + 56LL))(
           *((_QWORD *)this + 76),
           *((_QWORD *)this + 124),
           (unsigned int)v1);
    v2 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xF81u);
    v7 = 0LL;
    do
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + *v5) + 16LL))(*(_QWORD *)(v7 + *v5));
      v7 += 8LL;
      --v1;
    }
    while ( v1 );
    *((_DWORD *)this + 254) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 992, 8LL);
  }
  return CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext(this, v2, 0LL);
}
