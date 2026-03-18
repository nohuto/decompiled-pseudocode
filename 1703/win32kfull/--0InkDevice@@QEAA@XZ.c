/*
 * XREFs of ??0InkDevice@@QEAA@XZ @ 0x1C021CF54
 * Callers:
 *     ?OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0217C64 (-OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 */

InkDevice *__fastcall InkDevice::InkDevice(InkDevice *this)
{
  signed __int32 v2; // eax
  InkDevice *result; // rax

  *(_QWORD *)this = &Rim::RimBackedDeviceBase::`vftable';
  v2 = _InterlockedIncrement(&dword_1C033890C);
  if ( !v2 )
    v2 = _InterlockedIncrement(&dword_1C033890C);
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 2) = v2;
  *((_BYTE *)this + 12) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 4) = &InkFeedbackProviderBase::`vftable';
  *((_QWORD *)this + 10) = "InkDevice";
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 8) = (char *)this + 56;
  *((_QWORD *)this + 7) = (char *)this + 56;
  *(_QWORD *)this = &InkDevice::`vftable'{for `Rim::RimBackedDeviceBase'};
  *((_QWORD *)this + 4) = &InkDevice::`vftable'{for `InkFeedbackProviderBase'};
  memset((char *)this + 104, 0, 0x2CuLL);
  *((_DWORD *)this + 37) = 0;
  result = this;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  return result;
}
