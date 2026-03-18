/*
 * XREFs of ??0QpcTimeConverter@@QEAA@XZ @ 0x1800B3D24
 * Callers:
 *     ??0CManipulationManager@@AEAA@PEAVCComposition@@@Z @ 0x18004E854 (--0CManipulationManager@@AEAA@PEAVCComposition@@@Z.c)
 *     ??0CInteractionContextWrapper@@QEAA@XZ @ 0x1800B3C00 (--0CInteractionContextWrapper@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

QpcTimeConverter *__fastcall QpcTimeConverter::QpcTimeConverter(QpcTimeConverter *this)
{
  BOOL v2; // eax
  unsigned __int64 v3; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  *((_QWORD *)this + 1) = 1000000LL;
  v2 = QueryPerformanceFrequency(&Frequency);
  v3 = Frequency.QuadPart & -(__int64)v2;
  *(_QWORD *)this = v3;
  if ( v3 > 0x10C6F7A0B5EDLL )
  {
    do
    {
      if ( *((_QWORD *)this + 1) < 0xAuLL )
        break;
      v5 = *(_QWORD *)this / 0xAuLL;
      v6 = *((_QWORD *)this + 1) / 0xAuLL;
      *(_QWORD *)this = v5;
      *((_QWORD *)this + 1) = v6;
    }
    while ( v5 > 0x10C6F7A0B5EDLL );
  }
  return this;
}
