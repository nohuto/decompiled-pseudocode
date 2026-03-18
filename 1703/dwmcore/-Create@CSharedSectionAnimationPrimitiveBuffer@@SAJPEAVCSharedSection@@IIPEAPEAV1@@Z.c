/*
 * XREFs of ?Create@CSharedSectionAnimationPrimitiveBuffer@@SAJPEAVCSharedSection@@IIPEAPEAV1@@Z @ 0x1800BB950
 * Callers:
 *     ?ProcessSetPrimitives@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETPRIMITIVES@@@Z @ 0x1800BD568 (-ProcessSetPrimitives@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETPRIMITIVES@@@.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSharedSectionAnimationPrimitiveBuffer::Create(
        struct CSharedSection *this,
        int a2,
        int a3,
        struct CSharedSectionAnimationPrimitiveBuffer **a4)
{
  unsigned int v5; // edi
  _DWORD *v9; // rax
  _DWORD *v10; // rbx
  void (__fastcall **v11)(_DWORD *); // rcx

  v5 = 0;
  v9 = operator new(0x20uLL);
  v10 = v9;
  if ( v9 )
  {
    *(_QWORD *)v9 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v9 = &CSharedSectionAnimationPrimitiveBuffer::`vftable';
    v9[2] = 0;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    *((_QWORD *)v10 + 2) = this;
    if ( this )
      CBitmapOfDeviceBitmaps::AddRef(this);
    v11 = *(void (__fastcall ***)(_DWORD *))v10;
    v10[6] = a2;
    v10[7] = a3;
    (*v11)(v10);
    *a4 = (struct CSharedSectionAnimationPrimitiveBuffer *)v10;
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xDu);
  }
  return v5;
}
