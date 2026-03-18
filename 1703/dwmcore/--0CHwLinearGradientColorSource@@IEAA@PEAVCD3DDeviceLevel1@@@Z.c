/*
 * XREFs of ??0CHwLinearGradientColorSource@@IEAA@PEAVCD3DDeviceLevel1@@@Z @ 0x1801A2D58
 * Callers:
 *     ?Create@CHwLinearGradientColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1801A2E74 (-Create@CHwLinearGradientColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

CHwLinearGradientColorSource *__fastcall CHwLinearGradientColorSource::CHwLinearGradientColorSource(
        CHwLinearGradientColorSource *this,
        struct CD3DDeviceLevel1 *a2)
{
  CHwLinearGradientColorSource *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CHwLinearGradientColorSource::`vftable';
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 24) = 1;
  *((_DWORD *)this + 25) = 1;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 14) = 1LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 0;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  memset_0((char *)this + 168, 0, 0x2CuLL);
  *((_DWORD *)this + 73) = 0;
  *((_DWORD *)this + 26) = -1;
  *((_DWORD *)this + 27) = -1;
  result = this;
  *((_QWORD *)this + 27) = 0LL;
  *((_BYTE *)this + 224) = 1;
  return result;
}
