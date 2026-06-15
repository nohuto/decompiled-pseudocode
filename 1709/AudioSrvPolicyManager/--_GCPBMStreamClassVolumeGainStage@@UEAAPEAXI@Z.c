/*
 * XREFs of ??_GCPBMStreamClassVolumeGainStage@@UEAAPEAXI@Z @ 0x180024A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CPBMStreamClassVolumeGainStage *__fastcall CPBMStreamClassVolumeGainStage::`scalar deleting destructor'(
        CPBMStreamClassVolumeGainStage *this,
        char a2)
{
  HANDLE ProcessHeap; // rax

  *(_QWORD *)this = &CRefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this);
  }
  return this;
}
