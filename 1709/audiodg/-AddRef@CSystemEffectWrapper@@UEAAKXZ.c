/*
 * XREFs of ?AddRef@CSystemEffectWrapper@@UEAAKXZ @ 0x1400141B0
 * Callers:
 *     ?AddRef@CSystemEffectWrapper@@W7EAAKXZ @ 0x14001F2D0 (-AddRef@CSystemEffectWrapper@@W7EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WBA@EAAKXZ @ 0x14001F2E0 (-AddRef@CSystemEffectWrapper@@WBA@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WBI@EAAKXZ @ 0x14001F2F0 (-AddRef@CSystemEffectWrapper@@WBI@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WCA@EAAKXZ @ 0x14001F300 (-AddRef@CSystemEffectWrapper@@WCA@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WCI@EAAKXZ @ 0x14001F310 (-AddRef@CSystemEffectWrapper@@WCI@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WDA@EAAKXZ @ 0x14001F320 (-AddRef@CSystemEffectWrapper@@WDA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemEffectWrapper::AddRef(CSystemEffectWrapper *this)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx
  __int64 (__fastcall *v4)(CSystemEffectWrapper *); // rax

  v2 = *((_QWORD *)this + 13);
  if ( v2 )
  {
    v4 = *(__int64 (__fastcall **)(CSystemEffectWrapper *))(*(_QWORD *)v2 + 8LL);
  }
  else
  {
    v3 = (volatile signed __int32 *)((char *)this - 8);
    v4 = *(__int64 (__fastcall **)(CSystemEffectWrapper *))(*((_QWORD *)this - 1) + 8LL);
    if ( v4 == CSystemEffectWrapper::NDAddRef )
      return (unsigned int)_InterlockedIncrement(v3 + 16);
  }
  return ((__int64 (*)(void))v4)();
}
