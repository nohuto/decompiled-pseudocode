/*
 * XREFs of ??0CGravityBounceAccelerator@@QEAA@MM@Z @ 0x1801725A4
 * Callers:
 *     ?ProcessSetBounceParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NATURALANIMATION_SETBOUNCEPARAMETERS@@@Z @ 0x180173D30 (-ProcessSetBounceParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NATURALANIMAT.c)
 * Callees:
 *     <none>
 */

CGravityBounceAccelerator *__fastcall CGravityBounceAccelerator::CGravityBounceAccelerator(
        CGravityBounceAccelerator *this,
        float a2,
        float a3)
{
  CGravityBounceAccelerator *result; // rax
  float v4; // xmm1_4
  float v5; // xmm1_4

  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)this = &CGravityBounceAccelerator::`vftable'{for `IAccelerator'};
  *((_QWORD *)this + 1) = &CAttractionAccelerator::`vftable'{for `CMILRefCountBase'};
  result = this;
  *((_DWORD *)this + 6) = 0;
  *((_BYTE *)this + 44) = 0;
  v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a2) & _xmm);
  *((_DWORD *)this + 12) = 0;
  *((float *)this + 7) = v4 / 0.0099999998;
  v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a3) & _xmm);
  *((float *)this + 8) = v5;
  *((float *)this + 9) = (float)((float)(v5 * -6.0) - 6.0) / 0.0099999998;
  return result;
}
