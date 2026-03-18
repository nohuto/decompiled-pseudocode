/*
 * XREFs of ?PartitionUpdateCursorMouseMove@CChannel@@UEAAJXZ @ 0x18000E570
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18000F1E8 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CChannel::PartitionUpdateCursorMouseMove(CChannel *this)
{
  CChannel *v1; // rbx
  int v3; // [rsp+30h] [rbp+8h] BYREF
  char *v4; // [rsp+38h] [rbp+10h] BYREF

  v1 = this;
  v4 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v3 = 265;
  LODWORD(v1) = CChannel::SendCommand(v1, &v3, 4u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v4);
  return (unsigned int)v1;
}
