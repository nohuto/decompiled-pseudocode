/*
 * XREFs of ??1CPerStreamVolumeAudioStream@@EEAA@XZ @ 0x18002D804
 * Callers:
 *     ??_GCPerStreamVolumeAudioStream@@EEAAPEAXI@Z @ 0x18002D920 (--_GCPerStreamVolumeAudioStream@@EEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPerStreamVolumeAudioStream::~CPerStreamVolumeAudioStream(CPerStreamVolumeAudioStream *this)
{
  void *v2; // rdi
  HANDLE ProcessHeap; // rax

  *(_QWORD *)this = &CPerStreamVolumeAudioStream::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 1) = &CAudioStream::`vftable'{for `IAudioStreamInfo'};
  *((_QWORD *)this + 2) = &CPerStreamVolumeAudioStream::`vftable'{for `CUnknown'};
  v2 = (void *)*((_QWORD *)this + 69);
  if ( v2 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v2);
  }
  CAudioStream::~CAudioStream(this);
}
