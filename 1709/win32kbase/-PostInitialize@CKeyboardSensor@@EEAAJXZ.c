/*
 * XREFs of ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C000A7B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CBaseProcessor@@QEAA@XZ @ 0x1C00085F4 (--0CBaseProcessor@@QEAA@XZ.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 */

__int64 __fastcall CKeyboardSensor::PostInitialize(CKeyboardSensor *this)
{
  CBaseProcessor *v2; // rax
  CBaseProcessor *v3; // rbx

  *((_QWORD *)this + 120) = 0LL;
  v2 = (CBaseProcessor *)Win32AllocPool(40LL, 1886539088LL);
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
    *((_QWORD *)this + 120) = v3;
  return v3 == 0LL ? 0xC0000017 : 0;
}
