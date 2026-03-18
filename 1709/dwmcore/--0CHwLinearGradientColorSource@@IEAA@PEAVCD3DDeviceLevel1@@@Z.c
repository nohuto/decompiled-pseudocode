/*
 * XREFs of ??0CHwLinearGradientColorSource@@IEAA@PEAVCD3DDeviceLevel1@@@Z @ 0x1801BC628
 * Callers:
 *     ?Create@CHwLinearGradientColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1801BC758 (-Create@CHwLinearGradientColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 */

CHwLinearGradientColorSource *__fastcall CHwLinearGradientColorSource::CHwLinearGradientColorSource(
        CHwLinearGradientColorSource *this,
        struct CD3DDeviceLevel1 *a2)
{
  CHwLinearGradientColorSource *result; // rax

  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 24) = 1;
  *((_DWORD *)this + 25) = 1;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CHwLinearGradientColorSource::`vftable';
  *((_QWORD *)this + 15) = 1LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  memset_0((char *)this + 176, 0, 0x2CuLL);
  *((_DWORD *)this + 75) = 0;
  *((_DWORD *)this + 28) = -1;
  *((_DWORD *)this + 29) = -1;
  result = this;
  *((_QWORD *)this + 28) = 0LL;
  *((_BYTE *)this + 232) = 1;
  return result;
}
