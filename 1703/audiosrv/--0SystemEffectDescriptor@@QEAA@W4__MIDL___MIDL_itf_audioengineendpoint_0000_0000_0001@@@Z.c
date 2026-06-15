/*
 * XREFs of ??0SystemEffectDescriptor@@QEAA@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004411C
 * Callers:
 *     ??0CEndpointCharacteristics@@QEAA@XZ @ 0x180041C3C (--0CEndpointCharacteristics@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

SystemEffectDescriptor *__fastcall SystemEffectDescriptor::SystemEffectDescriptor(
        SystemEffectDescriptor *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = a2;
  *((_BYTE *)this + 52) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 56), 0, 0);
  return this;
}
