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

void __fastcall NtCallEnclave()
{
  __int64 v0; // rbp
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD *v5; // rcx
  unsigned __int8 BpbUserSpecCtrl; // al
  char v9; // [rsp+20h] [rbp-8h]

  *(_DWORD *)(v0 - 72) = 0;
  *(_DWORD *)(v0 - 64) = 0;
  *(_DWORD *)(v0 - 56) = 0;
  *(_DWORD *)(v0 - 48) = 0;
  *(_DWORD *)(v0 - 40) = 0;
  *(_DWORD *)(v0 - 32) = 0;
  *(_OWORD *)(v0 - 16) = 0LL;
  *(_OWORD *)v0 = 0LL;
  *(_OWORD *)(v0 + 16) = 0LL;
  *(_OWORD *)(v0 + 32) = 0LL;
  *(_OWORD *)(v0 + 48) = 0LL;
  *(_OWORD *)(v0 + 64) = 0LL;
  *(_QWORD *)(v0 - 80) = PsCallEnclave();
  _disable();
  if ( (*(_BYTE *)(v0 + 240) & 1) != 0 )
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
      KiRestoreSetContextState((__int64)CurrentThread, v1, v2, v3, v9);
    v5 = KeGetCurrentThread();
    if ( (v5->Header.LockNV & 0x40010000) != 0 )
    {
      if ( (v5->Header.Size & 1) != 0 )
      {
        KiCopyCounters();
        v5 = KeGetCurrentThread();
      }
      if ( (v5->Header.Reserved1 & 0x40) != 0 )
      {
        LOBYTE(v5) = 1;
        KiUmsExit(v5);
      }
    }
    _mm_setcsr(*(_DWORD *)(v0 - 84));
    if ( *(_WORD *)(v0 + 128) )
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
  _mm_setcsr(*(_DWORD *)(v0 - 84));
  __asm { iretq }
}
