/*
 * XREFs of MiExceptionForMappedVa @ 0x14020CBC0
 * Callers:
 *     MiWaitForInPageComplete @ 0x140097510 (MiWaitForInPageComplete.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiLockWorkingSetShared @ 0x1400A7E80 (MiLockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 */

unsigned __int64 __fastcall MiExceptionForMappedVa(unsigned __int64 a1)
{
  unsigned int v1; // edi
  _QWORD *v3; // r14
  _KPROCESS *Process; // rbp
  char *i; // rsi
  unsigned __int8 v6; // al
  _QWORD *v7; // rbx
  unsigned __int8 v8; // r15
  unsigned __int64 v9; // rdx
  LONG *v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdi
  LONG *SharedVm; // rax

  v1 = 0;
  v3 = &unk_14036C0F8;
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
    if ( v3 != (_QWORD *)&unk_14036C0F8 )
      break;
    v11 = Process[1].ActiveProcessors.Bitmap[2];
    if ( !v11 || Process == PsInitialSystemProcess )
      break;
    v3 = (_QWORD *)(v11 + 2944);
  }
  return v1;
}
