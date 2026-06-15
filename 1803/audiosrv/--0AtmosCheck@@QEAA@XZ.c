/*
 * XREFs of ??0AtmosCheck@@QEAA@XZ @ 0x18004F324
 * Callers:
 *     ??$Make@VAtmosCheck@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAtmosCheck@@@12@XZ @ 0x18004F168 (--$Make@VAtmosCheck@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VAtmosCheck@@@12@XZ.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x18004F888 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 */

AtmosCheck *__fastcall AtmosCheck::AtmosCheck(AtmosCheck *this)
{
  AtmosCheck *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>();
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &AtmosCheck::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 32), 0, 0);
  *((_WORD *)this + 36) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_BYTE *)this + 74) = 1;
  *((_DWORD *)this + 24) = -2147023728;
  *((_DWORD *)this + 25) = -2147023728;
  *((_DWORD *)this + 26) = -2147023728;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 37) = 0;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  result = this;
  *((_DWORD *)this + 38) = 16;
  *((_OWORD *)this + 8) = 0uLL;
  return result;
}
