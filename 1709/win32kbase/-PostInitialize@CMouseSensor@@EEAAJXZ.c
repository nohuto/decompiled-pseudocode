/*
 * XREFs of ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C0012D70
 * Callers:
 *     <none>
 * Callees:
 *     ??0CMouseProcessor@@IEAA@XZ @ 0x1C001645C (--0CMouseProcessor@@IEAA@XZ.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 */

__int64 __fastcall CMouseSensor::PostInitialize(CMouseSensor *this)
{
  CMouseProcessor *v2; // rax

  *((_QWORD *)this + 120) = 0LL;
  v2 = (CMouseProcessor *)Win32AllocPool(3048LL, 1886539088LL);
  if ( v2 )
    v2 = CMouseProcessor::CMouseProcessor(v2);
  if ( v2 )
    *((_QWORD *)this + 120) = v2;
  return v2 == 0LL ? 0xC0000017 : 0;
}
