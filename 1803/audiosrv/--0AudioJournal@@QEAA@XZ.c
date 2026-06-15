/*
 * XREFs of ??0AudioJournal@@QEAA@XZ @ 0x18002A6CC
 * Callers:
 *     _dynamic_initializer_for__g_AudioJournal__ @ 0x180001210 (_dynamic_initializer_for__g_AudioJournal__.c)
 * Callees:
 *     ?Initialize@AudioJournal@@AEAAXXZ @ 0x18002A4E8 (-Initialize@AudioJournal@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
AudioJournal *__fastcall AudioJournal::AudioJournal(AudioJournal *this)
{
  AudioJournal *v1; // rcx

  InitializeCriticalSectionEx(&stru_18018A398, 0, 0);
  qword_18018A3C0 = 0LL;
  byte_18018A410 = 0;
  _Mtx_init_in_situ((_Mtx_t)&unk_18018A418, 2);
  dword_18018A3C8 = 3;
  xmmword_18018A3D0 = 0LL;
  xmmword_18018A3E0 = 0LL;
  xmmword_18018A3F0 = 0LL;
  dword_18018A400 = 0;
  dword_18018A404 = 1;
  dword_18018A408 = 72;
  qword_18018A468 = 0LL;
  AudioJournal::Initialize(v1);
  return (AudioJournal *)&g_AudioJournal;
}
