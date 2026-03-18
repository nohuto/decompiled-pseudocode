/*
 * XREFs of ?PreUninitialize@CKeyboardSensor@@EEAAXXZ @ 0x1C006E610
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ??1CBaseProcessor@@QEAA@XZ @ 0x1C006F500 (--1CBaseProcessor@@QEAA@XZ.c)
 */

void __fastcall CKeyboardSensor::PreUninitialize(CKeyboardSensor *this)
{
  _QWORD *v1; // rbx
  CBaseProcessor *v3; // rcx

  v1 = (_QWORD *)*((_QWORD *)this + 80);
  if ( v1 )
  {
    v3 = (CBaseProcessor *)*((_QWORD *)this + 80);
    *v1 = &CBaseProcessor::`vftable';
    CBaseProcessor::~CBaseProcessor(v3);
    Win32FreePool((__int64)v1);
  }
  *((_QWORD *)this + 80) = 0LL;
}
