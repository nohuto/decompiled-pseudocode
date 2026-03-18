/*
 * XREFs of ??1CD2DResource@@MEAA@XZ @ 0x18004BD5C
 * Callers:
 *     ??1CD2DInk@@MEAA@XZ @ 0x180001630 (--1CD2DInk@@MEAA@XZ.c)
 *     ??1CD2DEffect@@MEAA@XZ @ 0x180001F80 (--1CD2DEffect@@MEAA@XZ.c)
 *     ??1CD2DBitmap@@MEAA@XZ @ 0x18007AB48 (--1CD2DBitmap@@MEAA@XZ.c)
 *     ??1CD2DCommandList@@MEAA@XZ @ 0x1800AF8EC (--1CD2DCommandList@@MEAA@XZ.c)
 *     ??_ECD2DResource@@MEAAPEAXI@Z @ 0x180199960 (--_ECD2DResource@@MEAAPEAXI@Z.c)
 *     ??1CD2DPencil@@MEAA@XZ @ 0x18019E868 (--1CD2DPencil@@MEAA@XZ.c)
 *     ??_GCD2DGenericInk@@UEAAPEAXI@Z @ 0x18019E9B0 (--_GCD2DGenericInk@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CD2DResource::~CD2DResource(CD2DResource *this)
{
  __int64 v2; // rax
  _QWORD *v3; // rcx
  __int64 v4; // r8
  _QWORD *v5; // rdx

  *(_QWORD *)this = &CD2DResource::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CSecondaryD2DBitmap::`vftable'{for `IDeviceResource'};
  if ( *((_BYTE *)this + 32) )
  {
    v2 = *((_QWORD *)this + 3);
    v3 = (_QWORD *)((char *)this + 40);
    v4 = *v3;
    v5 = (_QWORD *)v3[1];
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (_QWORD *)*v5 != v3 )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    *((_BYTE *)this + 32) = 0;
    if ( *((_BYTE *)this + 33) )
      --*(_DWORD *)(v2 + 16);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 56);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
