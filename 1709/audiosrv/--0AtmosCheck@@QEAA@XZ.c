/*
 * XREFs of ??0AtmosCheck@@QEAA@XZ @ 0x1800E238C
 * Callers:
 *     ??$Make@VAtmosCheck@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAtmosCheck@@@12@XZ @ 0x1800CDC8C (--$Make@VAtmosCheck@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VAtmosCheck@@@12@XZ.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x1800E20C0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 */

AtmosCheck *__fastcall AtmosCheck::AtmosCheck(AtmosCheck *this)
{
  AtmosCheck *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>((__int64)this);
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &AtmosCheck::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 32), 0, 0);
  *((_WORD *)this + 36) = 0;
  *((_DWORD *)this + 19) = -2147023728;
  *((_DWORD *)this + 20) = -2147023728;
  *((_DWORD *)this + 21) = -2147023728;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 31) = 0;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  result = this;
  *((_DWORD *)this + 32) = 15;
  *(_OWORD *)((char *)this + 104) = 0uLL;
  return result;
}
