/*
 * XREFs of ??_GCPerStreamVolumeAudioStream@@EEAAPEAXI@Z @ 0x180044194
 * Callers:
 *     ??_ECPerStreamVolumeAudioStream@@GBI@EAAPEAXI@Z @ 0x180065A20 (--_ECPerStreamVolumeAudioStream@@GBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CAudioStream@@MEAA@XZ @ 0x180044320 (--1CAudioStream@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CPerStreamVolumeAudioStream *__fastcall CPerStreamVolumeAudioStream::`scalar deleting destructor'(
        CPerStreamVolumeAudioStream *this,
        char a2)
{
  void *v4; // rdi
  HANDLE ProcessHeap; // rax

  *(_QWORD *)this = &CPerStreamVolumeAudioStream::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 1) = &CAudioStream::`vftable'{for `IAudioStreamInfo'};
  *((_QWORD *)this + 2) = &CPerStreamVolumeAudioStream::`vftable'{for `IAudioStreamPolicyVolumeClient'};
  *((_QWORD *)this + 3) = &CPerStreamVolumeAudioStream::`vftable'{for `CUnknown'};
  v4 = (void *)*((_QWORD *)this + 81);
  if ( v4 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v4);
  }
  CAudioStream::~CAudioStream(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2A0);
  return this;
}
