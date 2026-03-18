/*
 * XREFs of ?PreUninitialize@CKeyboardSensor@@EEAAXXZ @ 0x1C012AF70
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ??1CBaseProcessor@@QEAA@XZ @ 0x1C0132780 (--1CBaseProcessor@@QEAA@XZ.c)
 */

void __fastcall CKeyboardSensor::PreUninitialize(CKeyboardSensor *this)
{
  _QWORD *v1; // rbx
  CBaseProcessor *v3; // rcx

  v1 = (_QWORD *)*((_QWORD *)this + 136);
  if ( v1 )
  {
    v3 = (CBaseProcessor *)*((_QWORD *)this + 136);
    *v1 = &CKeyboardProcessor::`vftable';
    CBaseProcessor::~CBaseProcessor(v3);
    Win32FreePool((__int64)v1);
  }
  *((_QWORD *)this + 136) = 0LL;
}
