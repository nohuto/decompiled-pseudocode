/*
 * XREFs of NtCallEnclave @ 0x140189960
 * Callers:
 *     <none>
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x140181760 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401820A0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140185310 (KiInitiateUserApc.c)
 *     KiUmsExit @ 0x140192A80 (KiUmsExit.c)
 *     KiCopyCounters @ 0x1402085E0 (KiCopyCounters.c)
 *     PsCallEnclave @ 0x14071B2E0 (PsCallEnclave.c)
 */

NTSTATUS __cdecl NtCallEnclave(PENCLAVE_ROUTINE Routine, PVOID Reserved, ULONG Flags, PVOID *RoutineParamReturn)
{
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD *v9; // rcx
  unsigned __int8 BpbUserSpecCtrl; // al
  NTSTATUS result; // eax
  char v14; // [rsp+20h] [rbp-8h]

  *(_DWORD *)(v4 - 72) = 0;
  *(_DWORD *)(v4 - 64) = 0;
  *(_DWORD *)(v4 - 56) = 0;
  *(_DWORD *)(v4 - 48) = 0;
  *(_DWORD *)(v4 - 40) = 0;
  *(_DWORD *)(v4 - 32) = 0;
  *(_OWORD *)(v4 - 16) = 0LL;
  *(_OWORD *)v4 = 0LL;
  *(_OWORD *)(v4 + 16) = 0LL;
  *(_OWORD *)(v4 + 32) = 0LL;
  *(_OWORD *)(v4 + 48) = 0LL;
  *(_OWORD *)(v4 + 64) = 0LL;
  *(_QWORD *)(v4 - 80) = PsCallEnclave(Routine, Reserved, Flags, RoutineParamReturn);
  _disable();
  if ( (*(_BYTE *)(v4 + 240) & 1) != 0 )
  {
    if ( KeGetCurrentThread()->ApcState.UserApcPending )
    {
      __writecr8(1uLL);
      _enable();
      KiInitiateUserApc();
      _disable();
      __writecr8(0LL);
    }
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->Header.LockNV & 0x8000000) != 0 )
      KiRestoreSetContextState((__int64)CurrentThread, v5, v6, v7, v14);
    v9 = KeGetCurrentThread();
    if ( (v9->Header.LockNV & 0x40010000) != 0 )
    {
      if ( (v9->Header.Size & 1) != 0 )
      {
        KiCopyCounters();
        v9 = KeGetCurrentThread();
      }
      if ( (v9->Header.Reserved1 & 0x40) != 0 )
      {
        LOBYTE(v9) = 1;
        KiUmsExit(v9);
      }
    }
    _mm_setcsr(*(_DWORD *)(v4 - 84));
    if ( *(_WORD *)(v4 + 128) )
      KiRestoreDebugRegisterState();
    BpbUserSpecCtrl = KeGetPcr()->Prcb.BpbUserSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbUserSpecCtrl )
    {
      __writegsbyte(0x27Au, BpbUserSpecCtrl);
      __writemsr(0x48u, BpbUserSpecCtrl);
    }
    if ( _bittestandreset16(MK_FP(__GS__, 632LL), 2u) )
      __writemsr(0x49u, 1uLL);
    __asm
    {
      swapgs
      iretq
    }
  }
  _mm_setcsr(*(_DWORD *)(v4 - 84));
  __asm { iretq }
  return result;
}
