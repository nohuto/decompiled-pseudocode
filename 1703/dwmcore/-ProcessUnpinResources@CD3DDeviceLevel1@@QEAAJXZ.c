/*
 * XREFs of ?ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ @ 0x1800777C4
 * Callers:
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x180042C90 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x180078EA0 (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::ProcessUnpinResources(CD3DDeviceLevel1 *this)
{
  __int64 v1; // rbx
  unsigned int v2; // esi
  _QWORD *v5; // r14
  int v6; // eax
  __int64 v7; // r15

  v1 = *((unsigned int *)this + 274);
  v2 = 0;
  if ( (_DWORD)v1 )
  {
    v5 = (_QWORD *)((char *)this + 1072);
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 75) + 56LL))(
           *((_QWORD *)this + 75),
           *((_QWORD *)this + 134),
           (unsigned int)v1);
    v2 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xF20u);
    v7 = 0LL;
    do
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + *v5) + 16LL))(*(_QWORD *)(v7 + *v5));
      v7 += 8LL;
      --v1;
    }
    while ( v1 );
    *((_DWORD *)this + 274) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 1072, 8u);
  }
  return CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext(this, v2, 0LL);
}
