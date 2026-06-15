/*
 * XREFs of ??$make_shared@VCPowerReference@@$$V@std@@YA?AV?$shared_ptr@VCPowerReference@@@0@XZ @ 0x180028430
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x180026C54 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     memset @ 0x180049B8A (memset.c)
 */

_QWORD *__fastcall std::make_shared<CPowerReference,>(_QWORD *a1)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  _QWORD *v5; // rdi

  ProcessHeap = GetProcessHeap();
  v3 = HeapAlloc(ProcessHeap, 0, 0x30uLL);
  v4 = v3;
  if ( v3 )
  {
    v5 = v3 + 2;
    *((_DWORD *)v3 + 2) = 1;
    *((_DWORD *)v3 + 3) = 1;
    *v3 = &std::_Ref_count_obj<CPowerReference>::`vftable';
    if ( v3 != (_QWORD *)-16LL )
    {
      memset(v3 + 2, 0, 0x20uLL);
      *v5 = 0LL;
      v4[3] = 0LL;
      v4[4] = 0LL;
      v4[5] = 0LL;
    }
  }
  else
  {
    v4 = 0LL;
  }
  a1[1] = v4;
  *a1 = v4 + 2;
  return a1;
}
