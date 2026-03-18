/*
 * XREFs of ?PreUninitialize@CKeyboardSensor@@EEAAXXZ @ 0x1C000A760
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBaseProcessor@@QEAA@XZ @ 0x1C0008658 (--1CBaseProcessor@@QEAA@XZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

void __fastcall CKeyboardSensor::PreUninitialize(CKeyboardSensor *this, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  CBaseProcessor *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8

  v3 = (_QWORD *)*((_QWORD *)this + 120);
  if ( v3 )
  {
    v5 = (CBaseProcessor *)*((_QWORD *)this + 120);
    *v3 = &CBaseProcessor::`vftable';
    CBaseProcessor::~CBaseProcessor(v5, a2, a3);
    Win32FreePool(v3, v6, v7);
  }
  *((_QWORD *)this + 120) = 0LL;
}
