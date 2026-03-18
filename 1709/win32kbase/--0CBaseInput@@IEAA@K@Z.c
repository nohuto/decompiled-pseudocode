/*
 * XREFs of ??0CBaseInput@@IEAA@K@Z @ 0x1C001A794
 * Callers:
 *     CMouseSensor_CreateInstance @ 0x1C00064A0 (CMouseSensor_CreateInstance.c)
 *     CKeyboardSensor_CreateInstance @ 0x1C00071B0 (CKeyboardSensor_CreateInstance.c)
 *     ??0CHidInput@@IEAA@XZ @ 0x1C0019714 (--0CHidInput@@IEAA@XZ.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C001B178 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

CBaseInput *__fastcall CBaseInput::CBaseInput(CBaseInput *this, int a2)
{
  *((_QWORD *)this + 1) = -1LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 34) = a2;
  *(_QWORD *)this = &CRIMBase::`vftable';
  `vector constructor iterator'(
    (char *)this + 144,
    0x40uLL,
    0xCuLL,
    (void *(*)(void *))CRIMBase::SensorDispatcherObject::SensorDispatcherObject);
  *((_QWORD *)this + 114) = 0LL;
  *((_QWORD *)this + 115) = 0LL;
  *(_QWORD *)this = &CBaseInput::`vftable';
  *((_QWORD *)this + 119) = 0LL;
  *((_QWORD *)this + 117) = 0LL;
  *((_QWORD *)this + 118) = 0LL;
  *((_QWORD *)this + 116) = 0LL;
  return this;
}
