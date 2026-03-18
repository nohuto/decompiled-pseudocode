/*
 * XREFs of ??1CD2DResource@@MEAA@XZ @ 0x18004654C
 * Callers:
 *     ??1CD2DBitmap@@MEAA@XZ @ 0x18004C490 (--1CD2DBitmap@@MEAA@XZ.c)
 *     ??1CD2DCommandList@@MEAA@XZ @ 0x1800B597C (--1CD2DCommandList@@MEAA@XZ.c)
 *     ??1CD2DPrimitiveProperties@@MEAA@XZ @ 0x1800C07E0 (--1CD2DPrimitiveProperties@@MEAA@XZ.c)
 *     ??1CD2DInk@@MEAA@XZ @ 0x1801B3CA0 (--1CD2DInk@@MEAA@XZ.c)
 *     ??_GCD2DGenericInk@@UEAAPEAXI@Z @ 0x1801B3E30 (--_GCD2DGenericInk@@UEAAPEAXI@Z.c)
 *     ??1CD2DEffect@@MEAA@XZ @ 0x1801B40DC (--1CD2DEffect@@MEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CD2DResource::~CD2DResource(CD2DResource *this)
{
  __int64 v2; // rcx
  CD2DResource **v3; // rdx
  CD2DResource **v4; // r8

  if ( *((_BYTE *)this + 32) )
  {
    v2 = *((_QWORD *)this + 3);
    v3 = (CD2DResource **)*((_QWORD *)this + 5);
    if ( v3[1] != (CD2DResource *)((char *)this + 40)
      || (v4 = (CD2DResource **)*((_QWORD *)this + 6), *v4 != (CD2DResource *)((char *)this + 40)) )
    {
      __fastfail(3u);
    }
    *v4 = (CD2DResource *)v3;
    v3[1] = (CD2DResource *)v4;
    *((_BYTE *)this + 32) = 0;
    if ( *((_BYTE *)this + 33) )
      --*(_DWORD *)(v2 + 16);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 56);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
