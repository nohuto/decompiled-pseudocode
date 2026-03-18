/*
 * XREFs of ExpRaiseHardError @ 0x1407C5BB8
 * Callers:
 *     ExRaiseHardError @ 0x1407C5960 (ExRaiseHardError.c)
 *     NtRaiseHardError @ 0x1407C5F34 (NtRaiseHardError.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x14006E2C0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400A5690 (PsGetCurrentServerSiloGlobals.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExpSystemErrorHandler @ 0x1401B44B0 (ExpSystemErrorHandler.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     PsCaptureExceptionPort @ 0x1404B9494 (PsCaptureExceptionPort.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     LpcRequestWaitReplyPortEx @ 0x1405609C0 (LpcRequestWaitReplyPortEx.c)
 */

__int64 __fastcall ExpRaiseHardError(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        const void *a4,
        __int64 a5,
        int a6,
        unsigned int *a7)
{
  _KPROCESS **CurrentServerSiloGlobals; // r13
  KPROCESSOR_MODE PreviousMode; // di
  unsigned int v11; // ebx
  char v13; // dl
  _KPROCESS *Process; // r10
  int v15; // r11d
  _KPROCESS *v16; // rdi
  char v17; // si
  _BYTE *v18; // rcx
  int v19; // eax
  int v20; // r14d
  unsigned int v23; // [rsp+BCh] [rbp-2BCh]
  char v24[616]; // [rsp+C8h] [rbp-2B0h] BYREF

  CurrentServerSiloGlobals = (_KPROCESS **)PsGetCurrentServerSiloGlobals();
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = 0;
  *a7 = 0;
  if ( a2 > 0x4D )
    return 3221225485LL;
  v13 = 0;
  if ( a6 == 6 )
  {
    if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
      return 3221225569LL;
    if ( !PsIsCurrentThreadInServerSilo() )
      ExReadyForErrors = 0;
    *((_DWORD *)CurrentServerSiloGlobals + 224) = 2;
    v13 = 1;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v15 = *(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x10;
  if ( !v15 && (a1 & 0xC0000000) == 0xC0000000 && (!*((_DWORD *)CurrentServerSiloGlobals + 224) || v13) )
  {
    ExpSystemErrorHandler(a1, a2, a3, a5, PreviousMode != 0);
    return 0LL;
  }
  if ( Process == CurrentServerSiloGlobals[110] )
  {
    if ( (a1 & 0xC0000000) == 0xC0000000 )
      ExpSystemErrorHandler(a1, a2, a3, a5, PreviousMode != 0);
LABEL_18:
    *a7 = 0;
    return 0LL;
  }
  v16 = 0LL;
  v17 = 0;
  if ( !v15 && ((Process[1].ThreadSeed[2] & 1) != 0 || (a1 & 0x10000000) != 0) )
  {
    v16 = (_KPROCESS *)PsCaptureExceptionPort((__int64)Process);
    if ( v16 )
      v17 = 1;
    else
      v16 = CurrentServerSiloGlobals[111];
  }
  if ( v16 )
  {
    v18 = (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeGetCurrentThread()->ApcStateIndex == 1
        ? 0LL
        : KeGetCurrentThread()->Teb;
    if ( v18 )
    {
      v19 = 0;
      if ( (v18[5808] & 0x10) != 0 )
        v19 = -1073741823;
      if ( v19 < 0 )
      {
        if ( v17 == 1 )
          ObfDereferenceObject(v16);
        v16 = 0LL;
      }
    }
  }
  if ( !v16 )
    goto LABEL_18;
  if ( a4 )
    memmove(v24, a4, 8LL * a2);
  v20 = LpcRequestWaitReplyPortEx((int)v16);
  if ( v17 == 1 )
    ObfDereferenceObject(v16);
  if ( v20 >= 0 )
  {
    if ( v23 <= 0xA )
      v11 = v23;
    *a7 = v11;
  }
  return (unsigned int)v20;
}
