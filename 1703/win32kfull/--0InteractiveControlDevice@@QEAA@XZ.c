/*
 * XREFs of ??0InteractiveControlDevice@@QEAA@XZ @ 0x1C021F248
 * Callers:
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021ADD0 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     <none>
 */

InteractiveControlDevice *__fastcall InteractiveControlDevice::InteractiveControlDevice(InteractiveControlDevice *this)
{
  InteractiveControlDevice *result; // rax
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)((char *)this + 60) = 1LL;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  KeQueryPerformanceCounter(&PerformanceFrequency);
  *((union _LARGE_INTEGER *)this + 32) = PerformanceFrequency;
  *((_QWORD *)this + 42) = -1LL;
  *((_DWORD *)this + 82) = 0;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_DWORD *)this + 96) = 196613;
  *((_QWORD *)this + 3) = (char *)this + 16;
  *((_QWORD *)this + 2) = (char *)this + 16;
  result = this;
  *((_DWORD *)this + 8) = 0;
  return result;
}
