/*
 * XREFs of ??0AudioEffectsWatcher@@QEAA@XZ @ 0x18000C344
 * Callers:
 *     ?GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z @ 0x180009EF4 (-GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z.c)
 * Callees:
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180033188 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=1
AudioEffectsWatcher *__fastcall AudioEffectsWatcher::AudioEffectsWatcher(AudioEffectsWatcher *this)
{
  *(_QWORD *)this = &AudioEffectsWatcher::`vftable';
  *(GUID *)((char *)this + 8) = GUID_00000000_0000_0000_0000_000000000000;
  *((_QWORD *)this + 3) = 0LL;
  *(GUID *)((char *)this + 40) = GUID_00000000_0000_0000_0000_000000000000;
  *((_QWORD *)this + 7) = 0LL;
  *((_BYTE *)this + 64) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_BYTE *)this + 88) = 0;
  `eh vector constructor iterator'(
    (char *)this + 104,
    0x20uLL,
    3uLL,
    (void (*)(void *))ApoData::ApoData,
    (void (*)(void *))ApoData::~ApoData);
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_DWORD *)this + 56) = 0;
  CoCreateGuid((GUID *)((char *)this + 8));
  *(_OWORD *)((char *)this + 104) = xmmword_18014ADD0;
  *(_OWORD *)((char *)this + 120) = xmmword_18014ADE0;
  *(_OWORD *)((char *)this + 136) = xmmword_18014ADF0;
  *(_OWORD *)((char *)this + 152) = xmmword_18014AE00;
  *(_OWORD *)((char *)this + 168) = xmmword_18014AE10;
  *(_OWORD *)((char *)this + 184) = xmmword_18014AE20;
  return this;
}
