/*
 * XREFs of ??0CBaseInput@@IEAA@K@Z @ 0x1C012184C
 * Callers:
 *     ??0CHidInput@@IEAA@XZ @ 0x1C0126C08 (--0CHidInput@@IEAA@XZ.c)
 *     CKeyboardSensor_CreateInstance @ 0x1C012B060 (CKeyboardSensor_CreateInstance.c)
 *     CMouseSensor_CreateInstance @ 0x1C0131B00 (CMouseSensor_CreateInstance.c)
 * Callees:
 *     ??0CRIMBase@@IEAA@K@Z @ 0x1C01218A4 (--0CRIMBase@@IEAA@K@Z.c)
 */

CBaseInput *__fastcall CBaseInput::CBaseInput(CBaseInput *this, unsigned int a2)
{
  CBaseInput *result; // rax

  CRIMBase::CRIMBase(this, a2);
  *(_QWORD *)this = &CBaseInput::`vftable';
  *((_QWORD *)this + 130) = 0LL;
  *((_QWORD *)this + 131) = 0LL;
  *((_QWORD *)this + 135) = 0LL;
  result = this;
  *((_QWORD *)this + 133) = 0LL;
  *((_QWORD *)this + 134) = 0LL;
  *((_QWORD *)this + 132) = 0LL;
  return result;
}
