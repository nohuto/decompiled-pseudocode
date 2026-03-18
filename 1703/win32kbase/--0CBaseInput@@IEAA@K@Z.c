/*
 * XREFs of ??0CBaseInput@@IEAA@K@Z @ 0x1C004FDD4
 * Callers:
 *     ??0CHidInput@@IEAA@XZ @ 0x1C004EE9C (--0CHidInput@@IEAA@XZ.c)
 *     CKeyboardSensor_CreateInstance @ 0x1C006DEA0 (CKeyboardSensor_CreateInstance.c)
 *     CMouseSensor_CreateInstance @ 0x1C006F920 (CMouseSensor_CreateInstance.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0053F68 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

CBaseInput *__fastcall CBaseInput::CBaseInput(CBaseInput *this, int a2)
{
  *((_QWORD *)this + 1) = -1LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 36) = a2;
  *(_QWORD *)this = &CRIMBase::`vftable';
  `vector constructor iterator'(
    (char *)this + 152,
    0x28uLL,
    0xBuLL,
    (void *(*)(void *))CRIMBase::SensorDispatcherObject::SensorDispatcherObject);
  *((_QWORD *)this + 74) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *(_QWORD *)this = &CBaseInput::`vftable';
  *((_QWORD *)this + 79) = 0LL;
  *((_QWORD *)this + 77) = 0LL;
  *((_QWORD *)this + 78) = 0LL;
  *((_QWORD *)this + 76) = 0LL;
  return this;
}
