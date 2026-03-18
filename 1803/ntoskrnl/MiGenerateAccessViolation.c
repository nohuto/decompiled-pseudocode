/*
 * XREFs of MiGenerateAccessViolation @ 0x140261A7C
 * Callers:
 *     MiSystemFault @ 0x140022C40 (MiSystemFault.c)
 *     MiRaisedIrqlFault @ 0x1400B5050 (MiRaisedIrqlFault.c)
 * Callees:
 *     MiDeterminePoolType @ 0x14000A140 (MiDeterminePoolType.c)
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

__int64 __fastcall MiGenerateAccessViolation(__int64 *a1)
{
  unsigned __int64 v1; // rbp
  _QWORD **v3; // rsi
  KIRQL v4; // r14
  unsigned int v5; // edi
  _QWORD *v6; // rbx
  _KPROCESS *Process; // rsi

  v1 = *a1;
  if ( (unsigned int)MiDeterminePoolType(*a1) == 32 )
    return 0LL;
  v3 = (_QWORD **)&unk_1403CB1E0;
  v4 = ExAcquireSpinLockShared(&dword_1403CB1D8);
  v5 = 0;
  while ( 1 )
  {
    v6 = *v3;
    while ( v6 )
    {
      if ( v1 > v6[4] )
      {
        v6 = (_QWORD *)v6[1];
      }
      else
      {
        if ( v1 >= v6[3] )
          goto LABEL_15;
        v6 = (_QWORD *)*v6;
      }
    }
    if ( v3 != (_QWORD **)&unk_1403CB1E0 )
      break;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) == 0 )
      break;
    v3 = (_QWORD **)(Process[1].ActiveProcessors.Bitmap[2] + 8264);
  }
LABEL_15:
  ExReleaseSpinLockSharedFromDpcLevel(&dword_1403CB1D8);
  __writecr8(v4);
  LOBYTE(v5) = v6 != 0LL;
  return v5;
}
