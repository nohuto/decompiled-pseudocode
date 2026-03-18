/*
 * XREFs of ?SendReportToE3Worker@CEnergyReporter@@AEAAXXZ @ 0x1800B7408
 * Callers:
 *     ?SendReportToE3Worker@CEnergyReporter@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800B7400 (-SendReportToE3Worker@CEnergyReporter@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CEnergyReporter::SendReportToE3Worker(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  __int64 Ptr_low; // rcx
  __int64 v4; // rbx

  v1 = this + 7;
  AcquireSRWLockExclusive(this + 7);
  LODWORD(v1[1].Ptr) = GetCurrentThreadId();
  BYTE1(this[10].Ptr) = 1;
  LODWORD(v1[1].Ptr) = 0;
  ReleaseSRWLockExclusive(v1);
  Ptr_low = LODWORD(this[14].Ptr);
  if ( (unsigned int)Ptr_low > 0xFFFF )
    Ptr_low = 0xFFFFLL;
  v4 = ((Ptr_low << 16) ^ 2) & 0xFFFF0000LL ^ 2;
  if ( LODWORD(this[14].Ptr) > 0xFFFF
    && (unsigned int)dword_18026DCFC < MEMORY[0x7FFE037C]
    && !(unsigned __int8)EtwCheckCoverage(&off_18026DCF0) )
  {
    NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessAffinityMask|0x40, &off_18026DCF0, 0x18u);
  }
  SetCITInfo(v4, this[11].Ptr);
  AcquireSRWLockExclusive(v1);
  LODWORD(v1[1].Ptr) = GetCurrentThreadId();
  LOWORD(this[10].Ptr) = 0;
  LODWORD(this[14].Ptr) = 0;
  LODWORD(v1[1].Ptr) = 0;
  ReleaseSRWLockExclusive(v1);
}
