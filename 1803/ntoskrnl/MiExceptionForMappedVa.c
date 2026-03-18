/*
 * XREFs of MiExceptionForMappedVa @ 0x140251EB4
 * Callers:
 *     MiWaitForInPageComplete @ 0x1400583A0 (MiWaitForInPageComplete.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiGetSessionVm @ 0x14007FBD8 (MiGetSessionVm.c)
 */

unsigned __int64 __fastcall MiExceptionForMappedVa(unsigned __int64 a1)
{
  unsigned int v1; // edi
  _QWORD *v3; // rbp
  _KPROCESS *Process; // r14
  __int64 i; // rax
  __int64 v6; // rsi
  unsigned __int8 v7; // al
  _QWORD *v8; // rbx
  __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdi

  v1 = 0;
  v3 = &unk_1403CB5C0;
  Process = KeGetCurrentThread()->ApcState.Process;
  for ( i = (__int64)MiGetAnyMultiplexedVm(1); ; i = MiGetSessionVm() )
  {
    v6 = i;
    v7 = MiLockWorkingSetShared(i);
    v8 = (_QWORD *)v3[2];
    LOBYTE(v9) = v7;
    while ( v8 )
    {
      v10 = v8[10] & 0xFFFFFFFFFFFFF000uLL;
      if ( a1 >= v10 + v8[4] )
      {
        v8 = (_QWORD *)v8[1];
      }
      else
      {
        if ( a1 >= v10 )
        {
          v12 = v8[6];
          MiUnlockWorkingSetShared(v6, v7, v9);
          return (v12 >> 1) & 1;
        }
        v8 = (_QWORD *)*v8;
      }
    }
    MiUnlockWorkingSetShared(v6, v7, v9);
    if ( v3 != (_QWORD *)&unk_1403CB5C0 )
      break;
    v11 = Process[1].ActiveProcessors.Bitmap[2];
    if ( !v11 || (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
      break;
    v3 = (_QWORD *)(v11 + 2944);
  }
  return v1;
}
