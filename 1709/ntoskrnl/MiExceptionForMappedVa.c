/*
 * XREFs of MiExceptionForMappedVa @ 0x140213B6C
 * Callers:
 *     MiWaitForInPageComplete @ 0x14002D860 (MiWaitForInPageComplete.c)
 * Callees:
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLockWorkingSetShared @ 0x1400A63A0 (MiLockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 */

unsigned __int64 __fastcall MiExceptionForMappedVa(unsigned __int64 a1)
{
  unsigned int v1; // edi
  _QWORD *v3; // r14
  _KPROCESS *Process; // rbp
  char *i; // rsi
  KIRQL v6; // al
  _QWORD *v7; // rbx
  KIRQL v8; // r15
  unsigned __int64 v9; // rdx
  LONG *v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  LONG *SharedVm; // rax

  v1 = 0;
  v3 = &unk_140388438;
  Process = KeGetCurrentThread()->ApcState.Process;
  for ( i = MiGetAnyMultiplexedVm(1);
        ;
        i = (char *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008) )
  {
    v6 = MiLockWorkingSetShared((__int64)i);
    v7 = (_QWORD *)v3[2];
    v8 = v6;
    while ( v7 )
    {
      v9 = v7[10] & 0xFFFFFFFFFFFFF000uLL;
      if ( a1 >= v9 + v7[4] )
      {
        v7 = (_QWORD *)v7[1];
      }
      else
      {
        if ( a1 >= v9 )
        {
          v12 = v7[6];
          SharedVm = MiGetSharedVm((__int64)i);
          ExReleaseSpinLockSharedFromDpcLevel(SharedVm);
          __writecr8(v8);
          return (v12 >> 1) & 1;
        }
        v7 = (_QWORD *)*v7;
      }
    }
    v10 = MiGetSharedVm((__int64)i);
    ExReleaseSpinLockSharedFromDpcLevel(v10);
    __writecr8(v8);
    if ( v3 != (_QWORD *)&unk_140388438 )
      break;
    v11 = Process[1].ActiveProcessors.Bitmap[2];
    if ( !v11 || (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
      break;
    v3 = (_QWORD *)(v11 + 2944);
  }
  return v1;
}
