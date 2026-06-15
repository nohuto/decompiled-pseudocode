/*
 * XREFs of ?NDAddRef@CSystemEffectWrapper@@UEAAKXZ @ 0x14001B9B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemEffectWrapper::NDAddRef(CSystemEffectWrapper *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 16);
}
