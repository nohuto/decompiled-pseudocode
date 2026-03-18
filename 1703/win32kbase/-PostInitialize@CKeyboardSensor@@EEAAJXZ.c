/*
 * XREFs of ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C006E660
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     ??0CBaseProcessor@@QEAA@XZ @ 0x1C006F49C (--0CBaseProcessor@@QEAA@XZ.c)
 */

__int64 __fastcall CKeyboardSensor::PostInitialize(CKeyboardSensor *this)
{
  CBaseProcessor *v2; // rax
  CBaseProcessor *v3; // rbx

  *((_QWORD *)this + 80) = 0LL;
  v2 = (CBaseProcessor *)Win32AllocPool(40LL, 0x70724D50u);
  v3 = v2;
  if ( v2 )
  {
    CBaseProcessor::CBaseProcessor(v2);
    *(_QWORD *)v3 = &CBaseProcessor::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  if ( v3 )
    *((_QWORD *)this + 80) = v3;
  return v3 == 0LL ? 0xC0000017 : 0;
}
