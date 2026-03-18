/*
 * XREFs of ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C006F9C0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     ??0CMouseProcessor@@IEAA@XZ @ 0x1C0047534 (--0CMouseProcessor@@IEAA@XZ.c)
 */

__int64 __fastcall CMouseSensor::PostInitialize(CMouseSensor *this)
{
  CMouseProcessor *v2; // rax

  *((_QWORD *)this + 80) = 0LL;
  v2 = (CMouseProcessor *)Win32AllocPool(2872LL, 0x70724D50u);
  if ( v2 )
    v2 = CMouseProcessor::CMouseProcessor(v2);
  if ( v2 )
    *((_QWORD *)this + 80) = v2;
  return v2 == 0LL ? 0xC0000017 : 0;
}
