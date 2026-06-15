/*
 * XREFs of ??$?0$$V@?$_Ref_count_obj@VCPowerReference@@@std@@QEAA@XZ @ 0x18002A62C
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x18002CBE0 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     memset @ 0x180033A5A (memset.c)
 */

__int64 __fastcall std::_Ref_count_obj<CPowerReference>::_Ref_count_obj<CPowerReference>(__int64 a1)
{
  _QWORD *v1; // rbx

  v1 = (_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<CPowerReference>::`vftable';
  if ( a1 != -16 )
  {
    memset((void *)(a1 + 16), 0, 0x40uLL);
    *v1 = 0LL;
    v1[1] = 0LL;
    v1[2] = 0LL;
    v1[3] = 0LL;
    v1[4] = 0LL;
    v1[5] = 0LL;
    v1[6] = 0LL;
    v1[7] = 0LL;
  }
  return a1;
}
